#include <Windows.h>
#include <cstdio>
#include <cstring>
#include "ppc/xenos_cp.h"
static unsigned char* guest;
static unsigned value(unsigned a) { return __builtin_bswap32(*(unsigned*)(guest+a)); }
void BurnoutReportPpcState() { std::printf("[TEST] writeback_at_stop=%u\n",value(0x2000)); }
static void put(unsigned a,unsigned v) { *(unsigned*)(guest+a)=__builtin_bswap32(v); }
int main(int argc,char**) {
 guest=(unsigned char*)VirtualAlloc(nullptr,0x4000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
 if(!guest) return 10;
 XenosInitialize(guest,0x1000,1); // four dwords
 XenosWriteback(0x2000,0);
 for(unsigned i=0;i<4;++i) put(0x1000+4*i,0x80000000);
 XenosSubmit(guest,3);
 if(value(0x2000)!=3) return 11;
 XenosSubmit(guest,1); // wraps through last and first dword
 if(value(0x2000)!=1) return 12;
 if(argc>1) {
  put(0x1004,0xC0007F00);put(0x1008,0);
  XenosSubmit(guest,3); // unknown packet must stop, writeback must remain 1
  return 13;
 }
 std::puts("[TEST PASS] ring wrap and big-endian RPTR writeback");
 VirtualFree(guest,0,MEM_RELEASE);
}

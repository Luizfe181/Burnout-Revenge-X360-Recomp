#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_822A3DF8"))) PPC_WEAK_FUNC(sub_822A3DF8);
__attribute__((alias("__imp__sub_822A3E34"))) PPC_WEAK_FUNC(sub_822A3E34);
__attribute__((alias("__imp__sub_822A3E6C"))) PPC_WEAK_FUNC(sub_822A3E6C);
__attribute__((alias("__imp__sub_822A3E90"))) PPC_WEAK_FUNC(sub_822A3E90);
__attribute__((alias("__imp__sub_822A3EC8"))) PPC_WEAK_FUNC(sub_822A3EC8);
__attribute__((alias("__imp__sub_822A3F04"))) PPC_WEAK_FUNC(sub_822A3F04);
__attribute__((alias("__imp__sub_822A3F3C"))) PPC_WEAK_FUNC(sub_822A3F3C);
__attribute__((alias("__imp__sub_822A3F60"))) PPC_WEAK_FUNC(sub_822A3F60);
__attribute__((alias("__imp__sub_822A3F98"))) PPC_WEAK_FUNC(sub_822A3F98);
__attribute__((alias("__imp__sub_822A3FD4"))) PPC_WEAK_FUNC(sub_822A3FD4);
__attribute__((alias("__imp__sub_822A4014"))) PPC_WEAK_FUNC(sub_822A4014);
__attribute__((alias("__imp__sub_822A4054"))) PPC_WEAK_FUNC(sub_822A4054);
__attribute__((alias("__imp__sub_822A4090"))) PPC_WEAK_FUNC(sub_822A4090);
__attribute__((alias("__imp__sub_822A40D8"))) PPC_WEAK_FUNC(sub_822A40D8);
__attribute__((alias("__imp__sub_822A40F0"))) PPC_WEAK_FUNC(sub_822A40F0);
__attribute__((alias("__imp__sub_822A4750"))) PPC_WEAK_FUNC(sub_822A4750);
__attribute__((alias("__imp__sub_822A4FF0"))) PPC_WEAK_FUNC(sub_822A4FF0);
__attribute__((alias("__imp__sub_822A5150"))) PPC_WEAK_FUNC(sub_822A5150);
__attribute__((alias("__imp__sub_822A56F0"))) PPC_WEAK_FUNC(sub_822A56F0);
__attribute__((alias("__imp__sub_822A6B78"))) PPC_WEAK_FUNC(sub_822A6B78);
__attribute__((alias("__imp__sub_822A8980"))) PPC_WEAK_FUNC(sub_822A8980);
__attribute__((alias("__imp__sub_822A93A0"))) PPC_WEAK_FUNC(sub_822A93A0);
__attribute__((alias("__imp__sub_822A94A0"))) PPC_WEAK_FUNC(sub_822A94A0);
__attribute__((alias("__imp__sub_822A9B68"))) PPC_WEAK_FUNC(sub_822A9B68);
__attribute__((alias("__imp__sub_822AA2E0"))) PPC_WEAK_FUNC(sub_822AA2E0);
__attribute__((alias("__imp__sub_822AA630"))) PPC_WEAK_FUNC(sub_822AA630);
__attribute__((alias("__imp__sub_822AAB20"))) PPC_WEAK_FUNC(sub_822AAB20);
__attribute__((alias("__imp__sub_822AAF00"))) PPC_WEAK_FUNC(sub_822AAF00);
__attribute__((alias("__imp__sub_822ABC18"))) PPC_WEAK_FUNC(sub_822ABC18);
__attribute__((alias("__imp__sub_822ABD30"))) PPC_WEAK_FUNC(sub_822ABD30);
__attribute__((alias("__imp__sub_822ACA88"))) PPC_WEAK_FUNC(sub_822ACA88);
__attribute__((alias("__imp__sub_822ACA98"))) PPC_WEAK_FUNC(sub_822ACA98);
__attribute__((alias("__imp__sub_822ACD18"))) PPC_WEAK_FUNC(sub_822ACD18);
__attribute__((alias("__imp__sub_822ACE48"))) PPC_WEAK_FUNC(sub_822ACE48);
__attribute__((alias("__imp__sub_822ACFF8"))) PPC_WEAK_FUNC(sub_822ACFF8);
__attribute__((alias("__imp__sub_822AD428"))) PPC_WEAK_FUNC(sub_822AD428);
__attribute__((alias("__imp__sub_822AD430"))) PPC_WEAK_FUNC(sub_822AD430);
__attribute__((alias("__imp__sub_822AD590"))) PPC_WEAK_FUNC(sub_822AD590);
__attribute__((alias("__imp__sub_822AD638"))) PPC_WEAK_FUNC(sub_822AD638);
__attribute__((alias("__imp__sub_822AD778"))) PPC_WEAK_FUNC(sub_822AD778);
PPC_FUNC_IMPL(__imp__sub_822A3DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,4095
	ctx.r4.s64 = 268369920;
	// lis r11,-17262
	ctx.r11.s64 = -1131282432;
	// ori r3,r4,40100
	ctx.r3.u64 = ctx.r4.u64 | 40100;
	// ori r10,r11,11425
	ctx.r10.u64 = ctx.r11.u64 | 11425;
	// lis r8,4095
	ctx.r8.s64 = 268369920;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// lis r4,-17262
	ctx.r4.s64 = -1131282432;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r3,r4,11425
	ctx.r3.u64 = ctx.r4.u64 | 11425;
	// ori r7,r8,40100
	ctx.r7.u64 = ctx.r8.u64 | 40100;
	// rldimi r7,r3,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3E34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r9,-23217
	ctx.r9.s64 = -1521549312;
	// lis r3,-23217
	ctx.r3.s64 = -1521549312;
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// ori r10,r11,40100
	ctx.r10.u64 = ctx.r11.u64 | 40100;
	// ori r8,r9,19515
	ctx.r8.u64 = ctx.r9.u64 | 19515;
	// ori r11,r3,19515
	ctx.r11.u64 = ctx.r3.u64 | 19515;
	// ori r4,r7,40100
	ctx.r4.u64 = ctx.r7.u64 | 40100;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3E6C) {
	PPC_FUNC_PROLOGUE();
	// lis r10,24575
	ctx.r10.s64 = 1610547200;
	// lis r8,-18751
	ctx.r8.s64 = -1228865536;
	// lis r4,24575
	ctx.r4.s64 = 1610547200;
	// lis r11,-18751
	ctx.r11.s64 = -1228865536;
	// ori r9,r10,40100
	ctx.r9.u64 = ctx.r10.u64 | 40100;
	// ori r7,r8,60349
	ctx.r7.u64 = ctx.r8.u64 | 60349;
	// ori r3,r4,40100
	ctx.r3.u64 = ctx.r4.u64 | 40100;
	// ori r10,r11,60349
	ctx.r10.u64 = ctx.r11.u64 | 60349;
	// b 0x822a4074
	// ERROR 822A4074
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3E90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,12287
	ctx.r7.s64 = 805240832;
	// lis r3,-22608
	ctx.r3.s64 = -1481637888;
	// lis r10,12287
	ctx.r10.s64 = 805240832;
	// lis r8,-22608
	ctx.r8.s64 = -1481637888;
	// ori r4,r7,40100
	ctx.r4.u64 = ctx.r7.u64 | 40100;
	// ori r11,r3,25084
	ctx.r11.u64 = ctx.r3.u64 | 25084;
	// ori r9,r10,40100
	ctx.r9.u64 = ctx.r10.u64 | 40100;
	// ori r7,r8,25084
	ctx.r7.u64 = ctx.r8.u64 | 25084;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,30719
	ctx.r4.s64 = 2013200384;
	// lis r11,29566
	ctx.r11.s64 = 1937637376;
	// ori r3,r4,40100
	ctx.r3.u64 = ctx.r4.u64 | 40100;
	// ori r10,r11,45729
	ctx.r10.u64 = ctx.r11.u64 | 45729;
	// lis r8,30719
	ctx.r8.s64 = 2013200384;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// lis r4,29566
	ctx.r4.s64 = 1937637376;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r3,r4,45729
	ctx.r3.u64 = ctx.r4.u64 | 45729;
	// ori r7,r8,40100
	ctx.r7.u64 = ctx.r8.u64 | 40100;
	// rldimi r7,r3,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3F04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,28927
	ctx.r11.s64 = 1895759872;
	// lis r9,-16818
	ctx.r9.s64 = -1102184448;
	// lis r3,-16818
	ctx.r3.s64 = -1102184448;
	// lis r7,28927
	ctx.r7.s64 = 1895759872;
	// ori r10,r11,40100
	ctx.r10.u64 = ctx.r11.u64 | 40100;
	// ori r8,r9,16529
	ctx.r8.u64 = ctx.r9.u64 | 16529;
	// ori r11,r3,16529
	ctx.r11.u64 = ctx.r3.u64 | 16529;
	// ori r4,r7,40100
	ctx.r4.u64 = ctx.r7.u64 | 40100;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3F3C) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7263
	ctx.r10.s64 = 475987968;
	// lis r8,-20053
	ctx.r8.s64 = -1314193408;
	// lis r4,7263
	ctx.r4.s64 = 475987968;
	// lis r11,-20053
	ctx.r11.s64 = -1314193408;
	// ori r9,r10,40100
	ctx.r9.u64 = ctx.r10.u64 | 40100;
	// ori r7,r8,49438
	ctx.r7.u64 = ctx.r8.u64 | 49438;
	// ori r3,r4,40100
	ctx.r3.u64 = ctx.r4.u64 | 40100;
	// ori r10,r11,49438
	ctx.r10.u64 = ctx.r11.u64 | 49438;
	// b 0x822a4074
	// ERROR 822A4074
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3F60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,2943
	ctx.r7.s64 = 192872448;
	// lis r3,-29202
	ctx.r3.s64 = -1913782272;
	// lis r10,2943
	ctx.r10.s64 = 192872448;
	// lis r8,-29202
	ctx.r8.s64 = -1913782272;
	// ori r4,r7,40100
	ctx.r4.u64 = ctx.r7.u64 | 40100;
	// ori r11,r3,19047
	ctx.r11.u64 = ctx.r3.u64 | 19047;
	// ori r9,r10,49700
	ctx.r9.u64 = ctx.r10.u64 | 49700;
	// ori r7,r8,19047
	ctx.r7.u64 = ctx.r8.u64 | 19047;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3F98) {
	PPC_FUNC_PROLOGUE();
	// lis r4,2943
	ctx.r4.s64 = 192872448;
	// lis r11,-18771
	ctx.r11.s64 = -1230176256;
	// ori r3,r4,40100
	ctx.r3.u64 = ctx.r4.u64 | 40100;
	// ori r10,r11,6781
	ctx.r10.u64 = ctx.r11.u64 | 6781;
	// lis r8,2943
	ctx.r8.s64 = 192872448;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// lis r4,-18771
	ctx.r4.s64 = -1230176256;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r3,r4,6781
	ctx.r3.u64 = ctx.r4.u64 | 6781;
	// ori r7,r8,40100
	ctx.r7.u64 = ctx.r8.u64 | 40100;
	// rldimi r7,r3,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A3FD4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,27135
	ctx.r11.s64 = 1778319360;
	// lis r9,-20334
	ctx.r9.s64 = -1332609024;
	// ori r10,r11,63936
	ctx.r10.u64 = ctx.r11.u64 | 63936;
	// lis r4,27135
	ctx.r4.s64 = 1778319360;
	// lis r11,-20334
	ctx.r11.s64 = -1332609024;
	// ori r8,r9,10502
	ctx.r8.u64 = ctx.r9.u64 | 10502;
	// ori r3,r4,63936
	ctx.r3.u64 = ctx.r4.u64 | 63936;
	// ori r9,r11,10502
	ctx.r9.u64 = ctx.r11.u64 | 10502;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// stb r3,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r3.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A4014) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-1913
	ctx.r4.s64 = -125370368;
	// lis r11,-27025
	ctx.r11.s64 = -1771110400;
	// ori r3,r4,63936
	ctx.r3.u64 = ctx.r4.u64 | 63936;
	// ori r10,r11,31670
	ctx.r10.u64 = ctx.r11.u64 | 31670;
	// lis r8,-1913
	ctx.r8.s64 = -125370368;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// ori r4,r8,63936
	ctx.r4.u64 = ctx.r8.u64 | 63936;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r3,-27025
	ctx.r3.s64 = -1771110400;
	// ori r11,r3,31670
	ctx.r11.u64 = ctx.r3.u64 | 31670;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// stb r3,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r3.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A4054) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-23736
	ctx.r10.s64 = -1555562496;
	// lis r8,23495
	ctx.r8.s64 = 1539768320;
	// lis r4,-23736
	ctx.r4.s64 = -1555562496;
	// lis r11,23495
	ctx.r11.s64 = 1539768320;
	// ori r9,r10,7332
	ctx.r9.u64 = ctx.r10.u64 | 7332;
	// ori r7,r8,19597
	ctx.r7.u64 = ctx.r8.u64 | 19597;
	// ori r3,r4,7332
	ctx.r3.u64 = ctx.r4.u64 | 7332;
	// ori r10,r11,19597
	ctx.r10.u64 = ctx.r11.u64 | 19597;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A4090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A40B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1232, ctx.r11.u8);
	// stb r11,1233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1233, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A40D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A40F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A4114;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4158
	if (ctx.cr6.eq) goto loc_822A4158;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-15112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A414C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r7.u8);
	// b 0x822a4160
	goto loc_822A4160;
loc_822A4158:
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r6.u8);
loc_822A4160:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A4750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x822A4758;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r31,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r31.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f31,132(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// stb r31,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r31.u8);
	// stb r31,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r31.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// stb r31,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r31.u8);
	// addi r11,r11,13088
	ctx.r11.s64 = ctx.r11.s64 + 13088;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,1256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,5916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5916);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a481c
	if (!ctx.cr6.lt) goto loc_822A481C;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r7.u8);
	// b 0x822a4840
	goto loc_822A4840;
loc_822A481C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-4144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a4838
	if (!ctx.cr6.lt) goto loc_822A4838;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r6.u8);
	// b 0x822a4840
	goto loc_822A4840;
loc_822A4838:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r5.u8);
loc_822A4840:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r24,r11,-1832
	ctx.r24.s64 = ctx.r11.s64 + -1832;
	// lbz r4,-14(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + -14);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822a4ab8
	if (!ctx.cr6.eq) goto loc_822A4AB8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r30,r11,-196
	ctx.r30.s64 = ctx.r11.s64 + -196;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,5900
	ctx.r27.s64 = ctx.r11.s64 + 5900;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r28,r11,-26756
	ctx.r28.s64 = ctx.r11.s64 + -26756;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A489C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r26,r11,5884
	ctx.r26.s64 = ctx.r11.s64 + 5884;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A48D0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r25,r11,5868
	ctx.r25.s64 = ctx.r11.s64 + 5868;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A4904;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r23,r11,5848
	ctx.r23.s64 = ctx.r11.s64 + 5848;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A4938;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r24,-4
	ctx.r4.s64 = ctx.r24.s64 + -4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r22,r11,5828
	ctx.r22.s64 = ctx.r11.s64 + 5828;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A496C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,5812
	ctx.r27.s64 = ctx.r11.s64 + 5812;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A49A0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A49CC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A49F8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A4A24;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A4A50;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r27,r11,5796
	ctx.r27.s64 = ctx.r11.s64 + 5796;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A4A84;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A4AB0;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-14(r24)
	PPC_STORE_U8(ctx.r24.u32 + -14, ctx.r11.u8);
loc_822A4AB8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A4FF0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r3,6508
	ctx.r10.s64 = ctx.r3.s64 + 6508;
loc_822A5000:
	// lwz r11,-188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -188);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a5130
	if (ctx.cr6.eq) goto loc_822A5130;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a5020
	if (!ctx.cr6.eq) goto loc_822A5020;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5020
	if (!ctx.cr6.eq) goto loc_822A5020;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_822A5020:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a510c
	if (ctx.cr6.eq) goto loc_822A510C;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a5040
	if (!ctx.cr6.eq) goto loc_822A5040;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5040
	if (!ctx.cr6.eq) goto loc_822A5040;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_822A5040:
	// lwz r11,188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a5114
	if (ctx.cr6.eq) goto loc_822A5114;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a5060
	if (!ctx.cr6.eq) goto loc_822A5060;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5060
	if (!ctx.cr6.eq) goto loc_822A5060;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
loc_822A5060:
	// lwz r11,376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a511c
	if (ctx.cr6.eq) goto loc_822A511C;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a5080
	if (!ctx.cr6.eq) goto loc_822A5080;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5080
	if (!ctx.cr6.eq) goto loc_822A5080;
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
loc_822A5080:
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a5124
	if (ctx.cr6.eq) goto loc_822A5124;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a50a0
	if (!ctx.cr6.eq) goto loc_822A50A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a50a0
	if (!ctx.cr6.eq) goto loc_822A50A0;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
loc_822A50A0:
	// lwz r11,752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a512c
	if (ctx.cr6.eq) goto loc_822A512C;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a50c0
	if (!ctx.cr6.eq) goto loc_822A50C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a50c0
	if (!ctx.cr6.eq) goto loc_822A50C0;
	// addi r8,r9,5
	ctx.r8.s64 = ctx.r9.s64 + 5;
loc_822A50C0:
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r10,r10,1128
	ctx.r10.s64 = ctx.r10.s64 + 1128;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// blt cr6,0x822a5000
	if (ctx.cr6.lt) goto loc_822A5000;
loc_822A50D0:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x822a5108
	if (ctx.cr6.eq) goto loc_822A5108;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bge cr6,0x822a5108
	if (!ctx.cr6.lt) goto loc_822A5108;
	// mulli r11,r8,188
	ctx.r11.s64 = ctx.r8.s64 * 188;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r4,6320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6320, ctx.r4.u32);
	// stb r7,6501(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6501, ctx.r7.u8);
	// stb r7,6500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6500, ctx.r7.u8);
	// stw r9,6440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6440, ctx.r9.u32);
	// stb r7,6496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6496, ctx.r7.u8);
	// stb r7,6503(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6503, ctx.r7.u8);
	// stb r7,6504(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6504, ctx.r7.u8);
loc_822A5108:
	// blr 
	return;
loc_822A510C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x822a5130
	goto loc_822A5130;
loc_822A5114:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x822a5130
	goto loc_822A5130;
loc_822A511C:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// b 0x822a5130
	goto loc_822A5130;
loc_822A5124:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x822a5130
	goto loc_822A5130;
loc_822A512C:
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
loc_822A5130:
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// bge cr6,0x822a50d0
	if (!ctx.cr6.lt) goto loc_822A50D0;
	// mulli r11,r9,188
	ctx.r11.s64 = ctx.r9.s64 * 188;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,6440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6440, ctx.r10.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A5150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,15568
	ctx.r10.s64 = ctx.r3.s64 + 15568;
loc_822A515C:
	// lwz r11,-132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -132);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a522c
	if (ctx.cr6.eq) goto loc_822A522C;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a517c
	if (!ctx.cr6.eq) goto loc_822A517C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a517c
	if (!ctx.cr6.eq) goto loc_822A517C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_822A517C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a5218
	if (ctx.cr6.eq) goto loc_822A5218;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a519c
	if (!ctx.cr6.eq) goto loc_822A519C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a519c
	if (!ctx.cr6.eq) goto loc_822A519C;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_822A519C:
	// lwz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a5220
	if (ctx.cr6.eq) goto loc_822A5220;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a51bc
	if (!ctx.cr6.eq) goto loc_822A51BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a51bc
	if (!ctx.cr6.eq) goto loc_822A51BC;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
loc_822A51BC:
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a5228
	if (ctx.cr6.eq) goto loc_822A5228;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822a51dc
	if (!ctx.cr6.eq) goto loc_822A51DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a51dc
	if (!ctx.cr6.eq) goto loc_822A51DC;
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
loc_822A51DC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,528
	ctx.r10.s64 = ctx.r10.s64 + 528;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x822a515c
	if (ctx.cr6.lt) goto loc_822A515C;
loc_822A51EC:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x822a5214
	if (ctx.cr6.eq) goto loc_822A5214;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x822a5214
	if (!ctx.cr6.lt) goto loc_822A5214;
	// mulli r11,r8,132
	ctx.r11.s64 = ctx.r8.s64 * 132;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,15436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15436, ctx.r4.u32);
	// stfs f0,15440(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15440, temp.u32);
loc_822A5214:
	// blr 
	return;
loc_822A5218:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x822a522c
	goto loc_822A522C;
loc_822A5220:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x822a522c
	goto loc_822A522C;
loc_822A5228:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_822A522C:
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x822a51ec
	if (!ctx.cr6.lt) goto loc_822A51EC;
	// mulli r11,r9,132
	ctx.r11.s64 = ctx.r9.s64 * 132;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,15440(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 15440, temp.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A56F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A56F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32085
	ctx.r28.s64 = -2102722560;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,-1824(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -1824);
	// stb r29,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a59d4
	if (!ctx.cr6.eq) goto loc_822A59D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// addi r5,r11,6224
	ctx.r5.s64 = ctx.r11.s64 + 6224;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r31,r11,-26660
	ctx.r31.s64 = ctx.r11.s64 + -26660;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82351720
	ctx.lr = 0x822A575C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r11,6208
	ctx.r5.s64 = ctx.r11.s64 + 6208;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A578C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6192
	ctx.r5.s64 = ctx.r11.s64 + 6192;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A57BC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6176
	ctx.r5.s64 = ctx.r11.s64 + 6176;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A57EC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6160
	ctx.r5.s64 = ctx.r11.s64 + 6160;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A581C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6140
	ctx.r5.s64 = ctx.r11.s64 + 6140;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A584C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,6120
	ctx.r5.s64 = ctx.r11.s64 + 6120;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822A587C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6092
	ctx.r5.s64 = ctx.r11.s64 + 6092;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822A58AC;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6068
	ctx.r5.s64 = ctx.r11.s64 + 6068;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822A58DC;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,6032
	ctx.r5.s64 = ctx.r11.s64 + 6032;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822A590C;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,5992
	ctx.r5.s64 = ctx.r11.s64 + 5992;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822A593C;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,5976
	ctx.r5.s64 = ctx.r11.s64 + 5976;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A596C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r11,5956
	ctx.r5.s64 = ctx.r11.s64 + 5956;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A599C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,5936
	ctx.r5.s64 = ctx.r11.s64 + 5936;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A59CC;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1824(r28)
	PPC_STORE_U8(ctx.r28.u32 + -1824, ctx.r11.u8);
loc_822A59D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A6B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A6B80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r28,r11,-1812
	ctx.r28.s64 = ctx.r11.s64 + -1812;
	// lbz r11,-11(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6fac
	if (!ctx.cr6.eq) goto loc_822A6FAC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// addi r5,r11,6700
	ctx.r5.s64 = ctx.r11.s64 + 6700;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r31,r11,-26480
	ctx.r31.s64 = ctx.r11.s64 + -26480;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// bl 0x82351720
	ctx.lr = 0x822A6BE4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r5,r11,6684
	ctx.r5.s64 = ctx.r11.s64 + 6684;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6C14;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6664
	ctx.r5.s64 = ctx.r11.s64 + 6664;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6C44;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6644
	ctx.r5.s64 = ctx.r11.s64 + 6644;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6C74;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6624
	ctx.r5.s64 = ctx.r11.s64 + 6624;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6CA4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6608
	ctx.r5.s64 = ctx.r11.s64 + 6608;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6CD4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r11,6588
	ctx.r5.s64 = ctx.r11.s64 + 6588;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822A6D04;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r5,r11,6568
	ctx.r5.s64 = ctx.r11.s64 + 6568;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6D34;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6552
	ctx.r5.s64 = ctx.r11.s64 + 6552;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6D64;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6528
	ctx.r5.s64 = ctx.r11.s64 + 6528;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6D94;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6504
	ctx.r5.s64 = ctx.r11.s64 + 6504;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6DC4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6480
	ctx.r5.s64 = ctx.r11.s64 + 6480;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6DF4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6456
	ctx.r5.s64 = ctx.r11.s64 + 6456;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6E24;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r5,r11,6428
	ctx.r5.s64 = ctx.r11.s64 + 6428;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6E54;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6400
	ctx.r5.s64 = ctx.r11.s64 + 6400;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6E84;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6376
	ctx.r5.s64 = ctx.r11.s64 + 6376;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6EB4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6EE4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6324
	ctx.r5.s64 = ctx.r11.s64 + 6324;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6F14;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6300
	ctx.r5.s64 = ctx.r11.s64 + 6300;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6F44;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r5,r11,6272
	ctx.r5.s64 = ctx.r11.s64 + 6272;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A6F74;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// addi r5,r11,6244
	ctx.r5.s64 = ctx.r11.s64 + 6244;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,-100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x822A6FA4;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-11(r28)
	PPC_STORE_U8(ctx.r28.u32 + -11, ctx.r11.u8);
loc_822A6FAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A8980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x822A8988;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bb70
	ctx.lr = 0x822A8990;
	__savefpr_14(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 + 176;
	// stw r8,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r7,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// stw r6,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r6.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r5,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, ctx.r5.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r4,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r3,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, ctx.r3.u32);
	// stw r8,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stw r7,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r7.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r6,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r5,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r5.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r4,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, ctx.r4.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stw r3,-372(r1)
	PPC_STORE_U32(ctx.r1.u32 + -372, ctx.r3.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r8.u32);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// stw r7,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r7.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// stw r6,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
	// stw r5,-388(r1)
	PPC_STORE_U32(ctx.r1.u32 + -388, ctx.r5.u32);
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// stw r4,-392(r1)
	PPC_STORE_U32(ctx.r1.u32 + -392, ctx.r4.u32);
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stw r10,-400(r1)
	PPC_STORE_U32(ctx.r1.u32 + -400, ctx.r10.u32);
	// lis r27,-32253
	ctx.r27.s64 = -2113732608;
	// lfs f12,-27244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27244);
	ctx.f12.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// stfs f12,-320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// lfs f0,-524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -524);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r3,-396(r1)
	PPC_STORE_U32(ctx.r1.u32 + -396, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,11268(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 11268);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f6,-15120(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -15120);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f13,25556(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f28,-15180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -15180);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f9,-15100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,3260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3260);
	ctx.f10.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f15,-6720(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -6720);
	ctx.f15.f64 = double(temp.f32);
	// addi r10,r10,1940
	ctx.r10.s64 = ctx.r10.s64 + 1940;
	// lfs f29,7464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7464);
	ctx.f29.f64 = double(temp.f32);
	// lis r14,-32254
	ctx.r14.s64 = -2113798144;
	// lfs f30,4744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4744);
	ctx.f30.f64 = double(temp.f32);
	// lis r15,-32252
	ctx.r15.s64 = -2113667072;
	// lfs f11,-604(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -604);
	ctx.f11.f64 = double(temp.f32);
	// lis r16,-32252
	ctx.r16.s64 = -2113667072;
	// stfs f0,-324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// lis r17,-32255
	ctx.r17.s64 = -2113863680;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// lis r19,-32252
	ctx.r19.s64 = -2113667072;
	// lis r20,-32253
	ctx.r20.s64 = -2113732608;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lwz r6,-388(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	// stfs f11,-316(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// lwz r5,-384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	// lfs f11,-5892(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -5892);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,-392(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	// stfs f11,-300(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// lwz r3,-376(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	// lfs f2,-31380(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -31380);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,-396(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	// stfs f2,-304(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lwz r4,-380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	// lfs f11,-15116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f24,3192(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3192);
	ctx.f24.f64 = double(temp.f32);
	// lwz r5,-360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	// stfs f11,-388(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// lwz r6,-364(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	// lfs f2,-4172(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4172);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,-368(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	// lfs f7,7460(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 7460);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,2864(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,-352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	// stfs f7,-308(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// lfs f7,7468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7468);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,-372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	// lfs f23,-1640(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -1640);
	ctx.f23.f64 = double(temp.f32);
	// lwz r4,-356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	// lfs f19,-1604(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -1604);
	ctx.f19.f64 = double(temp.f32);
	// lwz r5,-336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	// lfs f21,-27180(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27180);
	ctx.f21.f64 = double(temp.f32);
	// lwz r7,-344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	// lfs f31,-1664(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -1664);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,-328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	// lfs f22,-15128(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15128);
	ctx.f22.f64 = double(temp.f32);
	// lwz r8,-348(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	// lfs f20,-14792(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14792);
	ctx.f20.f64 = double(temp.f32);
	// lwz r6,-340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -340);
	// lfs f18,-4148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4148);
	ctx.f18.f64 = double(temp.f32);
	// lwz r4,-332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	// stfs f2,-392(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// lfs f2,-1648(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -1648);
	ctx.f2.f64 = double(temp.f32);
	// stfs f7,-396(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// stfs f2,-336(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// lfs f8,-700(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -700);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,6148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,-1660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -1660);
	ctx.f2.f64 = double(temp.f32);
	// stfs f8,-312(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// stfs f7,-344(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// stfs f2,-328(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// lfs f5,17976(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 17976);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,6152(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 6152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-1472(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -1472);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,-15112(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -15112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,7456(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 7456);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,2868(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,-1528(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -1528);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,-6860(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + -6860);
	ctx.f25.f64 = double(temp.f32);
	// lfs f17,-4736(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4736);
	ctx.f17.f64 = double(temp.f32);
	// lfs f7,6080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6080);
	ctx.f7.f64 = double(temp.f32);
	// lfs f16,-1636(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -1636);
	ctx.f16.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
loc_822A8BC8:
	// lfs f14,-324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,16(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f30,-8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f29,-4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f15,0(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f28,12(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f14,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,16(r9)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f13,-8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f6,24(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lfs f14,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,52(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f14,-312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,104(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f14,-308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -308);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,284(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// lfs f14,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,320(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// lfs f14,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,324(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// lfs f14,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,336(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 336, temp.u32);
	// lfs f14,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,340(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// lfs f14,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f14.f64 = double(temp.f32);
	// stfs f30,48(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f5,56(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f28,68(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f3,108(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f8,112(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f1,124(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f12,128(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f27,212(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// stfs f8,216(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f0,220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f26,224(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f25,228(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// stfs f0,232(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f3,264(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f27,268(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f8,272(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// stfs f9,280(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f12,328(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// stfs f0,332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// stfs f14,344(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// stfs f0,1016(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1016, temp.u32);
	// stfs f0,1024(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1024, temp.u32);
	// stfs f13,1032(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1032, temp.u32);
	// stfs f0,1040(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1040, temp.u32);
	// stfs f0,208(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// stfs f24,384(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// stfs f23,388(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 388, temp.u32);
	// stfs f11,392(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f22,396(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// stfs f5,400(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 400, temp.u32);
	// stfs f21,404(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 404, temp.u32);
	// stfs f8,408(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// stfs f20,440(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// stfs f19,444(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 444, temp.u32);
	// stfs f11,448(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// stfs f18,452(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// stfs f5,456(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// stfs f31,460(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 460, temp.u32);
	// stfs f6,464(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// stfs f24,496(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stfs f23,500(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stfs f11,504(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// stfs f22,508(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f5,512(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
	// stfs f21,516(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 516, temp.u32);
	// stfs f8,520(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// stfs f20,552(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 552, temp.u32);
	// stfs f19,556(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 556, temp.u32);
	// stfs f11,560(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 560, temp.u32);
	// stfs f18,564(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 564, temp.u32);
	// stfs f5,568(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 568, temp.u32);
	// stfs f31,572(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 572, temp.u32);
	// stfs f6,576(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 576, temp.u32);
	// stfs f17,616(r10)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r10.u32 + 616, temp.u32);
	// stfs f17,620(r10)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r10.u32 + 620, temp.u32);
	// stfs f0,624(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 624, temp.u32);
	// stfs f0,628(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 628, temp.u32);
	// lwz r10,-400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	// stfs f3,624(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 624, temp.u32);
	// stfs f10,632(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 632, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,636(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 636, temp.u32);
	// stfs f7,640(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// stfs f4,644(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 644, temp.u32);
	// stfs f26,648(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 648, temp.u32);
	// stfs f11,680(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 680, temp.u32);
	// stw r10,-400(r1)
	PPC_STORE_U32(ctx.r1.u32 + -400, ctx.r10.u32);
	// stfs f0,684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 684, temp.u32);
	// stfs f6,688(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 688, temp.u32);
	// stfs f7,692(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 692, temp.u32);
	// stfs f12,696(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 696, temp.u32);
	// stfs f0,700(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 700, temp.u32);
	// stfs f10,704(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 704, temp.u32);
	// stfs f11,736(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 736, temp.u32);
	// lfs f14,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,628(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 628, temp.u32);
	// stfs f0,740(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 740, temp.u32);
	// stfs f6,744(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 744, temp.u32);
	// stfs f10,748(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 748, temp.u32);
	// stfs f12,752(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 752, temp.u32);
	// stfs f0,756(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 756, temp.u32);
	// stfs f10,760(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 760, temp.u32);
	// lfs f14,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f14.f64 = double(temp.f32);
	// stfs f11,792(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 792, temp.u32);
	// stfs f0,796(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 796, temp.u32);
	// stfs f13,800(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 800, temp.u32);
	// stfs f0,804(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 804, temp.u32);
	// stfs f31,808(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 808, temp.u32);
	// stfs f25,812(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 812, temp.u32);
	// stfs f14,816(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 816, temp.u32);
	// stfs f7,848(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 848, temp.u32);
	// stfs f0,852(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 852, temp.u32);
	// stfs f13,856(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 856, temp.u32);
	// stfs f0,860(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 860, temp.u32);
	// stfs f9,864(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 864, temp.u32);
	// stfs f1,868(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f0,872(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 872, temp.u32);
	// stfs f7,904(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 904, temp.u32);
	// stfs f0,908(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 908, temp.u32);
	// stfs f13,912(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 912, temp.u32);
	// stfs f0,916(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 916, temp.u32);
	// stfs f9,920(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 920, temp.u32);
	// stfs f1,924(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// stfs f0,928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
	// stfs f7,960(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 960, temp.u32);
	// stfs f0,964(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 964, temp.u32);
	// stfs f13,968(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 968, temp.u32);
	// stfs f0,972(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 972, temp.u32);
	// stfs f9,976(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 976, temp.u32);
	// stfs f1,980(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 980, temp.u32);
	// stfs f0,984(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 984, temp.u32);
	// stfs f16,1016(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1016, temp.u32);
	// stfs f3,1020(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1020, temp.u32);
	// stfs f10,1024(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1024, temp.u32);
	// stfs f0,1028(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1028, temp.u32);
	// stfs f12,1032(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1032, temp.u32);
	// stfs f4,1036(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1036, temp.u32);
	// stfs f8,1040(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1040, temp.u32);
	// stfs f16,1072(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1072, temp.u32);
	// stfs f29,1076(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1076, temp.u32);
	// stfs f13,1080(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
	// stfs f0,1084(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1084, temp.u32);
	// stfs f12,1088(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1088, temp.u32);
	// lfs f14,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f14.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f4,1092(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1092, temp.u32);
	// stfs f8,1096(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1096, temp.u32);
	// stfs f11,1128(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1128, temp.u32);
	// stfs f14,1132(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1132, temp.u32);
	// stfs f10,1136(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1136, temp.u32);
	// stfs f0,1140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1140, temp.u32);
	// stfs f7,1144(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1144, temp.u32);
	// stfs f4,1148(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1148, temp.u32);
	// stfs f7,1152(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1152, temp.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stfs f2,1088(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1088, temp.u32);
	// stfs f2,1096(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1096, temp.u32);
	// stfs f2,1104(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1104, temp.u32);
	// stfs f2,1112(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1112, temp.u32);
	// stfs f2,1120(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1120, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x822a8bc8
	if (!ctx.cr6.eq) goto loc_822A8BC8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbbc
	ctx.lr = 0x822A8EA4;
	__restfpr_14(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A93A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822A93A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82241998
	ctx.lr = 0x822A93B8;
	sub_82241998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9494
	if (ctx.cr6.eq) goto loc_822A9494;
	// lis r10,7169
	ctx.r10.s64 = 469827584;
	// lis r8,-18278
	ctx.r8.s64 = -1197867008;
	// ori r9,r10,58880
	ctx.r9.u64 = ctx.r10.u64 | 58880;
	// ori r7,r8,48853
	ctx.r7.u64 = ctx.r8.u64 | 48853;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// bl 0x8234c370
	ctx.lr = 0x822A93FC;
	sub_8234C370(ctx, base);
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// ld r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r9,7240
	ctx.r4.s64 = ctx.r9.s64 + 7240;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r11,r11,-26280
	ctx.r11.s64 = ctx.r11.s64 + -26280;
	// stb r29,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r29.u8);
	// ori r9,r8,1
	ctx.r9.u64 = ctx.r8.u64 | 1;
	// stb r7,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r7.u8);
	// lis r8,-32085
	ctx.r8.s64 = -2102722560;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 512;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// oris r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 8388608;
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f0,-1784(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1784);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r9,4096
	ctx.r11.u64 = ctx.r9.u64 | 4096;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// oris r6,r11,16
	ctx.r6.u64 = ctx.r11.u64 | 1048576;
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// bl 0x82350920
	ctx.lr = 0x822A9494;
	sub_82350920(ctx, base);
loc_822A9494:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A94A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822A94A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// lis r11,7198
	ctx.r11.s64 = 471728128;
	// ori r8,r9,23800
	ctx.r8.u64 = ctx.r9.u64 | 23800;
	// ori r10,r11,51136
	ctx.r10.u64 = ctx.r11.u64 | 51136;
	// li r29,0
	ctx.r29.s64 = 0;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8234c370
	ctx.lr = 0x822A94E8;
	sub_8234C370(ctx, base);
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addis r8,r31,5
	ctx.r8.s64 = ctx.r31.s64 + 327680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r8,7240
	ctx.r4.s64 = ctx.r8.s64 + 7240;
	// lis r8,-32085
	ctx.r8.s64 = -2102722560;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r29,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r29.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// addi r11,r11,-26776
	ctx.r11.s64 = ctx.r11.s64 + -26776;
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// lfs f0,516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f0,524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f0,-1780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// oris r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 1048576;
	// stb r10,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r10.u8);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// bl 0x82350920
	ctx.lr = 0x822A9588;
	sub_82350920(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822A9B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822A9B70;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32085
	ctx.r26.s64 = -2102722560;
	// lbz r11,7624(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 7624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a9c18
	if (!ctx.cr6.eq) goto loc_822A9C18;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// addi r31,r11,-144
	ctx.r31.s64 = ctx.r11.s64 + -144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r30,r11,7572
	ctx.r30.s64 = ctx.r11.s64 + 7572;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,7564
	ctx.r5.s64 = ctx.r11.s64 + 7564;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r29,r11,-26228
	ctx.r29.s64 = ctx.r11.s64 + -26228;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A9BE0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,4816
	ctx.r5.s64 = ctx.r11.s64 + 4816;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A9C10;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,7624(r26)
	PPC_STORE_U8(ctx.r26.u32 + 7624, ctx.r11.u8);
loc_822A9C18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AA2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822AA2E8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32085
	ctx.r26.s64 = -2102722560;
	// lbz r11,-1760(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -1760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aa3f0
	if (!ctx.cr6.eq) goto loc_822AA3F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// addi r31,r11,-196
	ctx.r31.s64 = ctx.r11.s64 + -196;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r11,7644
	ctx.r6.s64 = ctx.r11.s64 + 7644;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r30,r11,-26188
	ctx.r30.s64 = ctx.r11.s64 + -26188;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AA350;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r28,r11,7624
	ctx.r28.s64 = ctx.r11.s64 + 7624;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,7616
	ctx.r5.s64 = ctx.r11.s64 + 7616;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AA388;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7608
	ctx.r5.s64 = ctx.r11.s64 + 7608;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AA3B8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7600
	ctx.r5.s64 = ctx.r11.s64 + 7600;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AA3E8;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1760(r26)
	PPC_STORE_U8(ctx.r26.u32 + -1760, ctx.r11.u8);
loc_822AA3F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AA630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822AA638;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32085
	ctx.r30.s64 = -2102722560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,-1759(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1759);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aa698
	if (!ctx.cr6.eq) goto loc_822AA698;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,7660
	ctx.r5.s64 = ctx.r11.s64 + 7660;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r4,r11,-26160
	ctx.r4.s64 = ctx.r11.s64 + -26160;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// lwz r7,-8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// lwz r11,20160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20160);
	// lwz r6,-4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AA690;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1759(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1759, ctx.r11.u8);
loc_822AA698:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r31.u32);
	// stw r31,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r31.u32);
	// stb r31,366(r29)
	PPC_STORE_U8(ctx.r29.u32 + 366, ctx.r31.u8);
	// stb r31,380(r29)
	PPC_STORE_U8(ctx.r29.u32 + 380, ctx.r31.u8);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AAB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822AAB28;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r26,-32085
	ctx.r26.s64 = -2102722560;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,-1758(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -1758);
	// stfs f31,24(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// bne cr6,0x822aabe4
	if (!ctx.cr6.eq) goto loc_822AABE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r27,-32047
	ctx.r27.s64 = -2100232192;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r30,r11,968
	ctx.r30.s64 = ctx.r11.s64 + 968;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,29184
	ctx.r29.s64 = ctx.r11.s64 + 29184;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,7732
	ctx.r5.s64 = ctx.r11.s64 + 7732;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r28,r11,-26148
	ctx.r28.s64 = ctx.r11.s64 + -26148;
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AABAC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7708
	ctx.r5.s64 = ctx.r11.s64 + 7708;
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AABDC;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1758(r26)
	PPC_STORE_U8(ctx.r26.u32 + -1758, ctx.r11.u8);
loc_822AABE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AAF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822AAF08;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r11,r11,-1644
	ctx.r11.s64 = ctx.r11.s64 + -1644;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_822AAF24:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r31,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r31.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x822aaf24
	if (!ctx.cr6.eq) goto loc_822AAF24;
	// lis r27,-32085
	ctx.r27.s64 = -2102722560;
	// lbz r11,7625(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7625);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aafdc
	if (!ctx.cr6.eq) goto loc_822AAFDC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// addi r30,r11,7800
	ctx.r30.s64 = ctx.r11.s64 + 7800;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32160
	ctx.r28.s64 = -2107637760;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-26136(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26136);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7780
	ctx.r5.s64 = ctx.r11.s64 + 7780;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r4,r11,-26144
	ctx.r4.s64 = ctx.r11.s64 + -26144;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AAFA0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-26136(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26136);
	// addi r5,r11,7756
	ctx.r5.s64 = ctx.r11.s64 + 7756;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r11,-26140
	ctx.r4.s64 = ctx.r11.s64 + -26140;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AAFD4;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,7625(r27)
	PPC_STORE_U8(ctx.r27.u32 + 7625, ctx.r11.u8);
loc_822AAFDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ABC18) {
	PPC_FUNC_PROLOGUE();
	// stb r4,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r4.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ABD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x822ABD38;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// addi r29,r3,88
	ctx.r29.s64 = ctx.r3.s64 + 88;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r30,r11,-19252
	ctx.r30.s64 = ctx.r11.s64 + -19252;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lfs f0,3068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f13,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r26,r11,8516
	ctx.r26.s64 = ctx.r11.s64 + 8516;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,8496
	ctx.r25.s64 = ctx.r11.s64 + 8496;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r24,r11,8472
	ctx.r24.s64 = ctx.r11.s64 + 8472;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,8448
	ctx.r23.s64 = ctx.r11.s64 + 8448;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,8424
	ctx.r22.s64 = ctx.r11.s64 + 8424;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r11,8400
	ctx.r21.s64 = ctx.r11.s64 + 8400;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r20,r11,8380
	ctx.r20.s64 = ctx.r11.s64 + 8380;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r19,r11,8364
	ctx.r19.s64 = ctx.r11.s64 + 8364;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r18,r11,8348
	ctx.r18.s64 = ctx.r11.s64 + 8348;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r17,r11,8336
	ctx.r17.s64 = ctx.r11.s64 + 8336;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r16,r11,8316
	ctx.r16.s64 = ctx.r11.s64 + 8316;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r15,r11,8300
	ctx.r15.s64 = ctx.r11.s64 + 8300;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r14,r11,8284
	ctx.r14.s64 = ctx.r11.s64 + 8284;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,8244
	ctx.r10.s64 = ctx.r11.s64 + 8244;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r11,8224
	ctx.r9.s64 = ctx.r11.s64 + 8224;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r8,r11,8204
	ctx.r8.s64 = ctx.r11.s64 + 8204;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r7,r11,8184
	ctx.r7.s64 = ctx.r11.s64 + 8184;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// addi r6,r11,8156
	ctx.r6.s64 = ctx.r11.s64 + 8156;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r5,r11,8136
	ctx.r5.s64 = ctx.r11.s64 + 8136;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r4,r11,8116
	ctx.r4.s64 = ctx.r11.s64 + 8116;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r3,r11,8096
	ctx.r3.s64 = ctx.r11.s64 + 8096;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r11,r11,8084
	ctx.r11.s64 = ctx.r11.s64 + 8084;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,8072
	ctx.r10.s64 = ctx.r11.s64 + 8072;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_822ABE78:
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822ABEA4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822ABED0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822ABEFC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822ABF28;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822ABF54;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822ABF80;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822ABFAC;
	sub_82351720(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822ABFD8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822AC004;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC030;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822AC05C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC088;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC0B4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC0E0;
	sub_82351720(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AC10C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC138;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC164;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC190;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC1BC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC1E8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822AC214;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,160
	ctx.r4.s64 = ctx.r29.s64 + 160;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC240;
	sub_82351720(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,168
	ctx.r4.s64 = ctx.r29.s64 + 168;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC26C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC298;
	sub_82351720(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822abe78
	if (ctx.cr6.lt) goto loc_822ABE78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r31,324(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r5,r11,8044
	ctx.r5.s64 = ctx.r11.s64 + 8044;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC2E0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r5,r11,8016
	ctx.r5.s64 = ctx.r11.s64 + 8016;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC310;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r5,r11,7988
	ctx.r5.s64 = ctx.r11.s64 + 7988;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC340;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r5,r11,7964
	ctx.r5.s64 = ctx.r11.s64 + 7964;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822AC370;
	sub_82351720(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ACA88) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 497, ctx.r11.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ACA98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 497, ctx.r11.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ACD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82348cb0
	ctx.lr = 0x822ACD34;
	sub_82348CB0(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,15820
	ctx.r9.s64 = 1036779520;
	// addi r11,r11,-13400
	ctx.r11.s64 = ctx.r11.s64 + -13400;
	// ori r9,r9,52429
	ctx.r9.u64 = ctx.r9.u64 | 52429;
	// addi r10,r11,8832
	ctx.r10.s64 = ctx.r11.s64 + 8832;
	// li r8,16
	ctx.r8.s64 = 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822ACD50:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822acd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ACD50;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
loc_822ACD64:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,23
	ctx.r7.s64 = 23;
loc_822ACD6C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822ACD7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822acd7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ACD7C;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stb r6,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r6.u8);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822acd6c
	if (!ctx.cr6.eq) goto loc_822ACD6C;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822acd64
	if (!ctx.cr6.eq) goto loc_822ACD64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ACE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822ACE50;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82348b98
	ctx.lr = 0x822ACE70;
	sub_82348B98(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f31,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r10,8564
	ctx.r5.s64 = ctx.r10.s64 + 8564;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lfs f30,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,20160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822ACEBC;
	sub_82351720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348b98
	ctx.lr = 0x822ACEC4;
	sub_82348B98(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r10,8552
	ctx.r5.s64 = ctx.r10.s64 + 8552;
	// lwz r10,20160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82351720
	ctx.lr = 0x822ACEF8;
	sub_82351720(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ACFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ad054
	if (ctx.cr6.eq) goto loc_822AD054;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AD028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ad04c
	if (!ctx.cr6.eq) goto loc_822AD04C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822AD04C:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_822AD054:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stfs f0,-27228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27228, temp.u32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// stfs f0,28920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28920, temp.u32);
	// bl 0x8234c890
	ctx.lr = 0x822AD07C;
	sub_8234C890(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8234c318
	ctx.lr = 0x822AD084;
	sub_8234C318(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD428) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD430) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x825af9f8
	ctx.lr = 0x822AD5B0;
	sub_825AF9F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// bl 0x8259b800
	ctx.lr = 0x822AD5C0;
	sub_8259B800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8259b7e8
	ctx.lr = 0x822AD5D0;
	sub_8259B7E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// bl 0x8259b878
	ctx.lr = 0x822AD5FC;
	sub_8259B878(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r30,756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 756, ctx.r30.u8);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r10,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// bl 0x825c6b9c
	ctx.lr = 0x822AD668;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ad6d0
	if (ctx.cr6.eq) goto loc_822AD6D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r11,r11,-2560
	ctx.r11.s64 = ctx.r11.s64 + -167772160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822ad6f8
	if (ctx.cr6.gt) goto loc_822AD6F8;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-10592
	ctx.r12.s64 = ctx.r12.s64 + -10592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822AD6C0;
	case 1:
		goto loc_822AD6F4;
	case 2:
		goto loc_822AD6F4;
	case 3:
		goto loc_822AD6F8;
	case 4:
		goto loc_822AD6F8;
	case 5:
		goto loc_822AD6F8;
	case 6:
		goto loc_822AD6F8;
	case 7:
		goto loc_822AD6F4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-10560(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10560);
	// lwz r17,-10508(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10508);
	// lwz r17,-10508(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10508);
	// lwz r17,-10504(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10504);
	// lwz r17,-10504(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10504);
	// lwz r17,-10504(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10504);
	// lwz r17,-10504(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10504);
	// lwz r17,-10508(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10508);
loc_822AD6C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259b800
	ctx.lr = 0x822AD6C8;
	sub_8259B800(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822ad6f8
	goto loc_822AD6F8;
loc_822AD6D0:
	// lbz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 756);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ad6f4
	if (ctx.cr6.eq) goto loc_822AD6F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stb r8,756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 756, ctx.r8.u8);
	// b 0x822ad6f8
	goto loc_822AD6F8;
loc_822AD6F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AD6F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ad7c4
	if (!ctx.cr6.eq) goto loc_822AD7C4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ad7b4
	if (!ctx.cr6.eq) goto loc_822AD7B4;
	// stb r30,756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 756, ctx.r30.u8);
	// b 0x822ad7c0
	goto loc_822AD7C0;
loc_822AD7B4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x8259b798
	ctx.lr = 0x822AD7C0;
	sub_8259B798(ctx, base);
loc_822AD7C0:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_822AD7C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

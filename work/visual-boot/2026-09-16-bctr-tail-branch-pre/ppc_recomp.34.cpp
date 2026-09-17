#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822A3DF8"))) PPC_WEAK_FUNC(sub_822A3DF8);
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

__attribute__((alias("__imp__sub_822A3E34"))) PPC_WEAK_FUNC(sub_822A3E34);
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

__attribute__((alias("__imp__sub_822A3E6C"))) PPC_WEAK_FUNC(sub_822A3E6C);
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

__attribute__((alias("__imp__sub_822A3E90"))) PPC_WEAK_FUNC(sub_822A3E90);
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

__attribute__((alias("__imp__sub_822A3EC8"))) PPC_WEAK_FUNC(sub_822A3EC8);
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

__attribute__((alias("__imp__sub_822A3F04"))) PPC_WEAK_FUNC(sub_822A3F04);
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

__attribute__((alias("__imp__sub_822A3F3C"))) PPC_WEAK_FUNC(sub_822A3F3C);
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

__attribute__((alias("__imp__sub_822A3F60"))) PPC_WEAK_FUNC(sub_822A3F60);
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

__attribute__((alias("__imp__sub_822A3F98"))) PPC_WEAK_FUNC(sub_822A3F98);
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

__attribute__((alias("__imp__sub_822A3FD4"))) PPC_WEAK_FUNC(sub_822A3FD4);
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

__attribute__((alias("__imp__sub_822A4014"))) PPC_WEAK_FUNC(sub_822A4014);
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

__attribute__((alias("__imp__sub_822A4054"))) PPC_WEAK_FUNC(sub_822A4054);
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

__attribute__((alias("__imp__sub_822A4090"))) PPC_WEAK_FUNC(sub_822A4090);
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

__attribute__((alias("__imp__sub_822A40D8"))) PPC_WEAK_FUNC(sub_822A40D8);
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

__attribute__((alias("__imp__sub_822A40EC"))) PPC_WEAK_FUNC(sub_822A40EC);
PPC_FUNC_IMPL(__imp__sub_822A40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A40F0"))) PPC_WEAK_FUNC(sub_822A40F0);
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

__attribute__((alias("__imp__sub_822A4178"))) PPC_WEAK_FUNC(sub_822A4178);
PPC_FUNC_IMPL(__imp__sub_822A4178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,28868
	ctx.r9.u64 = ctx.r10.u64 | 28868;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r7,r8,28872
	ctx.r7.u64 = ctx.r8.u64 | 28872;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r6,28876
	ctx.r5.u64 = ctx.r6.u64 | 28876;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r10,1256
	ctx.r9.s64 = ctx.r10.s64 + 1256;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lfsx f0,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r4,28880
	ctx.r10.u64 = ctx.r4.u64 | 28880;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// ori r7,r8,28696
	ctx.r7.u64 = ctx.r8.u64 | 28696;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r5,r6,28696
	ctx.r5.u64 = ctx.r6.u64 | 28696;
	// lfs f11,1060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1060);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// ori r6,r7,28696
	ctx.r6.u64 = ctx.r7.u64 | 28696;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r8,r4,28700
	ctx.r8.u64 = ctx.r4.u64 | 28700;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r8,r4,28700
	ctx.r8.u64 = ctx.r4.u64 | 28700;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// ori r6,r7,28696
	ctx.r6.u64 = ctx.r7.u64 | 28696;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// ori r4,r5,28696
	ctx.r4.u64 = ctx.r5.u64 | 28696;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// ori r6,r7,28696
	ctx.r6.u64 = ctx.r7.u64 | 28696;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r8,r9,28700
	ctx.r8.u64 = ctx.r9.u64 | 28700;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r4,28700
	ctx.r9.u64 = ctx.r4.u64 | 28700;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// ori r7,r8,28696
	ctx.r7.u64 = ctx.r8.u64 | 28696;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r5,r6,28696
	ctx.r5.u64 = ctx.r6.u64 | 28696;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r7,r8,28696
	ctx.r7.u64 = ctx.r8.u64 | 28696;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r6,28700
	ctx.r5.u64 = ctx.r6.u64 | 28700;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r4,28700
	ctx.r9.u64 = ctx.r4.u64 | 28700;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r7,r8,28696
	ctx.r7.u64 = ctx.r8.u64 | 28696;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// ori r5,r6,28700
	ctx.r5.u64 = ctx.r6.u64 | 28700;
	// lfs f12,11268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11268);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// ori r8,r4,28696
	ctx.r8.u64 = ctx.r4.u64 | 28696;
	// ori r9,r10,28696
	ctx.r9.u64 = ctx.r10.u64 | 28696;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// fmsubs f13,f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f12.f64));
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f13,f8,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r6,28700
	ctx.r5.u64 = ctx.r6.u64 | 28700;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A43B4"))) PPC_WEAK_FUNC(sub_822A43B4);
PPC_FUNC_IMPL(__imp__sub_822A43B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A43B8"))) PPC_WEAK_FUNC(sub_822A43B8);
PPC_FUNC_IMPL(__imp__sub_822A43B8) {
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
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8259c328
	ctx.lr = 0x822A43DC;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x8259c328
	ctx.lr = 0x822A440C;
	sub_8259C328(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_822A4430"))) PPC_WEAK_FUNC(sub_822A4430);
PPC_FUNC_IMPL(__imp__sub_822A4430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6924
	ctx.r10.s64 = 6924;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r7,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r7.u8);
	// lis r7,-32160
	ctx.r7.s64 = -2107637760;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r7,-18560
	ctx.r7.s64 = ctx.r7.s64 + -18560;
	// stb r8,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r8.u8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f0,-1624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1624);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r4,r7,7240
	ctx.r4.s64 = ctx.r7.s64 + 7240;
	// lfs f0,-1660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f0,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r7,516(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// li r6,6925
	ctx.r6.s64 = 6925;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// lfs f0,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// li r9,6927
	ctx.r9.s64 = 6927;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// bl 0x82350920
	ctx.lr = 0x822A44FC;
	sub_82350920(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A450C"))) PPC_WEAK_FUNC(sub_822A450C);
PPC_FUNC_IMPL(__imp__sub_822A450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A4510"))) PPC_WEAK_FUNC(sub_822A4510);
PPC_FUNC_IMPL(__imp__sub_822A4510) {
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
	// lbz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4554
	if (!ctx.cr6.eq) goto loc_822A4554;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822a4554
	if (!ctx.cr6.gt) goto loc_822A4554;
	// bl 0x822a4430
	ctx.lr = 0x822A454C;
	sub_822A4430(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
loc_822A4554:
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

__attribute__((alias("__imp__sub_822A4568"))) PPC_WEAK_FUNC(sub_822A4568);
PPC_FUNC_IMPL(__imp__sub_822A4568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,28908
	ctx.r9.u64 = ctx.r10.u64 | 28908;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r7,r8,28912
	ctx.r7.u64 = ctx.r8.u64 | 28912;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r6,28916
	ctx.r5.u64 = ctx.r6.u64 | 28916;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// ori r10,r4,28920
	ctx.r10.u64 = ctx.r4.u64 | 28920;
	// lfsx f0,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r9,28696
	ctx.r8.u64 = ctx.r9.u64 | 28696;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// ori r6,r7,28696
	ctx.r6.u64 = ctx.r7.u64 | 28696;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r5,28700
	ctx.r4.u64 = ctx.r5.u64 | 28700;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// ori r7,r8,28696
	ctx.r7.u64 = ctx.r8.u64 | 28696;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// ori r4,r5,28700
	ctx.r4.u64 = ctx.r5.u64 | 28700;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r7,r8,28696
	ctx.r7.u64 = ctx.r8.u64 | 28696;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r5,r6,28700
	ctx.r5.u64 = ctx.r6.u64 | 28700;
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r8,r4,28696
	ctx.r8.u64 = ctx.r4.u64 | 28696;
	// lfs f13,17976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17976);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,11268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11268);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,1256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1256);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r9,r10,28696
	ctx.r9.u64 = ctx.r10.u64 | 28696;
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f7,f12,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r6,28700
	ctx.r5.u64 = ctx.r6.u64 | 28700;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f11,f3,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A46D0"))) PPC_WEAK_FUNC(sub_822A46D0);
PPC_FUNC_IMPL(__imp__sub_822A46D0) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,1652(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a46f8
	if (ctx.cr6.eq) goto loc_822A46F8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822A46F8:
	// lbz r9,1844(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1844);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a4708
	if (ctx.cr6.eq) goto loc_822A4708;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822A4708:
	// lbz r8,2036(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2036);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4718
	if (ctx.cr6.eq) goto loc_822A4718;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822A4718:
	// lbz r7,2228(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2228);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a4728
	if (ctx.cr6.eq) goto loc_822A4728;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822A4728:
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x822a473c
	if (ctx.cr6.eq) goto loc_822A473C;
	// bl 0x822a4178
	ctx.lr = 0x822A4738;
	sub_822A4178(ctx, base);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
loc_822A473C:
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

__attribute__((alias("__imp__sub_822A4750"))) PPC_WEAK_FUNC(sub_822A4750);
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

__attribute__((alias("__imp__sub_822A4AC4"))) PPC_WEAK_FUNC(sub_822A4AC4);
PPC_FUNC_IMPL(__imp__sub_822A4AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A4AC8"))) PPC_WEAK_FUNC(sub_822A4AC8);
PPC_FUNC_IMPL(__imp__sub_822A4AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822A4AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lfs f0,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f0.f64 = double(temp.f32);
	// li r11,8192
	ctx.r11.s64 = 8192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// bl 0x8234df60
	ctx.lr = 0x822A4AF8;
	sub_8234DF60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4b24
	if (ctx.cr6.eq) goto loc_822A4B24;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A4B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r29.u8);
loc_822A4B24:
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A4B30;
	sub_8234DF60(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a4b58
	if (ctx.cr6.eq) goto loc_822A4B58;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822A4B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r29.u8);
loc_822A4B58:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A4B60"))) PPC_WEAK_FUNC(sub_822A4B60);
PPC_FUNC_IMPL(__imp__sub_822A4B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822A4B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A4B7C;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4ba4
	if (ctx.cr6.eq) goto loc_822A4BA4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A4BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
loc_822A4BA4:
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A4BB0;
	sub_8234DF60(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4bd4
	if (ctx.cr6.eq) goto loc_822A4BD4;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A4BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
loc_822A4BD4:
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A4BE0"))) PPC_WEAK_FUNC(sub_822A4BE0);
PPC_FUNC_IMPL(__imp__sub_822A4BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4c14
	if (ctx.cr6.eq) goto loc_822A4C14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -700);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a4c1c
	goto loc_822A4C1C;
loc_822A4C14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
loc_822A4C1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,5928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5928);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,-15128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A4C78"))) PPC_WEAK_FUNC(sub_822A4C78);
PPC_FUNC_IMPL(__imp__sub_822A4C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f10,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f10.f64 = double(temp.f32);
	// ble cr6,0x822a4c98
	if (!ctx.cr6.gt) goto loc_822A4C98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f11.f64 = double(temp.f32);
	// b 0x822a4ca0
	goto loc_822A4CA0;
loc_822A4C98:
	// fdivs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_822A4CA0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fmr f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822a4cf0
	if (ctx.cr6.lt) goto loc_822A4CF0;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_822A4CC4:
	// fmuls f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bne cr6,0x822a4cc4
	if (!ctx.cr6.eq) goto loc_822A4CC4;
loc_822A4CF0:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a4d0c
	if (!ctx.cr6.lt) goto loc_822A4D0C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_822A4CFC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4cfc
	if (!ctx.cr6.eq) goto loc_822A4CFC;
loc_822A4D0C:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822a4d5c
	if (ctx.cr6.lt) goto loc_822A4D5C;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_822A4D30:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bne cr6,0x822a4d30
	if (!ctx.cr6.eq) goto loc_822A4D30;
loc_822A4D5C:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a4d78
	if (!ctx.cr6.lt) goto loc_822A4D78;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_822A4D68:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4d68
	if (!ctx.cr6.eq) goto loc_822A4D68;
loc_822A4D78:
	// lfs f12,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 / ctx.f12.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fsubs f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f0,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmadds f13,f2,f12,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f1,f3,f12,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A4DB4"))) PPC_WEAK_FUNC(sub_822A4DB4);
PPC_FUNC_IMPL(__imp__sub_822A4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A4DB8"))) PPC_WEAK_FUNC(sub_822A4DB8);
PPC_FUNC_IMPL(__imp__sub_822A4DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x822a4dd4
	if (!ctx.cr6.lt) goto loc_822A4DD4;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_822A4DD4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f11.f64));
	// lfs f0,2328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// addi r7,r11,-3560
	ctx.r7.s64 = ctx.r11.s64 + -3560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,5932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5932);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blt cr6,0x822a4e78
	if (ctx.cr6.lt) goto loc_822A4E78;
	// bso cr6,0x822a4e78
	if (ctx.cr6.so) goto loc_822A4E78;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,-1960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1960);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f12,-13472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13472);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f5,f8,f7,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfd f12,-1544(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1544);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f11,-27192(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -27192);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f0,f4,f13,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f13,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,-1576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f3,f12,f0
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f2,f0,f11
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// blr 
	return;
loc_822A4E78:
	// lfs f12,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x822a4efc
	if (ctx.cr6.gt) goto loc_822A4EFC;
	// bso cr6,0x822a4efc
	if (ctx.cr6.so) goto loc_822A4EFC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,-1960
	ctx.r11.s64 = ctx.r11.s64 + -1960;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-13472
	ctx.r11.s64 = ctx.r11.s64 + -13472;
	// fmadds f6,f9,f8,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfd f12,-1544(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1544);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f11,-27192(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -27192);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f0,f5,f13,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f13,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,-1576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f4,f12,f0
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f3,f0,f11
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// blr 
	return;
loc_822A4EFC:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_822A4F04:
	// lfs f2,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bso cr6,0x822a4f14
	if (ctx.cr6.so) goto loc_822A4F14;
	// bge cr6,0x822a4f2c
	if (!ctx.cr6.lt) goto loc_822A4F2C;
loc_822A4F14:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a4f04
	if (ctx.cr6.lt) goto loc_822A4F04;
	// b 0x822a4f34
	goto loc_822A4F34;
loc_822A4F2C:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822A4F34:
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfsx f4,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfd f11,-1544(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -1544);
	// lis r9,-32085
	ctx.r9.s64 = -2102722560;
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,-13472
	ctx.r9.s64 = ctx.r9.s64 + -13472;
	// lfs f13,25556(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lfd f10,-27192(r8)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -27192);
	// lis r8,-32085
	ctx.r8.s64 = -2102722560;
	// fmadds f6,f8,f7,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f9.f64));
	// addi r8,r8,-1960
	ctx.r8.s64 = ctx.r8.s64 + -1960;
	// lfsx f5,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f2,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lfsx f9,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f1,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfsx f7,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f6,f9,f13,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f0,f5,f2,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f13,f11,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// lfs f13,-1576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f12,f0,f10
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A4FEC"))) PPC_WEAK_FUNC(sub_822A4FEC);
PPC_FUNC_IMPL(__imp__sub_822A4FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A4FF0"))) PPC_WEAK_FUNC(sub_822A4FF0);
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

__attribute__((alias("__imp__sub_822A514C"))) PPC_WEAK_FUNC(sub_822A514C);
PPC_FUNC_IMPL(__imp__sub_822A514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5150"))) PPC_WEAK_FUNC(sub_822A5150);
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

__attribute__((alias("__imp__sub_822A524C"))) PPC_WEAK_FUNC(sub_822A524C);
PPC_FUNC_IMPL(__imp__sub_822A524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5250"))) PPC_WEAK_FUNC(sub_822A5250);
PPC_FUNC_IMPL(__imp__sub_822A5250) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,448
	ctx.r31.s64 = ctx.r3.s64 + 448;
	// lfs f31,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f31.f64 = double(temp.f32);
loc_822A5278:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a52d0
	if (ctx.cr6.eq) goto loc_822A52D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A528C;
	sub_8234DF60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a52d0
	if (ctx.cr6.eq) goto loc_822A52D0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A52AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a52d0
	if (ctx.cr6.eq) goto loc_822A52D0;
	// lbz r6,17(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bge cr6,0x822a52d0
	if (!ctx.cr6.lt) goto loc_822A52D0;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822a5300
	if (ctx.cr6.gt) goto loc_822A5300;
loc_822A52D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 + 368;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x822a5278
	if (ctx.cr6.lt) goto loc_822A5278;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A52E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822A5300:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a52e4
	goto loc_822A52E4;
}

__attribute__((alias("__imp__sub_822A5308"))) PPC_WEAK_FUNC(sub_822A5308);
PPC_FUNC_IMPL(__imp__sub_822A5308) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,17456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17456, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A5314"))) PPC_WEAK_FUNC(sub_822A5314);
PPC_FUNC_IMPL(__imp__sub_822A5314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5318"))) PPC_WEAK_FUNC(sub_822A5318);
PPC_FUNC_IMPL(__imp__sub_822A5318) {
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
	// addi r31,r30,280
	ctx.r31.s64 = ctx.r30.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A533C;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a537c
	if (ctx.cr6.eq) goto loc_822A537C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
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
	ctx.lr = 0x822A5374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,292(r30)
	PPC_STORE_U8(ctx.r30.u32 + 292, ctx.r7.u8);
loc_822A537C:
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

__attribute__((alias("__imp__sub_822A5394"))) PPC_WEAK_FUNC(sub_822A5394);
PPC_FUNC_IMPL(__imp__sub_822A5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5398"))) PPC_WEAK_FUNC(sub_822A5398);
PPC_FUNC_IMPL(__imp__sub_822A5398) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,6500
	ctx.r10.s64 = ctx.r3.s64 + 6500;
	// li r7,8
	ctx.r7.s64 = 8;
loc_822A53AC:
	// lwz r6,-180(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -180);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a53dc
	if (ctx.cr6.eq) goto loc_822A53DC;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a53c8
	if (ctx.cr6.eq) goto loc_822A53C8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A53C8:
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a53dc
	if (ctx.cr6.eq) goto loc_822A53DC;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A53DC:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a540c
	if (ctx.cr6.eq) goto loc_822A540C;
	// lbz r6,188(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 188);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a53f8
	if (ctx.cr6.eq) goto loc_822A53F8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A53F8:
	// lbz r5,190(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 190);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a540c
	if (ctx.cr6.eq) goto loc_822A540C;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A540C:
	// lwz r4,196(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a543c
	if (ctx.cr6.eq) goto loc_822A543C;
	// lbz r3,376(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5428
	if (ctx.cr6.eq) goto loc_822A5428;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A5428:
	// lbz r6,378(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 378);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a543c
	if (ctx.cr6.eq) goto loc_822A543C;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A543C:
	// lwz r5,384(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a546c
	if (ctx.cr6.eq) goto loc_822A546C;
	// lbz r4,564(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 564);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a5458
	if (ctx.cr6.eq) goto loc_822A5458;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A5458:
	// lbz r3,566(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 566);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a546c
	if (ctx.cr6.eq) goto loc_822A546C;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A546C:
	// lwz r6,572(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a549c
	if (ctx.cr6.eq) goto loc_822A549C;
	// lbz r5,752(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 752);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a5488
	if (ctx.cr6.eq) goto loc_822A5488;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A5488:
	// lbz r4,754(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 754);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a549c
	if (ctx.cr6.eq) goto loc_822A549C;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A549C:
	// lwz r3,760(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a54cc
	if (ctx.cr6.eq) goto loc_822A54CC;
	// lbz r6,940(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 940);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a54b8
	if (ctx.cr6.eq) goto loc_822A54B8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A54B8:
	// lbz r5,942(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 942);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a54cc
	if (ctx.cr6.eq) goto loc_822A54CC;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A54CC:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1128
	ctx.r10.s64 = ctx.r10.s64 + 1128;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822a53ac
	if (!ctx.cr6.eq) goto loc_822A53AC;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a54f0
	if (ctx.cr6.eq) goto loc_822A54F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822A54F0:
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5508
	if (ctx.cr6.eq) goto loc_822A5508;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_822A5508:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A5510"))) PPC_WEAK_FUNC(sub_822A5510);
PPC_FUNC_IMPL(__imp__sub_822A5510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,26080
	ctx.r10.s64 = ctx.r11.s64 + 26080;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// addi r10,r10,-8640
	ctx.r10.s64 = ctx.r10.s64 + -8640;
	// lfs f12,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f6.f64 = double(temp.f32);
	// li r9,16392
	ctx.r9.s64 = 16392;
	// lfs f11,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f10,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f8,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f8.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f5,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f5.f64 = double(temp.f32);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f6,f5,f11
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f5,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lfs f7,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f7.f64 = double(temp.f32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// fsubs f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f5,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f31,f8,f8
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmadds f7,f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f31.f64));
	// fmadds f5,f8,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f8,f5
	ctx.f8.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsel f13,f7,f13,f8
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f13,f5,f13,f0
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmadds f13,f3,f0,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f12,f6,f0,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f31,f2,f0,f10
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f30,f1,f0,f9
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822A5610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r11,r4,8
	ctx.r11.u64 = ctx.r4.u64 | 8;
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A5640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r8.u64);
	// std r7,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r7.u64);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A5670"))) PPC_WEAK_FUNC(sub_822A5670);
PPC_FUNC_IMPL(__imp__sub_822A5670) {
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
	// bl 0x8234df60
	ctx.lr = 0x822A5688;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a56c8
	if (ctx.cr6.eq) goto loc_822A56C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A56A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a56c8
	if (ctx.cr6.eq) goto loc_822A56C8;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A56C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A56C8:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r5,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r5.u8);
	// stb r4,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_822A56EC"))) PPC_WEAK_FUNC(sub_822A56EC);
PPC_FUNC_IMPL(__imp__sub_822A56EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A56F0"))) PPC_WEAK_FUNC(sub_822A56F0);
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

__attribute__((alias("__imp__sub_822A59E0"))) PPC_WEAK_FUNC(sub_822A59E0);
PPC_FUNC_IMPL(__imp__sub_822A59E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stb r10,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r10.u8);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8234df60
	ctx.lr = 0x822A5A28;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5a48
	if (ctx.cr6.eq) goto loc_822A5A48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A5A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5A48:
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A5A54;
	sub_8234DF60(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a5a74
	if (ctx.cr6.eq) goto loc_822A5A74;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A5A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5A74:
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A5A80;
	sub_8234DF60(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a5aa0
	if (ctx.cr6.eq) goto loc_822A5AA0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5AA0:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822a4be0
	ctx.lr = 0x822A5AA8;
	sub_822A4BE0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822a4be0
	ctx.lr = 0x822A5AB0;
	sub_822A4BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
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

__attribute__((alias("__imp__sub_822A5AE4"))) PPC_WEAK_FUNC(sub_822A5AE4);
PPC_FUNC_IMPL(__imp__sub_822A5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5AE8"))) PPC_WEAK_FUNC(sub_822A5AE8);
PPC_FUNC_IMPL(__imp__sub_822A5AE8) {
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
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A5B0C;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5b2c
	if (ctx.cr6.eq) goto loc_822A5B2C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A5B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5B2C:
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A5B38;
	sub_8234DF60(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a5b58
	if (ctx.cr6.eq) goto loc_822A5B58;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A5B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5B58:
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A5B64;
	sub_8234DF60(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a5b84
	if (ctx.cr6.eq) goto loc_822A5B84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A5B84:
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x822a5ba0
	if (!ctx.cr6.eq) goto loc_822A5BA0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r10,-1828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1828);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-1828(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1828, ctx.r10.u32);
loc_822A5BA0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r10,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r10.u8);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a5670
	ctx.lr = 0x822A5BC0;
	sub_822A5670(ctx, base);
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

__attribute__((alias("__imp__sub_822A5BD8"))) PPC_WEAK_FUNC(sub_822A5BD8);
PPC_FUNC_IMPL(__imp__sub_822A5BD8) {
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
	// addi r31,r30,240
	ctx.r31.s64 = ctx.r30.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822A5BFC;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5c3c
	if (ctx.cr6.eq) goto loc_822A5C3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
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
	ctx.lr = 0x822A5C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,252(r30)
	PPC_STORE_U8(ctx.r30.u32 + 252, ctx.r7.u8);
loc_822A5C3C:
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

__attribute__((alias("__imp__sub_822A5C54"))) PPC_WEAK_FUNC(sub_822A5C54);
PPC_FUNC_IMPL(__imp__sub_822A5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5C58"))) PPC_WEAK_FUNC(sub_822A5C58);
PPC_FUNC_IMPL(__imp__sub_822A5C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f0,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822A5CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lfs f12,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// ori r3,r4,16271
	ctx.r3.u64 = ctx.r4.u64 | 16271;
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 | 32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// beq cr6,0x822a5d10
	if (ctx.cr6.eq) goto loc_822A5D10;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r8,r11,512
	ctx.r8.u64 = ctx.r11.u64 | 512;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lfs f0,13360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
loc_822A5D10:
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A5D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A5D40"))) PPC_WEAK_FUNC(sub_822A5D40);
PPC_FUNC_IMPL(__imp__sub_822A5D40) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// ori r9,r10,57540
	ctx.r9.u64 = ctx.r10.u64 | 57540;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r4,r3,192
	ctx.r4.s64 = ctx.r3.s64 + 192;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A5DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stfs f31,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// ori r11,r6,2
	ctx.r11.u64 = ctx.r6.u64 | 2;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r5,r11,4
	ctx.r5.u64 = ctx.r11.u64 | 4;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A5DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A5E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A5E48"))) PPC_WEAK_FUNC(sub_822A5E48);
PPC_FUNC_IMPL(__imp__sub_822A5E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfd f12,-4840(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// lfd f11,-1600(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -1600);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// lfs f10,260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f13,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// lfs f10,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f0,f9,f12,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsel f0,f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// bge cr6,0x822a5ee8
	if (!ctx.cr6.lt) goto loc_822A5EE8;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
loc_822A5EE8:
	// lfs f8,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x822a5f04
	if (!ctx.cr6.lt) goto loc_822A5F04;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_822A5F04:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// fmuls f7,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822A5F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A5F5C"))) PPC_WEAK_FUNC(sub_822A5F5C);
PPC_FUNC_IMPL(__imp__sub_822A5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A5F60"))) PPC_WEAK_FUNC(sub_822A5F60);
PPC_FUNC_IMPL(__imp__sub_822A5F60) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2858
	ctx.lr = 0x822A5F90;
	sub_822D2858(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2700
	ctx.lr = 0x822A5FA8;
	sub_822D2700(ctx, base);
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

__attribute__((alias("__imp__sub_822A5FC0"))) PPC_WEAK_FUNC(sub_822A5FC0);
PPC_FUNC_IMPL(__imp__sub_822A5FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A5FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822a6214
	if (ctx.cr6.gt) goto loc_822A6214;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,24572
	ctx.r12.s64 = ctx.r12.s64 + 24572;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822A6024;
	case 1:
		goto loc_822A6044;
	case 2:
		goto loc_822A6064;
	case 3:
		goto loc_822A60B4;
	case 4:
		goto loc_822A60DC;
	case 5:
		goto loc_822A6134;
	case 6:
		goto loc_822A6174;
	case 7:
		goto loc_822A61A8;
	case 8:
		goto loc_822A61C4;
	case 9:
		goto loc_822A61E4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,24612(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24612);
	// lwz r17,24644(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24644);
	// lwz r17,24676(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24676);
	// lwz r17,24756(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24756);
	// lwz r17,24796(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24796);
	// lwz r17,24884(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24884);
	// lwz r17,24948(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24948);
	// lwz r17,25000(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25000);
	// lwz r17,25028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25028);
	// lwz r17,25060(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25060);
loc_822A6024:
	// lwz r11,15328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822a6038
	if (ctx.cr6.eq) goto loc_822A6038;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A6038:
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,473(r31)
	PPC_STORE_U8(ctx.r31.u32 + 473, ctx.r11.u8);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
loc_822A6044:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r8,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r8.u32);
loc_822A6064:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A607C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822a6094
	if (!ctx.cr6.eq) goto loc_822A6094;
loc_822A6088:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822A6094:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,392
	ctx.r4.s64 = ctx.r31.s64 + 392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A60AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
loc_822A60B4:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822A60C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a6088
	if (ctx.cr6.eq) goto loc_822A6088;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r5,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r5.u32);
loc_822A60DC:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A60F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,2047
	ctx.r10.s64 = ctx.r11.s64 + 2047;
	// rlwinm r29,r10,0,0,20
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823477b0
	ctx.lr = 0x822A610C;
	sub_823477B0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r4,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r4.u32);
	// stw r8,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822A6134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A6134:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822A614C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a6088
	if (ctx.cr6.eq) goto loc_822A6088;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A616C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
loc_822A6174:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822A6188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a6088
	if (ctx.cr6.eq) goto loc_822A6088;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r4,456(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// bl 0x822d3a08
	ctx.lr = 0x822A61A0;
	sub_822D3A08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r5,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r5.u32);
loc_822A61A8:
	// bl 0x822d34a0
	ctx.lr = 0x822A61AC;
	sub_822D34A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823477b0
	ctx.lr = 0x822A61B8;
	sub_823477B0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r3,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r3.u32);
	// stw r4,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r4.u32);
loc_822A61C4:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// bl 0x8234a1e0
	ctx.lr = 0x822A61D8;
	sub_8234A1E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r3.u32);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
loc_822A61E4:
	// bl 0x822d34a0
	ctx.lr = 0x822A61E8;
	sub_822D34A0(ctx, base);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x822d34a8
	ctx.lr = 0x822A6200;
	sub_822D34A8(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d34e0
	ctx.lr = 0x822A620C;
	sub_822D34E0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
loc_822A6214:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A6220"))) PPC_WEAK_FUNC(sub_822A6220);
PPC_FUNC_IMPL(__imp__sub_822A6220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lbz r9,473(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 473);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// li r10,7
	ctx.r10.s64 = 7;
	// bne cr6,0x822a6274
	if (!ctx.cr6.eq) goto loc_822A6274;
	// li r10,8
	ctx.r10.s64 = 8;
loc_822A6274:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r10,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r10.u8);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2065
	ctx.r11.s64 = 2065;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6f48
	ctx.lr = 0x822A62A0;
	sub_822D6F48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A62BC"))) PPC_WEAK_FUNC(sub_822A62BC);
PPC_FUNC_IMPL(__imp__sub_822A62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A62C0"))) PPC_WEAK_FUNC(sub_822A62C0);
PPC_FUNC_IMPL(__imp__sub_822A62C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x822A62C8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a63d8
	if (!ctx.cr6.eq) goto loc_822A63D8;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a63d4
	if (ctx.cr6.eq) goto loc_822A63D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// li r24,6173
	ctx.r24.s64 = 6173;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_822A6314:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r7,13(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 13);
	// clrlwi r6,r7,28
	ctx.r6.u64 = ctx.r7.u32 & 0xF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822a63b8
	if (!ctx.cr6.eq) goto loc_822A63B8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a63b8
	if (ctx.cr6.eq) goto loc_822A63B8;
	// stw r27,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8234beb0
	ctx.lr = 0x822A6354;
	sub_8234BEB0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lbz r4,157(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stb r26,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r26.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// bne cr6,0x822a6398
	if (!ctx.cr6.eq) goto loc_822A6398;
	// li r11,8
	ctx.r11.s64 = 8;
loc_822A6398:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,2868(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stb r11,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r11.u8);
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// bl 0x8234f138
	ctx.lr = 0x822A63B8;
	sub_8234F138(ctx, base);
loc_822A63B8:
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822a6314
	if (ctx.cr6.lt) goto loc_822A6314;
loc_822A63D4:
	// stb r26,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r26.u8);
loc_822A63D8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A63E4"))) PPC_WEAK_FUNC(sub_822A63E4);
PPC_FUNC_IMPL(__imp__sub_822A63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A63E8"))) PPC_WEAK_FUNC(sub_822A63E8);
PPC_FUNC_IMPL(__imp__sub_822A63E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A63F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6470
	if (ctx.cr6.eq) goto loc_822A6470;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a6468
	if (ctx.cr6.eq) goto loc_822A6468;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,108
	ctx.r29.s64 = ctx.r30.s64 + 108;
loc_822A6420:
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r11,60(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r6,13(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 13);
	// clrlwi r5,r6,28
	ctx.r5.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822a644c
	if (!ctx.cr6.eq) goto loc_822A644C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a644c
	if (ctx.cr6.eq) goto loc_822A644C;
	// bl 0x8234ca90
	ctx.lr = 0x822A644C;
	sub_8234CA90(ctx, base);
loc_822A644C:
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lbz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x822a6420
	if (ctx.cr6.lt) goto loc_822A6420;
loc_822A6468:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,156(r30)
	PPC_STORE_U8(ctx.r30.u32 + 156, ctx.r11.u8);
loc_822A6470:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A6478"))) PPC_WEAK_FUNC(sub_822A6478);
PPC_FUNC_IMPL(__imp__sub_822A6478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A6480;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,15332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15332);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,604(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A64B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r7,325(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 325);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f0,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-1472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1472);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,6240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// beq cr6,0x822a6504
	if (ctx.cr6.eq) goto loc_822A6504;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x822a6514
	goto loc_822A6514;
loc_822A6504:
	// lfs f13,312(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f0,f7,f0,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_822A6514:
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
loc_822A6528:
	// addi r5,r30,25
	ctx.r5.s64 = ctx.r30.s64 + 25;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mulli r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 * 76;
	// lfs f6,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lfs f13,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// bne cr6,0x822a655c
	if (!ctx.cr6.eq) goto loc_822A655C;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a6570
	goto loc_822A6570;
loc_822A655C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x822a656c
	if (!ctx.cr6.eq) goto loc_822A656C;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a6570
	goto loc_822A6570;
loc_822A656C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_822A6570:
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// fmuls f5,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmuls f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A658C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x822a6528
	if (ctx.cr6.lt) goto loc_822A6528;
	// lbz r9,324(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 324);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a65c4
	if (ctx.cr6.eq) goto loc_822A65C4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d7148
	ctx.lr = 0x822A65B0;
	sub_822D7148(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,-700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f4,16(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_822A65C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
loc_822A65CC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f3,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f1,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822A6600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,152
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 152, ctx.xer);
	// blt cr6,0x822a65cc
	if (ctx.cr6.lt) goto loc_822A65CC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A6620"))) PPC_WEAK_FUNC(sub_822A6620);
PPC_FUNC_IMPL(__imp__sub_822A6620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A6628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x822a67ec
	if (ctx.cr6.gt) goto loc_822A67EC;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,26204
	ctx.r12.s64 = ctx.r12.s64 + 26204;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822A668C;
	case 1:
		goto loc_822A668C;
	case 2:
		goto loc_822A668C;
	case 3:
		goto loc_822A668C;
	case 4:
		goto loc_822A668C;
	case 5:
		goto loc_822A668C;
	case 6:
		goto loc_822A66C4;
	case 7:
		goto loc_822A66CC;
	case 8:
		goto loc_822A6718;
	case 9:
		goto loc_822A6764;
	case 10:
		goto loc_822A6798;
	case 11:
		goto loc_822A67CC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,26252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	// lwz r17,26252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	// lwz r17,26252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	// lwz r17,26252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	// lwz r17,26252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	// lwz r17,26252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26252);
	// lwz r17,26308(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26308);
	// lwz r17,26316(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26316);
	// lwz r17,26392(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26392);
	// lwz r17,26468(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26468);
	// lwz r17,26520(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26520);
	// lwz r17,26572(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
loc_822A668C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A66AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a66c4
	if (!ctx.cr6.eq) goto loc_822A66C4;
loc_822A66B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822A66C4:
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r8,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r8.u32);
loc_822A66CC:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
loc_822A66D4:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a6700
	if (ctx.cr6.eq) goto loc_822A6700;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822A66F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a66b8
	if (ctx.cr6.eq) goto loc_822A66B8;
loc_822A6700:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x822a66d4
	if (ctx.cr6.lt) goto loc_822A66D4;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r3,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r3.u32);
loc_822A6718:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r29,108
	ctx.r31.s64 = ctx.r29.s64 + 108;
loc_822A6720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a674c
	if (ctx.cr6.eq) goto loc_822A674C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A6740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a66b8
	if (ctx.cr6.eq) goto loc_822A66B8;
loc_822A674C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x822a6720
	if (ctx.cr6.lt) goto loc_822A6720;
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r7,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r7.u32);
loc_822A6764:
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// li r9,2
	ctx.r9.s64 = 2;
loc_822A676C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a6780
	if (ctx.cr6.eq) goto loc_822A6780;
	// stb r28,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r28.u8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_822A6780:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a676c
	if (!ctx.cr6.eq) goto loc_822A676C;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r6,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r6.u32);
loc_822A6798:
	// addi r11,r29,108
	ctx.r11.s64 = ctx.r29.s64 + 108;
	// li r9,2
	ctx.r9.s64 = 2;
loc_822A67A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a67b4
	if (ctx.cr6.eq) goto loc_822A67B4;
	// stb r28,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r28.u8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_822A67B4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a67a0
	if (!ctx.cr6.eq) goto loc_822A67A0;
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r5,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r5.u32);
loc_822A67CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// stw r4,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r4.u32);
loc_822A67EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A67F8"))) PPC_WEAK_FUNC(sub_822A67F8);
PPC_FUNC_IMPL(__imp__sub_822A67F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A680C"))) PPC_WEAK_FUNC(sub_822A680C);
PPC_FUNC_IMPL(__imp__sub_822A680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6810"))) PPC_WEAK_FUNC(sub_822A6810);
PPC_FUNC_IMPL(__imp__sub_822A6810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f12,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// beq cr6,0x822a6870
	if (ctx.cr6.eq) goto loc_822A6870;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822a6868
	if (ctx.cr6.eq) goto loc_822A6868;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822a6868
	if (ctx.cr6.eq) goto loc_822A6868;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a686c
	if (ctx.cr6.eq) goto loc_822A686C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822a6870
	if (ctx.cr6.eq) goto loc_822A6870;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x822a6870
	goto loc_822A6870;
loc_822A6868:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_822A686C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_822A6870:
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// li r10,3
	ctx.r10.s64 = 3;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822A6880:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a6894
	if (ctx.cr6.eq) goto loc_822A6894;
	// fabs f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x822a689c
	goto loc_822A689C;
loc_822A6894:
	// lfs f8,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822A689C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a6880
	if (!ctx.cr6.eq) goto loc_822A6880;
	// fabs f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfd f0,-4840(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfd f13,-1600(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// lfs f12,1940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1940);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f10,f2
	ctx.f10.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fdivs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f12,f1,f0,f12
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f12,f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// stfs f9,44(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f0,f11,f0,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f0,f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A6958"))) PPC_WEAK_FUNC(sub_822A6958);
PPC_FUNC_IMPL(__imp__sub_822A6958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f13,224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x822a6974
	if (!ctx.cr6.gt) goto loc_822A6974;
loc_822A6968:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822A6974:
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822a6968
	if (ctx.cr6.lt) goto loc_822A6968;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,2600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822a69a4
	if (!ctx.cr6.lt) goto loc_822A69A4;
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// blr 
	return;
loc_822A69A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822a69dc
	if (!ctx.cr6.gt) goto loc_822A69DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// blr 
	return;
loc_822A69DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A69E8"))) PPC_WEAK_FUNC(sub_822A69E8);
PPC_FUNC_IMPL(__imp__sub_822A69E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f5,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f1,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f8,f4,f0,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f7,f3,f0,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f6,f2,f13,f10
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f9,f5,f13,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f9.f64));
	// bl 0x822a6958
	ctx.lr = 0x822A6A4C;
	sub_822A6958(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f0,f1
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmadds f13,f1,f6,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f9,f11,f12,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f8,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f8,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A6A9C"))) PPC_WEAK_FUNC(sub_822A6A9C);
PPC_FUNC_IMPL(__imp__sub_822A6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6AA0"))) PPC_WEAK_FUNC(sub_822A6AA0);
PPC_FUNC_IMPL(__imp__sub_822A6AA0) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// bl 0x8234beb0
	ctx.lr = 0x822A6AC8;
	sub_8234BEB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a6ae0
	if (!ctx.cr6.eq) goto loc_822A6AE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8234beb0
	ctx.lr = 0x822A6AE0;
	sub_8234BEB0(ctx, base);
loc_822A6AE0:
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

__attribute__((alias("__imp__sub_822A6AF4"))) PPC_WEAK_FUNC(sub_822A6AF4);
PPC_FUNC_IMPL(__imp__sub_822A6AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A6AF8"))) PPC_WEAK_FUNC(sub_822A6AF8);
PPC_FUNC_IMPL(__imp__sub_822A6AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r7,140(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,-26552
	ctx.r11.s64 = ctx.r11.s64 + -26552;
	// oris r9,r7,16
	ctx.r9.u64 = ctx.r7.u64 | 1048576;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r9,8
	ctx.r6.u64 = ctx.r9.u64 | 8;
	// lfs f13,240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r10,176
	ctx.r3.s64 = ctx.r10.s64 + 176;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r9.u32);
	// stb r8,146(r4)
	PPC_STORE_U8(ctx.r4.u32 + 146, ctx.r8.u8);
	// lfs f8,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f13,f10,f0,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fdivs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r6.u32);
	// fmadds f0,f9,f11,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f4,84(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822A6B78"))) PPC_WEAK_FUNC(sub_822A6B78);
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

__attribute__((alias("__imp__sub_822A6FB8"))) PPC_WEAK_FUNC(sub_822A6FB8);
PPC_FUNC_IMPL(__imp__sub_822A6FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x822A6FC0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r10,-1822(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1822);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r31,r10,1160
	ctx.r31.s64 = ctx.r10.s64 + 1160;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bne cr6,0x822a74c0
	if (!ctx.cr6.eq) goto loc_822A74C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// stb r10,-1822(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1822, ctx.r10.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-26472
	ctx.r29.s64 = ctx.r11.s64 + -26472;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,7080
	ctx.r25.s64 = ctx.r11.s64 + 7080;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r11,7060
	ctx.r24.s64 = ctx.r11.s64 + 7060;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,7036
	ctx.r23.s64 = ctx.r11.s64 + 7036;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,7012
	ctx.r22.s64 = ctx.r11.s64 + 7012;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r11,6996
	ctx.r21.s64 = ctx.r11.s64 + 6996;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r20,r11,6976
	ctx.r20.s64 = ctx.r11.s64 + 6976;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r19,r11,6956
	ctx.r19.s64 = ctx.r11.s64 + 6956;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r18,r11,6952
	ctx.r18.s64 = ctx.r11.s64 + 6952;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r17,r11,6948
	ctx.r17.s64 = ctx.r11.s64 + 6948;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r16,r11,6944
	ctx.r16.s64 = ctx.r11.s64 + 6944;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r15,r11,6940
	ctx.r15.s64 = ctx.r11.s64 + 6940;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r14,r11,6936
	ctx.r14.s64 = ctx.r11.s64 + 6936;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r11,6932
	ctx.r9.s64 = ctx.r11.s64 + 6932;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r11,6920
	ctx.r8.s64 = ctx.r11.s64 + 6920;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r7,r11,6896
	ctx.r7.s64 = ctx.r11.s64 + 6896;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r6,r11,6868
	ctx.r6.s64 = ctx.r11.s64 + 6868;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r5,r11,6848
	ctx.r5.s64 = ctx.r11.s64 + 6848;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r11,6832
	ctx.r4.s64 = ctx.r11.s64 + 6832;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r3,r11,6816
	ctx.r3.s64 = ctx.r11.s64 + 6816;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r11,r11,6800
	ctx.r11.s64 = ctx.r11.s64 + 6800;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r11,6780
	ctx.r9.s64 = ctx.r11.s64 + 6780;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r11,6716
	ctx.r8.s64 = ctx.r11.s64 + 6716;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_822A70E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229fdb8
	ctx.lr = 0x822A70F0;
	sub_8229FDB8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8259d1b0
	ctx.lr = 0x822A7100;
	sub_8259D1B0(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82351720
	ctx.lr = 0x822A7130;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	ctx.lr = 0x822A715C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
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
	ctx.lr = 0x822A7188;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
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
	ctx.lr = 0x822A71B4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
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
	ctx.lr = 0x822A71E0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
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
	ctx.lr = 0x822A720C;
	sub_82351720(ctx, base);
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A7238;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
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
	ctx.lr = 0x822A7264;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
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
	ctx.lr = 0x822A7290;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A72BC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A72E8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A7314;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A7340;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A736C;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A7398;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A73C4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A73F0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A741C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A7448;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A7474;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A74A0;
	sub_82351720(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,212
	ctx.r31.s64 = ctx.r31.s64 + 212;
	// addi r6,r7,1272
	ctx.r6.s64 = ctx.r7.s64 + 1272;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a70e8
	if (ctx.cr6.lt) goto loc_822A70E8;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// rotlwi r31,r7,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_822A74C0:
	// lwz r5,228(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// lwz r4,604(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 604);
	// lwz r11,336(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a74e4
	if (!ctx.cr6.gt) goto loc_822A74E4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r27,6
	ctx.r27.s64 = 6;
	// bge cr6,0x822a74e4
	if (!ctx.cr6.lt) goto loc_822A74E4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_822A74E4:
	// mulli r11,r27,212
	ctx.r11.s64 = ctx.r27.s64 * 212;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7500"))) PPC_WEAK_FUNC(sub_822A7500);
PPC_FUNC_IMPL(__imp__sub_822A7500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822A7508;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bba0
	ctx.lr = 0x822A7510;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f31,2864(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2868(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lfd f26,7104(r7)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 7104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f27,-1472(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1472);
	ctx.f27.f64 = double(temp.f32);
	// lfd f28,7096(r9)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r9.u32 + 7096);
	// lfs f29,-5892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5892);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x822a7570
	if (ctx.cr6.eq) goto loc_822A7570;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822a7570
	if (ctx.cr6.eq) goto loc_822A7570;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a7570
	if (ctx.cr6.eq) goto loc_822A7570;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7678
	if (!ctx.cr6.eq) goto loc_822A7678;
loc_822A7570:
	// lbz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x822a760c
	if (!ctx.cr6.gt) goto loc_822A760C;
	// lwz r8,6732(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6732);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x822a7608
	if (!ctx.cr6.gt) goto loc_822A7608;
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a75b8
	if (!ctx.cr6.eq) goto loc_822A75B8;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822a75b8
	if (!ctx.cr6.eq) goto loc_822A75B8;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// b 0x822a75c0
	goto loc_822A75C0;
loc_822A75B8:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
loc_822A75C0:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lfs f1,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// lfs f12,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f1,f12
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// bl 0x82348a98
	ctx.lr = 0x822A75E0;
	sub_82348A98(ctx, base);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f3,128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A75FC;
	sub_82348A98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r5.u32);
	// b 0x822a7678
	goto loc_822A7678;
loc_822A7608:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
loc_822A760C:
	// bge cr6,0x822a7678
	if (!ctx.cr6.lt) goto loc_822A7678;
	// lwz r4,6732(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6732);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x822a7678
	if (ctx.cr6.lt) goto loc_822A7678;
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stfs f1,336(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lfs f11,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f3,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsel f0,f10,f28,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
	// fsubs f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fsel f2,f9,f0,f26
	ctx.f2.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f26.f64;
	// bl 0x82348a98
	ctx.lr = 0x822A765C;
	sub_82348A98(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// lfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f3,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A7678;
	sub_82348A98(ctx, base);
loc_822A7678:
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a7af4
	if (ctx.cr6.eq) goto loc_822A7AF4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7698;
	sub_8210B3C8(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lfs f8,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fadds f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// stfs f7,256(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822a7af4
	if (ctx.cr6.gt) goto loc_822A7AF4;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,30412
	ctx.r12.s64 = ctx.r12.s64 + 30412;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822A76E4;
	case 1:
		goto loc_822A77E8;
	case 2:
		goto loc_822A78C4;
	case 3:
		goto loc_822A793C;
	case 4:
		goto loc_822A79E4;
	case 5:
		goto loc_822A7A90;
	default:
		__builtin_unreachable();
	}
	// lwz r17,30436(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30436);
	// lwz r17,30696(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30696);
	// lwz r17,30916(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30916);
	// lwz r17,31036(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31036);
	// lwz r17,31204(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31204);
	// lwz r17,31376(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31376);
loc_822A76E4:
	// addi r29,r31,264
	ctx.r29.s64 = ctx.r31.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A76F0;
	sub_82348B70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a773c
	if (!ctx.cr6.eq) goto loc_822A773C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7704;
	sub_8210B3C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A770C;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7714;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A7720;
	sub_8234C900(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b90
	ctx.lr = 0x822A7728;
	sub_82348B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A7734;
	sub_82348B90(ctx, base);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x822a7af4
	goto loc_822A7AF4;
loc_822A773C:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f2,336(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stw r6,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r6.u32);
	// lfs f6,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// lfs f3,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f5,f0,f29
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsel f0,f5,f28,f0
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
	// fsubs f4,f0,f27
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fsel f1,f4,f0,f26
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f26.f64;
	// bl 0x82348a98
	ctx.lr = 0x822A7780;
	sub_82348A98(ctx, base);
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// lfs f3,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A779C;
	sub_82348A98(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stfs f30,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822a77b4
	if (ctx.cr6.gt) goto loc_822A77B4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x822a77c0
	goto loc_822A77C0;
loc_822A77B4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822a77c0
	if (ctx.cr6.lt) goto loc_822A77C0;
	// li r11,6
	ctx.r11.s64 = 6;
loc_822A77C0:
	// addi r4,r11,39
	ctx.r4.s64 = ctx.r11.s64 + 39;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// lfs f3,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f1,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A77E4;
	sub_82348A98(ctx, base);
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
loc_822A77E8:
	// addi r27,r31,264
	ctx.r27.s64 = ctx.r31.s64 + 264;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A77F4;
	sub_82348B70(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a78a8
	if (!ctx.cr6.eq) goto loc_822A78A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7808;
	sub_8210B3C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82348ae0
	ctx.lr = 0x822A7814;
	sub_82348AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A781C;
	sub_8210B3C8(ctx, base);
	// addi r29,r31,288
	ctx.r29.s64 = ctx.r31.s64 + 288;
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348ae0
	ctx.lr = 0x822A782C;
	sub_82348AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7834;
	sub_8210B3C8(ctx, base);
	// addi r28,r31,312
	ctx.r28.s64 = ctx.r31.s64 + 312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A7840;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7848;
	sub_8210B3C8(ctx, base);
	// lfs f3,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fadds f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f2,260(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A785C;
	sub_82348B90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A7868;
	sub_82348B90(ctx, base);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lfs f0,1216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8259c328
	ctx.lr = 0x822A788C;
	sub_8259C328(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82348b90
	ctx.lr = 0x822A7898;
	sub_82348B90(ctx, base);
	// frsp f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// b 0x822a7af4
	goto loc_822A7AF4;
loc_822A78A8:
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x82348b70
	ctx.lr = 0x822A78B0;
	sub_82348B70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a7af0
	if (!ctx.cr6.eq) goto loc_822A7AF0;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
loc_822A78C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A78CC;
	sub_8210B3C8(ctx, base);
	// lfs f10,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f9,260(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x822A78E0;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A78EC;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A78F4;
	sub_82348B70(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822a7af0
	if (!ctx.cr6.eq) goto loc_822A7AF0;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lfs f8,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f7,152(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// lfs f0,1216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// bl 0x8259c328
	ctx.lr = 0x822A7920;
	sub_8259C328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82348b90
	ctx.lr = 0x822A792C;
	sub_82348B90(ctx, base);
	// frsp f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f31.f64));
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f4,252(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// b 0x822a7af4
	goto loc_822A7AF4;
loc_822A793C:
	// addi r29,r31,264
	ctx.r29.s64 = ctx.r31.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A7948;
	sub_82348B70(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822a7994
	if (!ctx.cr6.eq) goto loc_822A7994;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A795C;
	sub_8210B3C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A7964;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A796C;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A7978;
	sub_8234C900(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b90
	ctx.lr = 0x822A7980;
	sub_82348B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A798C;
	sub_82348B90(ctx, base);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x822a7af4
	goto loc_822A7AF4;
loc_822A7994:
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f31,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A79A8;
	sub_82348B90(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stfs f1,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// bl 0x82348a98
	ctx.lr = 0x822A79C8;
	sub_82348A98(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f3,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A79E4;
	sub_82348A98(ctx, base);
loc_822A79E4:
	// addi r29,r31,264
	ctx.r29.s64 = ctx.r31.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A79F0;
	sub_82348B70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a7a3c
	if (!ctx.cr6.eq) goto loc_822A7A3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7A04;
	sub_8210B3C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A7A0C;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7A14;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A7A20;
	sub_8234C900(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b90
	ctx.lr = 0x822A7A28;
	sub_82348B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A7A34;
	sub_82348B90(ctx, base);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x822a7af4
	goto loc_822A7AF4;
loc_822A7A3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b90
	ctx.lr = 0x822A7A44;
	sub_82348B90(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f1,336(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A7A5C;
	sub_82348B90(ctx, base);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,208(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A7A74;
	sub_82348A98(ctx, base);
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f3,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A7A90;
	sub_82348A98(ctx, base);
loc_822A7A90:
	// addi r29,r31,264
	ctx.r29.s64 = ctx.r31.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A7A9C;
	sub_82348B70(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822a7af0
	if (!ctx.cr6.eq) goto loc_822A7AF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7AB0;
	sub_8210B3C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82348ae0
	ctx.lr = 0x822A7ABC;
	sub_82348AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A7AC4;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348ae0
	ctx.lr = 0x822A7AD4;
	sub_82348AE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348b90
	ctx.lr = 0x822A7ADC;
	sub_82348B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82348b90
	ctx.lr = 0x822A7AE8;
	sub_82348B90(ctx, base);
	// stfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x822a7af4
	goto loc_822A7AF4;
loc_822A7AF0:
	// stw r26,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r26.u32);
loc_822A7AF4:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822a7b14
	if (ctx.cr6.eq) goto loc_822A7B14;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbec
	ctx.lr = 0x822A7B10;
	__restfpr_26(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_822A7B14:
	// stw r26,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbec
	ctx.lr = 0x822A7B24;
	__restfpr_26(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A7B28"))) PPC_WEAK_FUNC(sub_822A7B28);
PPC_FUNC_IMPL(__imp__sub_822A7B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lfd f13,-4840(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfd f12,-1600(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -1600);
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f12,f0,f0,f12
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_822A7B58:
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x822a7b78
	if (!ctx.cr6.gt) goto loc_822A7B78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// blt cr6,0x822a7b58
	if (ctx.cr6.lt) goto loc_822A7B58;
	// blr 
	return;
loc_822A7B78:
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r6,r3
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fdivs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fmadds f1,f5,f8,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A7BB8"))) PPC_WEAK_FUNC(sub_822A7BB8);
PPC_FUNC_IMPL(__imp__sub_822A7BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822a7bd8
	if (ctx.cr6.gt) goto loc_822A7BD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822a7be4
	goto loc_822A7BE4;
loc_822A7BD8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822a7be4
	if (ctx.cr6.lt) goto loc_822A7BE4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_822A7BE4:
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f6,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f6,-96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f6,-92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// addi r7,r11,-9136
	ctx.r7.s64 = ctx.r11.s64 + -9136;
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// ld r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 8;
	// ld r5,-104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ldx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// std r11,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r11.u64);
	// lfs f10,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f10.f64 = double(temp.f32);
	// std r5,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r5.u64);
	// lfs f9,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f8.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f7,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f7.f64 = double(temp.f32);
	// std r4,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// lfs f0,-15148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// ldx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r6.u32);
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f12,4788(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4788);
	ctx.f12.f64 = double(temp.f32);
loc_822A7C60:
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// ld r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// ld r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r4,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r4.u64);
	// lfs f31,-100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f31.f64 = double(temp.f32);
	// std r6,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r6.u64);
	// lfs f3,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f3.f64 = double(temp.f32);
	// std r8,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r8.u64);
	// lfs f4,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f4.f64 = double(temp.f32);
	// std r7,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r7.u64);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r6,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r6.u64);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lfd f2,-88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lfd f13,-80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f1,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f5,f12
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmadds f1,f4,f11,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmuls f30,f11,f11
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f3,f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f4,f30,f11
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fmuls f31,f9,f5
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f2,f11,f0,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f1,f3,f0,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f5,f8,f4,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f2.f64));
	// stfs f5,-92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fmadds f11,f7,f4,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// ld r5,-96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// std r5,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, ctx.r5.u64);
	// ld r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r4.u64);
	// lfs f5,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f5,f13
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f1,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f2,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fmadds f1,f3,f13,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f1,f11,f0,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f13,f2,f0,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f11,f7,f4,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmadds f5,f8,f4,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f5,-92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r5,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r5.u64);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lfd f2,-72(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// lfs f4,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r4,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r4.u64);
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// lfs f31,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f3,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f3.f64 = double(temp.f32);
	// std r6,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r6.u64);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f1,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// lfd f13,-64(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmuls f13,f5,f12
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmadds f3,f3,f11,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f30,f11,f11
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f31,f4,f13,f31
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f4,f30,f11
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f1,f3,f0,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f2,f11,f0,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f11,f7,f4,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f5,f8,f4,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f2.f64));
	// stfs f5,-92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r5,-96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// ld r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r4.u64);
	// lfs f5,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f5,f13
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f1,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f2,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fmadds f2,f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fmadds f1,f3,f13,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f1,f11,f0,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f13,f2,f0,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f11,f7,f4,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmadds f5,f8,f4,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f5,-92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f4,-56(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// ld r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r5,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r5.u64);
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// std r4,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r4.u64);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// lfs f30,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f30.f64 = double(temp.f32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lfs f1,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f2,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f2.f64 = double(temp.f32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// addi r6,r11,5
	ctx.r6.s64 = ctx.r11.s64 + 5;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfd f11,-48(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfd f3,-40(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f31,f5
	ctx.f31.f64 = double(float(ctx.f5.f64));
	// lfs f5,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f29,f11,f11
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f1,f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f2,f2,f11,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f4,f29,f11
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f30,f9,f5
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmadds f11,f2,f0,f5
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f5,f1,f0,f30
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fmadds f1,f8,f4,f11
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,-92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fmadds f2,f7,f4,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f2,-96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// ld r5,-96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// ld r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r4.u64);
	// lfs f4,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f4.f64 = double(temp.f32);
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// lfs f30,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f4,f13
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f1,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f2,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// std r4,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r4.u64);
	// fmadds f1,f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fmadds f2,f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f31,f9,f5
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f2,f0,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f11,f1,f0,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f5,f7,f4,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f5,-96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmadds f4,f8,f4,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f4,-92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r7,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r7.u64);
	// ld r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r5,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r5.u64);
	// lfs f2,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f2.f64 = double(temp.f32);
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// lfs f1,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f1.f64 = double(temp.f32);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// lfd f11,-32(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// lfs f31,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// lfs f5,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmadds f1,f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f30,f11,f11
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f31,f9,f5
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f4,f30,f11
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f1,f11,f0,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f11,f2,f0,f31
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f5,f7,f4,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f5,-96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmadds f4,f8,f4,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f4,-92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// std r7,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r7.u64);
	// ld r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r6,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r6.u64);
	// lfs f5,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f5,f13
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// std r5,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r5.u64);
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f1,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f2,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fmadds f1,f3,f13,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f1,f11,f0,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f13,f2,f0,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f11,f7,f4,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmadds f5,f8,f4,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f5,-92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r4,-96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r4,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r4.u64);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne cr6,0x822a7c60
	if (!ctx.cr6.eq) goto loc_822A7C60;
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A8140"))) PPC_WEAK_FUNC(sub_822A8140);
PPC_FUNC_IMPL(__imp__sub_822A8140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822A8148;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8174
	if (ctx.cr6.eq) goto loc_822A8174;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a8174
	if (ctx.cr6.eq) goto loc_822A8174;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
loc_822A8174:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,-26456
	ctx.r29.s64 = ctx.r11.s64 + -26456;
	// lfs f31,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x822a822c
	if (!ctx.cr6.eq) goto loc_822A822C;
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822a81d8
	if (ctx.cr6.gt) goto loc_822A81D8;
	// bso cr6,0x822a81d8
	if (ctx.cr6.so) goto loc_822A81D8;
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a81d8
	if (!ctx.cr6.eq) goto loc_822A81D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A81BC;
	sub_8210B3C8(ctx, base);
	// lfs f0,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822a822c
	if (!ctx.cr6.lt) goto loc_822A822C;
	// stfs f31,344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// b 0x822a822c
	goto loc_822A822C;
loc_822A81D8:
	// lfs f13,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x822a8224
	if (!ctx.cr6.eq) goto loc_822A8224;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822a8224
	if (!ctx.cr6.eq) goto loc_822A8224;
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x822a8224
	if (ctx.cr6.lt) goto loc_822A8224;
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// lfs f2,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f3,128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82348a98
	ctx.lr = 0x822A821C;
	sub_82348A98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r5.u32);
loc_822A8224:
	// lfs f0,-8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
loc_822A822C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822a824c
	if (ctx.cr6.eq) goto loc_822A824C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a82b4
	if (ctx.cr6.eq) goto loc_822A82B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_822A824C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A8254;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,348
	ctx.r30.s64 = ctx.r31.s64 + 348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A8260;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A8268;
	sub_82348B70(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822a8298
	if (!ctx.cr6.eq) goto loc_822A8298;
	// bl 0x82348b90
	ctx.lr = 0x822A827C;
	sub_82348B90(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f31,184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_822A8298:
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82348a98
	ctx.lr = 0x822A82AC;
	sub_82348A98(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
loc_822A82B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x822A82BC;
	sub_8210B3C8(ctx, base);
	// addi r30,r31,348
	ctx.r30.s64 = ctx.r31.s64 + 348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c900
	ctx.lr = 0x822A82C8;
	sub_8234C900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348b70
	ctx.lr = 0x822A82D0;
	sub_82348B70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8304
	if (!ctx.cr6.eq) goto loc_822A8304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348b90
	ctx.lr = 0x822A82E4;
	sub_82348B90(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f1,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f9,184(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_822A8304:
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A8314"))) PPC_WEAK_FUNC(sub_822A8314);
PPC_FUNC_IMPL(__imp__sub_822A8314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8318"))) PPC_WEAK_FUNC(sub_822A8318);
PPC_FUNC_IMPL(__imp__sub_822A8318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822A8320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,15284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a8378
	if (!ctx.cr6.gt) goto loc_822A8378;
	// addi r30,r28,14960
	ctx.r30.s64 = ctx.r28.s64 + 14960;
loc_822A833C:
	// li r31,32
	ctx.r31.s64 = 32;
loc_822A8340:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A8358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// blt cr6,0x822a8340
	if (ctx.cr6.lt) goto loc_822A8340;
	// lwz r8,15284(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15284);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822a833c
	if (ctx.cr6.lt) goto loc_822A833C;
loc_822A8378:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A8384"))) PPC_WEAK_FUNC(sub_822A8384);
PPC_FUNC_IMPL(__imp__sub_822A8384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8388"))) PPC_WEAK_FUNC(sub_822A8388);
PPC_FUNC_IMPL(__imp__sub_822A8388) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,15816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a83c0
	if (ctx.cr6.eq) goto loc_822A83C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A83C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A83C0:
	// stw r31,15816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15816, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A83D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822A83F0"))) PPC_WEAK_FUNC(sub_822A83F0);
PPC_FUNC_IMPL(__imp__sub_822A83F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f11,-4840(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f10,-1600(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f13,f8,f11,f13
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f1,f13,f13,f10
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// ori r7,r8,28632
	ctx.r7.u64 = ctx.r8.u64 | 28632;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r9,r10,28636
	ctx.r9.u64 = ctx.r10.u64 | 28636;
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfsx f9,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f6,f13,f9,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f12.f64));
	// fsubs f7,f2,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fdivs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f4,f11,f13
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f0,f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A8484"))) PPC_WEAK_FUNC(sub_822A8484);
PPC_FUNC_IMPL(__imp__sub_822A8484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8488"))) PPC_WEAK_FUNC(sub_822A8488);
PPC_FUNC_IMPL(__imp__sub_822A8488) {
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
	// lwz r11,18100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bgt cr6,0x822a8860
	if (ctx.cr6.gt) goto loc_822A8860;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r30,r10,-18560
	ctx.r30.s64 = ctx.r10.s64 + -18560;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-31536
	ctx.r12.s64 = ctx.r12.s64 + -31536;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822A85AC;
	case 1:
		goto loc_822A85AC;
	case 2:
		goto loc_822A85D8;
	case 3:
		goto loc_822A8604;
	case 4:
		goto loc_822A8630;
	case 5:
		goto loc_822A865C;
	case 6:
		goto loc_822A8688;
	case 7:
		goto loc_822A86B4;
	case 8:
		goto loc_822A86E0;
	case 9:
		goto loc_822A870C;
	case 10:
		goto loc_822A8738;
	case 11:
		goto loc_822A8764;
	case 12:
		goto loc_822A8800;
	case 13:
		goto loc_822A882C;
	case 14:
		goto loc_822A8860;
	case 15:
		goto loc_822A8860;
	case 16:
		goto loc_822A8860;
	case 17:
		goto loc_822A8860;
	case 18:
		goto loc_822A8860;
	case 19:
		goto loc_822A8860;
	case 20:
		goto loc_822A8860;
	case 21:
		goto loc_822A8860;
	case 22:
		goto loc_822A8860;
	case 23:
		goto loc_822A8860;
	case 24:
		goto loc_822A8860;
	case 25:
		goto loc_822A8860;
	case 26:
		goto loc_822A8860;
	case 27:
		goto loc_822A8858;
	case 28:
		goto loc_822A8860;
	case 29:
		goto loc_822A8860;
	case 30:
		goto loc_822A8860;
	case 31:
		goto loc_822A8860;
	case 32:
		goto loc_822A8860;
	case 33:
		goto loc_822A8860;
	case 34:
		goto loc_822A8860;
	case 35:
		goto loc_822A8860;
	case 36:
		goto loc_822A8860;
	case 37:
		goto loc_822A8860;
	case 38:
		goto loc_822A8860;
	case 39:
		goto loc_822A8860;
	case 40:
		goto loc_822A8860;
	case 41:
		goto loc_822A8860;
	case 42:
		goto loc_822A8860;
	case 43:
		goto loc_822A8860;
	case 44:
		goto loc_822A8860;
	case 45:
		goto loc_822A8860;
	case 46:
		goto loc_822A8860;
	case 47:
		goto loc_822A8860;
	case 48:
		goto loc_822A8860;
	case 49:
		goto loc_822A8860;
	case 50:
		goto loc_822A8860;
	case 51:
		goto loc_822A8860;
	case 52:
		goto loc_822A8860;
	case 53:
		goto loc_822A8860;
	case 54:
		goto loc_822A85AC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-31316(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	// lwz r17,-31316(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	// lwz r17,-31272(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31272);
	// lwz r17,-31228(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31228);
	// lwz r17,-31184(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31184);
	// lwz r17,-31140(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31140);
	// lwz r17,-31096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31096);
	// lwz r17,-31052(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31052);
	// lwz r17,-31008(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31008);
	// lwz r17,-30964(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30964);
	// lwz r17,-30920(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30920);
	// lwz r17,-30876(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30876);
	// lwz r17,-30720(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30720);
	// lwz r17,-30676(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30676);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30632(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30632);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-30624(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30624);
	// lwz r17,-31316(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
loc_822A85AC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7424
	ctx.r4.s64 = ctx.r11.s64 + 7424;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A85C4;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17716, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r11.u32);
loc_822A85D8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7404
	ctx.r4.s64 = ctx.r11.s64 + 7404;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A85F0;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17720, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r10.u32);
loc_822A8604:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7384
	ctx.r4.s64 = ctx.r11.s64 + 7384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A861C;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17724, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r9.u32);
loc_822A8630:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7364
	ctx.r4.s64 = ctx.r11.s64 + 7364;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A8648;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17728, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r8,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r8.u32);
loc_822A865C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7344
	ctx.r4.s64 = ctx.r11.s64 + 7344;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A8674;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17732, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r7,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r7.u32);
loc_822A8688:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7324
	ctx.r4.s64 = ctx.r11.s64 + 7324;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A86A0;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17736, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r6,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r6.u32);
loc_822A86B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7308
	ctx.r4.s64 = ctx.r11.s64 + 7308;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A86CC;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17740, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r5,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r5.u32);
loc_822A86E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A86F8;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17744, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r4,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r4.u32);
loc_822A870C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7268
	ctx.r4.s64 = ctx.r11.s64 + 7268;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A8724;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17748, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r3,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r3.u32);
loc_822A8738:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7248
	ctx.r4.s64 = ctx.r11.s64 + 7248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A8750;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17752, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r11.u32);
loc_822A8764:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822a87d4
	if (ctx.cr6.gt) goto loc_822A87D4;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-30828
	ctx.r12.s64 = ctx.r12.s64 + -30828;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822A87A4;
	case 1:
		goto loc_822A87B0;
	case 2:
		goto loc_822A87BC;
	case 3:
		goto loc_822A87C8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-30812(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30812);
	// lwz r17,-30800(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30800);
	// lwz r17,-30788(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30788);
	// lwz r17,-30776(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30776);
loc_822A87A4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// b 0x822a87dc
	goto loc_822A87DC;
loc_822A87B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7208
	ctx.r4.s64 = ctx.r11.s64 + 7208;
	// b 0x822a87dc
	goto loc_822A87DC;
loc_822A87BC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7188
	ctx.r4.s64 = ctx.r11.s64 + 7188;
	// b 0x822a87dc
	goto loc_822A87DC;
loc_822A87C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// b 0x822a87dc
	goto loc_822A87DC;
loc_822A87D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
loc_822A87DC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A87EC;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17756, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r10.u32);
loc_822A8800:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7132
	ctx.r4.s64 = ctx.r11.s64 + 7132;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A8818;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17764, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r9,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r9.u32);
loc_822A882C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,7112
	ctx.r4.s64 = ctx.r11.s64 + 7112;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822A8844;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17760, ctx.r3.u32);
	// beq cr6,0x822a8860
	if (ctx.cr6.eq) goto loc_822A8860;
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r8,18100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18100, ctx.r8.u32);
loc_822A8858:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a8864
	goto loc_822A8864;
loc_822A8860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A8864:
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

__attribute__((alias("__imp__sub_822A887C"))) PPC_WEAK_FUNC(sub_822A887C);
PPC_FUNC_IMPL(__imp__sub_822A887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8880"))) PPC_WEAK_FUNC(sub_822A8880);
PPC_FUNC_IMPL(__imp__sub_822A8880) {
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
	// lwz r3,17668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a88e8
	if (ctx.cr6.eq) goto loc_822A88E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A88B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,17668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17668);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A88C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r4,17668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17668);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7980
	ctx.r3.s64 = ctx.r11.s64 + -7980;
	// bl 0x823486c8
	ctx.lr = 0x822A88DC;
	sub_823486C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17668, ctx.r11.u32);
	// stw r11,17672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17672, ctx.r11.u32);
loc_822A88E8:
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

__attribute__((alias("__imp__sub_822A88FC"))) PPC_WEAK_FUNC(sub_822A88FC);
PPC_FUNC_IMPL(__imp__sub_822A88FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8900"))) PPC_WEAK_FUNC(sub_822A8900);
PPC_FUNC_IMPL(__imp__sub_822A8900) {
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
	// lwz r3,17676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a8968
	if (ctx.cr6.eq) goto loc_822A8968;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A8930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,17676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17676);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A8944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r4,17676(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17676);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7980
	ctx.r3.s64 = ctx.r11.s64 + -7980;
	// bl 0x823486c8
	ctx.lr = 0x822A895C;
	sub_823486C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17676, ctx.r11.u32);
	// stw r11,17680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17680, ctx.r11.u32);
loc_822A8968:
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

__attribute__((alias("__imp__sub_822A897C"))) PPC_WEAK_FUNC(sub_822A897C);
PPC_FUNC_IMPL(__imp__sub_822A897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A8980"))) PPC_WEAK_FUNC(sub_822A8980);
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

__attribute__((alias("__imp__sub_822A8EA8"))) PPC_WEAK_FUNC(sub_822A8EA8);
PPC_FUNC_IMPL(__imp__sub_822A8EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822A8EB0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7552
	ctx.r5.s64 = ctx.r11.s64 + 7552;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82351720
	ctx.lr = 0x822A8F00;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7540
	ctx.r5.s64 = ctx.r11.s64 + 7540;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A8F30;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7528
	ctx.r5.s64 = ctx.r11.s64 + 7528;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A8F60;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7516
	ctx.r5.s64 = ctx.r11.s64 + 7516;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A8F90;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7504
	ctx.r5.s64 = ctx.r11.s64 + 7504;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A8FC0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7492
	ctx.r5.s64 = ctx.r11.s64 + 7492;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A8FF0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,7472
	ctx.r5.s64 = ctx.r11.s64 + 7472;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822A9020;
	sub_82351720(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A902C"))) PPC_WEAK_FUNC(sub_822A902C);
PPC_FUNC_IMPL(__imp__sub_822A902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9030"))) PPC_WEAK_FUNC(sub_822A9030);
PPC_FUNC_IMPL(__imp__sub_822A9030) {
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
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A9058;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A9068;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A9078;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A9088;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A9098;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A90A8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822A90B8;
	sub_82350C88(ctx, base);
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

__attribute__((alias("__imp__sub_822A90D0"))) PPC_WEAK_FUNC(sub_822A90D0);
PPC_FUNC_IMPL(__imp__sub_822A90D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16273
	ctx.r10.u64 = ctx.r11.u64 | 16273;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a9154
	if (!ctx.cr6.eq) goto loc_822A9154;
	// bl 0x821041a8
	ctx.lr = 0x822A911C;
	sub_821041A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a9154
	if (!ctx.cr6.eq) goto loc_822A9154;
	// lwz r7,18132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822a9140
	if (!ctx.cr6.eq) goto loc_822A9140;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,18116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18116, temp.u32);
loc_822A9140:
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,18120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18120, temp.u32);
	// stfs f30,18124(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18124, temp.u32);
	// stfs f29,18128(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18128, temp.u32);
	// stw r6,18132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18132, ctx.r6.u32);
loc_822A9154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A9174"))) PPC_WEAK_FUNC(sub_822A9174);
PPC_FUNC_IMPL(__imp__sub_822A9174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9178"))) PPC_WEAK_FUNC(sub_822A9178);
PPC_FUNC_IMPL(__imp__sub_822A9178) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16273
	ctx.r10.u64 = ctx.r11.u64 | 16273;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a9224
	if (!ctx.cr6.eq) goto loc_822A9224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041a8
	ctx.lr = 0x822A91B4;
	sub_821041A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a9224
	if (!ctx.cr6.eq) goto loc_822A9224;
	// lwz r7,18132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822a91d8
	if (!ctx.cr6.eq) goto loc_822A91D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,18116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18116, temp.u32);
loc_822A91D8:
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r5,16271
	ctx.r4.u64 = ctx.r5.u64 | 16271;
	// lfs f0,25560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,18120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18120, temp.u32);
	// stw r6,18132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18132, ctx.r6.u32);
	// lbzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a920c
	if (ctx.cr6.eq) goto loc_822A920C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a9214
	goto loc_822A9214;
loc_822A920C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,6080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f0.f64 = double(temp.f32);
loc_822A9214:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,18124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18124, temp.u32);
	// lfs f0,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,18128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18128, temp.u32);
loc_822A9224:
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

__attribute__((alias("__imp__sub_822A923C"))) PPC_WEAK_FUNC(sub_822A923C);
PPC_FUNC_IMPL(__imp__sub_822A923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9240"))) PPC_WEAK_FUNC(sub_822A9240);
PPC_FUNC_IMPL(__imp__sub_822A9240) {
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
	// lwz r11,18132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18132);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822a9378
	if (ctx.cr6.gt) goto loc_822A9378;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-28040
	ctx.r12.s64 = ctx.r12.s64 + -28040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822A938C;
	case 1:
		goto loc_822A9288;
	case 2:
		goto loc_822A92D8;
	case 3:
		goto loc_822A9318;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-27764(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27764);
	// lwz r17,-28024(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28024);
	// lwz r17,-27944(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27944);
	// lwz r17,-27880(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27880);
loc_822A9288:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822A9298;
	sub_8210B3C8(ctx, base);
	// lfs f0,18120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,18120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18120, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822a92c4
	if (ctx.cr6.gt) goto loc_822A92C4;
	// bso cr6,0x822a92c4
	if (ctx.cr6.so) goto loc_822A92C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,18132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18132, ctx.r11.u32);
	// b 0x822a9378
	goto loc_822A9378;
loc_822A92C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,1468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,18116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18116, temp.u32);
	// b 0x822a9378
	goto loc_822A9378;
loc_822A92D8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822A92E8;
	sub_8210B3C8(ctx, base);
	// lfs f12,18124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18124);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,18124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18124, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822a9310
	if (ctx.cr6.gt) goto loc_822A9310;
	// bso cr6,0x822a9310
	if (ctx.cr6.so) goto loc_822A9310;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,18132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18132, ctx.r10.u32);
loc_822A9310:
	// stfs f13,18116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18116, temp.u32);
	// b 0x822a9378
	goto loc_822A9378;
loc_822A9318:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822A9328;
	sub_8210B3C8(ctx, base);
	// lfs f11,18128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18128);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,18128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18128, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822a9360
	if (ctx.cr6.gt) goto loc_822A9360;
	// bso cr6,0x822a9360
	if (ctx.cr6.so) goto loc_822A9360;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,18116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18116, temp.u32);
	// stw r9,18132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18132, ctx.r9.u32);
	// b 0x822a9378
	goto loc_822A9378;
loc_822A9360:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f10,18116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18116, temp.u32);
loc_822A9378:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,18116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-27228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27228, temp.u32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// stfs f0,28920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28920, temp.u32);
loc_822A938C:
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

__attribute__((alias("__imp__sub_822A93A0"))) PPC_WEAK_FUNC(sub_822A93A0);
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

__attribute__((alias("__imp__sub_822A949C"))) PPC_WEAK_FUNC(sub_822A949C);
PPC_FUNC_IMPL(__imp__sub_822A949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A94A0"))) PPC_WEAK_FUNC(sub_822A94A0);
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

__attribute__((alias("__imp__sub_822A9590"))) PPC_WEAK_FUNC(sub_822A9590);
PPC_FUNC_IMPL(__imp__sub_822A9590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822a95a4
	if (!ctx.cr6.eq) goto loc_822A95A4;
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_822A95A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x822a9618
	if (!ctx.cr6.gt) goto loc_822A9618;
loc_822A95B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822a9608
	if (!ctx.cr6.gt) goto loc_822A9608;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r9,64(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
loc_822A95D0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x822a95f0
	if (ctx.cr6.eq) goto loc_822A95F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822a95d0
	if (ctx.cr6.lt) goto loc_822A95D0;
	// b 0x822a9608
	goto loc_822A9608;
loc_822A95F0:
	// lfs f13,76(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a9608
	if (!ctx.cr6.gt) goto loc_822A9608;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
loc_822A9608:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822a95b8
	if (!ctx.cr6.eq) goto loc_822A95B8;
loc_822A9618:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A9620"))) PPC_WEAK_FUNC(sub_822A9620);
PPC_FUNC_IMPL(__imp__sub_822A9620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,57540
	ctx.r9.u64 = ctx.r10.u64 | 57540;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822A9660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f6,f0,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fsqrts f1,f5
	ctx.f1.f64 = double(float(sqrt(ctx.f5.f64)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A96C0"))) PPC_WEAK_FUNC(sub_822A96C0);
PPC_FUNC_IMPL(__imp__sub_822A96C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822A96C8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// std r5,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r5.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r6,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r6.u64);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,3260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3260);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f2,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f1,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// std r31,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r31.u64);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f31,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f8,-1628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1628);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f7,f5,f8
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmuls f6,f4,f8
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f4,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// fadds f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fsubs f8,f2,f7
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f1,f6
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// lfs f6,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fadds f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f1,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fadds f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f3,f31,f9
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f5,f2,f11
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fsubs f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f4,f1,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lfs f1,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// fsubs f3,f31,f9
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// fsubs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f5,f2,f11
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f5,f4,f13
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f3,f12
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// lfs f2,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fsubs f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// fsubs f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// fsubs f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fadds f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fadds f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fsubs f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// ld r26,0(r7)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fsubs f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// std r25,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r25.u64);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r26,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r26.u64);
	// fsubs f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// ld r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsubs f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r26,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r26.u64);
	// fadds f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,176
	ctx.r30.s64 = ctx.r1.s64 + 176;
	// li r27,1
	ctx.r27.s64 = 1;
	// std r9,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// fadds f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
loc_822A9958:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82316f80
	ctx.lr = 0x822A9970;
	sub_82316F80(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// and r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 & ctx.r5.u64;
	// blt cr6,0x822a9958
	if (ctx.cr6.lt) goto loc_822A9958;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a99ec
	if (!ctx.cr6.eq) goto loc_822A99EC;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822A999C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823035d0
	ctx.lr = 0x822A99BC;
	sub_823035D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// and r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 & ctx.r11.u64;
	// blt cr6,0x822a999c
	if (ctx.cr6.lt) goto loc_822A999C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_822A99EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822A99FC"))) PPC_WEAK_FUNC(sub_822A99FC);
PPC_FUNC_IMPL(__imp__sub_822A99FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9A00"))) PPC_WEAK_FUNC(sub_822A9A00);
PPC_FUNC_IMPL(__imp__sub_822A9A00) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,2704
	ctx.r4.s64 = ctx.r11.s64 + 2704;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,28256
	ctx.r10.u64 = ctx.r11.u64 | 28256;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8234beb0
	ctx.lr = 0x822A9A44;
	sub_8234BEB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r7,r8,28632
	ctx.r7.u64 = ctx.r8.u64 | 28632;
	// stb r4,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r4.u8);
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ori r5,r6,28636
	ctx.r5.u64 = ctx.r6.u64 | 28636;
	// addi r4,r9,7240
	ctx.r4.s64 = ctx.r9.s64 + 7240;
	// lfs f0,2868(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stb r7,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r7.u8);
	// lfs f0,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r6,19229
	ctx.r11.u64 = ctx.r6.u64 | 19229;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x82350920
	ctx.lr = 0x822A9ACC;
	sub_82350920(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-1664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1664);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// bl 0x82350920
	ctx.lr = 0x822A9AF8;
	sub_82350920(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// lfs f0,2868(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// ori r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 16384;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// bl 0x82350920
	ctx.lr = 0x822A9B20;
	sub_82350920(ctx, base);
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r6,16384
	ctx.r4.u64 = ctx.r6.u64 | 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-6860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6860);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822A9B4C;
	sub_82350920(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_822A9B64"))) PPC_WEAK_FUNC(sub_822A9B64);
PPC_FUNC_IMPL(__imp__sub_822A9B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9B68"))) PPC_WEAK_FUNC(sub_822A9B68);
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

__attribute__((alias("__imp__sub_822A9C24"))) PPC_WEAK_FUNC(sub_822A9C24);
PPC_FUNC_IMPL(__imp__sub_822A9C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9C28"))) PPC_WEAK_FUNC(sub_822A9C28);
PPC_FUNC_IMPL(__imp__sub_822A9C28) {
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
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x822a9620
	ctx.lr = 0x822A9C44;
	sub_822A9620(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a9c6c
	if (ctx.cr6.eq) goto loc_822A9C6C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822A9C6C:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bgt cr6,0x822a9e5c
	if (ctx.cr6.gt) goto loc_822A9E5C;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-25456
	ctx.r12.s64 = ctx.r12.s64 + -25456;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_822A9CEC;
	case 1:
		goto loc_822A9D24;
	case 2:
		goto loc_822A9D24;
	case 3:
		goto loc_822A9D30;
	case 4:
		goto loc_822A9D30;
	case 5:
		goto loc_822A9D68;
	case 6:
		goto loc_822A9D68;
	case 7:
		goto loc_822A9D68;
	case 8:
		goto loc_822A9D68;
	case 9:
		goto loc_822A9D68;
	case 10:
		goto loc_822A9E5C;
	case 11:
		goto loc_822A9E5C;
	case 12:
		goto loc_822A9DA0;
	case 13:
		goto loc_822A9DA0;
	case 14:
		goto loc_822A9DD8;
	case 15:
		goto loc_822A9E10;
	case 16:
		goto loc_822A9E10;
	case 17:
		goto loc_822A9E10;
	case 18:
		goto loc_822A9E10;
	case 19:
		goto loc_822A9E10;
	case 20:
		goto loc_822A9E10;
	case 21:
		goto loc_822A9E48;
	case 22:
		goto loc_822A9E54;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-25364(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	// lwz r17,-25308(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25308);
	// lwz r17,-25308(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25308);
	// lwz r17,-25296(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25296);
	// lwz r17,-25296(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25296);
	// lwz r17,-25240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25240);
	// lwz r17,-25240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25240);
	// lwz r17,-25240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25240);
	// lwz r17,-25240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25240);
	// lwz r17,-25240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25240);
	// lwz r17,-24996(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24996);
	// lwz r17,-24996(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24996);
	// lwz r17,-25184(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25184);
	// lwz r17,-25184(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25184);
	// lwz r17,-25128(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25128);
	// lwz r17,-25072(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// lwz r17,-25072(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// lwz r17,-25072(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// lwz r17,-25072(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// lwz r17,-25072(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// lwz r17,-25072(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// lwz r17,-25016(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25016);
	// lwz r17,-25004(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25004);
loc_822A9CEC:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9D0C;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
loc_822A9D24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a9e58
	goto loc_822A9E58;
loc_822A9D30:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,10584
	ctx.r10.s64 = ctx.r10.s64 + 10584;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9D50;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
loc_822A9D68:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,10528
	ctx.r10.s64 = ctx.r10.s64 + 10528;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9D88;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
loc_822A9DA0:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,10800
	ctx.r10.s64 = ctx.r10.s64 + 10800;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9DC0;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
loc_822A9DD8:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,10856
	ctx.r10.s64 = ctx.r10.s64 + 10856;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9DF8;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
loc_822A9E10:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,10744
	ctx.r10.s64 = ctx.r10.s64 + 10744;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9E30;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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
loc_822A9E48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a9e58
	goto loc_822A9E58;
loc_822A9E54:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
loc_822A9E58:
	// stfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_822A9E5C:
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

__attribute__((alias("__imp__sub_822A9E70"))) PPC_WEAK_FUNC(sub_822A9E70);
PPC_FUNC_IMPL(__imp__sub_822A9E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,6088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a9e9c
	if (!ctx.cr6.lt) goto loc_822A9E9C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,-5892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5892);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822A9E9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f12,-4840(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f11,-1600(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f10,f12,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f1,f0,f0,f11
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822A9ECC"))) PPC_WEAK_FUNC(sub_822A9ECC);
PPC_FUNC_IMPL(__imp__sub_822A9ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822A9ED0"))) PPC_WEAK_FUNC(sub_822A9ED0);
PPC_FUNC_IMPL(__imp__sub_822A9ED0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a9f0c
	if (ctx.cr6.eq) goto loc_822A9F0C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822A9F0C:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822A9F18;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11160
	ctx.r11.s64 = ctx.r11.s64 + 11160;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822A9F3C;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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

__attribute__((alias("__imp__sub_822A9F58"))) PPC_WEAK_FUNC(sub_822A9F58);
PPC_FUNC_IMPL(__imp__sub_822A9F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,13088
	ctx.r11.s64 = ctx.r11.s64 + 13088;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
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
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,1256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x822a9fec
	if (!ctx.cr6.lt) goto loc_822A9FEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822A9FEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9590
	ctx.lr = 0x822A9FFC;
	sub_822A9590(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aa008
	if (ctx.cr6.eq) goto loc_822AA008;
	// lfs f12,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
loc_822AA008:
	// lfs f9,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bgt cr6,0x822aa01c
	if (ctx.cr6.gt) goto loc_822AA01C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AA01C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AA034"))) PPC_WEAK_FUNC(sub_822AA034);
PPC_FUNC_IMPL(__imp__sub_822AA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA038"))) PPC_WEAK_FUNC(sub_822AA038);
PPC_FUNC_IMPL(__imp__sub_822AA038) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aa074
	if (ctx.cr6.eq) goto loc_822AA074;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822AA074:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x822aa0a8
	if (ctx.cr6.eq) goto loc_822AA0A8;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x822aa0dc
	if (!ctx.cr6.eq) goto loc_822AA0DC;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA094;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11216
	ctx.r11.s64 = ctx.r11.s64 + 11216;
	// b 0x822aa0c4
	goto loc_822AA0C4;
loc_822AA0A8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA0B4;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
loc_822AA0C4:
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a83f0
	ctx.lr = 0x822AA0D8;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_822AA0DC:
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

__attribute__((alias("__imp__sub_822AA0F4"))) PPC_WEAK_FUNC(sub_822AA0F4);
PPC_FUNC_IMPL(__imp__sub_822AA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA0F8"))) PPC_WEAK_FUNC(sub_822AA0F8);
PPC_FUNC_IMPL(__imp__sub_822AA0F8) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aa134
	if (ctx.cr6.eq) goto loc_822AA134;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822AA134:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-33
	ctx.r11.s64 = ctx.r11.s64 + -33;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822aa1d0
	if (ctx.cr6.gt) goto loc_822AA1D0;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-24228
	ctx.r12.s64 = ctx.r12.s64 + -24228;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822AA17C;
	case 1:
		goto loc_822AA19C;
	case 2:
		goto loc_822AA19C;
	case 3:
		goto loc_822AA19C;
	case 4:
		goto loc_822AA19C;
	case 5:
		goto loc_822AA19C;
	case 6:
		goto loc_822AA19C;
	case 7:
		goto loc_822AA17C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-24196(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24196);
	// lwz r17,-24164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// lwz r17,-24164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// lwz r17,-24164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// lwz r17,-24164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// lwz r17,-24164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// lwz r17,-24164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// lwz r17,-24196(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24196);
loc_822AA17C:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA188;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11552
	ctx.r11.s64 = ctx.r11.s64 + 11552;
	// b 0x822aa1b8
	goto loc_822AA1B8;
loc_822AA19C:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA1A8;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11608
	ctx.r11.s64 = ctx.r11.s64 + 11608;
loc_822AA1B8:
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a83f0
	ctx.lr = 0x822AA1CC;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_822AA1D0:
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

__attribute__((alias("__imp__sub_822AA1E8"))) PPC_WEAK_FUNC(sub_822AA1E8);
PPC_FUNC_IMPL(__imp__sub_822AA1E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
	// bl 0x822a9590
	ctx.lr = 0x822AA210;
	sub_822A9590(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aa21c
	if (ctx.cr6.eq) goto loc_822AA21C;
	// lfs f12,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
loc_822AA21C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x822aa254
	if (ctx.cr6.eq) goto loc_822AA254;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822aa2ac
	if (ctx.cr6.gt) goto loc_822AA2AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_822AA254:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aa27c
	if (ctx.cr6.eq) goto loc_822AA27C;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x822aa274
	if (!ctx.cr6.eq) goto loc_822AA274;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x822aa278
	goto loc_822AA278;
loc_822AA274:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AA278:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
loc_822AA27C:
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x822aa2c4
	if (!ctx.cr6.eq) goto loc_822AA2C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x822aa2ac
	if (ctx.cr6.gt) goto loc_822AA2AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AA2AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_822AA2C4:
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

__attribute__((alias("__imp__sub_822AA2DC"))) PPC_WEAK_FUNC(sub_822AA2DC);
PPC_FUNC_IMPL(__imp__sub_822AA2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA2E0"))) PPC_WEAK_FUNC(sub_822AA2E0);
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

__attribute__((alias("__imp__sub_822AA3FC"))) PPC_WEAK_FUNC(sub_822AA3FC);
PPC_FUNC_IMPL(__imp__sub_822AA3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA400"))) PPC_WEAK_FUNC(sub_822AA400);
PPC_FUNC_IMPL(__imp__sub_822AA400) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aa43c
	if (ctx.cr6.eq) goto loc_822AA43C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822AA43C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-27
	ctx.r11.s64 = ctx.r11.s64 + -27;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x822aa50c
	if (ctx.cr6.gt) goto loc_822AA50C;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-23452
	ctx.r12.s64 = ctx.r12.s64 + -23452;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822AA498;
	case 1:
		goto loc_822AA4B8;
	case 2:
		goto loc_822AA4D8;
	case 3:
		goto loc_822AA478;
	case 4:
		goto loc_822AA478;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-23400(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23400);
	// lwz r17,-23368(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23368);
	// lwz r17,-23336(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23336);
	// lwz r17,-23432(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23432);
	// lwz r17,-23432(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23432);
loc_822AA478:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA484;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11328
	ctx.r11.s64 = ctx.r11.s64 + 11328;
	// b 0x822aa4f4
	goto loc_822AA4F4;
loc_822AA498:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA4A4;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11384
	ctx.r11.s64 = ctx.r11.s64 + 11384;
	// b 0x822aa4f4
	goto loc_822AA4F4;
loc_822AA4B8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA4C4;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// b 0x822aa4f4
	goto loc_822AA4F4;
loc_822AA4D8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA4E4;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11496
	ctx.r11.s64 = ctx.r11.s64 + 11496;
loc_822AA4F4:
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a83f0
	ctx.lr = 0x822AA508;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_822AA50C:
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

__attribute__((alias("__imp__sub_822AA524"))) PPC_WEAK_FUNC(sub_822AA524);
PPC_FUNC_IMPL(__imp__sub_822AA524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA528"))) PPC_WEAK_FUNC(sub_822AA528);
PPC_FUNC_IMPL(__imp__sub_822AA528) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aa564
	if (ctx.cr6.eq) goto loc_822AA564;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822AA564:
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822aa580
	if (!ctx.cr6.eq) goto loc_822AA580;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x822aa5b4
	goto loc_822AA5B4;
loc_822AA580:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9620
	ctx.lr = 0x822AA58C;
	sub_822A9620(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,11664
	ctx.r11.s64 = ctx.r11.s64 + 11664;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822a83f0
	ctx.lr = 0x822AA5B0;
	sub_822A83F0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_822AA5B4:
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

__attribute__((alias("__imp__sub_822AA5CC"))) PPC_WEAK_FUNC(sub_822AA5CC);
PPC_FUNC_IMPL(__imp__sub_822AA5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA5D0"))) PPC_WEAK_FUNC(sub_822AA5D0);
PPC_FUNC_IMPL(__imp__sub_822AA5D0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
	// bl 0x822a9590
	ctx.lr = 0x822AA5F8;
	sub_822A9590(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aa604
	if (ctx.cr6.eq) goto loc_822AA604;
	// lfs f12,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
loc_822AA604:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822aa618
	if (ctx.cr6.gt) goto loc_822AA618;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AA618:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_822AA630"))) PPC_WEAK_FUNC(sub_822AA630);
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

__attribute__((alias("__imp__sub_822AA6BC"))) PPC_WEAK_FUNC(sub_822AA6BC);
PPC_FUNC_IMPL(__imp__sub_822AA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA6C0"))) PPC_WEAK_FUNC(sub_822AA6C0);
PPC_FUNC_IMPL(__imp__sub_822AA6C0) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aa728
	if (ctx.cr6.eq) goto loc_822AA728;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AA6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822AA704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7980
	ctx.r3.s64 = ctx.r11.s64 + -7980;
	// bl 0x823486c8
	ctx.lr = 0x822AA71C;
	sub_823486C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_822AA728:
	// li r7,55
	ctx.r7.s64 = 55;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_822AA748"))) PPC_WEAK_FUNC(sub_822AA748);
PPC_FUNC_IMPL(__imp__sub_822AA748) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,376(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822AA788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822aa7a4
	if (!ctx.cr6.lt) goto loc_822AA7A4;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r7.u32);
	// b 0x822aa7c4
	goto loc_822AA7C4;
loc_822AA7A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82348630
	ctx.lr = 0x822AA7B4;
	sub_82348630(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
loc_822AA7C4:
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

__attribute__((alias("__imp__sub_822AA7DC"))) PPC_WEAK_FUNC(sub_822AA7DC);
PPC_FUNC_IMPL(__imp__sub_822AA7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA7E0"))) PPC_WEAK_FUNC(sub_822AA7E0);
PPC_FUNC_IMPL(__imp__sub_822AA7E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
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

__attribute__((alias("__imp__sub_822AA7F4"))) PPC_WEAK_FUNC(sub_822AA7F4);
PPC_FUNC_IMPL(__imp__sub_822AA7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA7F8"))) PPC_WEAK_FUNC(sub_822AA7F8);
PPC_FUNC_IMPL(__imp__sub_822AA7F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r11,366(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 366);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x822aa824
	if (ctx.cr6.lt) goto loc_822AA824;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r10.u8);
loc_822AA824:
	// lbz r11,366(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 366);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r4,r10,7684
	ctx.r4.s64 = ctx.r10.s64 + 7684;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8259d1b0
	ctx.lr = 0x822AA83C;
	sub_8259D1B0(ctx, base);
	// lbz r11,366(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 366);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,366(r31)
	PPC_STORE_U8(ctx.r31.u32 + 366, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_822AA85C"))) PPC_WEAK_FUNC(sub_822AA85C);
PPC_FUNC_IMPL(__imp__sub_822AA85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AA860"))) PPC_WEAK_FUNC(sub_822AA860);
PPC_FUNC_IMPL(__imp__sub_822AA860) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aa89c
	if (ctx.cr6.eq) goto loc_822AA89C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_822AA89C:
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f5,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 524288;
	// addis r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 524288;
	// addi r5,r7,11144
	ctx.r5.s64 = ctx.r7.s64 + 11144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r8,11152
	ctx.r31.s64 = ctx.r8.s64 + 11152;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f0,2864(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lfsx f6,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r9,10920
	ctx.r9.s64 = ctx.r9.s64 + 10920;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// lfsx f7,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bgt cr6,0x822aa91c
	if (ctx.cr6.gt) goto loc_822AA91C;
	// bso cr6,0x822aa91c
	if (ctx.cr6.so) goto loc_822AA91C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822AA918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822aaa80
	goto loc_822AAA80;
loc_822AA91C:
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r8,r9,28685
	ctx.r8.u64 = ctx.r9.u64 | 28685;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f10,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x822aa944
	if (ctx.cr6.eq) goto loc_822AA944;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f11,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// b 0x822aa948
	goto loc_822AA948;
loc_822AA944:
	// fmr f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64;
loc_822AA948:
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r10,r10,13088
	ctx.r10.s64 = ctx.r10.s64 + 13088;
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fsubs f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfd f8,-1600(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -1600);
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmsubs f1,f4,f11,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f12.f64));
	// lfd f9,-4840(r9)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,25556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r7,16385
	ctx.r7.s64 = 16385;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// li r5,16393
	ctx.r5.s64 = 16393;
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fsubs f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lfs f12,1256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1256);
	ctx.f12.f64 = double(temp.f32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fdivs f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 / ctx.f1.f64));
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmsubs f7,f11,f7,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f3.f64));
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsel f12,f10,f9,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fsel f12,f12,f12,f8
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// fmadds f4,f1,f12,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f3,f12,f6,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fadds f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmuls f11,f3,f5
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fsubs f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f13,f2,f13,f12
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f1,f13,f0
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f11,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822AAA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AAA80:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_822AAA98"))) PPC_WEAK_FUNC(sub_822AAA98);
PPC_FUNC_IMPL(__imp__sub_822AAA98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// bgt cr6,0x822aab14
	if (ctx.cr6.gt) {
		sub_822AAB14(ctx, base);
		return;
	}
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-21832
	ctx.r12.s64 = ctx.r12.s64 + -21832;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		// ERROR: 0x822AAB0C
		return;
	case 1:
		// ERROR: 0x822AAB0C
		return;
	case 2:
		// ERROR: 0x822AAB0C
		return;
	case 3:
		// ERROR: 0x822AAB14
		return;
	case 4:
		// ERROR: 0x822AAB14
		return;
	case 5:
		// ERROR: 0x822AAB14
		return;
	case 6:
		// ERROR: 0x822AAB14
		return;
	case 7:
		// ERROR: 0x822AAB14
		return;
	case 8:
		// ERROR: 0x822AAB14
		return;
	case 9:
		// ERROR: 0x822AAB14
		return;
	case 10:
		// ERROR: 0x822AAB14
		return;
	case 11:
		// ERROR: 0x822AAB14
		return;
	case 12:
		// ERROR: 0x822AAB0C
		return;
	case 13:
		// ERROR: 0x822AAB0C
		return;
	case 14:
		// ERROR: 0x822AAB0C
		return;
	case 15:
		// ERROR: 0x822AAB14
		return;
	case 16:
		// ERROR: 0x822AAB14
		return;
	case 17:
		// ERROR: 0x822AAB14
		return;
	case 18:
		// ERROR: 0x822AAB14
		return;
	case 19:
		// ERROR: 0x822AAB14
		return;
	case 20:
		// ERROR: 0x822AAB14
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_822AAAB8"))) PPC_WEAK_FUNC(sub_822AAAB8);
PPC_FUNC_IMPL(__imp__sub_822AAAB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-21748(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21748);
	// lwz r17,-21748(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21748);
	// lwz r17,-21748(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21748);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21748(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21748);
	// lwz r17,-21748(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21748);
	// lwz r17,-21748(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21748);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// lwz r17,-21740(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21740);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AAB14"))) PPC_WEAK_FUNC(sub_822AAB14);
PPC_FUNC_IMPL(__imp__sub_822AAB14) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AAB1C"))) PPC_WEAK_FUNC(sub_822AAB1C);
PPC_FUNC_IMPL(__imp__sub_822AAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AAB20"))) PPC_WEAK_FUNC(sub_822AAB20);
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

__attribute__((alias("__imp__sub_822AABF0"))) PPC_WEAK_FUNC(sub_822AABF0);
PPC_FUNC_IMPL(__imp__sub_822AABF0) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,3152
	ctx.r4.s64 = ctx.r10.s64 + 3152;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// bl 0x8234c370
	ctx.lr = 0x822AAC2C;
	sub_8234C370(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822AAC54"))) PPC_WEAK_FUNC(sub_822AAC54);
PPC_FUNC_IMPL(__imp__sub_822AAC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AAC58"))) PPC_WEAK_FUNC(sub_822AAC58);
PPC_FUNC_IMPL(__imp__sub_822AAC58) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822aad08
	if (!ctx.cr6.eq) goto loc_822AAD08;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16274
	ctx.r9.u64 = ctx.r10.u64 | 16274;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aaca0
	if (ctx.cr6.eq) goto loc_822AACA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822aaca8
	goto loc_822AACA8;
loc_822AACA0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f0.f64 = double(temp.f32);
loc_822AACA8:
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822aad00
	if (ctx.cr6.eq) goto loc_822AAD00;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r4,r10,3152
	ctx.r4.s64 = ctx.r10.s64 + 3152;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lfs f0,7752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x8234c370
	ctx.lr = 0x822AACE0;
	sub_8234C370(ctx, base);
	// li r6,26
	ctx.r6.s64 = 26;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
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
loc_822AAD00:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_822AAD08:
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

__attribute__((alias("__imp__sub_822AAD1C"))) PPC_WEAK_FUNC(sub_822AAD1C);
PPC_FUNC_IMPL(__imp__sub_822AAD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AAD20"))) PPC_WEAK_FUNC(sub_822AAD20);
PPC_FUNC_IMPL(__imp__sub_822AAD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822AAD28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822aad84
	if (!ctx.cr6.eq) goto loc_822AAD84;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,3152
	ctx.r30.s64 = ctx.r11.s64 + 3152;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c370
	ctx.lr = 0x822AAD5C;
	sub_8234C370(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// bne cr6,0x822aad7c
	if (!ctx.cr6.eq) goto loc_822AAD7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8234c370
	ctx.lr = 0x822AAD78;
	sub_8234C370(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
loc_822AAD7C:
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_822AAD84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AAD8C"))) PPC_WEAK_FUNC(sub_822AAD8C);
PPC_FUNC_IMPL(__imp__sub_822AAD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AAD90"))) PPC_WEAK_FUNC(sub_822AAD90);
PPC_FUNC_IMPL(__imp__sub_822AAD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// li r9,22
	ctx.r9.s64 = 22;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r10.u8);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AADC4"))) PPC_WEAK_FUNC(sub_822AADC4);
PPC_FUNC_IMPL(__imp__sub_822AADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AADC8"))) PPC_WEAK_FUNC(sub_822AADC8);
PPC_FUNC_IMPL(__imp__sub_822AADC8) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822aadf0
	if (ctx.cr6.eq) goto loc_822AADF0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822aae40
	if (!ctx.cr6.eq) goto loc_822AAE40;
loc_822AADF0:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r4,r10,3152
	ctx.r4.s64 = ctx.r10.s64 + 3152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234c370
	ctx.lr = 0x822AAE0C;
	sub_8234C370(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822aae38
	if (!ctx.cr6.eq) goto loc_822AAE38;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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
loc_822AAE38:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_822AAE40:
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

__attribute__((alias("__imp__sub_822AAE54"))) PPC_WEAK_FUNC(sub_822AAE54);
PPC_FUNC_IMPL(__imp__sub_822AAE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AAE58"))) PPC_WEAK_FUNC(sub_822AAE58);
PPC_FUNC_IMPL(__imp__sub_822AAE58) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822aae80
	if (ctx.cr6.eq) goto loc_822AAE80;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822aaed0
	if (!ctx.cr6.eq) goto loc_822AAED0;
loc_822AAE80:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r4,r10,3152
	ctx.r4.s64 = ctx.r10.s64 + 3152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234c370
	ctx.lr = 0x822AAE9C;
	sub_8234C370(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822aaec8
	if (!ctx.cr6.eq) goto loc_822AAEC8;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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
loc_822AAEC8:
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_822AAED0:
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

__attribute__((alias("__imp__sub_822AAEE4"))) PPC_WEAK_FUNC(sub_822AAEE4);
PPC_FUNC_IMPL(__imp__sub_822AAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AAEE8"))) PPC_WEAK_FUNC(sub_822AAEE8);
PPC_FUNC_IMPL(__imp__sub_822AAEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,25
	ctx.r10.s64 = 25;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AAF00"))) PPC_WEAK_FUNC(sub_822AAF00);
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

__attribute__((alias("__imp__sub_822AAFE8"))) PPC_WEAK_FUNC(sub_822AAFE8);
PPC_FUNC_IMPL(__imp__sub_822AAFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822AAFF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r29,100
	ctx.r29.s64 = 100;
	// addi r11,r11,-1644
	ctx.r11.s64 = ctx.r11.s64 + -1644;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_822AB008:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AB01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne cr6,0x822ab008
	if (!ctx.cr6.eq) goto loc_822AB008;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AB044"))) PPC_WEAK_FUNC(sub_822AB044);
PPC_FUNC_IMPL(__imp__sub_822AB044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AB048"))) PPC_WEAK_FUNC(sub_822AB048);
PPC_FUNC_IMPL(__imp__sub_822AB048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822AB050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-1644
	ctx.r29.s64 = ctx.r11.s64 + -1644;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_822AB070:
	// lwz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ab0e0
	if (ctx.cr6.eq) goto loc_822AB0E0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ab0c4
	if (ctx.cr6.eq) goto loc_822AB0C4;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ab0cc
	if (ctx.cr6.eq) goto loc_822AB0CC;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822ab0d4
	if (ctx.cr6.eq) goto loc_822AB0D4;
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ab0dc
	if (ctx.cr6.eq) goto loc_822AB0DC;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// cmplwi cr6,r10,2800
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2800, ctx.xer);
	// blt cr6,0x822ab070
	if (ctx.cr6.lt) goto loc_822AB070;
	// b 0x822ab0e0
	goto loc_822AB0E0;
loc_822AB0C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822ab0e0
	goto loc_822AB0E0;
loc_822AB0CC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x822ab0e0
	goto loc_822AB0E0;
loc_822AB0D4:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x822ab0e0
	goto loc_822AB0E0;
loc_822AB0DC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_822AB0E0:
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// bne cr6,0x822ab1f0
	if (!ctx.cr6.eq) goto loc_822AB1F0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r8,r29,36
	ctx.r8.s64 = ctx.r29.s64 + 36;
loc_822AB0F8:
	// lwz r11,-28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab1b8
	if (ctx.cr6.eq) goto loc_822AB1B8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ab114
	if (!ctx.cr6.gt) goto loc_822AB114;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_822AB114:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab19c
	if (ctx.cr6.eq) goto loc_822AB19C;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ab130
	if (!ctx.cr6.gt) goto loc_822AB130;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
loc_822AB130:
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab1a4
	if (ctx.cr6.eq) goto loc_822AB1A4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ab14c
	if (!ctx.cr6.gt) goto loc_822AB14C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
loc_822AB14C:
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab1ac
	if (ctx.cr6.eq) goto loc_822AB1AC;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ab168
	if (!ctx.cr6.gt) goto loc_822AB168;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
loc_822AB168:
	// lwz r11,84(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab1b4
	if (ctx.cr6.eq) goto loc_822AB1B4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ab184
	if (!ctx.cr6.gt) goto loc_822AB184;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_822AB184:
	// addi r7,r7,140
	ctx.r7.s64 = ctx.r7.s64 + 140;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// cmplwi cr6,r7,2800
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2800, ctx.xer);
	// blt cr6,0x822ab0f8
	if (ctx.cr6.lt) goto loc_822AB0F8;
	// b 0x822ab1b8
	goto loc_822AB1B8;
loc_822AB19C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822ab1b8
	goto loc_822AB1B8;
loc_822AB1A4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x822ab1b8
	goto loc_822AB1B8;
loc_822AB1AC:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x822ab1b8
	goto loc_822AB1B8;
loc_822AB1B4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_822AB1B8:
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// bne cr6,0x822ab1f0
	if (!ctx.cr6.eq) goto loc_822AB1F0;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AB1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stb r28,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r28.u8);
loc_822AB1F0:
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AB200"))) PPC_WEAK_FUNC(sub_822AB200);
PPC_FUNC_IMPL(__imp__sub_822AB200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822AB208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-4496
	ctx.r30.s64 = ctx.r11.s64 + -4496;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,46
	ctx.r28.s64 = 46;
loc_822AB220:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AB238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822AB248:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822ab248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AB248;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822ab220
	if (!ctx.cr6.eq) goto loc_822AB220;
	// lis r6,-32085
	ctx.r6.s64 = -2102722560;
	// lbz r8,-1757(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + -1757);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ab30c
	if (!ctx.cr6.eq) goto loc_822AB30C;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-13520
	ctx.r10.s64 = ctx.r10.s64 + -13520;
loc_822AB28C:
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// blt cr6,0x822ab28c
	if (ctx.cr6.lt) goto loc_822AB28C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-13452
	ctx.r7.s64 = ctx.r11.s64 + -13452;
loc_822AB2AC:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// li r11,9
	ctx.r11.s64 = 9;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ab2c0
	if (!ctx.cr6.eq) goto loc_822AB2C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822AB2C0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r11,r7,5
	ctx.r11.s64 = ctx.r7.s64 + 5;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r5,-5(r11)
	PPC_STORE_U8(ctx.r11.u32 + -5, ctx.r5.u8);
	// bne cr6,0x822ab2e0
	if (!ctx.cr6.eq) goto loc_822AB2E0;
	// li r10,3
	ctx.r10.s64 = 3;
loc_822AB2E0:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r10,11
	ctx.r10.s64 = 11;
	// bne cr6,0x822ab2f4
	if (!ctx.cr6.eq) goto loc_822AB2F4;
	// li r10,5
	ctx.r10.s64 = 5;
loc_822AB2F4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// blt cr6,0x822ab2ac
	if (ctx.cr6.lt) goto loc_822AB2AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1757(r6)
	PPC_STORE_U8(ctx.r6.u32 + -1757, ctx.r11.u8);
loc_822AB30C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AB314"))) PPC_WEAK_FUNC(sub_822AB314);
PPC_FUNC_IMPL(__imp__sub_822AB314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AB318"))) PPC_WEAK_FUNC(sub_822AB318);
PPC_FUNC_IMPL(__imp__sub_822AB318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822AB320;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r11,7844
	ctx.r30.s64 = ctx.r11.s64 + 7844;
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
loc_822AB368:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82351720
	ctx.lr = 0x822AB398;
	sub_82351720(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x822ab368
	if (ctx.cr6.lt) goto loc_822AB368;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AB3B0"))) PPC_WEAK_FUNC(sub_822AB3B0);
PPC_FUNC_IMPL(__imp__sub_822AB3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822AB3B8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r11,r11,-9024
	ctx.r11.s64 = ctx.r11.s64 + -9024;
	// addi r10,r10,6756
	ctx.r10.s64 = ctx.r10.s64 + 6756;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r30,r10,52
	ctx.r30.s64 = ctx.r10.s64 + 52;
	// li r29,5
	ctx.r29.s64 = 5;
loc_822AB3E4:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822ab400
	if (!ctx.cr6.eq) goto loc_822AB400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ab318
	ctx.lr = 0x822AB400;
	sub_822AB318(ctx, base);
loc_822AB400:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822ab3e4
	if (!ctx.cr6.eq) goto loc_822AB3E4;
	// lis r27,-32085
	ctx.r27.s64 = -2102722560;
	// lbz r10,7626(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7626);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ab4e4
	if (!ctx.cr6.eq) goto loc_822AB4E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// addi r31,r11,7944
	ctx.r31.s64 = ctx.r11.s64 + 7944;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-32160
	ctx.r29.s64 = -2107637760;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r11,7924
	ctx.r5.s64 = ctx.r11.s64 + 7924;
	// lwz r7,-26132(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26132);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-1756
	ctx.r4.s64 = ctx.r11.s64 + -1756;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AB474;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-26132(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26132);
	// addi r5,r11,7904
	ctx.r5.s64 = ctx.r11.s64 + 7904;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r11,-25944
	ctx.r4.s64 = ctx.r11.s64 + -25944;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AB4A8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-26132(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26132);
	// addi r5,r11,7892
	ctx.r5.s64 = ctx.r11.s64 + 7892;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r11,-25940
	ctx.r4.s64 = ctx.r11.s64 + -25940;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AB4DC;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,7626(r27)
	PPC_STORE_U8(ctx.r27.u32 + 7626, ctx.r11.u8);
loc_822AB4E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AB4F0"))) PPC_WEAK_FUNC(sub_822AB4F0);
PPC_FUNC_IMPL(__imp__sub_822AB4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f12,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822ab558
	if (!ctx.cr6.gt) goto loc_822AB558;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f10,f1,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822ab548
	if (!ctx.cr6.lt) goto loc_822AB548;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822ab554
	goto loc_822AB554;
loc_822AB548:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822ab554
	if (!ctx.cr6.gt) goto loc_822AB554;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822AB554:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822AB558:
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822ab5ac
	if (!ctx.cr6.gt) goto loc_822AB5AC;
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f13,f4,f1,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822ab5a8
	if (ctx.cr6.lt) goto loc_822AB5A8;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822ab5a4
	if (!ctx.cr6.gt) goto loc_822AB5A4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x822ab5a8
	goto loc_822AB5A8;
loc_822AB5A4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_822AB5A8:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_822AB5AC:
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,1224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x822ab5ec
	if (ctx.cr6.gt) goto loc_822AB5EC;
	// bso cr6,0x822ab5ec
	if (ctx.cr6.so) goto loc_822AB5EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x822ab5ec
	if (ctx.cr6.lt) goto loc_822AB5EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x822ab5f0
	if (!ctx.cr6.so) goto loc_822AB5F0;
loc_822AB5EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AB5F0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ab62c
	if (!ctx.cr6.eq) goto loc_822AB62C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,16392
	ctx.r8.s64 = 16392;
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822AB62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AB62C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB63C"))) PPC_WEAK_FUNC(sub_822AB63C);
PPC_FUNC_IMPL(__imp__sub_822AB63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AB640"))) PPC_WEAK_FUNC(sub_822AB640);
PPC_FUNC_IMPL(__imp__sub_822AB640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-25936
	ctx.r10.s64 = ctx.r10.s64 + -25936;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// ldx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-4496
	ctx.r10.s64 = ctx.r10.s64 + -4496;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// ldx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r6.u32);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// lfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB6A0"))) PPC_WEAK_FUNC(sub_822AB6A0);
PPC_FUNC_IMPL(__imp__sub_822AB6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-25936
	ctx.r11.s64 = ctx.r11.s64 + -25936;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB6C0"))) PPC_WEAK_FUNC(sub_822AB6C0);
PPC_FUNC_IMPL(__imp__sub_822AB6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-23728
	ctx.r10.s64 = ctx.r10.s64 + -23728;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// ldx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-4496
	ctx.r10.s64 = ctx.r10.s64 + -4496;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// ldx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r6.u32);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// lfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB720"))) PPC_WEAK_FUNC(sub_822AB720);
PPC_FUNC_IMPL(__imp__sub_822AB720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-23728
	ctx.r11.s64 = ctx.r11.s64 + -23728;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB740"))) PPC_WEAK_FUNC(sub_822AB740);
PPC_FUNC_IMPL(__imp__sub_822AB740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-21520
	ctx.r10.s64 = ctx.r10.s64 + -21520;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// ldx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-4496
	ctx.r10.s64 = ctx.r10.s64 + -4496;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// ldx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r6.u32);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// lfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfsx f13,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB7A0"))) PPC_WEAK_FUNC(sub_822AB7A0);
PPC_FUNC_IMPL(__imp__sub_822AB7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-21520
	ctx.r11.s64 = ctx.r11.s64 + -21520;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB7C0"))) PPC_WEAK_FUNC(sub_822AB7C0);
PPC_FUNC_IMPL(__imp__sub_822AB7C0) {
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
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8234df60
	ctx.lr = 0x822AB7DC;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab7f0
	if (ctx.cr6.eq) goto loc_822AB7F0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
loc_822AB7F0:
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

__attribute__((alias("__imp__sub_822AB804"))) PPC_WEAK_FUNC(sub_822AB804);
PPC_FUNC_IMPL(__imp__sub_822AB804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AB808"))) PPC_WEAK_FUNC(sub_822AB808);
PPC_FUNC_IMPL(__imp__sub_822AB808) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822AB834;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab8a8
	if (ctx.cr6.eq) goto loc_822AB8A8;
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ab8a8
	if (ctx.cr6.eq) goto loc_822AB8A8;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822ab898
	if (!ctx.cr6.gt) goto loc_822AB898;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822AB894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822ab8a8
	goto loc_822AB8A8;
loc_822AB898:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822AB8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AB8A8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AB8C4"))) PPC_WEAK_FUNC(sub_822AB8C4);
PPC_FUNC_IMPL(__imp__sub_822AB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AB8C8"))) PPC_WEAK_FUNC(sub_822AB8C8);
PPC_FUNC_IMPL(__imp__sub_822AB8C8) {
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
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x822ab978
	if (ctx.cr6.gt) goto loc_822AB978;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,-18172
	ctx.r12.s64 = ctx.r12.s64 + -18172;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822AB930;
	case 1:
		goto loc_822AB948;
	case 2:
		goto loc_822AB960;
	case 3:
		goto loc_822AB978;
	case 4:
		goto loc_822AB918;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18128(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18128);
	// lwz r17,-18104(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18104);
	// lwz r17,-18080(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18080);
	// lwz r17,-18056(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18056);
	// lwz r17,-18152(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18152);
loc_822AB918:
	// lis r11,459
	ctx.r11.s64 = 30081024;
	// lis r10,-18023
	ctx.r10.s64 = -1181155328;
	// ori r11,r11,63936
	ctx.r11.u64 = ctx.r11.u64 | 63936;
	// ori r9,r10,45797
	ctx.r9.u64 = ctx.r10.u64 | 45797;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x822ab97c
	goto loc_822AB97C;
loc_822AB930:
	// lis r8,-31144
	ctx.r8.s64 = -2041053184;
	// lis r7,-12612
	ctx.r7.s64 = -826540032;
	// ori r11,r8,10688
	ctx.r11.u64 = ctx.r8.u64 | 10688;
	// ori r6,r7,59961
	ctx.r6.u64 = ctx.r7.u64 | 59961;
	// rldimi r11,r6,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x822ab97c
	goto loc_822AB97C;
loc_822AB948:
	// lis r5,23839
	ctx.r5.s64 = 1562312704;
	// lis r4,27729
	ctx.r4.s64 = 1817247744;
	// ori r11,r5,63936
	ctx.r11.u64 = ctx.r5.u64 | 63936;
	// ori r3,r4,66
	ctx.r3.u64 = ctx.r4.u64 | 66;
	// rldimi r11,r3,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x822ab97c
	goto loc_822AB97C;
loc_822AB960:
	// lis r11,24416
	ctx.r11.s64 = 1600126976;
	// lis r10,-12621
	ctx.r10.s64 = -827129856;
	// ori r11,r11,22656
	ctx.r11.u64 = ctx.r11.u64 | 22656;
	// ori r9,r10,23918
	ctx.r9.u64 = ctx.r10.u64 | 23918;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x822ab97c
	goto loc_822AB97C;
loc_822AB978:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_822AB97C:
	// lwz r30,216(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// lwz r3,15816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab9a0
	if (ctx.cr6.eq) goto loc_822AB9A0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822AB9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AB9A0:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r3,15816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15816, ctx.r3.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822AB9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_822AB9D8"))) PPC_WEAK_FUNC(sub_822AB9D8);
PPC_FUNC_IMPL(__imp__sub_822AB9D8) {
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
	// bl 0x822ab200
	ctx.lr = 0x822AB9F4;
	sub_822AB200(ctx, base);
	// lwz r30,216(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r3,15816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aba14
	if (ctx.cr6.eq) goto loc_822ABA14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ABA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ABA14:
	// stw r31,15816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15816, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822ABA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,321(r31)
	PPC_STORE_U8(ctx.r31.u32 + 321, ctx.r11.u8);
	// stb r7,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r7.u8);
	// stb r11,322(r31)
	PPC_STORE_U8(ctx.r31.u32 + 322, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_822ABA5C"))) PPC_WEAK_FUNC(sub_822ABA5C);
PPC_FUNC_IMPL(__imp__sub_822ABA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ABA60"))) PPC_WEAK_FUNC(sub_822ABA60);
PPC_FUNC_IMPL(__imp__sub_822ABA60) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822abac0
	if (ctx.cr6.eq) goto loc_822ABAC0;
	// lwz r11,15816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15816);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822abae8
	if (ctx.cr6.eq) goto loc_822ABAE8;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822abab4
	if (!ctx.cr6.eq) goto loc_822ABAB4;
	// stb r30,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r30.u8);
loc_822ABAB4:
	// bl 0x822a8388
	ctx.lr = 0x822ABAB8;
	sub_822A8388(ctx, base);
	// stb r30,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r30.u8);
	// b 0x822abae8
	goto loc_822ABAE8;
loc_822ABAC0:
	// lwz r8,15816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15816);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822abae8
	if (!ctx.cr6.eq) goto loc_822ABAE8;
	// lbz r7,230(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822abae4
	if (!ctx.cr6.eq) goto loc_822ABAE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822ABAE4:
	// bl 0x822a8388
	ctx.lr = 0x822ABAE8;
	sub_822A8388(ctx, base);
loc_822ABAE8:
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

__attribute__((alias("__imp__sub_822ABB00"))) PPC_WEAK_FUNC(sub_822ABB00);
PPC_FUNC_IMPL(__imp__sub_822ABB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lbz r10,231(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 231);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,216(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// addi r8,r3,112
	ctx.r8.s64 = ctx.r3.s64 + 112;
	// lwz r7,15816(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15816);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f13,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r5,r6,4416
	ctx.r5.u64 = ctx.r6.u64 | 4416;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822abb68
	if (!ctx.cr6.gt) goto loc_822ABB68;
	// addis r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 655360;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// b 0x822abb6c
	goto loc_822ABB6C;
loc_822ABB68:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822ABB6C:
	// lbz r8,627(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 627);
	// cmplwi cr6,r8,15
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 15, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r4,228(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// lwz r9,224(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,29044
	ctx.r9.s64 = ctx.r11.s64 + 29044;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x822ab8c8
	sub_822AB8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822ABBA0"))) PPC_WEAK_FUNC(sub_822ABBA0);
PPC_FUNC_IMPL(__imp__sub_822ABBA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822ABBA4"))) PPC_WEAK_FUNC(sub_822ABBA4);
PPC_FUNC_IMPL(__imp__sub_822ABBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ABBA8"))) PPC_WEAK_FUNC(sub_822ABBA8);
PPC_FUNC_IMPL(__imp__sub_822ABBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822ABBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,216(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stb r30,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r30.u8);
	// lwz r3,15816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822abbe0
	if (ctx.cr6.eq) goto loc_822ABBE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ABBE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ABBE0:
	// stw r31,15816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15816, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822ABBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stb r30,321(r31)
	PPC_STORE_U8(ctx.r31.u32 + 321, ctx.r30.u8);
	// stb r30,322(r31)
	PPC_STORE_U8(ctx.r31.u32 + 322, ctx.r30.u8);
	// stb r7,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822ABC18"))) PPC_WEAK_FUNC(sub_822ABC18);
PPC_FUNC_IMPL(__imp__sub_822ABC18) {
	PPC_FUNC_PROLOGUE();
	// stb r4,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822ABC20"))) PPC_WEAK_FUNC(sub_822ABC20);
PPC_FUNC_IMPL(__imp__sub_822ABC20) {
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
	// lbz r11,230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 230);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822abd18
	if (!ctx.cr6.eq) goto loc_822ABD18;
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822abd18
	if (!ctx.cr6.lt) goto loc_822ABD18;
	// addi r11,r3,312
	ctx.r11.s64 = ctx.r3.s64 + 312;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r31,r10,-19304
	ctx.r31.s64 = ctx.r10.s64 + -19304;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 + ctx.r10.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfsx f0,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,1256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x822abcdc
	if (!ctx.cr6.lt) goto loc_822ABCDC;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// lfsx f9,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfsx f7,r30,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// bl 0x822ab8c8
	ctx.lr = 0x822ABCD8;
	sub_822AB8C8(ctx, base);
	// b 0x822abcec
	goto loc_822ABCEC;
loc_822ABCDC:
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lfsx f6,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfsx f5,r30,r31
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
loc_822ABCEC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfsx f0,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,-1600(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f4,f13,f0
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f3,f0,f0,f12
	ctx.f3.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfsx f3,r30,r31
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
loc_822ABD18:
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

__attribute__((alias("__imp__sub_822ABD30"))) PPC_WEAK_FUNC(sub_822ABD30);
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

__attribute__((alias("__imp__sub_822AC37C"))) PPC_WEAK_FUNC(sub_822AC37C);
PPC_FUNC_IMPL(__imp__sub_822AC37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AC380"))) PPC_WEAK_FUNC(sub_822AC380);
PPC_FUNC_IMPL(__imp__sub_822AC380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lis r9,22864
	ctx.r9.s64 = 1498415104;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lis r11,-22461
	ctx.r11.s64 = -1472004096;
	// ori r8,r9,47334
	ctx.r8.u64 = ctx.r9.u64 | 47334;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8234c370
	ctx.lr = 0x822AC3C4;
	sub_8234C370(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AC3F4"))) PPC_WEAK_FUNC(sub_822AC3F4);
PPC_FUNC_IMPL(__imp__sub_822AC3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AC3F8"))) PPC_WEAK_FUNC(sub_822AC3F8);
PPC_FUNC_IMPL(__imp__sub_822AC3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822AC400;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bba8
	ctx.lr = 0x822AC408;
	__savefpr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,14
	ctx.r10.s64 = 14;
	// ld r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// ori r8,r9,49147
	ctx.r8.u64 = ctx.r9.u64 | 49147;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r10.u8);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// li r3,2049
	ctx.r3.s64 = 2049;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// lbzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822ac6b8
	if (!ctx.cr6.eq) goto loc_822AC6B8;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r29,r11,-18560
	ctx.r29.s64 = ctx.r11.s64 + -18560;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,49304
	ctx.r10.u64 = ctx.r11.u64 | 49304;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ac480
	if (!ctx.cr6.eq) goto loc_822AC480;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AC480:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822ac6b8
	if (!ctx.cr6.eq) goto loc_822AC6B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,2817
	ctx.r6.s64 = 2817;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lfs f0,-24284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// lfs f0,-6848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6848);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r30,r11,1256
	ctx.r30.s64 = ctx.r11.s64 + 1256;
	// blt cr6,0x822ac560
	if (ctx.cr6.lt) goto loc_822AC560;
	// beq cr6,0x822ac50c
	if (ctx.cr6.eq) goto loc_822AC50C;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x822ac5a8
	if (!ctx.cr6.lt) goto loc_822AC5A8;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// addi r4,r30,1984
	ctx.r4.s64 = ctx.r30.s64 + 1984;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// addi r8,r11,66
	ctx.r8.s64 = ctx.r11.s64 + 66;
	// ori r10,r3,29092
	ctx.r10.u64 = ctx.r3.u64 | 29092;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lfsx f30,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x8234beb0
	ctx.lr = 0x822AC4FC;
	sub_8234BEB0(ctx, base);
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// ori r6,r5,4
	ctx.r6.u64 = ctx.r5.u64 | 4;
	// b 0x822ac5b0
	goto loc_822AC5B0;
loc_822AC50C:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// addi r4,r30,1992
	ctx.r4.s64 = ctx.r30.s64 + 1992;
	// ori r11,r3,29092
	ctx.r11.u64 = ctx.r3.u64 | 29092;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8234beb0
	ctx.lr = 0x822AC524;
	sub_8234BEB0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-15100(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// ori r6,r10,4
	ctx.r6.u64 = ctx.r10.u64 | 4;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// lfsx f30,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r5,r31
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f29.f64 = double(temp.f32);
	// b 0x822ac5b0
	goto loc_822AC5B0;
loc_822AC560:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// addi r4,r30,1992
	ctx.r4.s64 = ctx.r30.s64 + 1992;
	// ori r11,r3,29092
	ctx.r11.u64 = ctx.r3.u64 | 29092;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8234beb0
	ctx.lr = 0x822AC578;
	sub_8234BEB0(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r8,r11,62
	ctx.r8.s64 = ctx.r11.s64 + 62;
	// ori r6,r10,4
	ctx.r6.u64 = ctx.r10.u64 | 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// lfsx f30,r7,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r5,r31
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f29.f64 = double(temp.f32);
	// b 0x822ac5b0
	goto loc_822AC5B0;
loc_822AC5A8:
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
loc_822AC5B0:
	// lis r4,3
	ctx.r4.s64 = 196608;
	// fmuls f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// fmuls f13,f29,f28
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// ori r3,r4,12424
	ctx.r3.u64 = ctx.r4.u64 | 12424;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r5,r7,12428
	ctx.r5.u64 = ctx.r7.u64 | 12428;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// ori r3,r4,12424
	ctx.r3.u64 = ctx.r4.u64 | 12424;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lis r10,3
	ctx.r10.s64 = 196608;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f11,f28,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// ori r8,r10,12424
	ctx.r8.u64 = ctx.r10.u64 | 12424;
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// lhzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r8,12424
	ctx.r5.u64 = ctx.r8.u64 | 12424;
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// ori r3,r4,12424
	ctx.r3.u64 = ctx.r4.u64 | 12424;
	// lhzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addis r7,r29,5
	ctx.r7.s64 = ctx.r29.s64 + 327680;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r4,r7,7240
	ctx.r4.s64 = ctx.r7.s64 + 7240;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ori r7,r6,16384
	ctx.r7.u64 = ctx.r6.u64 | 16384;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// ori r6,r6,12428
	ctx.r6.u64 = ctx.r6.u64 | 12428;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// stwx r8,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// ori r11,r7,8
	ctx.r11.u64 = ctx.r7.u64 | 8;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f13,f9,f1,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f0,f10,f2,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x82350920
	ctx.lr = 0x822AC6B8;
	sub_82350920(ctx, base);
loc_822AC6B8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf4
	ctx.lr = 0x822AC6C4;
	__restfpr_28(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AC6C8"))) PPC_WEAK_FUNC(sub_822AC6C8);
PPC_FUNC_IMPL(__imp__sub_822AC6C8) {
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
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822AC6F0;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ac730
	if (ctx.cr6.eq) goto loc_822AC730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,25560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
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
	ctx.lr = 0x822AC728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r7.u8);
loc_822AC730:
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

__attribute__((alias("__imp__sub_822AC748"))) PPC_WEAK_FUNC(sub_822AC748);
PPC_FUNC_IMPL(__imp__sub_822AC748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x822AC750;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_822AC77C:
	// slw r7,r22,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ac7a0
	if (ctx.cr6.eq) goto loc_822AC7A0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
loc_822AC7A0:
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x822ac77c
	if (ctx.cr6.lt) goto loc_822AC77C;
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822aca74
	if (ctx.cr6.eq) goto loc_822ACA74;
	// lbz r11,498(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 498);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ac7d8
	if (ctx.cr6.eq) goto loc_822AC7D8;
	// lfs f29,504(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 504);
	ctx.f29.f64 = double(temp.f32);
	// stb r23,498(r26)
	PPC_STORE_U8(ctx.r26.u32 + 498, ctx.r23.u8);
	// b 0x822ac7f8
	goto loc_822AC7F8;
loc_822AC7D8:
	// lbz r10,499(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 499);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ac7f0
	if (ctx.cr6.eq) goto loc_822AC7F0;
	// lfs f29,508(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 508);
	ctx.f29.f64 = double(temp.f32);
	// stb r23,499(r26)
	PPC_STORE_U8(ctx.r26.u32 + 499, ctx.r23.u8);
	// b 0x822ac7f8
	goto loc_822AC7F8;
loc_822AC7F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f29.f64 = double(temp.f32);
loc_822AC7F8:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,-4568
	ctx.r29.s64 = ctx.r11.s64 + -4568;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lfs f30,-1472(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1472);
	ctx.f30.f64 = double(temp.f32);
	// addi r24,r11,-18560
	ctx.r24.s64 = ctx.r11.s64 + -18560;
	// lfs f31,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f31.f64 = double(temp.f32);
loc_822AC81C:
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x822ac8b4
	if (!ctx.cr6.gt) goto loc_822AC8B4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_822AC840:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r29,-8832
	ctx.r10.s64 = ctx.r29.s64 + -8832;
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// mulli r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 * 23;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac890
	if (ctx.cr6.eq) goto loc_822AC890;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822ac888
	if (!ctx.cr6.gt) goto loc_822AC888;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_822AC888:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// b 0x822ac8a0
	goto loc_822AC8A0;
loc_822AC890:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822ac8a0
	if (!ctx.cr6.lt) goto loc_822AC8A0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_822AC8A0:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822ac840
	if (ctx.cr6.lt) goto loc_822AC840;
loc_822AC8B4:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ac988
	if (ctx.cr6.eq) goto loc_822AC988;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822ac92c
	if (!ctx.cr6.eq) goto loc_822AC92C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,230
	ctx.r11.s64 = ctx.r31.s64 + 230;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r5,r29,-8832
	ctx.r5.s64 = ctx.r29.s64 + -8832;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r4,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r27,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82348b98
	ctx.lr = 0x822AC910;
	sub_82348B98(ctx, base);
	// addi r11,r29,-8832
	ctx.r11.s64 = ctx.r29.s64 + -8832;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,36(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// b 0x822aca4c
	goto loc_822ACA4C;
loc_822AC92C:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r10,23
	ctx.r11.s64 = ctx.r10.s64 * 23;
	// add r8,r31,r9
	ctx.r8.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + ctx.r26.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r29,-8832
	ctx.r9.s64 = ctx.r29.s64 + -8832;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f29,r7,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f29.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822AC970:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822ac970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AC970;
	// b 0x822aca4c
	goto loc_822ACA4C;
loc_822AC988:
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822ac9f4
	if (!ctx.cr6.eq) goto loc_822AC9F4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,230
	ctx.r11.s64 = ctx.r31.s64 + 230;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r29,-8832
	ctx.r9.s64 = ctx.r29.s64 + -8832;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r8,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f10,r27,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82348b98
	ctx.lr = 0x822AC9D8;
	sub_82348B98(ctx, base);
	// addi r11,r29,-8832
	ctx.r11.s64 = ctx.r29.s64 + -8832;
	// lfs f8,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lfsx f9,r27,r7
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,36(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// b 0x822aca4c
	goto loc_822ACA4C;
loc_822AC9F4:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r10,23
	ctx.r11.s64 = ctx.r10.s64 * 23;
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + ctx.r26.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r29,-8832
	ctx.r9.s64 = ctx.r29.s64 + -8832;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f29,r5,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f29.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822ACA38:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822aca38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ACA38;
loc_822ACA4C:
	// addis r11,r24,5
	ctx.r11.s64 = ctx.r24.s64 + 327680;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// bl 0x82348fd8
	ctx.lr = 0x822ACA64;
	sub_82348FD8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 23, ctx.xer);
	// blt cr6,0x822ac81c
	if (ctx.cr6.lt) goto loc_822AC81C;
loc_822ACA74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822ACA88"))) PPC_WEAK_FUNC(sub_822ACA88);
PPC_FUNC_IMPL(__imp__sub_822ACA88) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 497, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822ACA94"))) PPC_WEAK_FUNC(sub_822ACA94);
PPC_FUNC_IMPL(__imp__sub_822ACA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ACA98"))) PPC_WEAK_FUNC(sub_822ACA98);
PPC_FUNC_IMPL(__imp__sub_822ACA98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 497, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822ACAA4"))) PPC_WEAK_FUNC(sub_822ACAA4);
PPC_FUNC_IMPL(__imp__sub_822ACAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ACAA8"))) PPC_WEAK_FUNC(sub_822ACAA8);
PPC_FUNC_IMPL(__imp__sub_822ACAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822ACAB0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r27,-32047
	ctx.r27.s64 = -2100232192;
	// mulli r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 * 23;
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r10,-13400
	ctx.r29.s64 = ctx.r10.s64 + -13400;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,7564
	ctx.r5.s64 = ctx.r10.s64 + 7564;
	// lwz r10,20160(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bl 0x82351720
	ctx.lr = 0x822ACB14;
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
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822ACB48;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,8540
	ctx.r5.s64 = ctx.r11.s64 + 8540;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351620
	ctx.lr = 0x822ACB70;
	sub_82351620(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822ACB7C"))) PPC_WEAK_FUNC(sub_822ACB7C);
PPC_FUNC_IMPL(__imp__sub_822ACB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ACB80"))) PPC_WEAK_FUNC(sub_822ACB80);
PPC_FUNC_IMPL(__imp__sub_822ACB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822accfc
	if (ctx.cr6.eq) goto loc_822ACCFC;
	// lis r10,-20813
	ctx.r10.s64 = -1364000768;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// ori r9,r10,49911
	ctx.r9.u64 = ctx.r10.u64 | 49911;
	// ori r7,r8,16334
	ctx.r7.u64 = ctx.r8.u64 | 16334;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822acc70
	if (ctx.cr6.gt) goto loc_822ACC70;
	// lis r6,-20813
	ctx.r6.s64 = -1364000768;
	// lis r4,-27583
	ctx.r4.s64 = -1807679488;
	// ori r5,r6,49911
	ctx.r5.u64 = ctx.r6.u64 | 49911;
	// ori r10,r4,16334
	ctx.r10.u64 = ctx.r4.u64 | 16334;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
	// lis r9,-18726
	ctx.r9.s64 = -1227227136;
	// lis r7,29368
	ctx.r7.s64 = 1924661248;
	// ori r8,r9,34385
	ctx.r8.u64 = ctx.r9.u64 | 34385;
	// ori r6,r7,14264
	ctx.r6.u64 = ctx.r7.u64 | 14264;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x822acc38
	if (ctx.cr6.gt) goto loc_822ACC38;
	// lis r5,-18726
	ctx.r5.s64 = -1227227136;
	// lis r10,29368
	ctx.r10.s64 = 1924661248;
	// ori r4,r5,34385
	ctx.r4.u64 = ctx.r5.u64 | 34385;
	// ori r9,r10,14264
	ctx.r9.u64 = ctx.r10.u64 | 14264;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
	// lis r8,11752
	ctx.r8.s64 = 770179072;
	// lis r6,23498
	ctx.r6.s64 = 1539964928;
	// ori r7,r8,29088
	ctx.r7.u64 = ctx.r8.u64 | 29088;
	// ori r5,r6,44864
	ctx.r5.u64 = ctx.r6.u64 | 44864;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
	// lis r4,11753
	ctx.r4.s64 = 770244608;
	// lis r9,23498
	ctx.r9.s64 = 1539964928;
	// ori r10,r4,2177
	ctx.r10.u64 = ctx.r4.u64 | 2177;
	// ori r8,r9,44864
	ctx.r8.u64 = ctx.r9.u64 | 44864;
	// b 0x822accf0
	goto loc_822ACCF0;
loc_822ACC38:
	// lis r7,-6648
	ctx.r7.s64 = -435683328;
	// lis r5,29378
	ctx.r5.s64 = 1925316608;
	// ori r6,r7,64719
	ctx.r6.u64 = ctx.r7.u64 | 64719;
	// ori r4,r5,64359
	ctx.r4.u64 = ctx.r5.u64 | 64359;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
	// lis r10,-12636
	ctx.r10.s64 = -828112896;
	// lis r8,29384
	ctx.r8.s64 = 1925709824;
	// ori r9,r10,64719
	ctx.r9.u64 = ctx.r10.u64 | 64719;
	// ori r7,r8,60226
	ctx.r7.u64 = ctx.r8.u64 | 60226;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// b 0x822accf8
	goto loc_822ACCF8;
loc_822ACC70:
	// lis r6,13034
	ctx.r6.s64 = 854196224;
	// lis r4,-27092
	ctx.r4.s64 = -1775501312;
	// ori r5,r6,4136
	ctx.r5.u64 = ctx.r6.u64 | 4136;
	// ori r10,r4,48193
	ctx.r10.u64 = ctx.r4.u64 | 48193;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// bgt cr6,0x822acce0
	if (ctx.cr6.gt) goto loc_822ACCE0;
	// lis r9,13034
	ctx.r9.s64 = 854196224;
	// lis r7,-27092
	ctx.r7.s64 = -1775501312;
	// ori r8,r9,4136
	ctx.r8.u64 = ctx.r9.u64 | 4136;
	// ori r6,r7,48193
	ctx.r6.u64 = ctx.r7.u64 | 48193;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
	// lis r5,22438
	ctx.r5.s64 = 1470496768;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// ori r4,r5,10272
	ctx.r4.u64 = ctx.r5.u64 | 10272;
	// ori r9,r10,16404
	ctx.r9.u64 = ctx.r10.u64 | 16404;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
	// lis r8,-30806
	ctx.r8.s64 = -2018902016;
	// lis r6,-27092
	ctx.r6.s64 = -1775501312;
	// ori r7,r8,55416
	ctx.r7.u64 = ctx.r8.u64 | 55416;
	// ori r5,r6,29197
	ctx.r5.u64 = ctx.r6.u64 | 29197;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// b 0x822accf8
	goto loc_822ACCF8;
loc_822ACCE0:
	// lis r4,-13702
	ctx.r4.s64 = -897974272;
	// lis r9,-19548
	ctx.r9.s64 = -1281097728;
	// ori r10,r4,52471
	ctx.r10.u64 = ctx.r4.u64 | 52471;
	// ori r8,r9,12513
	ctx.r8.u64 = ctx.r9.u64 | 12513;
loc_822ACCF0:
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
loc_822ACCF8:
	// beq cr6,0x822acd04
	if (ctx.cr6.eq) goto loc_822ACD04;
loc_822ACCFC:
	// lbz r3,25549(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25549);
	// blr 
	return;
loc_822ACD04:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822ACD0C"))) PPC_WEAK_FUNC(sub_822ACD0C);
PPC_FUNC_IMPL(__imp__sub_822ACD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ACD10"))) PPC_WEAK_FUNC(sub_822ACD10);
PPC_FUNC_IMPL(__imp__sub_822ACD10) {
	PPC_FUNC_PROLOGUE();
	// stb r4,25549(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25549, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822ACD18"))) PPC_WEAK_FUNC(sub_822ACD18);
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

__attribute__((alias("__imp__sub_822ACDCC"))) PPC_WEAK_FUNC(sub_822ACDCC);
PPC_FUNC_IMPL(__imp__sub_822ACDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ACDD0"))) PPC_WEAK_FUNC(sub_822ACDD0);
PPC_FUNC_IMPL(__imp__sub_822ACDD0) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8210b3c8
	ctx.lr = 0x822ACDF0;
	sub_8210B3C8(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,-18972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18972);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822ace28
	if (!ctx.cr6.lt) goto loc_822ACE28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,25550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25550, ctx.r11.u8);
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
loc_822ACE28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,25550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25550, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_822ACE44"))) PPC_WEAK_FUNC(sub_822ACE44);
PPC_FUNC_IMPL(__imp__sub_822ACE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822ACE48"))) PPC_WEAK_FUNC(sub_822ACE48);
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

__attribute__((alias("__imp__sub_822ACF08"))) PPC_WEAK_FUNC(sub_822ACF08);
PPC_FUNC_IMPL(__imp__sub_822ACF08) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822acf64
	if (!ctx.cr6.gt) goto loc_822ACF64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8210b3c8
	ctx.lr = 0x822ACF3C;
	sub_8210B3C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f11,516(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stb r11,25552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25552, ctx.r11.u8);
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
loc_822ACF64:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25552, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_822ACF80"))) PPC_WEAK_FUNC(sub_822ACF80);
PPC_FUNC_IMPL(__imp__sub_822ACF80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822acfdc
	if (!ctx.cr6.gt) goto loc_822ACFDC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8210b3c8
	ctx.lr = 0x822ACFB4;
	sub_8210B3C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f11,512(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stb r11,25553(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25553, ctx.r11.u8);
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
loc_822ACFDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25553(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25553, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_822ACFF8"))) PPC_WEAK_FUNC(sub_822ACFF8);
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

__attribute__((alias("__imp__sub_822AD09C"))) PPC_WEAK_FUNC(sub_822AD09C);
PPC_FUNC_IMPL(__imp__sub_822AD09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD0A0"))) PPC_WEAK_FUNC(sub_822AD0A0);
PPC_FUNC_IMPL(__imp__sub_822AD0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r9,r10,17132
	ctx.r9.u64 = ctx.r10.u64 | 17132;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD0B4"))) PPC_WEAK_FUNC(sub_822AD0B4);
PPC_FUNC_IMPL(__imp__sub_822AD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD0B8"))) PPC_WEAK_FUNC(sub_822AD0B8);
PPC_FUNC_IMPL(__imp__sub_822AD0B8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AD0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822AD0F8;
	sub_8234C2F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ad118
	if (!ctx.cr6.eq) goto loc_822AD118;
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
loc_822AD118:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822AD134"))) PPC_WEAK_FUNC(sub_822AD134);
PPC_FUNC_IMPL(__imp__sub_822AD134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD138"))) PPC_WEAK_FUNC(sub_822AD138);
PPC_FUNC_IMPL(__imp__sub_822AD138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x822AD140;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32085
	ctx.r24.s64 = -2102722560;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lbz r11,7627(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 7627);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r23,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r23.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r23.u32);
	// bne cr6,0x822ad264
	if (!ctx.cr6.eq) goto loc_822AD264;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// addi r31,r11,968
	ctx.r31.s64 = ctx.r11.s64 + 968;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,8608
	ctx.r27.s64 = ctx.r11.s64 + 8608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r11,8600
	ctx.r26.s64 = ctx.r11.s64 + 8600;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,-18884
	ctx.r30.s64 = ctx.r11.s64 + -18884;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822AD1C0;
	sub_823514F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r25,r11,-11560
	ctx.r25.s64 = ctx.r11.s64 + -11560;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AD1FC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r27,r11,8580
	ctx.r27.s64 = ctx.r11.s64 + 8580;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822AD230;
	sub_823514F8(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AD25C;
	sub_82351720(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r11,7627(r24)
	PPC_STORE_U8(ctx.r24.u32 + 7627, ctx.r11.u8);
loc_822AD264:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AD270"))) PPC_WEAK_FUNC(sub_822AD270);
PPC_FUNC_IMPL(__imp__sub_822AD270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822ad2f8
	if (!ctx.cr6.gt) goto loc_822AD2F8;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r10,r11,-10256
	ctx.r10.s64 = ctx.r11.s64 + -10256;
loc_822AD2B0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ad2e0
	if (ctx.cr6.eq) goto loc_822AD2E0;
	// lhz r6,4368(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4368);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,22,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ad2d4
	if (!ctx.cr6.eq) goto loc_822AD2D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD2D4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ad2f4
	if (!ctx.cr6.eq) goto loc_822AD2F4;
loc_822AD2E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,19200
	ctx.r10.s64 = ctx.r10.s64 + 19200;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822ad2b0
	if (ctx.cr6.lt) goto loc_822AD2B0;
	// b 0x822ad2f8
	goto loc_822AD2F8;
loc_822AD2F4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_822AD2F8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822ad3a8
	if (ctx.cr6.eq) goto loc_822AD3A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x822ad350
	if (ctx.cr6.lt) goto loc_822AD350;
	// bne cr6,0x822ad388
	if (!ctx.cr6.eq) goto loc_822AD388;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r10,r11,-18884
	ctx.r10.s64 = ctx.r11.s64 + -18884;
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x822ad33c
	if (ctx.cr6.lt) goto loc_822AD33C;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
loc_822AD33C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f31,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x822ad37c
	goto loc_822AD37C;
loc_822AD350:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r10,r11,-18884
	ctx.r10.s64 = ctx.r11.s64 + -18884;
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x822ad36c
	if (ctx.cr6.lt) goto loc_822AD36C;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
loc_822AD36C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_822AD37C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,3280
	ctx.r10.s64 = ctx.r10.s64 + 3280;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822AD388:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// bl 0x8234a190
	ctx.lr = 0x822AD39C;
	sub_8234A190(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,57168
	ctx.r6.u64 = ctx.r7.u64 | 57168;
	// stfsx f31,r31,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
loc_822AD3A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD3C0"))) PPC_WEAK_FUNC(sub_822AD3C0);
PPC_FUNC_IMPL(__imp__sub_822AD3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822ad3f0
	if (!ctx.cr6.eq) goto loc_822AD3F0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822ad3e0
	if (ctx.cr6.eq) goto loc_822AD3E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD3E0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ad3f4
	if (!ctx.cr6.eq) goto loc_822AD3F4;
loc_822AD3F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD3F4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD3FC"))) PPC_WEAK_FUNC(sub_822AD3FC);
PPC_FUNC_IMPL(__imp__sub_822AD3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD400"))) PPC_WEAK_FUNC(sub_822AD400);
PPC_FUNC_IMPL(__imp__sub_822AD400) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// beq cr6,0x822ad41c
	if (ctx.cr6.eq) goto loc_822AD41C;
	// addi r11,r11,-18904
	ctx.r11.s64 = ctx.r11.s64 + -18904;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_822AD41C:
	// lwz r3,-18904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD424"))) PPC_WEAK_FUNC(sub_822AD424);
PPC_FUNC_IMPL(__imp__sub_822AD424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD428"))) PPC_WEAK_FUNC(sub_822AD428);
PPC_FUNC_IMPL(__imp__sub_822AD428) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD430"))) PPC_WEAK_FUNC(sub_822AD430);
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

__attribute__((alias("__imp__sub_822AD444"))) PPC_WEAK_FUNC(sub_822AD444);
PPC_FUNC_IMPL(__imp__sub_822AD444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD448"))) PPC_WEAK_FUNC(sub_822AD448);
PPC_FUNC_IMPL(__imp__sub_822AD448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822ad45c
	if (ctx.cr6.eq) goto loc_822AD45C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD45C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ad478
	if (ctx.cr6.eq) goto loc_822AD478;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x822ad47c
	if (ctx.cr6.eq) goto loc_822AD47C;
loc_822AD478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD47C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD484"))) PPC_WEAK_FUNC(sub_822AD484);
PPC_FUNC_IMPL(__imp__sub_822AD484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD488"))) PPC_WEAK_FUNC(sub_822AD488);
PPC_FUNC_IMPL(__imp__sub_822AD488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-18880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD494"))) PPC_WEAK_FUNC(sub_822AD494);
PPC_FUNC_IMPL(__imp__sub_822AD494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD498"))) PPC_WEAK_FUNC(sub_822AD498);
PPC_FUNC_IMPL(__imp__sub_822AD498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-18876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD4A4"))) PPC_WEAK_FUNC(sub_822AD4A4);
PPC_FUNC_IMPL(__imp__sub_822AD4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD4A8"))) PPC_WEAK_FUNC(sub_822AD4A8);
PPC_FUNC_IMPL(__imp__sub_822AD4A8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// beq cr6,0x822ad4c4
	if (ctx.cr6.eq) goto loc_822AD4C4;
	// addi r11,r11,-18872
	ctx.r11.s64 = ctx.r11.s64 + -18872;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_822AD4C4:
	// lwz r3,-18872(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD4CC"))) PPC_WEAK_FUNC(sub_822AD4CC);
PPC_FUNC_IMPL(__imp__sub_822AD4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD4D0"))) PPC_WEAK_FUNC(sub_822AD4D0);
PPC_FUNC_IMPL(__imp__sub_822AD4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822ad138
	sub_822AD138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822AD4D4"))) PPC_WEAK_FUNC(sub_822AD4D4);
PPC_FUNC_IMPL(__imp__sub_822AD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD4D8"))) PPC_WEAK_FUNC(sub_822AD4D8);
PPC_FUNC_IMPL(__imp__sub_822AD4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-18864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD4E4"))) PPC_WEAK_FUNC(sub_822AD4E4);
PPC_FUNC_IMPL(__imp__sub_822AD4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD4E8"))) PPC_WEAK_FUNC(sub_822AD4E8);
PPC_FUNC_IMPL(__imp__sub_822AD4E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// beq cr6,0x822ad504
	if (ctx.cr6.eq) goto loc_822AD504;
	// addi r11,r11,-18860
	ctx.r11.s64 = ctx.r11.s64 + -18860;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_822AD504:
	// lwz r3,-18860(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD50C"))) PPC_WEAK_FUNC(sub_822AD50C);
PPC_FUNC_IMPL(__imp__sub_822AD50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD510"))) PPC_WEAK_FUNC(sub_822AD510);
PPC_FUNC_IMPL(__imp__sub_822AD510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-18852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD51C"))) PPC_WEAK_FUNC(sub_822AD51C);
PPC_FUNC_IMPL(__imp__sub_822AD51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD520"))) PPC_WEAK_FUNC(sub_822AD520);
PPC_FUNC_IMPL(__imp__sub_822AD520) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// beq cr6,0x822ad53c
	if (ctx.cr6.eq) goto loc_822AD53C;
	// addi r11,r11,-18848
	ctx.r11.s64 = ctx.r11.s64 + -18848;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_822AD53C:
	// lwz r3,-18848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18848);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD544"))) PPC_WEAK_FUNC(sub_822AD544);
PPC_FUNC_IMPL(__imp__sub_822AD544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD548"))) PPC_WEAK_FUNC(sub_822AD548);
PPC_FUNC_IMPL(__imp__sub_822AD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-18840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD554"))) PPC_WEAK_FUNC(sub_822AD554);
PPC_FUNC_IMPL(__imp__sub_822AD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD558"))) PPC_WEAK_FUNC(sub_822AD558);
PPC_FUNC_IMPL(__imp__sub_822AD558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-18836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD564"))) PPC_WEAK_FUNC(sub_822AD564);
PPC_FUNC_IMPL(__imp__sub_822AD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD568"))) PPC_WEAK_FUNC(sub_822AD568);
PPC_FUNC_IMPL(__imp__sub_822AD568) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// beq cr6,0x822ad584
	if (ctx.cr6.eq) goto loc_822AD584;
	// addi r11,r11,-18832
	ctx.r11.s64 = ctx.r11.s64 + -18832;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_822AD584:
	// lwz r3,-18832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18832);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822AD58C"))) PPC_WEAK_FUNC(sub_822AD58C);
PPC_FUNC_IMPL(__imp__sub_822AD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD590"))) PPC_WEAK_FUNC(sub_822AD590);
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

__attribute__((alias("__imp__sub_822AD638"))) PPC_WEAK_FUNC(sub_822AD638);
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

__attribute__((alias("__imp__sub_822AD710"))) PPC_WEAK_FUNC(sub_822AD710);
PPC_FUNC_IMPL(__imp__sub_822AD710) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ad744
	if (!ctx.cr6.eq) goto loc_822AD744;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 756, ctx.r10.u8);
	// b 0x822ad750
	goto loc_822AD750;
loc_822AD744:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x8259b798
	ctx.lr = 0x822AD750;
	sub_8259B798(ctx, base);
loc_822AD750:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_822AD774"))) PPC_WEAK_FUNC(sub_822AD774);
PPC_FUNC_IMPL(__imp__sub_822AD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822AD778"))) PPC_WEAK_FUNC(sub_822AD778);
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

__attribute__((alias("__imp__sub_822AD7DC"))) PPC_WEAK_FUNC(sub_822AD7DC);
PPC_FUNC_IMPL(__imp__sub_822AD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


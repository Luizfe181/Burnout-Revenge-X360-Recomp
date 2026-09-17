#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_821E68F8"))) PPC_WEAK_FUNC(sub_821E68F8);
__attribute__((alias("__imp__sub_821E6928"))) PPC_WEAK_FUNC(sub_821E6928);
__attribute__((alias("__imp__sub_821E69F0"))) PPC_WEAK_FUNC(sub_821E69F0);
__attribute__((alias("__imp__sub_821E6D38"))) PPC_WEAK_FUNC(sub_821E6D38);
__attribute__((alias("__imp__sub_821E6E10"))) PPC_WEAK_FUNC(sub_821E6E10);
__attribute__((alias("__imp__sub_821E6E98"))) PPC_WEAK_FUNC(sub_821E6E98);
__attribute__((alias("__imp__sub_821E6EA0"))) PPC_WEAK_FUNC(sub_821E6EA0);
__attribute__((alias("__imp__sub_821E6EB0"))) PPC_WEAK_FUNC(sub_821E6EB0);
__attribute__((alias("__imp__sub_821E6F10"))) PPC_WEAK_FUNC(sub_821E6F10);
__attribute__((alias("__imp__sub_821E6F78"))) PPC_WEAK_FUNC(sub_821E6F78);
__attribute__((alias("__imp__sub_821E70C8"))) PPC_WEAK_FUNC(sub_821E70C8);
__attribute__((alias("__imp__sub_821E7150"))) PPC_WEAK_FUNC(sub_821E7150);
__attribute__((alias("__imp__sub_821E74A8"))) PPC_WEAK_FUNC(sub_821E74A8);
__attribute__((alias("__imp__sub_821E7518"))) PPC_WEAK_FUNC(sub_821E7518);
__attribute__((alias("__imp__sub_821E7540"))) PPC_WEAK_FUNC(sub_821E7540);
__attribute__((alias("__imp__sub_821E7568"))) PPC_WEAK_FUNC(sub_821E7568);
__attribute__((alias("__imp__sub_821E75F8"))) PPC_WEAK_FUNC(sub_821E75F8);
__attribute__((alias("__imp__sub_821E76A8"))) PPC_WEAK_FUNC(sub_821E76A8);
__attribute__((alias("__imp__sub_821E7720"))) PPC_WEAK_FUNC(sub_821E7720);
__attribute__((alias("__imp__sub_821E7730"))) PPC_WEAK_FUNC(sub_821E7730);
__attribute__((alias("__imp__sub_821E7760"))) PPC_WEAK_FUNC(sub_821E7760);
__attribute__((alias("__imp__sub_821E7818"))) PPC_WEAK_FUNC(sub_821E7818);
__attribute__((alias("__imp__sub_821E7970"))) PPC_WEAK_FUNC(sub_821E7970);
__attribute__((alias("__imp__sub_821E7C28"))) PPC_WEAK_FUNC(sub_821E7C28);
__attribute__((alias("__imp__sub_821E7C78"))) PPC_WEAK_FUNC(sub_821E7C78);
__attribute__((alias("__imp__sub_821E7CC8"))) PPC_WEAK_FUNC(sub_821E7CC8);
__attribute__((alias("__imp__sub_821E7E50"))) PPC_WEAK_FUNC(sub_821E7E50);
__attribute__((alias("__imp__sub_821E90A0"))) PPC_WEAK_FUNC(sub_821E90A0);
__attribute__((alias("__imp__sub_821E90B0"))) PPC_WEAK_FUNC(sub_821E90B0);
__attribute__((alias("__imp__sub_821E9100"))) PPC_WEAK_FUNC(sub_821E9100);
__attribute__((alias("__imp__sub_821E9150"))) PPC_WEAK_FUNC(sub_821E9150);
__attribute__((alias("__imp__sub_821E9188"))) PPC_WEAK_FUNC(sub_821E9188);
__attribute__((alias("__imp__sub_821E94B0"))) PPC_WEAK_FUNC(sub_821E94B0);
__attribute__((alias("__imp__sub_821E9500"))) PPC_WEAK_FUNC(sub_821E9500);
__attribute__((alias("__imp__sub_821E9528"))) PPC_WEAK_FUNC(sub_821E9528);
__attribute__((alias("__imp__sub_821E9598"))) PPC_WEAK_FUNC(sub_821E9598);
__attribute__((alias("__imp__sub_821E95A8"))) PPC_WEAK_FUNC(sub_821E95A8);
__attribute__((alias("__imp__sub_821E9638"))) PPC_WEAK_FUNC(sub_821E9638);
__attribute__((alias("__imp__sub_821E9900"))) PPC_WEAK_FUNC(sub_821E9900);
PPC_FUNC_IMPL(__imp__sub_821E68F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 536);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821E6930;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r11,538(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 538);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6968
	if (ctx.cr6.eq) goto loc_821E6968;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e69e8
	if (ctx.cr6.eq) goto loc_821E69E8;
loc_821E6968:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e6978
	if (ctx.cr6.eq) goto loc_821E6978;
	// stb r10,538(r31)
	PPC_STORE_U8(ctx.r31.u32 + 538, ctx.r10.u8);
loc_821E6978:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6994
	if (ctx.cr6.eq) goto loc_821E6994;
	// lwz r4,532(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// li r3,12
	ctx.r3.s64 = 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E6994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E6994:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// stw r26,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r26.u32);
	// stw r7,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r7.u32);
	// stw r6,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r6.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x821E69BC;
	sub_8259D2A0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259d2a0
	ctx.lr = 0x821E69CC;
	sub_8259D2A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stw r25,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r25.u32);
	// stb r5,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r5.u8);
	// stb r4,537(r31)
	PPC_STORE_U8(ctx.r31.u32 + 537, ctx.r4.u8);
	// bl 0x82427168
	ctx.lr = 0x821E69E8;
	sub_82427168(ctx, base);
loc_821E69E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E69F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,538(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 538);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// stb r10,537(r3)
	PPC_STORE_U8(ctx.r3.u32 + 537, ctx.r10.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6D38) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821e6d64
	if (ctx.cr6.eq) goto loc_821E6D64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E6D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6d8c
	if (ctx.cr6.eq) goto loc_821E6D8C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821e6d8c
	if (ctx.cr6.eq) goto loc_821E6D8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_821E6D8C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// lis r4,3638
	ctx.r4.s64 = 238419968;
	// addi r31,r11,28976
	ctx.r31.s64 = ctx.r11.s64 + 28976;
	// ori r11,r3,15958
	ctx.r11.u64 = ctx.r3.u64 | 15958;
	// ori r4,r4,32087
	ctx.r4.u64 = ctx.r4.u64 | 32087;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822038c8
	ctx.lr = 0x821E6DD0;
	sub_822038C8(ctx, base);
	// lis r10,29453
	ctx.r10.s64 = 1930231808;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,24215
	ctx.r4.u64 = ctx.r10.u64 | 24215;
	// ori r8,r9,16095
	ctx.r8.u64 = ctx.r9.u64 | 16095;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x821E6DF8;
	sub_820A38E8(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_821E6E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,19628
	ctx.r9.s64 = ctx.r3.s64 + 19628;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stfs f0,21036(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 21036, temp.u32);
	// stb r11,31116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31116, ctx.r11.u8);
	// ori r8,r10,34496
	ctx.r8.u64 = ctx.r10.u64 | 34496;
	// stb r11,31133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31133, ctx.r11.u8);
	// stb r11,31134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31134, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,21032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21032, ctx.r11.u32);
	// stw r11,21048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21048, ctx.r11.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r8,r3,20028
	ctx.r8.s64 = ctx.r3.s64 + 20028;
loc_821E6E4C:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// blt cr6,0x821e6e4c
	if (ctx.cr6.lt) goto loc_821E6E4C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r3,20128
	ctx.r9.s64 = ctx.r3.s64 + 20128;
	// addi r8,r3,20208
	ctx.r8.s64 = ctx.r3.s64 + 20208;
loc_821E6E70:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x821e6e70
	if (ctx.cr6.lt) goto loc_821E6E70;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,21032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21032);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34496
	ctx.r10.u64 = ctx.r11.u64 | 34496;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,21032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21032);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e6ee4
	if (ctx.cr6.lt) goto loc_821E6EE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E6EE4:
	// mulli r10,r4,196
	ctx.r10.s64 = ctx.r4.s64 * 196;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x8259d2a0
	ctx.lr = 0x821E6EF8;
	sub_8259D2A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E6F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21032(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e6f60
	if (!ctx.cr6.gt) goto loc_821E6F60;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
loc_821E6F38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824065f0
	ctx.lr = 0x821E6F44;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e6f6c
	if (ctx.cr6.eq) goto loc_821E6F6C;
	// lwz r10,21032(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e6f38
	if (ctx.cr6.lt) goto loc_821E6F38;
loc_821E6F60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821E6F6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E6F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 65536;
	// addi r4,r4,-31520
	ctx.r4.s64 = ctx.r4.s64 + -31520;
	// bl 0x8259d2a0
	ctx.lr = 0x821E6FAC;
	sub_8259D2A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E70C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51970
	ctx.r9.u64 = ctx.r10.u64 | 51970;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x821e7130
	if (ctx.cr6.eq) goto loc_821E7130;
	// lis r7,3638
	ctx.r7.s64 = 238419968;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r6,-27583
	ctx.r6.s64 = -1807679488;
	// ori r4,r7,32087
	ctx.r4.u64 = ctx.r7.u64 | 32087;
	// ori r5,r6,15958
	ctx.r5.u64 = ctx.r6.u64 | 15958;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rldimi r4,r5,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// beq cr6,0x821e7124
	if (ctx.cr6.eq) goto loc_821E7124;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x821e7124
	if (!ctx.cr6.eq) goto loc_821E7124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8808
	ctx.r3.s64 = ctx.r3.s64 + 8808;
	// b 0x822158b0
	sub_822158B0(ctx, base);
	return;
loc_821E7124:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
loc_821E7130:
	// lis r4,-28144
	ctx.r4.s64 = -1844445184;
	// lis r11,-27105
	ctx.r11.s64 = -1776353280;
	// ori r4,r4,51327
	ctx.r4.u64 = ctx.r4.u64 | 51327;
	// ori r10,r11,22369
	ctx.r10.u64 = ctx.r11.u64 | 22369;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821E7158;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821E7170;
	sub_82103ED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7188
	if (ctx.cr6.eq) goto loc_821E7188;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E7188:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
	// beq cr6,0x821e7218
	if (ctx.cr6.eq) goto loc_821E7218;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15532
	ctx.r4.s64 = ctx.r11.s64 + 15532;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E71B4;
	sub_8210FCF8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82361bd8
	ctx.lr = 0x821E71C0;
	sub_82361BD8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,15504
	ctx.r4.s64 = ctx.r11.s64 + 15504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E71D0;
	sub_8210FCF8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82361bd8
	ctx.lr = 0x821E71DC;
	sub_82361BD8(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r9,15500
	ctx.r5.s64 = ctx.r9.s64 + 15500;
	// addi r11,r11,26936
	ctx.r11.s64 = ctx.r11.s64 + 26936;
	// lwz r10,23500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23500);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,15488
	ctx.r4.s64 = ctx.r9.s64 + 15488;
	// lwz r9,2900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x82370488
	ctx.lr = 0x821E7218;
	sub_82370488(ctx, base);
loc_821E7218:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367188
	ctx.lr = 0x821E722C;
	sub_82367188(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823683a8
	ctx.lr = 0x821E7234;
	sub_823683A8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,27160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// bl 0x82103ed8
	ctx.lr = 0x821E725C;
	sub_82103ED8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E74A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821E74B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21032(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e750c
	if (!ctx.cr6.gt) goto loc_821E750C;
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
loc_821E74D8:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824065f0
	ctx.lr = 0x821E74E4;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e74f8
	if (!ctx.cr6.eq) goto loc_821E74F8;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
loc_821E74F8:
	// lwz r9,21032(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821e74d8
	if (ctx.cr6.lt) goto loc_821E74D8;
loc_821E750C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7518) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,20028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7530
	if (!ctx.cr6.eq) goto loc_821E7530;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E7530:
	// addi r9,r4,4907
	ctx.r9.s64 = ctx.r4.s64 + 4907;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7540) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,20208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7558
	if (!ctx.cr6.eq) goto loc_821E7558;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E7558:
	// addi r9,r4,5032
	ctx.r9.s64 = ctx.r4.s64 + 5032;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821E7570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addis r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 65536;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r29,-31040
	ctx.r29.s64 = ctx.r29.s64 + -31040;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e75c8
	if (!ctx.cr6.gt) goto loc_821E75C8;
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// addi r30,r30,-31520
	ctx.r30.s64 = ctx.r30.s64 + -31520;
loc_821E75A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824065f0
	ctx.lr = 0x821E75AC;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e75d4
	if (ctx.cr6.eq) goto loc_821E75D4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e75a0
	if (ctx.cr6.lt) goto loc_821E75A0;
loc_821E75C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821E75D4:
	// addi r11,r31,1418
	ctx.r11.s64 = ctx.r31.s64 + 1418;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r28.u32);
	// std r7,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r7.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E75F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821E7600;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234b6c0
	ctx.lr = 0x821E760C;
	sub_8234B6C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,19628
	ctx.r29.s64 = ctx.r31.s64 + 19628;
	// addi r28,r11,3672
	ctx.r28.s64 = ctx.r11.s64 + 3672;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// li r30,100
	ctx.r30.s64 = 100;
	// ori r27,r11,134
	ctx.r27.u64 = ctx.r11.u64 | 134;
loc_821E7624:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357770
	ctx.lr = 0x821E7648;
	sub_82357770(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e7624
	if (!ctx.cr6.eq) goto loc_821E7624;
	// addi r29,r31,20128
	ctx.r29.s64 = ctx.r31.s64 + 20128;
	// li r30,20
	ctx.r30.s64 = 20;
loc_821E7664:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357770
	ctx.lr = 0x821E7688;
	sub_82357770(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e7664
	if (!ctx.cr6.eq) goto loc_821E7664;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E76A8) {
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
	// bl 0x8234dcb0
	ctx.lr = 0x821E76C0;
	sub_8234DCB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,19628
	ctx.r9.s64 = ctx.r31.s64 + 19628;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r31,20028
	ctx.r8.s64 = ctx.r31.s64 + 20028;
loc_821E76D0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x821e76d0
	if (ctx.cr6.lt) goto loc_821E76D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r31,20128
	ctx.r9.s64 = ctx.r31.s64 + 20128;
	// addi r8,r31,20208
	ctx.r8.s64 = ctx.r31.s64 + 20208;
loc_821E76F4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x821e76f4
	if (ctx.cr6.lt) goto loc_821E76F4;
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
PPC_FUNC_IMPL(__imp__sub_821E7720) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21048, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7730) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,21048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21048);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,21068
	ctx.r3.s64 = ctx.r11.s64 + 21068;
	// stw r9,21048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21048, ctx.r9.u32);
	// b 0x825aed68
	sub_825AED68(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7760) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,10000
	ctx.r9.s64 = 10000;
	// lwz r10,21056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21056);
	// lwz r11,21060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21060);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// blt cr6,0x821e7798
	if (ctx.cr6.lt) goto loc_821E7798;
	// li r30,15
	ctx.r30.s64 = 15;
loc_821E7798:
	// addi r7,r11,2529
	ctx.r7.s64 = ctx.r11.s64 + 2529;
	// lwz r10,31096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31096);
	// addi r6,r31,21068
	ctx.r6.s64 = ctx.r31.s64 + 21068;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r8,r11,29072
	ctx.r8.s64 = ctx.r11.s64 + 29072;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ori r3,r4,14715
	ctx.r3.u64 = ctx.r4.u64 | 14715;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82420108
	ctx.lr = 0x821E77E4;
	sub_82420108(ctx, base);
	// lwz r11,21060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21060);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,21064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21064, ctx.r11.u32);
	// stw r10,21048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21048, ctx.r10.u32);
	// stw r9,21060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21060, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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
PPC_FUNC_IMPL(__imp__sub_821E7818) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7970) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-24936
	ctx.r9.s64 = ctx.r11.s64 + -24936;
	// lwz r10,9720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9720);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821e7c70
	if (!ctx.cr6.gt) goto loc_821E7C70;
	// addi r11,r9,9668
	ctx.r11.s64 = ctx.r9.s64 + 9668;
	// li r7,1
	ctx.r7.s64 = 1;
loc_821E7C48:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821e7c60
	if (!ctx.cr6.eq) goto loc_821E7C60;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwz r10,9720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9720);
loc_821E7C60:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e7c48
	if (ctx.cr6.lt) goto loc_821E7C48;
loc_821E7C70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7C78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x821E7C98;
	sub_823656E8(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// bl 0x82220fa0
	ctx.lr = 0x821E7CB4;
	sub_82220FA0(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_821E7CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E7CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-24936
	ctx.r29.s64 = ctx.r11.s64 + -24936;
	// lwz r11,9720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e7d2c
	if (!ctx.cr6.gt) goto loc_821E7D2C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r29,9668
	ctx.r31.s64 = ctx.r29.s64 + 9668;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
loc_821E7CF8:
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x823656f8
	ctx.lr = 0x821E7D04;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7d18
	if (ctx.cr6.eq) goto loc_821E7D18;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7d38
	if (ctx.cr6.eq) goto loc_821E7D38;
loc_821E7D18:
	// lwz r11,9720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7cf8
	if (ctx.cr6.lt) goto loc_821E7CF8;
loc_821E7D2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821E7D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E7E50) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e7eac
	if (!ctx.cr6.gt) goto loc_821E7EAC;
loc_821E7E7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E7E88;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7e9c
	if (ctx.cr6.eq) goto loc_821E7E9C;
	// lbz r11,23124(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7ec8
	if (ctx.cr6.eq) goto loc_821E7EC8;
loc_821E7E9C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7e7c
	if (ctx.cr6.lt) goto loc_821E7E7C;
loc_821E7EAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E7EB0:
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
loc_821E7EC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e7eb0
	goto loc_821E7EB0;
}
PPC_FUNC_IMPL(__imp__sub_821E90A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E90B0) {
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
	// lwz r4,820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e90e8
	if (ctx.cr6.eq) goto loc_821E90E8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82369650
	ctx.lr = 0x821E90E0;
	sub_82369650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
loc_821E90E8:
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
PPC_FUNC_IMPL(__imp__sub_821E9100) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E9128;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f5fb0
	ctx.lr = 0x821E913C;
	sub_821F5FB0(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_821E9150) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 832, ctx.r11.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E9188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// b 0x8221c328
	sub_8221C328(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E94B0) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stb r30,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r30.u8);
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
	// bl 0x8236f410
	ctx.lr = 0x821E94E4;
	sub_8236F410(ctx, base);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
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
PPC_FUNC_IMPL(__imp__sub_821E9500) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,834(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 834);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e951c
	if (!ctx.cr6.eq) goto loc_821E951C;
	// lbz r10,833(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 833);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821E951C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E9528) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221be38
	ctx.lr = 0x821E9548;
	sub_8221BE38(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821e957c
	if (ctx.cr6.lt) goto loc_821E957C;
	// beq cr6,0x821e9574
	if (ctx.cr6.eq) goto loc_821E9574;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x821e957c
	if (!ctx.cr6.lt) goto loc_821E957C;
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
loc_821E9574:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
loc_821E957C:
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
}
PPC_FUNC_IMPL(__imp__sub_821E9598) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,832(r4)
	PPC_STORE_U8(ctx.r4.u32 + 832, ctx.r11.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_821E95A8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8259d300
	ctx.lr = 0x821E95D8;
	sub_8259D300(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// addi r30,r11,15564
	ctx.r30.s64 = ctx.r11.s64 + 15564;
	// bl 0x82367120
	ctx.lr = 0x821E95F8;
	sub_82367120(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9608
	if (ctx.cr6.eq) goto loc_821E9608;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_821E9608:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r6,1800
	ctx.r6.s64 = 1800;
	// ori r5,r5,21504
	ctx.r5.u64 = ctx.r5.u64 | 21504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369580
	ctx.lr = 0x821E9620;
	sub_82369580(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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
PPC_FUNC_IMPL(__imp__sub_821E9638) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8259d300
	ctx.lr = 0x821E9668;
	sub_8259D300(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// addi r30,r11,15564
	ctx.r30.s64 = ctx.r11.s64 + 15564;
	// bl 0x8236d428
	ctx.lr = 0x821E9688;
	sub_8236D428(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9698
	if (ctx.cr6.eq) goto loc_821E9698;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_821E9698:
	// li r6,1800
	ctx.r6.s64 = 1800;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369580
	ctx.lr = 0x821E96AC;
	sub_82369580(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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
PPC_FUNC_IMPL(__imp__sub_821E9900) {
	PPC_FUNC_PROLOGUE();
	// stb r4,835(r3)
	PPC_STORE_U8(ctx.r3.u32 + 835, ctx.r4.u8);
	// blr 
	return;
}

#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82204484"))) PPC_WEAK_FUNC(sub_82204484);
PPC_FUNC_IMPL(__imp__sub_82204484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204488"))) PPC_WEAK_FUNC(sub_82204488);
PPC_FUNC_IMPL(__imp__sub_82204488) {
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
	// lbz r11,359(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 359);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822044f0
	if (ctx.cr6.eq) goto loc_822044F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-994
	ctx.r10.s64 = -65142784;
	// addi r5,r11,-31376
	ctx.r5.s64 = ctx.r11.s64 + -31376;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-27116
	ctx.r9.s64 = -1777074176;
	// addi r31,r11,-24936
	ctx.r31.s64 = ctx.r11.s64 + -24936;
	// ori r4,r10,62591
	ctx.r4.u64 = ctx.r10.u64 | 62591;
	// ori r8,r9,41781
	ctx.r8.u64 = ctx.r9.u64 | 41781;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x822044DC;
	sub_820A38E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362ad8
	ctx.lr = 0x822044EC;
	sub_82362AD8(ctx, base);
	// b 0x822044f4
	goto loc_822044F4;
loc_822044F0:
	// stb r30,357(r3)
	PPC_STORE_U8(ctx.r3.u32 + 357, ctx.r30.u8);
loc_822044F4:
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

__attribute__((alias("__imp__sub_8220450C"))) PPC_WEAK_FUNC(sub_8220450C);
PPC_FUNC_IMPL(__imp__sub_8220450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204510"))) PPC_WEAK_FUNC(sub_82204510);
PPC_FUNC_IMPL(__imp__sub_82204510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82204518;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x822045a0
	if (ctx.cr6.eq) goto loc_822045A0;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220471c
	if (!ctx.cr6.eq) goto loc_8220471C;
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// bne cr6,0x8220471c
	if (!ctx.cr6.eq) goto loc_8220471C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82204570
	if (!ctx.cr6.eq) goto loc_82204570;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27095
	ctx.r10.s64 = -1775697920;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-31359
	ctx.r11.s64 = -2055143424;
	// ori r9,r10,44691
	ctx.r9.u64 = ctx.r10.u64 | 44691;
	// ori r4,r11,22562
	ctx.r4.u64 = ctx.r11.u64 | 22562;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82204568;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82204570:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x82229fa8
	ctx.lr = 0x82204580;
	sub_82229FA8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82204598;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822045A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822045cc
	if (ctx.cr6.eq) goto loc_822045CC;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// b 0x82204600
	goto loc_82204600;
loc_822045CC:
	// lis r4,3638
	ctx.r4.s64 = 238419968;
	// stb r31,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r31.u8);
	// lis r11,-27583
	ctx.r11.s64 = -1807679488;
	// lis r9,-28144
	ctx.r9.s64 = -1844445184;
	// lis r7,-27105
	ctx.r7.s64 = -1776353280;
	// ori r3,r4,32087
	ctx.r3.u64 = ctx.r4.u64 | 32087;
	// ori r10,r11,15958
	ctx.r10.u64 = ctx.r11.u64 | 15958;
	// ori r8,r9,51327
	ctx.r8.u64 = ctx.r9.u64 | 51327;
	// ori r6,r7,22369
	ctx.r6.u64 = ctx.r7.u64 | 22369;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// std r3,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r3.u64);
	// std r8,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r8.u64);
loc_82204600:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x82204610;
	sub_82367A40(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r4,r5,48108
	ctx.r4.u64 = ctx.r5.u64 | 48108;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u8);
	// bl 0x8222a878
	ctx.lr = 0x8220462C;
	sub_8222A878(ctx, base);
	// lbz r3,7569(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7569);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82204678
	if (!ctx.cr6.eq) goto loc_82204678;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r11,-27372
	ctx.r5.s64 = ctx.r11.s64 + -27372;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r11,-27396
	ctx.r4.s64 = ctx.r11.s64 + -27396;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x82204670;
	sub_821E6928(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82204678:
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// beq cr6,0x82204704
	if (ctx.cr6.eq) goto loc_82204704;
	// cmpwi cr6,r29,-56
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -56, ctx.xer);
	// beq cr6,0x82204704
	if (ctx.cr6.eq) goto loc_82204704;
	// cmpwi cr6,r29,-12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -12, ctx.xer);
	// beq cr6,0x82204704
	if (ctx.cr6.eq) goto loc_82204704;
	// cmpwi cr6,r29,-53
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -53, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bne cr6,0x822046d8
	if (!ctx.cr6.eq) goto loc_822046D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r11,-31976
	ctx.r5.s64 = ctx.r11.s64 + -31976;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-27396
	ctx.r4.s64 = ctx.r11.s64 + -27396;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e6928
	ctx.lr = 0x822046D0;
	sub_821E6928(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822046D8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r11,-27372
	ctx.r5.s64 = ctx.r11.s64 + -27372;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-27396
	ctx.r4.s64 = ctx.r11.s64 + -27396;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e6928
	ctx.lr = 0x822046FC;
	sub_821E6928(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82204704:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224dd0
	ctx.lr = 0x8220471C;
	sub_82224DD0(ctx, base);
loc_8220471C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82204724"))) PPC_WEAK_FUNC(sub_82204724);
PPC_FUNC_IMPL(__imp__sub_82204724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204728"))) PPC_WEAK_FUNC(sub_82204728);
PPC_FUNC_IMPL(__imp__sub_82204728) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e590
	ctx.lr = 0x8220474C;
	sub_8222E590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204760
	if (ctx.cr6.eq) goto loc_82204760;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
loc_82204760:
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

__attribute__((alias("__imp__sub_82204774"))) PPC_WEAK_FUNC(sub_82204774);
PPC_FUNC_IMPL(__imp__sub_82204774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204778"))) PPC_WEAK_FUNC(sub_82204778);
PPC_FUNC_IMPL(__imp__sub_82204778) {
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
	// lis r3,28526
	ctx.r3.s64 = 1869479936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,27758
	ctx.r3.u64 = ctx.r3.u64 | 27758;
	// bl 0x8240a8f0
	ctx.lr = 0x822047A0;
	sub_8240A8F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822047e8
	if (!ctx.cr6.eq) goto loc_822047E8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x8221f858
	ctx.lr = 0x822047B4;
	sub_8221F858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221f848
	ctx.lr = 0x822047BC;
	sub_8221F848(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x823724a0
	ctx.lr = 0x822047D4;
	sub_823724A0(ctx, base);
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
loc_822047E8:
	// lis r3,25455
	ctx.r3.s64 = 1668218880;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,28270
	ctx.r3.u64 = ctx.r3.u64 | 28270;
	// bl 0x8240a8f0
	ctx.lr = 0x822047FC;
	sub_8240A8F0(ctx, base);
	// srawi r10,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 24;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// bne cr6,0x82204830
	if (!ctx.cr6.eq) goto loc_82204830;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82224dd0
	ctx.lr = 0x82204828;
	sub_82224DD0(ctx, base);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_82204830:
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

__attribute__((alias("__imp__sub_82204844"))) PPC_WEAK_FUNC(sub_82204844);
PPC_FUNC_IMPL(__imp__sub_82204844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204848"))) PPC_WEAK_FUNC(sub_82204848);
PPC_FUNC_IMPL(__imp__sub_82204848) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be38
	ctx.lr = 0x82204870;
	sub_8221BE38(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82204904
	if (ctx.cr6.lt) goto loc_82204904;
	// beq cr6,0x822048dc
	if (ctx.cr6.eq) goto loc_822048DC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82204904
	if (!ctx.cr6.lt) goto loc_82204904;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r8,318(r31)
	PPC_STORE_U8(ctx.r31.u32 + 318, ctx.r8.u8);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addis r3,r7,26484
	ctx.r3.s64 = ctx.r7.s64 + 1735655424;
	// addi r3,r3,24935
	ctx.r3.s64 = ctx.r3.s64 + 24935;
	// bl 0x8240a8f0
	ctx.lr = 0x822048B8;
	sub_8240A8F0(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3672
	ctx.r5.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82370b28
	ctx.lr = 0x822048D8;
	sub_82370B28(ctx, base);
	// b 0x82204904
	goto loc_82204904;
loc_822048DC:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x822048E4;
	sub_82367A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224dd0
	ctx.lr = 0x822048FC;
	sub_82224DD0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_82204904:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8220491C"))) PPC_WEAK_FUNC(sub_8220491C);
PPC_FUNC_IMPL(__imp__sub_8220491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204920"))) PPC_WEAK_FUNC(sub_82204920);
PPC_FUNC_IMPL(__imp__sub_82204920) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x82204990
	if (ctx.cr6.eq) goto loc_82204990;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-28632
	ctx.r4.s64 = ctx.r11.s64 + -28632;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 + 28;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x82204970;
	sub_821E6928(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r5,317(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 317);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lbz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 316);
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x8236af98
	ctx.lr = 0x82204988;
	sub_8236AF98(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_82204990:
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

__attribute__((alias("__imp__sub_822049A4"))) PPC_WEAK_FUNC(sub_822049A4);
PPC_FUNC_IMPL(__imp__sub_822049A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822049A8"))) PPC_WEAK_FUNC(sub_822049A8);
PPC_FUNC_IMPL(__imp__sub_822049A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822049B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x823695d0
	ctx.lr = 0x822049CC;
	sub_823695D0(ctx, base);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8221f860
	ctx.lr = 0x822049DC;
	sub_8221F860(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r11,11
	ctx.r11.s64 = 11;
	// ori r9,r10,16716
	ctx.r9.u64 = ctx.r10.u64 | 16716;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lwzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361d08
	ctx.lr = 0x822049FC;
	sub_82361D08(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8234acc0
	ctx.lr = 0x82204A08;
	sub_8234ACC0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28640
	ctx.r4.s64 = ctx.r11.s64 + -28640;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5fb0
	ctx.lr = 0x82204A20;
	sub_821F5FB0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x82361d08
	ctx.lr = 0x82204A30;
	sub_82361D08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82204A38"))) PPC_WEAK_FUNC(sub_82204A38);
PPC_FUNC_IMPL(__imp__sub_82204A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82204A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821e69f0
	ctx.lr = 0x82204A58;
	sub_821E69F0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204b00
	if (ctx.cr6.eq) goto loc_82204B00;
	// lbz r10,318(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 318);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// beq cr6,0x82204ad8
	if (ctx.cr6.eq) goto loc_82204AD8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lbz r9,74(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82204aa4
	if (!ctx.cr6.eq) goto loc_82204AA4;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x823670c8
	ctx.lr = 0x82204A94;
	sub_823670C8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82204aa8
	if (ctx.cr6.eq) goto loc_82204AA8;
loc_82204AA4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82204AA8:
	// lbz r7,73(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// stb r10,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r10.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82204ad0
	if (!ctx.cr6.eq) goto loc_82204AD0;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82367028
	ctx.lr = 0x82204AC0;
	sub_82367028(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82204ad4
	if (ctx.cr6.eq) goto loc_82204AD4;
loc_82204AD0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82204AD4:
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
loc_82204AD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ff60
	ctx.lr = 0x82204AE0;
	sub_8222FF60(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82204AF8;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82204B00:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r9,r4,51970
	ctx.r9.u64 = ctx.r4.u64 | 51970;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// ld r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// bl 0x820a38e8
	ctx.lr = 0x82204B30;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82204B38"))) PPC_WEAK_FUNC(sub_82204B38);
PPC_FUNC_IMPL(__imp__sub_82204B38) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,579(r3)
	PPC_STORE_U8(ctx.r3.u32 + 579, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82204B44"))) PPC_WEAK_FUNC(sub_82204B44);
PPC_FUNC_IMPL(__imp__sub_82204B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204B48"))) PPC_WEAK_FUNC(sub_82204B48);
PPC_FUNC_IMPL(__imp__sub_82204B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82204B50;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r11,r11,8984
	ctx.r11.s64 = ctx.r11.s64 + 8984;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// lwz r9,420(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// mulli r9,r9,3672
	ctx.r9.s64 = ctx.r9.s64 * 3672;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// lwz r8,3648(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3648);
	// ld r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d2898
	ctx.lr = 0x82204B90;
	sub_822D2898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f31,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// stfs f31,396(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 396, temp.u32);
	// addi r3,r10,-1416
	ctx.r3.s64 = ctx.r10.s64 + -1416;
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,392(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 392, temp.u32);
	// lwz r6,3436(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3436);
	// stb r6,408(r30)
	PPC_STORE_U8(ctx.r30.u32 + 408, ctx.r6.u8);
	// bl 0x820fca90
	ctx.lr = 0x82204BD0;
	sub_820FCA90(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// lbz r4,424(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 424);
	// li r26,0
	ctx.r26.s64 = 0;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r4,409(r30)
	PPC_STORE_U8(ctx.r30.u32 + 409, ctx.r4.u8);
	// stb r10,412(r30)
	PPC_STORE_U8(ctx.r30.u32 + 412, ctx.r10.u8);
	// lwz r11,3648(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204c08
	if (ctx.cr6.eq) goto loc_82204C08;
	// lbz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82204c0c
	if (!ctx.cr6.eq) goto loc_82204C0C;
loc_82204C08:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82204C0C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82204c4c
	if (ctx.cr6.eq) goto loc_82204C4C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820bbe80
	ctx.lr = 0x82204C20;
	sub_820BBE80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,411(r30)
	PPC_STORE_U8(ctx.r30.u32 + 411, ctx.r11.u8);
	// bl 0x820bbe80
	ctx.lr = 0x82204C30;
	sub_820BBE80(ctx, base);
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x82204c44
	if (ctx.cr6.gt) goto loc_82204C44;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82204C44:
	// stb r11,413(r30)
	PPC_STORE_U8(ctx.r30.u32 + 413, ctx.r11.u8);
	// b 0x82204c58
	goto loc_82204C58;
loc_82204C4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r26,413(r30)
	PPC_STORE_U8(ctx.r30.u32 + 413, ctx.r26.u8);
	// stb r3,411(r30)
	PPC_STORE_U8(ctx.r30.u32 + 411, ctx.r3.u8);
loc_82204C58:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// bl 0x8224d5e8
	ctx.lr = 0x82204C68;
	sub_8224D5E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2930
	ctx.lr = 0x82204C74;
	sub_822D2930(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82204d8c
	if (!ctx.cr6.eq) goto loc_82204D8C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347540
	ctx.lr = 0x82204C8C;
	sub_82347540(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-1144
	ctx.r4.s64 = ctx.r11.s64 + -1144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259d1b0
	ctx.lr = 0x82204CA0;
	sub_8259D1B0(ctx, base);
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x82204cb4
	if (!ctx.cr6.eq) goto loc_82204CB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-920
	ctx.r5.s64 = ctx.r11.s64 + -920;
	// b 0x82204cbc
	goto loc_82204CBC;
loc_82204CB4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-940
	ctx.r5.s64 = ctx.r11.s64 + -940;
loc_82204CBC:
	// lis r31,-32047
	ctx.r31.s64 = -2100232192;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r6,r11,-956
	ctx.r6.s64 = ctx.r11.s64 + -956;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82204CEC;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r11,-980
	ctx.r6.s64 = ctx.r11.s64 + -980;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,-1000
	ctx.r5.s64 = ctx.r11.s64 + -1000;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82204D20;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r6,r11,-1020
	ctx.r6.s64 = ctx.r11.s64 + -1020;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-1036
	ctx.r5.s64 = ctx.r11.s64 + -1036;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x82204D54;
	sub_823514F8(ctx, base);
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x82204D64;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x82204D74;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x82204D84;
	sub_82350C88(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82204db8
	goto loc_82204DB8;
loc_82204D8C:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x82204da0
	if (!ctx.cr6.eq) goto loc_82204DA0;
	// lfs f11,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82204da8
	goto loc_82204DA8;
loc_82204DA0:
	// lfs f10,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82204DA8:
	// lfs f13,448(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82204DB8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,400(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 400, temp.u32);
	// stw r10,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r10.u32);
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82204de4
	if (ctx.cr6.eq) goto loc_82204DE4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82204de8
	if (!ctx.cr6.eq) goto loc_82204DE8;
loc_82204DE4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82204DE8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82204e14
	if (ctx.cr6.eq) goto loc_82204E14;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-31676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31676);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-1040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1040);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,404(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 404, temp.u32);
	// b 0x82204e18
	goto loc_82204E18;
loc_82204E14:
	// stfs f13,404(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 404, temp.u32);
loc_82204E18:
	// lbz r8,408(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 408);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82204eb4
	if (ctx.cr6.eq) goto loc_82204EB4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// addi r27,r11,23504
	ctx.r27.s64 = ctx.r11.s64 + 23504;
loc_82204E34:
	// lwz r11,3436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3436);
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r6,r31,r11
	ctx.r6.s32 = ctx.r31.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r4,r6,r11
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// subf r10,r4,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r4.s64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82204e70
	if (!ctx.cr6.lt) goto loc_82204E70;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// b 0x82204e78
	goto loc_82204E78;
loc_82204E70:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
loc_82204E78:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82347480
	ctx.lr = 0x82204E80;
	sub_82347480(ctx, base);
	// lbz r9,123(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x82204e90
	if (!ctx.cr6.eq) goto loc_82204E90;
	// stb r26,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r26.u8);
loc_82204E90:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82204E9C;
	sub_8210FCF8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lbz r7,408(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 408);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82204e34
	if (ctx.cr6.lt) goto loc_82204E34;
loc_82204EB4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82204EC0"))) PPC_WEAK_FUNC(sub_82204EC0);
PPC_FUNC_IMPL(__imp__sub_82204EC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82204EC8"))) PPC_WEAK_FUNC(sub_82204EC8);
PPC_FUNC_IMPL(__imp__sub_82204EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82204ED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f13,580(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82204f00
	if (ctx.cr6.gt) goto loc_82204F00;
	// bso cr6,0x82204f00
	if (ctx.cr6.so) goto loc_82204F00;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82204F00:
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
	// ble cr6,0x82204f3c
	if (!ctx.cr6.gt) goto loc_82204F3C;
loc_82204F18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82204F24;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82204f48
	if (!ctx.cr6.eq) goto loc_82204F48;
	// lwz r11,588(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 588);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82204f6c
	if (ctx.cr6.eq) goto loc_82204F6C;
loc_82204F38:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82204F3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82204F48:
	// addi r10,r3,23128
	ctx.r10.s64 = ctx.r3.s64 + 23128;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82204f38
	if (ctx.cr6.eq) goto loc_82204F38;
loc_82204F6C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82204f18
	if (ctx.cr6.lt) goto loc_82204F18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82204F88"))) PPC_WEAK_FUNC(sub_82204F88);
PPC_FUNC_IMPL(__imp__sub_82204F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82204F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8220500c
	if (!ctx.cr6.gt) goto loc_8220500C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r28,r11,8984
	ctx.r28.s64 = ctx.r11.s64 + 8984;
loc_82204FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82204FC4;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82204ffc
	if (ctx.cr6.eq) goto loc_82204FFC;
	// lbz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 424);
	// addi r8,r28,3648
	ctx.r8.s64 = ctx.r28.s64 + 3648;
	// lwz r10,420(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// addi r3,r3,3484
	ctx.r3.s64 = ctx.r3.s64 + 3484;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r9,r10,3672
	ctx.r9.s64 = ctx.r10.s64 * 3672;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ld r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lbz r5,425(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 425);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// bl 0x8221a0b0
	ctx.lr = 0x82204FFC;
	sub_8221A0B0(ctx, base);
loc_82204FFC:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82204fb8
	if (ctx.cr6.lt) goto loc_82204FB8;
loc_8220500C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205014"))) PPC_WEAK_FUNC(sub_82205014);
PPC_FUNC_IMPL(__imp__sub_82205014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205018"))) PPC_WEAK_FUNC(sub_82205018);
PPC_FUNC_IMPL(__imp__sub_82205018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82205020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822050a0
	if (!ctx.cr6.gt) goto loc_822050A0;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r28,r11,8984
	ctx.r28.s64 = ctx.r11.s64 + 8984;
loc_82205048:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82205054;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205090
	if (ctx.cr6.eq) goto loc_82205090;
	// lbz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 424);
	// addi r8,r28,3648
	ctx.r8.s64 = ctx.r28.s64 + 3648;
	// lwz r10,420(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// li r6,1
	ctx.r6.s64 = 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r9,r10,3672
	ctx.r9.s64 = ctx.r10.s64 * 3672;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r3,3516
	ctx.r3.s64 = ctx.r3.s64 + 3516;
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lbz r11,425(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 425);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8221a030
	ctx.lr = 0x82205090;
	sub_8221A030(ctx, base);
loc_82205090:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82205048
	if (ctx.cr6.lt) goto loc_82205048;
loc_822050A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822050A8"))) PPC_WEAK_FUNC(sub_822050A8);
PPC_FUNC_IMPL(__imp__sub_822050A8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x822050CC;
	sub_82365758(ctx, base);
	// addi r10,r3,23128
	ctx.r10.s64 = ctx.r3.s64 + 23128;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lbz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82205104"))) PPC_WEAK_FUNC(sub_82205104);
PPC_FUNC_IMPL(__imp__sub_82205104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205108"))) PPC_WEAK_FUNC(sub_82205108);
PPC_FUNC_IMPL(__imp__sub_82205108) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82205158
	if (!ctx.cr6.eq) goto loc_82205158;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// bl 0x82205018
	ctx.lr = 0x82205134;
	sub_82205018(ctx, base);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r11,r11,8984
	ctx.r11.s64 = ctx.r11.s64 + 8984;
	// mulli r10,r10,3672
	ctx.r10.s64 = ctx.r10.s64 * 3672;
	// addi r9,r11,3648
	ctx.r9.s64 = ctx.r11.s64 + 3648;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x820bbec0
	ctx.lr = 0x82205158;
	sub_820BBEC0(ctx, base);
loc_82205158:
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

__attribute__((alias("__imp__sub_8220516C"))) PPC_WEAK_FUNC(sub_8220516C);
PPC_FUNC_IMPL(__imp__sub_8220516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205170"))) PPC_WEAK_FUNC(sub_82205170);
PPC_FUNC_IMPL(__imp__sub_82205170) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82205268
	if (ctx.cr6.eq) goto loc_82205268;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220522c
	if (ctx.cr6.eq) goto loc_8220522C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82205290
	if (!ctx.cr6.eq) goto loc_82205290;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82205290
	if (!ctx.cr6.eq) goto loc_82205290;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x822051f0
	if (ctx.cr6.eq) goto loc_822051F0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82205290
	if (!ctx.cr6.eq) goto loc_82205290;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-19548
	ctx.r10.s64 = -1281097728;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-13702
	ctx.r11.s64 = -897974272;
	// ori r9,r10,12513
	ctx.r9.u64 = ctx.r10.u64 | 12513;
	// ori r4,r11,52471
	ctx.r4.u64 = ctx.r11.u64 | 52471;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822051DC;
	sub_820A38E8(ctx, base);
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
loc_822051F0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,11753
	ctx.r8.s64 = 770244608;
	// lis r7,23498
	ctx.r7.s64 = 1539964928;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,2177
	ctx.r4.u64 = ctx.r8.u64 | 2177;
	// ori r11,r7,44864
	ctx.r11.u64 = ctx.r7.u64 | 44864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205218;
	sub_820A38E8(ctx, base);
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
loc_8220522C:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82205290
	if (!ctx.cr6.eq) goto loc_82205290;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82205258
	if (!ctx.cr6.eq) goto loc_82205258;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205258:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82205290
	if (!ctx.cr6.eq) goto loc_82205290;
	// b 0x82205280
	goto loc_82205280;
loc_82205268:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x821fd498
	ctx.lr = 0x8220527C;
	sub_821FD498(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82205280:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
loc_82205290:
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

__attribute__((alias("__imp__sub_822052A4"))) PPC_WEAK_FUNC(sub_822052A4);
PPC_FUNC_IMPL(__imp__sub_822052A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822052A8"))) PPC_WEAK_FUNC(sub_822052A8);
PPC_FUNC_IMPL(__imp__sub_822052A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822052B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220543c
	if (ctx.cr6.eq) goto loc_8220543C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x822053ec
	if (ctx.cr6.eq) goto loc_822053EC;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82205488
	if (!ctx.cr6.eq) goto loc_82205488;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82205488
	if (!ctx.cr6.eq) goto loc_82205488;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82205488
	if (!ctx.cr6.eq) goto loc_82205488;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82205314
	if (ctx.cr6.eq) goto loc_82205314;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205314:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82205364
	if (ctx.cr6.eq) goto loc_82205364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fab90
	ctx.lr = 0x82205328;
	sub_820FAB90(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82205364
	if (ctx.cr6.eq) goto loc_82205364;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,11752
	ctx.r4.s64 = 770179072;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,23498
	ctx.r11.s64 = 1539964928;
	// ori r4,r4,29088
	ctx.r4.u64 = ctx.r4.u64 | 29088;
	// ori r10,r11,44864
	ctx.r10.u64 = ctx.r11.u64 | 44864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220535C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82205364:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82205374;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fab90
	ctx.lr = 0x8220537C;
	sub_820FAB90(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822053b8
	if (!ctx.cr6.eq) goto loc_822053B8;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205488
	if (ctx.cr6.eq) goto loc_82205488;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,288(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 288);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822053B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822053B8:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822053DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x822053E4;
	sub_821F6898(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822053EC:
	// lbz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82205488
	if (!ctx.cr6.eq) goto loc_82205488;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82205418
	if (!ctx.cr6.eq) goto loc_82205418;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205418:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82205488
	if (!ctx.cr6.eq) goto loc_82205488;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r10.u8);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220543C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x821fd498
	ctx.lr = 0x82205450;
	sub_821FD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r6.u8);
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,22400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22400, ctx.r11.u8);
	// bl 0x820fc018
	ctx.lr = 0x82205474;
	sub_820FC018(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82205480;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aad38
	ctx.lr = 0x82205488;
	sub_821AAD38(ctx, base);
loc_82205488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205490"))) PPC_WEAK_FUNC(sub_82205490);
PPC_FUNC_IMPL(__imp__sub_82205490) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// b 0x821fd498
	sub_821FD498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822054C8"))) PPC_WEAK_FUNC(sub_822054C8);
PPC_FUNC_IMPL(__imp__sub_822054C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822054CC"))) PPC_WEAK_FUNC(sub_822054CC);
PPC_FUNC_IMPL(__imp__sub_822054CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822054D0"))) PPC_WEAK_FUNC(sub_822054D0);
PPC_FUNC_IMPL(__imp__sub_822054D0) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r7,r8,52521
	ctx.r7.u64 = ctx.r8.u64 | 52521;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// bl 0x822aca98
	ctx.lr = 0x82205510;
	sub_822ACA98(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82114700
	ctx.lr = 0x82205524;
	sub_82114700(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82205540"))) PPC_WEAK_FUNC(sub_82205540);
PPC_FUNC_IMPL(__imp__sub_82205540) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82205644
	if (ctx.cr6.eq) goto loc_82205644;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x822055f8
	if (ctx.cr6.eq) goto loc_822055F8;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x822056a0
	if (!ctx.cr6.eq) goto loc_822056A0;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822056a0
	if (!ctx.cr6.eq) goto loc_822056A0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822055cc
	if (ctx.cr6.eq) goto loc_822055CC;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x822056a0
	if (!ctx.cr6.eq) goto loc_822056A0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1452
	ctx.r31.s64 = ctx.r11.s64 + -1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9618
	ctx.lr = 0x82205598;
	sub_820F9618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9aa0
	ctx.lr = 0x822055A0;
	sub_820F9AA0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,23485
	ctx.r10.s64 = 1539112960;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,28623
	ctx.r11.s64 = 1875836928;
	// ori r9,r10,31649
	ctx.r9.u64 = ctx.r10.u64 | 31649;
	// ori r4,r11,26567
	ctx.r4.u64 = ctx.r11.u64 | 26567;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822055C8;
	sub_820A38E8(ctx, base);
	// b 0x822056a0
	goto loc_822056A0;
loc_822055CC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,-12636
	ctx.r8.s64 = -828112896;
	// lis r7,29384
	ctx.r7.s64 = 1925709824;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,64719
	ctx.r4.u64 = ctx.r8.u64 | 64719;
	// ori r11,r7,60226
	ctx.r11.u64 = ctx.r7.u64 | 60226;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822055F4;
	sub_820A38E8(ctx, base);
	// b 0x822056a0
	goto loc_822056A0;
loc_822055F8:
	// lbz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822056a0
	if (!ctx.cr6.eq) goto loc_822056A0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82205624
	if (!ctx.cr6.eq) goto loc_82205624;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205624:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822056a0
	if (!ctx.cr6.eq) goto loc_822056A0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r10.u8);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
	// b 0x822056a0
	goto loc_822056A0;
loc_82205644:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,41
	ctx.r4.s64 = 41;
	// bl 0x821fd498
	ctx.lr = 0x82205658;
	sub_821FD498(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r7.u8);
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,22400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22400, ctx.r11.u8);
	// bl 0x820fc018
	ctx.lr = 0x8220567C;
	sub_820FC018(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82205688;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aad38
	ctx.lr = 0x82205690;
	sub_821AAD38(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9780
	ctx.lr = 0x822056A0;
	sub_820F9780(ctx, base);
loc_822056A0:
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

__attribute__((alias("__imp__sub_822056B8"))) PPC_WEAK_FUNC(sub_822056B8);
PPC_FUNC_IMPL(__imp__sub_822056B8) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220596c
	if (ctx.cr6.eq) goto loc_8220596C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82205920
	if (ctx.cr6.eq) goto loc_82205920;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82205820
	if (ctx.cr6.eq) goto loc_82205820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82205788
	if (ctx.cr6.eq) goto loc_82205788;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82205730
	if (ctx.cr6.eq) goto loc_82205730;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x82205728;
	sub_821E69F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82205990
	goto loc_82205990;
loc_82205730:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e69f0
	ctx.lr = 0x82205740;
	sub_821E69F0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8220576C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82205774;
	sub_821F6A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x8220577C;
	sub_821F6898(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// b 0x82205994
	goto loc_82205994;
loc_82205788:
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x822057b8
	if (ctx.cr6.eq) goto loc_822057B8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x822057AC;
	sub_821E69F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// b 0x82205994
	goto loc_82205994;
loc_822057B8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x822057C4;
	sub_821E69F0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822057EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,30785
	ctx.r9.s64 = 2017525760;
	// lis r8,-27576
	ctx.r8.s64 = -1807220736;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,1617
	ctx.r4.u64 = ctx.r9.u64 | 1617;
	// ori r7,r8,14885
	ctx.r7.u64 = ctx.r8.u64 | 14885;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205814;
	sub_820A38E8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// b 0x82205994
	goto loc_82205994;
loc_82205820:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// beq cr6,0x822058d8
	if (ctx.cr6.eq) goto loc_822058D8;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82205890
	if (ctx.cr6.eq) goto loc_82205890;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r3,r11,6600
	ctx.r3.s64 = ctx.r11.s64 + 6600;
	// bl 0x820fe968
	ctx.lr = 0x82205854;
	sub_820FE968(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,30785
	ctx.r4.s64 = 2017525760;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27576
	ctx.r11.s64 = -1807220736;
	// ori r4,r4,1617
	ctx.r4.u64 = ctx.r4.u64 | 1617;
	// ori r10,r11,14885
	ctx.r10.u64 = ctx.r11.u64 | 14885;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220587C;
	sub_820A38E8(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r9,16294
	ctx.r8.u64 = ctx.r9.u64 | 16294;
	// stbx r11,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x82205994
	goto loc_82205994;
loc_82205890:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-27308
	ctx.r5.s64 = ctx.r10.s64 + -27308;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r10,-27324
	ctx.r4.s64 = ctx.r10.s64 + -27324;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x822058CC;
	sub_821E6928(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// b 0x82205994
	goto loc_82205994;
loc_822058D8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-27336
	ctx.r5.s64 = ctx.r10.s64 + -27336;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r10,-27344
	ctx.r4.s64 = ctx.r10.s64 + -27344;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x82205914;
	sub_821E6928(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// b 0x82205994
	goto loc_82205994;
loc_82205920:
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x8220594c
	if (!ctx.cr6.eq) goto loc_8220594C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220594C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82205994
	if (!ctx.cr6.eq) goto loc_82205994;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
	// b 0x82205994
	goto loc_82205994;
loc_8220596C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821fd498
	ctx.lr = 0x82205980;
	sub_821FD498(ctx, base);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,14528
	ctx.r10.s64 = ctx.r10.s64 + 14528;
	// stb r11,22400(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22400, ctx.r11.u8);
loc_82205990:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82205994:
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

__attribute__((alias("__imp__sub_822059AC"))) PPC_WEAK_FUNC(sub_822059AC);
PPC_FUNC_IMPL(__imp__sub_822059AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822059B0"))) PPC_WEAK_FUNC(sub_822059B0);
PPC_FUNC_IMPL(__imp__sub_822059B0) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82205b14
	if (ctx.cr6.eq) goto loc_82205B14;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82205ad8
	if (ctx.cr6.eq) goto loc_82205AD8;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82205b3c
	if (!ctx.cr6.eq) goto loc_82205B3C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82205b3c
	if (!ctx.cr6.eq) goto loc_82205B3C;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82205a9c
	if (ctx.cr6.eq) goto loc_82205A9C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82205b3c
	if (!ctx.cr6.eq) goto loc_82205B3C;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82205a28
	if (ctx.cr6.eq) goto loc_82205A28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205A28:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x82205a70
	if (ctx.cr6.eq) goto loc_82205A70;
	// lis r11,-19548
	ctx.r11.s64 = -1281097728;
	// lis r4,-13702
	ctx.r4.s64 = -897974272;
	// ori r10,r11,12513
	ctx.r10.u64 = ctx.r11.u64 | 12513;
	// ori r4,r4,52471
	ctx.r4.u64 = ctx.r4.u64 | 52471;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205A5C;
	sub_820A38E8(ctx, base);
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
loc_82205A70:
	// lis r9,-6648
	ctx.r9.s64 = -435683328;
	// lis r8,29378
	ctx.r8.s64 = 1925316608;
	// ori r4,r9,64719
	ctx.r4.u64 = ctx.r9.u64 | 64719;
	// ori r7,r8,64359
	ctx.r7.u64 = ctx.r8.u64 | 64359;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205A88;
	sub_820A38E8(ctx, base);
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
loc_82205A9C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-18726
	ctx.r4.s64 = -1227227136;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,29368
	ctx.r11.s64 = 1924661248;
	// ori r4,r4,34385
	ctx.r4.u64 = ctx.r4.u64 | 34385;
	// ori r10,r11,14264
	ctx.r10.u64 = ctx.r11.u64 | 14264;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205AC4;
	sub_820A38E8(ctx, base);
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
loc_82205AD8:
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82205b3c
	if (!ctx.cr6.eq) goto loc_82205B3C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82205b04
	if (!ctx.cr6.eq) goto loc_82205B04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205B04:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82205b3c
	if (!ctx.cr6.eq) goto loc_82205B3C;
	// b 0x82205b2c
	goto loc_82205B2C;
loc_82205B14:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x821fd498
	ctx.lr = 0x82205B28;
	sub_821FD498(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82205B2C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
loc_82205B3C:
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

__attribute__((alias("__imp__sub_82205B50"))) PPC_WEAK_FUNC(sub_82205B50);
PPC_FUNC_IMPL(__imp__sub_82205B50) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82205c10
	if (ctx.cr6.eq) goto loc_82205C10;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82205c24
	if (!ctx.cr6.eq) goto loc_82205C24;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16228
	ctx.r10.u64 = ctx.r11.u64 | 16228;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bne cr6,0x82205c24
	if (!ctx.cr6.eq) goto loc_82205C24;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82205be4
	if (ctx.cr6.eq) goto loc_82205BE4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82205c24
	if (!ctx.cr6.eq) goto loc_82205C24;
	// lis r9,30785
	ctx.r9.s64 = 2017525760;
	// lis r8,-27576
	ctx.r8.s64 = -1807220736;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,1617
	ctx.r4.u64 = ctx.r9.u64 | 1617;
	// ori r7,r8,14885
	ctx.r7.u64 = ctx.r8.u64 | 14885;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205BC8;
	sub_820A38E8(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// ori r5,r6,16236
	ctx.r5.u64 = ctx.r6.u64 | 16236;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// bl 0x821f6a20
	ctx.lr = 0x82205BE0;
	sub_821F6A20(ctx, base);
	// b 0x82205c24
	goto loc_82205C24;
loc_82205BE4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-4506
	ctx.r4.s64 = -295305216;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27583
	ctx.r11.s64 = -1807679488;
	// ori r4,r4,52856
	ctx.r4.u64 = ctx.r4.u64 | 52856;
	// ori r10,r11,16102
	ctx.r10.u64 = ctx.r11.u64 | 16102;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205C0C;
	sub_820A38E8(ctx, base);
	// b 0x82205c24
	goto loc_82205C24;
loc_82205C10:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x821fd498
	ctx.lr = 0x82205C24;
	sub_821FD498(ctx, base);
loc_82205C24:
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

__attribute__((alias("__imp__sub_82205C3C"))) PPC_WEAK_FUNC(sub_82205C3C);
PPC_FUNC_IMPL(__imp__sub_82205C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205C40"))) PPC_WEAK_FUNC(sub_82205C40);
PPC_FUNC_IMPL(__imp__sub_82205C40) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16236
	ctx.r10.u64 = ctx.r11.u64 | 16236;
	// stwx r4,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// bl 0x821f6a20
	ctx.lr = 0x82205C78;
	sub_821F6A20(ctx, base);
	// lis r9,-29635
	ctx.r9.s64 = -1942159360;
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lis r7,-27114
	ctx.r7.s64 = -1776943104;
	// ori r8,r9,27832
	ctx.r8.u64 = ctx.r9.u64 | 27832;
	// ori r6,r7,4592
	ctx.r6.u64 = ctx.r7.u64 | 4592;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// cmpld cr6,r5,r8
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82205ca8
	if (!ctx.cr6.eq) goto loc_82205CA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5607(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5607, ctx.r11.u8);
loc_82205CA8:
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82205CB8;
	sub_820A38E8(ctx, base);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205ce0
	if (ctx.cr6.eq) goto loc_82205CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205CE0:
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

__attribute__((alias("__imp__sub_82205CF8"))) PPC_WEAK_FUNC(sub_82205CF8);
PPC_FUNC_IMPL(__imp__sub_82205CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82205D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r29,r31,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205d44
	if (ctx.cr6.eq) goto loc_82205D44;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,288(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82205D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205D44:
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16271
	ctx.r4.u64 = ctx.r5.u64 | 16271;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205d9c
	if (ctx.cr6.eq) goto loc_82205D9C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82205d9c
	if (!ctx.cr6.eq) goto loc_82205D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041d8
	ctx.lr = 0x82205D7C;
	sub_821041D8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82205d9c
	if (!ctx.cr6.eq) goto loc_82205D9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82205c40
	ctx.lr = 0x82205D94;
	sub_82205C40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82205D9C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82205DAC;
	sub_821F6A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x82205DB4;
	sub_821F6898(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205de8
	if (ctx.cr6.eq) goto loc_82205DE8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205de8
	if (ctx.cr6.eq) goto loc_82205DE8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82205df4
	goto loc_82205DF4;
loc_82205DE8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x82203578
	ctx.lr = 0x82205DF4;
	sub_82203578(ctx, base);
loc_82205DF4:
	// lis r10,30785
	ctx.r10.s64 = 2017525760;
	// lis r9,-27576
	ctx.r9.s64 = -1807220736;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,1617
	ctx.r4.u64 = ctx.r10.u64 | 1617;
	// ori r8,r9,14885
	ctx.r8.u64 = ctx.r9.u64 | 14885;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205E1C;
	sub_820A38E8(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16236
	ctx.r6.u64 = ctx.r7.u64 | 16236;
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205E30"))) PPC_WEAK_FUNC(sub_82205E30);
PPC_FUNC_IMPL(__imp__sub_82205E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82205E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r29,r31,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205e7c
	if (ctx.cr6.eq) goto loc_82205E7C;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,288(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82205E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205E7C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f6a20
	ctx.lr = 0x82205E88;
	sub_821F6A20(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16236
	ctx.r9.u64 = ctx.r10.u64 | 16236;
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205EB4"))) PPC_WEAK_FUNC(sub_82205EB4);
PPC_FUNC_IMPL(__imp__sub_82205EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205EB8"))) PPC_WEAK_FUNC(sub_82205EB8);
PPC_FUNC_IMPL(__imp__sub_82205EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82205EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r28,r31,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821f6a20
	ctx.lr = 0x82205EF8;
	sub_821F6A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x82205F00;
	sub_821F6898(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82205F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16236
	ctx.r4.u64 = ctx.r5.u64 | 16236;
	// stwx r28,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205F28"))) PPC_WEAK_FUNC(sub_82205F28);
PPC_FUNC_IMPL(__imp__sub_82205F28) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82205f98
	if (ctx.cr6.eq) goto loc_82205F98;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82205fd4
	if (!ctx.cr6.eq) goto loc_82205FD4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82205fd4
	if (!ctx.cr6.eq) goto loc_82205FD4;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82205fd4
	if (!ctx.cr6.eq) goto loc_82205FD4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27092
	ctx.r10.s64 = -1775501312;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-30806
	ctx.r11.s64 = -2018902016;
	// ori r9,r10,29197
	ctx.r9.u64 = ctx.r10.u64 | 29197;
	// ori r4,r11,55416
	ctx.r4.u64 = ctx.r11.u64 | 55416;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82205F84;
	sub_820A38E8(ctx, base);
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
loc_82205F98:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x821fd498
	ctx.lr = 0x82205FAC;
	sub_821FD498(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc018
	ctx.lr = 0x82205FB8;
	sub_820FC018(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82205FCC;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aad38
	ctx.lr = 0x82205FD4;
	sub_821AAD38(ctx, base);
loc_82205FD4:
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

__attribute__((alias("__imp__sub_82205FE8"))) PPC_WEAK_FUNC(sub_82205FE8);
PPC_FUNC_IMPL(__imp__sub_82205FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82205FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// beq cr6,0x822061cc
	if (ctx.cr6.eq) goto loc_822061CC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// beq cr6,0x82206180
	if (ctx.cr6.eq) goto loc_82206180;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82206224
	if (!ctx.cr6.eq) goto loc_82206224;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82206180
	if (!ctx.cr6.eq) goto loc_82206180;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bgt cr6,0x82206180
	if (ctx.cr6.gt) goto loc_82206180;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// addi r12,r12,24660
	ctx.r12.s64 = ctx.r12.s64 + 24660;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		goto loc_8220606C;
	case 1:
		goto loc_82206100;
	case 2:
		goto loc_82206180;
	case 3:
		goto loc_82206158;
	case 4:
		goto loc_822060DC;
	case 5:
		goto loc_82206120;
	default:
		__builtin_unreachable();
	}
	// lwz r17,24684(0)
	ctx.r17.u64 = PPC_LOAD_U32(24684);
	// lwz r17,24832(0)
	ctx.r17.u64 = PPC_LOAD_U32(24832);
	// lwz r17,24960(0)
	ctx.r17.u64 = PPC_LOAD_U32(24960);
	// lwz r17,24920(0)
	ctx.r17.u64 = PPC_LOAD_U32(24920);
	// lwz r17,24796(0)
	ctx.r17.u64 = PPC_LOAD_U32(24796);
	// lwz r17,24864(0)
	ctx.r17.u64 = PPC_LOAD_U32(24864);
loc_8220606C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// lbz r8,401(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 401);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220609c
	if (ctx.cr6.eq) goto loc_8220609C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,-13702
	ctx.r7.s64 = -897974272;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-19548
	ctx.r11.s64 = -1281097728;
	// ori r4,r7,52471
	ctx.r4.u64 = ctx.r7.u64 | 52471;
	// ori r10,r11,12513
	ctx.r10.u64 = ctx.r11.u64 | 12513;
	// b 0x82206170
	goto loc_82206170;
loc_8220609C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,300(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 300);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822060C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a20
	ctx.lr = 0x822060D0;
	sub_821F6A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x822060D8;
	sub_821F6898(ctx, base);
	// b 0x82206180
	goto loc_82206180;
loc_822060DC:
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82206100
	if (ctx.cr6.eq) goto loc_82206100;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r3,r4,49146
	ctx.r3.u64 = ctx.r4.u64 | 49146;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_82206100:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206180
	if (ctx.cr6.eq) goto loc_82206180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220611C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82206180
	goto loc_82206180;
loc_82206120:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1452
	ctx.r31.s64 = ctx.r11.s64 + -1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9618
	ctx.lr = 0x82206130;
	sub_820F9618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9aa0
	ctx.lr = 0x82206138;
	sub_820F9AA0(ctx, base);
	// lis r9,28623
	ctx.r9.s64 = 1875836928;
	// lis r8,23485
	ctx.r8.s64 = 1539112960;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,26567
	ctx.r4.u64 = ctx.r9.u64 | 26567;
	// ori r7,r8,31649
	ctx.r7.u64 = ctx.r8.u64 | 31649;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x82206174
	goto loc_82206174;
loc_82206158:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,13034
	ctx.r4.s64 = 854196224;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27092
	ctx.r11.s64 = -1775501312;
	// ori r4,r4,4136
	ctx.r4.u64 = ctx.r4.u64 | 4136;
	// ori r10,r11,48193
	ctx.r10.u64 = ctx.r11.u64 | 48193;
loc_82206170:
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_82206174:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82206180;
	sub_820A38E8(ctx, base);
loc_82206180:
	// lbz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82206224
	if (!ctx.cr6.eq) goto loc_82206224;
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822061a0
	if (!ctx.cr6.eq) goto loc_822061A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822061A0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82206224
	if (!ctx.cr6.eq) goto loc_82206224;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r6,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r6.u8);
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822061CC:
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x821fd498
	ctx.lr = 0x822061DC;
	sub_821FD498(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r5.u8);
	// stb r11,22400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22400, ctx.r11.u8);
	// bl 0x820fc018
	ctx.lr = 0x82206200;
	sub_820FC018(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220620C;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aad38
	ctx.lr = 0x82206214;
	sub_821AAD38(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9780
	ctx.lr = 0x82206224;
	sub_820F9780(ctx, base);
loc_82206224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220622C"))) PPC_WEAK_FUNC(sub_8220622C);
PPC_FUNC_IMPL(__imp__sub_8220622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206230"))) PPC_WEAK_FUNC(sub_82206230);
PPC_FUNC_IMPL(__imp__sub_82206230) {
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
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822064ec
	if (ctx.cr6.gt) goto loc_822064EC;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// addi r12,r12,25192
	ctx.r12.s64 = ctx.r12.s64 + 25192;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822064DC;
	case 1:
		goto loc_82206278;
	case 2:
		goto loc_82206480;
	case 3:
		goto loc_822062B4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,25820(0)
	ctx.r17.u64 = PPC_LOAD_U32(25820);
	// lwz r17,25208(0)
	ctx.r17.u64 = PPC_LOAD_U32(25208);
	// lwz r17,25728(0)
	ctx.r17.u64 = PPC_LOAD_U32(25728);
	// lwz r17,25268(0)
	ctx.r17.u64 = PPC_LOAD_U32(25268);
loc_82206278:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x821fd498
	ctx.lr = 0x8220628C;
	sub_821FD498(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
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
loc_822062B4:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822064ec
	if (!ctx.cr6.eq) goto loc_822064EC;
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822064ec
	if (ctx.cr6.gt) goto loc_822064EC;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// addi r12,r12,25312
	ctx.r12.s64 = ctx.r12.s64 + 25312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82206428;
	case 1:
		goto loc_822064EC;
	case 2:
		goto loc_822062F8;
	case 3:
		goto loc_82206350;
	case 4:
		goto loc_822064EC;
	case 5:
		goto loc_822063EC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,25640(0)
	ctx.r17.u64 = PPC_LOAD_U32(25640);
	// lwz r17,25836(0)
	ctx.r17.u64 = PPC_LOAD_U32(25836);
	// lwz r17,25336(0)
	ctx.r17.u64 = PPC_LOAD_U32(25336);
	// lwz r17,25424(0)
	ctx.r17.u64 = PPC_LOAD_U32(25424);
	// lwz r17,25836(0)
	ctx.r17.u64 = PPC_LOAD_U32(25836);
	// lwz r17,25580(0)
	ctx.r17.u64 = PPC_LOAD_U32(25580);
loc_822062F8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82206324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82206334;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x8220633C;
	sub_821F6898(ctx, base);
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
loc_82206350:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82206360;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x82206368;
	sub_821F6898(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822063a4
	if (ctx.cr6.eq) goto loc_822063A4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822063a4
	if (ctx.cr6.eq) goto loc_822063A4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822063A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822063b0
	goto loc_822063B0;
loc_822063A4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x82203578
	ctx.lr = 0x822063B0;
	sub_82203578(ctx, base);
loc_822063B0:
	// lis r10,30785
	ctx.r10.s64 = 2017525760;
	// lis r9,-27576
	ctx.r9.s64 = -1807220736;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,1617
	ctx.r4.u64 = ctx.r10.u64 | 1617;
	// ori r8,r9,14885
	ctx.r8.u64 = ctx.r9.u64 | 14885;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822063D8;
	sub_820A38E8(ctx, base);
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
loc_822063EC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,13034
	ctx.r7.s64 = 854196224;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27092
	ctx.r11.s64 = -1775501312;
	// ori r4,r7,4136
	ctx.r4.u64 = ctx.r7.u64 | 4136;
	// ori r10,r11,48193
	ctx.r10.u64 = ctx.r11.u64 | 48193;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82206414;
	sub_820A38E8(ctx, base);
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
loc_82206428:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,300(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 300);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82206454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82206464;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x8220646C;
	sub_821F6898(ctx, base);
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
loc_82206480:
	// lbz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822064ec
	if (!ctx.cr6.eq) goto loc_822064EC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x822064ac
	if (!ctx.cr6.eq) goto loc_822064AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822064AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822064ec
	if (!ctx.cr6.eq) goto loc_822064EC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
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
loc_822064DC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// stb r10,572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 572, ctx.r10.u8);
loc_822064EC:
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

__attribute__((alias("__imp__sub_82206500"))) PPC_WEAK_FUNC(sub_82206500);
PPC_FUNC_IMPL(__imp__sub_82206500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82206508;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82206b84
	if (ctx.cr6.eq) goto loc_82206B84;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82206c04
	if (!ctx.cr6.eq) goto loc_82206C04;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82206c04
	if (!ctx.cr6.eq) goto loc_82206C04;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r24,r11,31360
	ctx.r24.s64 = ctx.r11.s64 + 31360;
	// lbz r11,34(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220657c
	if (ctx.cr6.eq) goto loc_8220657C;
	// lis r10,-28144
	ctx.r10.s64 = -1844445184;
	// lis r9,-27105
	ctx.r9.s64 = -1776353280;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,51327
	ctx.r4.u64 = ctx.r10.u64 | 51327;
	// ori r8,r9,22369
	ctx.r8.u64 = ctx.r9.u64 | 22369;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220655C;
	sub_820A38E8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r6,r7,15870
	ctx.r6.u64 = ctx.r7.u64 | 15870;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8220657C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ld r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// ld r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// addi r31,r10,11600
	ctx.r31.s64 = ctx.r10.s64 + 11600;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2858
	ctx.lr = 0x822065A4;
	sub_822D2858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r31,472
	ctx.r26.s64 = ctx.r31.s64 + 472;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
loc_822065B0:
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r11,13672
	ctx.r27.s64 = ctx.r11.s64 + 13672;
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// ldx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x822d2568
	ctx.lr = 0x822065CC;
	sub_822D2568(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822065f4
	if (ctx.cr6.eq) goto loc_822065F4;
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// ldx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r27.u32);
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2710
	ctx.lr = 0x822065E8;
	sub_822D2710(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82206628
	if (!ctx.cr6.eq) goto loc_82206628;
loc_822065F4:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// ori r9,r11,12468
	ctx.r9.u64 = ctx.r11.u64 | 12468;
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwzx r11,r25,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// divw r8,r3,r11
	ctx.r8.s32 = ctx.r3.s32 / ctx.r11.s32;
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// subf r30,r6,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r6.s64;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x822065b0
	goto loc_822065B0;
loc_82206628:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ldx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r27.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// ori r8,r11,12468
	ctx.r8.u64 = ctx.r11.u64 | 12468;
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r4,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwzx r11,r25,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// divw r7,r3,r11
	ctx.r7.s32 = ctx.r3.s32 / ctx.r11.s32;
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r11,r31,472
	ctx.r11.s64 = ctx.r31.s64 + 472;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// subf r30,r4,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822065b0
	if (ctx.cr6.lt) goto loc_822065B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,144
	ctx.r3.s64 = ctx.r25.s64 + 144;
	// bl 0x821156b8
	ctx.lr = 0x82206688;
	sub_821156B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,144
	ctx.r3.s64 = ctx.r25.s64 + 144;
	// lbz r5,2584(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2584);
	// bl 0x821045e8
	ctx.lr = 0x82206698;
	sub_821045E8(ctx, base);
	// lbz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822066d4
	if (ctx.cr6.eq) goto loc_822066D4;
	// lis r9,-31359
	ctx.r9.s64 = -2055143424;
	// lis r8,-27095
	ctx.r8.s64 = -1775697920;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,22562
	ctx.r4.u64 = ctx.r9.u64 | 22562;
	// ori r7,r8,44691
	ctx.r7.u64 = ctx.r8.u64 | 44691;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822066CC;
	sub_820A38E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_822066D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822067e4
	if (ctx.cr6.eq) goto loc_822067E4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x822067e4
	if (ctx.cr6.eq) goto loc_822067E4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822067ec
	if (ctx.cr6.eq) goto loc_822067EC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822067e4
	if (ctx.cr6.eq) goto loc_822067E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8220671c
	if (!ctx.cr6.eq) goto loc_8220671C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x82206934
	goto loc_82206934;
loc_8220671C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82206730
	if (!ctx.cr6.eq) goto loc_82206730;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x82206934
	goto loc_82206934;
loc_82206730:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82206740
	if (!ctx.cr6.eq) goto loc_82206740;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x82206934
	goto loc_82206934;
loc_82206740:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82206758
	if (!ctx.cr6.eq) goto loc_82206758;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stb r11,642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 642, ctx.r11.u8);
	// b 0x82206934
	goto loc_82206934;
loc_82206758:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82206768
	if (!ctx.cr6.eq) goto loc_82206768;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x82206934
	goto loc_82206934;
loc_82206768:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82206784
	if (!ctx.cr6.eq) goto loc_82206784;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// b 0x82206934
	goto loc_82206934;
loc_82206784:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822067a0
	if (!ctx.cr6.eq) goto loc_822067A0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r6,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r6.u32);
	// b 0x82206934
	goto loc_82206934;
loc_822067A0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822067bc
	if (!ctx.cr6.eq) goto loc_822067BC;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
	// b 0x82206934
	goto loc_82206934;
loc_822067BC:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822067d8
	if (!ctx.cr6.eq) goto loc_822067D8;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r4,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r4.u32);
	// b 0x82206934
	goto loc_82206934;
loc_822067D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x82206934
	goto loc_82206934;
loc_822067E4:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82206838
	if (!ctx.cr6.eq) goto loc_82206838;
loc_822067EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
loc_8220680C:
	// addi r5,r30,-144
	ctx.r5.s64 = ctx.r30.s64 + -144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822210a8
	ctx.lr = 0x8220681C;
	sub_822210A8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8220680c
	if (ctx.cr6.lt) goto loc_8220680C;
	// stb r29,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r29.u8);
	// b 0x822068c0
	goto loc_822068C0;
loc_82206838:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82206894
	if (!ctx.cr6.eq) goto loc_82206894;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
loc_82206868:
	// addi r5,r30,-144
	ctx.r5.s64 = ctx.r30.s64 + -144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822210a8
	ctx.lr = 0x82206878;
	sub_822210A8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82206868
	if (ctx.cr6.lt) goto loc_82206868;
	// stb r29,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r29.u8);
	// b 0x822068c0
	goto loc_822068C0;
loc_82206894:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822068b8
	if (!ctx.cr6.eq) goto loc_822068B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
	// b 0x822068c0
	goto loc_822068C0;
loc_822068B8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_822068C0:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,36(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwzx r3,r25,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// bl 0x822d4560
	ctx.lr = 0x822068E4;
	sub_822D4560(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206914
	if (ctx.cr6.eq) goto loc_82206914;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82206928
	goto loc_82206928;
loc_82206914:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,-8688
	ctx.r11.s64 = ctx.r11.s64 + -8688;
	// addi r3,r11,126
	ctx.r3.s64 = ctx.r11.s64 + 126;
	// bl 0x823471d8
	ctx.lr = 0x82206924;
	sub_823471D8(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
loc_82206928:
	// std r3,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r3.u64);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
loc_82206934:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lbz r5,33(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 33);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82206958
	if (!ctx.cr6.eq) goto loc_82206958;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82206958:
	// stb r11,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r11.u8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822069e0
	if (!ctx.cr6.eq) goto loc_822069E0;
	// ld r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 424);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r11.u64);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// ld r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 432);
	// std r11,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r11.u64);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// std r11,464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 464, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x822069e0
	if (ctx.cr6.eq) goto loc_822069E0;
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822069e0
	if (ctx.cr6.eq) goto loc_822069E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,144
	ctx.r3.s64 = ctx.r25.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x822069C0;
	sub_82104600(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r25,144
	ctx.r3.s64 = ctx.r25.s64 + 144;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x822069dc
	if (ctx.cr6.eq) goto loc_822069DC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_822069DC:
	// bl 0x821045e8
	ctx.lr = 0x822069E0;
	sub_821045E8(ctx, base);
loc_822069E0:
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2c68
	ctx.lr = 0x822069F0;
	sub_822D2C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8280
	ctx.lr = 0x822069FC;
	sub_821F8280(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// bl 0x820fad88
	ctx.lr = 0x82206A10;
	sub_820FAD88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820faf08
	ctx.lr = 0x82206A20;
	sub_820FAF08(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r10,r11,-14296
	ctx.r10.s64 = ctx.r11.s64 + -14296;
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82206A34:
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82206a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82206A34;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-14320
	ctx.r11.s64 = ctx.r11.s64 + -14320;
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82206b3c
	if (!ctx.cr6.eq) goto loc_82206B3C;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x82206b3c
	if (ctx.cr6.gt) goto loc_82206B3C;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// addi r12,r12,27304
	ctx.r12.s64 = ctx.r12.s64 + 27304;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82206ACC;
	case 1:
		goto loc_82206ACC;
	case 2:
		goto loc_82206ADC;
	case 3:
		goto loc_82206AEC;
	case 4:
		goto loc_82206AFC;
	case 5:
		goto loc_82206B0C;
	case 6:
		goto loc_82206B1C;
	case 7:
		goto loc_82206B3C;
	case 8:
		goto loc_82206B2C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,27340(0)
	ctx.r17.u64 = PPC_LOAD_U32(27340);
	// lwz r17,27340(0)
	ctx.r17.u64 = PPC_LOAD_U32(27340);
	// lwz r17,27356(0)
	ctx.r17.u64 = PPC_LOAD_U32(27356);
	// lwz r17,27372(0)
	ctx.r17.u64 = PPC_LOAD_U32(27372);
	// lwz r17,27388(0)
	ctx.r17.u64 = PPC_LOAD_U32(27388);
	// lwz r17,27404(0)
	ctx.r17.u64 = PPC_LOAD_U32(27404);
	// lwz r17,27420(0)
	ctx.r17.u64 = PPC_LOAD_U32(27420);
	// lwz r17,27452(0)
	ctx.r17.u64 = PPC_LOAD_U32(27452);
	// lwz r17,27436(0)
	ctx.r17.u64 = PPC_LOAD_U32(27436);
loc_82206ACC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82206b38
	goto loc_82206B38;
loc_82206ADC:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82206b38
	goto loc_82206B38;
loc_82206AEC:
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82206b38
	goto loc_82206B38;
loc_82206AFC:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82206b38
	goto loc_82206B38;
loc_82206B0C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82206b38
	goto loc_82206B38;
loc_82206B1C:
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82206b38
	goto loc_82206B38;
loc_82206B2C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r11,7
	ctx.r11.s64 = 7;
loc_82206B38:
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_82206B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// bl 0x82203578
	ctx.lr = 0x82206B48;
	sub_82203578(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,30785
	ctx.r7.s64 = 2017525760;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27576
	ctx.r11.s64 = -1807220736;
	// ori r4,r7,1617
	ctx.r4.u64 = ctx.r7.u64 | 1617;
	// ori r10,r11,14885
	ctx.r10.u64 = ctx.r11.u64 | 14885;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82206B70;
	sub_820A38E8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f6a20
	ctx.lr = 0x82206B7C;
	sub_821F6A20(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82206B84:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,15870
	ctx.r8.u64 = ctx.r9.u64 | 15870;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82206bcc
	if (ctx.cr6.eq) goto loc_82206BCC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,18969
	ctx.r4.s64 = 1243152384;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27114
	ctx.r11.s64 = -1776943104;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// ori r10,r11,14479
	ctx.r10.u64 = ctx.r11.u64 | 14479;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82206BC8;
	sub_820A38E8(ctx, base);
	// b 0x82206bd8
	goto loc_82206BD8;
loc_82206BCC:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,31360
	ctx.r3.s64 = ctx.r11.s64 + 31360;
	// bl 0x822023d8
	ctx.lr = 0x82206BD8;
	sub_822023D8(ctx, base);
loc_82206BD8:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r8,r9,51970
	ctx.r8.u64 = ctx.r9.u64 | 51970;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// bl 0x821143f8
	ctx.lr = 0x82206BF8;
	sub_821143F8(ctx, base);
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// bl 0x8212bb98
	ctx.lr = 0x82206C04;
	sub_8212BB98(ctx, base);
loc_82206C04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82206C0C"))) PPC_WEAK_FUNC(sub_82206C0C);
PPC_FUNC_IMPL(__imp__sub_82206C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206C10"))) PPC_WEAK_FUNC(sub_82206C10);
PPC_FUNC_IMPL(__imp__sub_82206C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82206C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// lwz r30,328(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82206c60
	if (!ctx.cr6.eq) goto loc_82206C60;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,27800
	ctx.r11.s64 = 1821900800;
	// ori r9,r10,3966
	ctx.r9.u64 = ctx.r10.u64 | 3966;
	// ori r4,r11,53512
	ctx.r4.u64 = ctx.r11.u64 | 53512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82206C58;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82206C60:
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r10,22016
	ctx.r28.s64 = ctx.r10.s64 + 22016;
	// ble cr6,0x82206cb8
	if (!ctx.cr6.gt) goto loc_82206CB8;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r29,r11,-1416
	ctx.r29.s64 = ctx.r11.s64 + -1416;
loc_82206C7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x820fcb08
	ctx.lr = 0x82206C88;
	sub_820FCB08(ctx, base);
	// lis r8,-8415
	ctx.r8.s64 = -551485440;
	// lis r7,-27114
	ctx.r7.s64 = -1776943104;
	// ori r4,r8,27832
	ctx.r4.u64 = ctx.r8.u64 | 27832;
	// ori r6,r7,2197
	ctx.r6.u64 = ctx.r7.u64 | 2197;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rldimi r4,r6,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820acd58
	ctx.lr = 0x82206CA8;
	sub_820ACD58(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82206c7c
	if (!ctx.cr6.eq) goto loc_82206C7C;
loc_82206CB8:
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// lis r4,-946
	ctx.r4.s64 = -61997056;
	// ori r11,r3,2141
	ctx.r11.u64 = ctx.r3.u64 | 2141;
	// ori r4,r4,42571
	ctx.r4.u64 = ctx.r4.u64 | 42571;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ad830
	ctx.lr = 0x82206CE0;
	sub_820AD830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82206CE8"))) PPC_WEAK_FUNC(sub_82206CE8);
PPC_FUNC_IMPL(__imp__sub_82206CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82206CF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82206fd4
	if (ctx.cr6.gt) goto loc_82206FD4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r29,r11,22016
	ctx.r29.s64 = ctx.r11.s64 + 22016;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// addi r12,r12,27972
	ctx.r12.s64 = ctx.r12.s64 + 27972;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82206D58;
	case 1:
		goto loc_82206D90;
	case 2:
		goto loc_82206DC4;
	case 3:
		goto loc_82206E3C;
	case 4:
		goto loc_82206E94;
	default:
		__builtin_unreachable();
	}
	// lwz r17,27992(0)
	ctx.r17.u64 = PPC_LOAD_U32(27992);
	// lwz r17,28048(0)
	ctx.r17.u64 = PPC_LOAD_U32(28048);
	// lwz r17,28100(0)
	ctx.r17.u64 = PPC_LOAD_U32(28100);
	// lwz r17,28220(0)
	ctx.r17.u64 = PPC_LOAD_U32(28220);
	// lwz r17,28308(0)
	ctx.r17.u64 = PPC_LOAD_U32(28308);
loc_82206D58:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82206d7c
	if (ctx.cr6.eq) goto loc_82206D7C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82206d7c
	if (ctx.cr6.eq) goto loc_82206D7C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82206fd4
	if (!ctx.cr6.eq) goto loc_82206FD4;
loc_82206D7C:
	// lwz r3,2672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2672);
	// bl 0x823625f0
	ctx.lr = 0x82206D84;
	sub_823625F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82206fd4
	if (ctx.cr6.eq) goto loc_82206FD4;
	// stw r27,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r27.u32);
loc_82206D90:
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,37040
	ctx.r10.u64 = ctx.r11.u64 | 37040;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r10,r31,35
	ctx.r10.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r10,-28496
	ctx.r3.s64 = ctx.r10.s64 + -28496;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82206DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82206fd4
	if (ctx.cr6.eq) goto loc_82206FD4;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r7.u32);
loc_82206DC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,1048
	ctx.r3.s64 = ctx.r29.s64 + 1048;
	// bl 0x820e2ce0
	ctx.lr = 0x82206DD0;
	sub_820E2CE0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82206fd4
	if (ctx.cr6.eq) goto loc_82206FD4;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r4,r5,51970
	ctx.r4.u64 = ctx.r5.u64 | 51970;
	// lbzx r3,r26,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206dfc
	if (ctx.cr6.eq) goto loc_82206DFC;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82206e34
	if (ctx.cr6.eq) goto loc_82206E34;
loc_82206DFC:
	// lwz r11,4696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4696);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d28e0
	ctx.lr = 0x82206E10;
	sub_822D28E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82206e24
	if (!ctx.cr6.eq) goto loc_82206E24;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82206E24:
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-28496
	ctx.r4.s64 = ctx.r11.s64 + -28496;
	// bl 0x820ad8c0
	ctx.lr = 0x82206E34;
	sub_820AD8C0(ctx, base);
loc_82206E34:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r9.u32);
loc_82206E3C:
	// lbz r8,4715(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4715);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82206fd4
	if (ctx.cr6.eq) goto loc_82206FD4;
	// lbz r7,4725(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4725);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82206fd4
	if (ctx.cr6.eq) goto loc_82206FD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da90
	ctx.lr = 0x82206E60;
	sub_8232DA90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,160
	ctx.r3.s64 = ctx.r29.s64 + 160;
	// bl 0x820ad010
	ctx.lr = 0x82206E6C;
	sub_820AD010(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r27,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r27.u8);
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r6.u32);
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r5,476(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82206E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82206E94:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82206f28
	if (!ctx.cr6.eq) goto loc_82206F28;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x821f16c0
	ctx.lr = 0x82206EAC;
	sub_821F16C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x821f1758
	ctx.lr = 0x82206EB8;
	sub_821F1758(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,-27292
	ctx.r3.s64 = ctx.r11.s64 + -27292;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82427c40
	ctx.lr = 0x82206EDC;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-776
	ctx.r10.s64 = ctx.r11.s64 + -776;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82206EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82206f0c
	if (ctx.cr6.eq) goto loc_82206F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82206ee8
	if (ctx.cr6.eq) goto loc_82206EE8;
loc_82206F0C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82206fd4
	if (!ctx.cr6.eq) goto loc_82206FD4;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b3848
	ctx.lr = 0x82206F28;
	sub_822B3848(ctx, base);
loc_82206F28:
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r11,r3,51970
	ctx.r11.u64 = ctx.r3.u64 | 51970;
	// lbzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82206fc8
	if (ctx.cr6.eq) goto loc_82206FC8;
	// ld r11,544(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 544);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// std r11,64(r28)
	PPC_STORE_U64(ctx.r28.u32 + 64, ctx.r11.u64);
	// lbz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 624);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stw r9,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r9.u32);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82206fc8
	if (!ctx.cr6.gt) goto loc_82206FC8;
loc_82206F60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82206F6C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206fb8
	if (ctx.cr6.eq) goto loc_82206FB8;
	// ld r8,23128(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 23128);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r7,23136(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 23136);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x82206fb8
	if (!ctx.cr6.eq) goto loc_82206FB8;
	// ld r5,64(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stb r25,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r25.u8);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,23128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 23128, ctx.r4.u64);
	// std r11,23136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 23136, ctx.r11.u64);
loc_82206FB8:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82206f60
	if (ctx.cr6.lt) goto loc_82206F60;
loc_82206FC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82206FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82206FE0"))) PPC_WEAK_FUNC(sub_82206FE0);
PPC_FUNC_IMPL(__imp__sub_82206FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82206FE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8220703c
	if (!ctx.cr6.gt) goto loc_8220703C;
loc_82207008:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82207014;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220702c
	if (ctx.cr6.eq) goto loc_8220702C;
	// addi r3,r3,3484
	ctx.r3.s64 = ctx.r3.s64 + 3484;
	// lwz r5,72(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// ld r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 64);
	// bl 0x8221a0b0
	ctx.lr = 0x8220702C;
	sub_8221A0B0(ctx, base);
loc_8220702C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82207008
	if (ctx.cr6.lt) goto loc_82207008;
loc_8220703C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82207044"))) PPC_WEAK_FUNC(sub_82207044);
PPC_FUNC_IMPL(__imp__sub_82207044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207048"))) PPC_WEAK_FUNC(sub_82207048);
PPC_FUNC_IMPL(__imp__sub_82207048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82207050;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822070ec
	if (!ctx.cr6.gt) goto loc_822070EC;
loc_82207070:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8220707C;
	sub_82365758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822070dc
	if (ctx.cr6.eq) goto loc_822070DC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3500
	ctx.r3.s64 = ctx.r31.s64 + 3500;
	// bl 0x8221a6c8
	ctx.lr = 0x8220709C;
	sub_8221A6C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822070dc
	if (ctx.cr6.eq) goto loc_822070DC;
	// ld r10,23128(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 23128);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r9,23136(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 23136);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lbz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822070dc
	if (!ctx.cr6.eq) goto loc_822070DC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,23128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23128, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,23136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23136, ctx.r5.u64);
loc_822070DC:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82207070
	if (ctx.cr6.lt) goto loc_82207070;
loc_822070EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822070F4"))) PPC_WEAK_FUNC(sub_822070F4);
PPC_FUNC_IMPL(__imp__sub_822070F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822070F8"))) PPC_WEAK_FUNC(sub_822070F8);
PPC_FUNC_IMPL(__imp__sub_822070F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82207100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82207158
	if (!ctx.cr6.gt) goto loc_82207158;
loc_82207120:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8220712C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82207148
	if (ctx.cr6.eq) goto loc_82207148;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,72(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r3,r3,3516
	ctx.r3.s64 = ctx.r3.s64 + 3516;
	// ld r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 64);
	// bl 0x8221a030
	ctx.lr = 0x82207148;
	sub_8221A030(ctx, base);
loc_82207148:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82207120
	if (ctx.cr6.lt) goto loc_82207120;
loc_82207158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82207160"))) PPC_WEAK_FUNC(sub_82207160);
PPC_FUNC_IMPL(__imp__sub_82207160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82207168;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82207198
	if (ctx.cr6.lt) goto loc_82207198;
	// bso cr6,0x82207198
	if (ctx.cr6.so) goto loc_82207198;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207198:
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
	// ble cr6,0x822071dc
	if (!ctx.cr6.gt) goto loc_822071DC;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r29,r11,22016
	ctx.r29.s64 = ctx.r11.s64 + 22016;
loc_822071B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x822071C4;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822071e8
	if (!ctx.cr6.eq) goto loc_822071E8;
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220720c
	if (ctx.cr6.eq) goto loc_8220720C;
loc_822071D8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822071DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822071E8:
	// addi r10,r3,23128
	ctx.r10.s64 = ctx.r3.s64 + 23128;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822071d8
	if (ctx.cr6.eq) goto loc_822071D8;
loc_8220720C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822071b8
	if (ctx.cr6.lt) goto loc_822071B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82207228"))) PPC_WEAK_FUNC(sub_82207228);
PPC_FUNC_IMPL(__imp__sub_82207228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82207240
	if (!ctx.cr6.eq) goto loc_82207240;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82207240:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207258"))) PPC_WEAK_FUNC(sub_82207258);
PPC_FUNC_IMPL(__imp__sub_82207258) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82207354
	if (ctx.cr6.eq) goto loc_82207354;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x822072d0
	if (ctx.cr6.eq) goto loc_822072D0;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220738c
	if (!ctx.cr6.eq) goto loc_8220738C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8220738c
	if (!ctx.cr6.eq) goto loc_8220738C;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x8220738c
	if (!ctx.cr6.eq) goto loc_8220738C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27112
	ctx.r10.s64 = -1776812032;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,21805
	ctx.r11.s64 = 1429012480;
	// ori r9,r10,24731
	ctx.r9.u64 = ctx.r10.u64 | 24731;
	// ori r4,r11,27832
	ctx.r4.u64 = ctx.r11.u64 | 27832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822072BC;
	sub_820A38E8(ctx, base);
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
loc_822072D0:
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// addi r10,r10,14528
	ctx.r10.s64 = ctx.r10.s64 + 14528;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,22348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22348);
	// bne cr6,0x8220730c
	if (!ctx.cr6.eq) goto loc_8220730C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8220730c
	if (!ctx.cr6.eq) goto loc_8220730C;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r8.u8);
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
loc_8220730C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8220738c
	if (!ctx.cr6.eq) goto loc_8220738C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8220738c
	if (!ctx.cr6.eq) goto loc_8220738C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r7,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r7.u8);
	// bl 0x82427c40
	ctx.lr = 0x82207340;
	sub_82427C40(ctx, base);
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
loc_82207354:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82207368;
	sub_821FBF68(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x821aa9c8
	ctx.lr = 0x82207370;
	sub_821AA9C8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x821fd498
	ctx.lr = 0x82207384;
	sub_821FD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r6.u8);
loc_8220738C:
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

__attribute__((alias("__imp__sub_822073A0"))) PPC_WEAK_FUNC(sub_822073A0);
PPC_FUNC_IMPL(__imp__sub_822073A0) {
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
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822074ec
	if (ctx.cr6.gt) goto loc_822074EC;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// addi r12,r12,29660
	ctx.r12.s64 = ctx.r12.s64 + 29660;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822074E0;
	case 1:
		goto loc_822073EC;
	case 2:
		goto loc_8220747C;
	case 3:
		goto loc_82207440;
	default:
		__builtin_unreachable();
	}
	// lwz r17,29920(0)
	ctx.r17.u64 = PPC_LOAD_U32(29920);
	// lwz r17,29676(0)
	ctx.r17.u64 = PPC_LOAD_U32(29676);
	// lwz r17,29820(0)
	ctx.r17.u64 = PPC_LOAD_U32(29820);
	// lwz r17,29760(0)
	ctx.r17.u64 = PPC_LOAD_U32(29760);
loc_822073EC:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eaae8
	ctx.lr = 0x822073F8;
	sub_821EAAE8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220740C;
	sub_821FBF68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaaa8
	ctx.lr = 0x82207414;
	sub_821AAAA8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd498
	ctx.lr = 0x8220742C;
	sub_821FD498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f7088
	ctx.lr = 0x82207434;
	sub_821F7088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r11.u8);
	// b 0x822074ec
	goto loc_822074EC;
loc_82207440:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822074ec
	if (!ctx.cr6.eq) goto loc_822074EC;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x822074ec
	if (!ctx.cr6.eq) goto loc_822074EC;
	// lis r10,21805
	ctx.r10.s64 = 1429012480;
	// lis r9,-27112
	ctx.r9.s64 = -1776812032;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,27832
	ctx.r4.u64 = ctx.r10.u64 | 27832;
	// ori r8,r9,24731
	ctx.r8.u64 = ctx.r9.u64 | 24731;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207478;
	sub_820A38E8(ctx, base);
	// b 0x822074ec
	goto loc_822074EC;
loc_8220747C:
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lbz r11,888(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 888);
	// addi r10,r10,14528
	ctx.r10.s64 = ctx.r10.s64 + 14528;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,22348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22348);
	// bne cr6,0x822074a8
	if (!ctx.cr6.eq) goto loc_822074A8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822074a8
	if (!ctx.cr6.eq) goto loc_822074A8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r7.u8);
	// b 0x822074ec
	goto loc_822074EC;
loc_822074A8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822074ec
	if (!ctx.cr6.eq) goto loc_822074EC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822074ec
	if (!ctx.cr6.eq) goto loc_822074EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r10.u8);
	// bl 0x82427c40
	ctx.lr = 0x822074DC;
	sub_82427C40(ctx, base);
	// b 0x822074ec
	goto loc_822074EC;
loc_822074E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821fd698
	ctx.lr = 0x822074EC;
	sub_821FD698(ctx, base);
loc_822074EC:
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

__attribute__((alias("__imp__sub_82207504"))) PPC_WEAK_FUNC(sub_82207504);
PPC_FUNC_IMPL(__imp__sub_82207504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207508"))) PPC_WEAK_FUNC(sub_82207508);
PPC_FUNC_IMPL(__imp__sub_82207508) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220763c
	if (ctx.cr6.eq) goto loc_8220763C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82207600
	if (ctx.cr6.eq) goto loc_82207600;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x822076c4
	if (!ctx.cr6.eq) goto loc_822076C4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822076c4
	if (!ctx.cr6.eq) goto loc_822076C4;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x822075d8
	if (ctx.cr6.eq) goto loc_822075D8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822076c4
	if (!ctx.cr6.eq) goto loc_822076C4;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ade70
	ctx.lr = 0x8220755C;
	sub_822ADE70(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r10,r11,14528
	ctx.r10.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822076c4
	if (ctx.cr6.eq) goto loc_822076C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822076c4
	if (ctx.cr6.eq) goto loc_822076C4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82207588
	if (ctx.cr6.eq) goto loc_82207588;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22348, ctx.r11.u32);
loc_82207588:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f6af0
	ctx.lr = 0x8220759C;
	sub_821F6AF0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27098
	ctx.r10.s64 = -1775894528;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,14908
	ctx.r11.s64 = 977010688;
	// ori r9,r10,3488
	ctx.r9.u64 = ctx.r10.u64 | 3488;
	// ori r4,r11,65535
	ctx.r4.u64 = ctx.r11.u64 | 65535;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822075C4;
	sub_820A38E8(ctx, base);
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
loc_822075D8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ade70
	ctx.lr = 0x822075EC;
	sub_822ADE70(ctx, base);
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
loc_82207600:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822076c4
	if (!ctx.cr6.eq) goto loc_822076C4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82362ad8
	ctx.lr = 0x82207628;
	sub_82362AD8(ctx, base);
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
loc_8220763C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// ori r7,r8,48421
	ctx.r7.u64 = ctx.r8.u64 | 48421;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8220766c
	if (ctx.cr6.eq) goto loc_8220766C;
	// bl 0x8259b968
	ctx.lr = 0x8220765C;
	sub_8259B968(ctx, base);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r5,48421
	ctx.r4.u64 = ctx.r5.u64 | 48421;
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
loc_8220766C:
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822a4090
	ctx.lr = 0x82207678;
	sub_822A4090(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822a40d8
	ctx.lr = 0x82207684;
	sub_822A40D8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd498
	ctx.lr = 0x8220769C;
	sub_821FD498(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x822076c0
	if (!ctx.cr6.lt) goto loc_822076C0;
	// li r5,14
	ctx.r5.s64 = 14;
loc_822076C0:
	// bl 0x821f6af0
	ctx.lr = 0x822076C4;
	sub_821F6AF0(ctx, base);
loc_822076C4:
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

__attribute__((alias("__imp__sub_822076D8"))) PPC_WEAK_FUNC(sub_822076D8);
PPC_FUNC_IMPL(__imp__sub_822076D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822076E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82207798
	if (ctx.cr6.eq) goto loc_82207798;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// addi r31,r11,14528
	ctx.r31.s64 = ctx.r11.s64 + 14528;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,-24936
	ctx.r30.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x8220771c
	if (ctx.cr6.eq) goto loc_8220771C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x82207738
	if (ctx.cr6.eq) goto loc_82207738;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220771C:
	// lwz r11,22348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8220773c
	if (!ctx.cr6.eq) goto loc_8220773C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362ad8
	ctx.lr = 0x82207738;
	sub_82362AD8(ctx, base);
loc_82207738:
	// lwz r11,22348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22348);
loc_8220773C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x822077c0
	if (!ctx.cr6.eq) goto loc_822077C0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822077c0
	if (!ctx.cr6.eq) goto loc_822077C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822077c0
	if (ctx.cr6.eq) goto loc_822077C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822077c0
	if (ctx.cr6.eq) goto loc_822077C0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220776c
	if (ctx.cr6.eq) goto loc_8220776C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22348, ctx.r11.u32);
loc_8220776C:
	// lis r11,-27202
	ctx.r11.s64 = -1782710272;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// ori r4,r11,32151
	ctx.r4.u64 = ctx.r11.u64 | 32151;
	// ori r9,r10,16102
	ctx.r9.u64 = ctx.r10.u64 | 16102;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82207790;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207798:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd498
	ctx.lr = 0x822077B0;
	sub_821FD498(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6af0
	ctx.lr = 0x822077C0;
	sub_821F6AF0(ctx, base);
loc_822077C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822077C8"))) PPC_WEAK_FUNC(sub_822077C8);
PPC_FUNC_IMPL(__imp__sub_822077C8) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x822078a4
	if (ctx.cr6.eq) goto loc_822078A4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82207868
	if (ctx.cr6.eq) goto loc_82207868;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x822078cc
	if (!ctx.cr6.eq) goto loc_822078CC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822078cc
	if (!ctx.cr6.eq) goto loc_822078CC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822078cc
	if (!ctx.cr6.eq) goto loc_822078CC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r10,r11,14528
	ctx.r10.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822078cc
	if (ctx.cr6.eq) goto loc_822078CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822078cc
	if (ctx.cr6.eq) goto loc_822078CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220782c
	if (ctx.cr6.eq) goto loc_8220782C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22348, ctx.r11.u32);
loc_8220782C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,1605
	ctx.r11.s64 = 105185280;
	// ori r9,r10,15955
	ctx.r9.u64 = ctx.r10.u64 | 15955;
	// ori r4,r11,60344
	ctx.r4.u64 = ctx.r11.u64 | 60344;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207854;
	sub_820A38E8(ctx, base);
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
loc_82207868:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822078cc
	if (!ctx.cr6.eq) goto loc_822078CC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82362ad8
	ctx.lr = 0x82207890;
	sub_82362AD8(ctx, base);
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
loc_822078A4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd498
	ctx.lr = 0x822078BC;
	sub_821FD498(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6af0
	ctx.lr = 0x822078CC;
	sub_821F6AF0(ctx, base);
loc_822078CC:
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

__attribute__((alias("__imp__sub_822078E0"))) PPC_WEAK_FUNC(sub_822078E0);
PPC_FUNC_IMPL(__imp__sub_822078E0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82207984
	if (ctx.cr6.eq) goto loc_82207984;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220795c
	if (ctx.cr6.eq) goto loc_8220795C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r10,r11,14528
	ctx.r10.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82207934
	if (ctx.cr6.eq) goto loc_82207934;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22348, ctx.r11.u32);
loc_82207934:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27202
	ctx.r11.s64 = -1782710272;
	// ori r9,r10,16102
	ctx.r9.u64 = ctx.r10.u64 | 16102;
	// ori r4,r11,32151
	ctx.r4.u64 = ctx.r11.u64 | 32151;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
loc_8220795C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82362ad8
	sub_82362AD8(ctx, base);
	return;
loc_82207984:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821fd498
	sub_821FD498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82207998"))) PPC_WEAK_FUNC(sub_82207998);
PPC_FUNC_IMPL(__imp__sub_82207998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220799C"))) PPC_WEAK_FUNC(sub_8220799C);
PPC_FUNC_IMPL(__imp__sub_8220799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822079A0"))) PPC_WEAK_FUNC(sub_822079A0);
PPC_FUNC_IMPL(__imp__sub_822079A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822079A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82207c78
	if (ctx.cr6.eq) goto loc_82207C78;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82207a84
	if (ctx.cr6.eq) goto loc_82207A84;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82207d9c
	if (!ctx.cr6.eq) goto loc_82207D9C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82207d9c
	if (!ctx.cr6.eq) goto loc_82207D9C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82207d9c
	if (!ctx.cr6.eq) goto loc_82207D9C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x82203a48
	ctx.lr = 0x822079E4;
	sub_82203A48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207a1c
	if (ctx.cr6.eq) goto loc_82207A1C;
	// lis r10,-22171
	ctx.r10.s64 = -1452998656;
	// lis r9,-27106
	ctx.r9.s64 = -1776418816;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,19753
	ctx.r4.u64 = ctx.r10.u64 | 19753;
	// ori r8,r9,27054
	ctx.r8.u64 = ctx.r9.u64 | 27054;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207A18;
	sub_820A38E8(ctx, base);
	// b 0x82207a5c
	goto loc_82207A5C;
loc_82207A1C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r6,-994
	ctx.r6.s64 = -65142784;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r3,-27116
	ctx.r3.s64 = -1777074176;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r10,r3,41781
	ctx.r10.u64 = ctx.r3.u64 | 41781;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// ori r4,r6,62591
	ctx.r4.u64 = ctx.r6.u64 | 62591;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stb r7,25(r29)
	PPC_STORE_U8(ctx.r29.u32 + 25, ctx.r7.u8);
	// bl 0x82103ec8
	ctx.lr = 0x82207A4C;
	sub_82103EC8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// stw r10,8400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8400, ctx.r10.u32);
loc_82207A5C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x82207A7C;
	sub_822C5960(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207A84:
	// lbz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82207aac
	if (!ctx.cr6.eq) goto loc_82207AAC;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b35d0
	ctx.lr = 0x82207AA4;
	sub_822B35D0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r8.u8);
loc_82207AAC:
	// lbz r11,25(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 25);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82207c24
	if (ctx.cr6.eq) goto loc_82207C24;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// addi r31,r10,26080
	ctx.r31.s64 = ctx.r10.s64 + 26080;
	// beq cr6,0x82207ad8
	if (ctx.cr6.eq) goto loc_82207AD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82207b14
	if (ctx.cr6.eq) goto loc_82207B14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207AD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x82207AE4;
	sub_82104600(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82207d9c
	if (ctx.cr6.eq) goto loc_82207D9C;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x82114870
	ctx.lr = 0x82207B0C;
	sub_82114870(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r6,25(r29)
	PPC_STORE_U8(ctx.r29.u32 + 25, ctx.r6.u8);
loc_82207B14:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8210f7e0
	ctx.lr = 0x82207B20;
	sub_8210F7E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-28292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82207b8c
	if (!ctx.cr6.gt) goto loc_82207B8C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x82207B3C;
	sub_821E69F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82114500
	ctx.lr = 0x82207B48;
	sub_82114500(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821143f8
	ctx.lr = 0x82207B50;
	sub_821143F8(ctx, base);
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d560
	ctx.lr = 0x82207B5C;
	sub_8210D560(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-27202
	ctx.r4.s64 = -1782710272;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27583
	ctx.r11.s64 = -1807679488;
	// ori r4,r4,32151
	ctx.r4.u64 = ctx.r4.u64 | 32151;
	// ori r10,r11,16102
	ctx.r10.u64 = ctx.r11.u64 | 16102;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207B84;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207B8C:
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,14716
	ctx.r8.u64 = ctx.r9.u64 | 14716;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82207d9c
	if (ctx.cr6.eq) goto loc_82207D9C;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14718
	ctx.r10.u64 = ctx.r11.u64 | 14718;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82207d9c
	if (ctx.cr6.eq) goto loc_82207D9C;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r7,r8,14715
	ctx.r7.u64 = ctx.r8.u64 | 14715;
	// lbzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ble cr6,0x82207c04
	if (!ctx.cr6.gt) goto loc_82207C04;
	// lis r11,-27105
	ctx.r11.s64 = -1776353280;
	// lis r4,-6216
	ctx.r4.s64 = -407371776;
	// ori r10,r11,28614
	ctx.r10.u64 = ctx.r11.u64 | 28614;
	// ori r4,r4,63999
	ctx.r4.u64 = ctx.r4.u64 | 63999;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207BFC;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207C04:
	// lis r9,-28144
	ctx.r9.s64 = -1844445184;
	// lis r8,-27105
	ctx.r8.s64 = -1776353280;
	// ori r4,r9,51327
	ctx.r4.u64 = ctx.r9.u64 | 51327;
	// ori r7,r8,22369
	ctx.r7.u64 = ctx.r8.u64 | 22369;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207C1C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207C24:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x8210f7e0
	ctx.lr = 0x82207C38;
	sub_8210F7E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-28292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82207d9c
	if (!ctx.cr6.gt) goto loc_82207D9C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-27202
	ctx.r4.s64 = -1782710272;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27583
	ctx.r11.s64 = -1807679488;
	// ori r4,r4,32151
	ctx.r4.u64 = ctx.r4.u64 | 32151;
	// ori r10,r11,16102
	ctx.r10.u64 = ctx.r11.u64 | 16102;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207C70;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82207C78:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,25(r29)
	PPC_STORE_U8(ctx.r29.u32 + 25, ctx.r31.u8);
	// bl 0x821fd498
	ctx.lr = 0x82207C98;
	sub_821FD498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd698
	ctx.lr = 0x82207CA0;
	sub_821FD698(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stb r31,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r31.u8);
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// ori r8,r9,31004
	ctx.r8.u64 = ctx.r9.u64 | 31004;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// lbzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82207d6c
	if (ctx.cr6.eq) goto loc_82207D6C;
	// bl 0x8210b358
	ctx.lr = 0x82207CCC;
	sub_8210B358(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82207cf0
	if (ctx.cr6.eq) goto loc_82207CF0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82207cf4
	if (ctx.cr6.eq) goto loc_82207CF4;
loc_82207CF0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82207CF4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82207d2c
	if (ctx.cr6.eq) goto loc_82207D2C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-22171
	ctx.r4.s64 = -1452998656;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27106
	ctx.r11.s64 = -1776418816;
	// ori r4,r4,19753
	ctx.r4.u64 = ctx.r4.u64 | 19753;
	// ori r10,r11,27054
	ctx.r10.u64 = ctx.r11.u64 | 27054;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82207D28;
	sub_820A38E8(ctx, base);
	// b 0x82207d84
	goto loc_82207D84;
loc_82207D2C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r10,-27264
	ctx.r5.s64 = ctx.r10.s64 + -27264;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 65536;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r8,r8,30604
	ctx.r8.s64 = ctx.r8.s64 + 30604;
	// addi r7,r11,9664
	ctx.r7.s64 = ctx.r11.s64 + 9664;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6928
	ctx.lr = 0x82207D68;
	sub_821E6928(ctx, base);
	// b 0x82207d84
	goto loc_82207D84;
loc_82207D6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// bl 0x82114500
	ctx.lr = 0x82207D78;
	sub_82114500(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// bl 0x82114500
	ctx.lr = 0x82207D84;
	sub_82114500(ctx, base);
loc_82207D84:
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// bl 0x8212bb98
	ctx.lr = 0x82207D90;
	sub_8212BB98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// bl 0x8210f858
	ctx.lr = 0x82207D9C;
	sub_8210F858(ctx, base);
loc_82207D9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82207DA4"))) PPC_WEAK_FUNC(sub_82207DA4);
PPC_FUNC_IMPL(__imp__sub_82207DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207DA8"))) PPC_WEAK_FUNC(sub_82207DA8);
PPC_FUNC_IMPL(__imp__sub_82207DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82207DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8298
	ctx.lr = 0x82207DC4;
	sub_821F8298(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-1416
	ctx.r29.s64 = ctx.r11.s64 + -1416;
	// addi r11,r29,6532
	ctx.r11.s64 = ctx.r29.s64 + 6532;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207f38
	if (ctx.cr6.eq) goto loc_82207F38;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 642, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r10.u8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r10.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82207e58
	if (!ctx.cr6.gt) goto loc_82207E58;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,556
	ctx.r8.s64 = ctx.r31.s64 + 556;
loc_82207E34:
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82207e34
	if (ctx.cr6.lt) goto loc_82207E34;
loc_82207E58:
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2c68
	ctx.lr = 0x82207E74;
	sub_822D2C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820fd6e8
	ctx.lr = 0x82207E84;
	sub_820FD6E8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82207f08
	if (!ctx.cr6.eq) goto loc_82207F08;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r5,r11,-32584
	ctx.r5.s64 = ctx.r11.s64 + -32584;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,30785
	ctx.r8.s64 = 2017525760;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,29453
	ctx.r11.s64 = 1930231808;
	// lis r7,-27576
	ctx.r7.s64 = -1807220736;
	// ori r4,r11,24215
	ctx.r4.u64 = ctx.r11.u64 | 24215;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,16095
	ctx.r9.u64 = ctx.r10.u64 | 16095;
	// ori r10,r7,14885
	ctx.r10.u64 = ctx.r7.u64 | 14885;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r11,37(r5)
	PPC_STORE_U8(ctx.r5.u32 + 37, ctx.r11.u8);
	// ori r11,r8,1617
	ctx.r11.u64 = ctx.r8.u64 | 1617;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// stb r11,36(r5)
	PPC_STORE_U8(ctx.r5.u32 + 36, ctx.r11.u8);
	// bl 0x820a38e8
	ctx.lr = 0x82207F00;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82207F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203578
	ctx.lr = 0x82207F10;
	sub_82203578(ctx, base);
	// lis r9,30785
	ctx.r9.s64 = 2017525760;
	// lis r8,-27576
	ctx.r8.s64 = -1807220736;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,1617
	ctx.r4.u64 = ctx.r9.u64 | 1617;
	// ori r7,r8,14885
	ctx.r7.u64 = ctx.r8.u64 | 14885;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82207F38;
	sub_820A38E8(ctx, base);
loc_82207F38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82207F40"))) PPC_WEAK_FUNC(sub_82207F40);
PPC_FUNC_IMPL(__imp__sub_82207F40) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 642, ctx.r11.u8);
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// ld r11,32336(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32336);
	// std r11,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r11.u64);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// bl 0x821f8288
	ctx.lr = 0x82207FA0;
	sub_821F8288(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820fd6e8
	ctx.lr = 0x82207FB0;
	sub_820FD6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82208038
	if (ctx.cr6.eq) goto loc_82208038;
	// bl 0x821f8288
	ctx.lr = 0x82207FCC;
	sub_821F8288(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r5,r11,-32504
	ctx.r5.s64 = ctx.r11.s64 + -32504;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r10,-24936
	ctx.r3.s64 = ctx.r10.s64 + -24936;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// lis r4,29453
	ctx.r4.s64 = 1930231808;
	// ori r9,r10,16095
	ctx.r9.u64 = ctx.r10.u64 | 16095;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r4,r4,24215
	ctx.r4.u64 = ctx.r4.u64 | 24215;
	// lis r8,30785
	ctx.r8.s64 = 2017525760;
	// lis r7,-27576
	ctx.r7.s64 = -1807220736;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stb r10,37(r5)
	PPC_STORE_U8(ctx.r5.u32 + 37, ctx.r10.u8);
	// ori r9,r7,14885
	ctx.r9.u64 = ctx.r7.u64 | 14885;
	// ori r10,r8,1617
	ctx.r10.u64 = ctx.r8.u64 | 1617;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,36(r5)
	PPC_STORE_U8(ctx.r5.u32 + 36, ctx.r10.u8);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// b 0x8220805c
	goto loc_8220805C;
loc_82208038:
	// bl 0x82203578
	ctx.lr = 0x8220803C;
	sub_82203578(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,30785
	ctx.r8.s64 = 2017525760;
	// lis r7,-27576
	ctx.r7.s64 = -1807220736;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,1617
	ctx.r4.u64 = ctx.r8.u64 | 1617;
	// ori r11,r7,14885
	ctx.r11.u64 = ctx.r7.u64 | 14885;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_8220805C:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82208064;
	sub_820A38E8(ctx, base);
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

__attribute__((alias("__imp__sub_82208078"))) PPC_WEAK_FUNC(sub_82208078);
PPC_FUNC_IMPL(__imp__sub_82208078) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x82203578
	ctx.lr = 0x82208090;
	sub_82203578(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27576
	ctx.r10.s64 = -1807220736;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,30785
	ctx.r11.s64 = 2017525760;
	// ori r9,r10,14885
	ctx.r9.u64 = ctx.r10.u64 | 14885;
	// ori r4,r11,1617
	ctx.r4.u64 = ctx.r11.u64 | 1617;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822080B8;
	sub_820A38E8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f6a20
	ctx.lr = 0x822080C4;
	sub_821F6A20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822080D4"))) PPC_WEAK_FUNC(sub_822080D4);
PPC_FUNC_IMPL(__imp__sub_822080D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822080D8"))) PPC_WEAK_FUNC(sub_822080D8);
PPC_FUNC_IMPL(__imp__sub_822080D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822080E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822081b4
	if (ctx.cr6.eq) goto loc_822081B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82208124
	if (ctx.cr6.eq) goto loc_82208124;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82208244
	if (!ctx.cr6.eq) goto loc_82208244;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82208244
	if (!ctx.cr6.eq) goto loc_82208244;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82105d98
	ctx.lr = 0x8220811C;
	sub_82105D98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208124:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r30,r11,-14944
	ctx.r30.s64 = ctx.r11.s64 + -14944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f4d8
	ctx.lr = 0x82208134;
	sub_8211F4D8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51970
	ctx.r10.u64 = ctx.r11.u64 | 51970;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82208194
	if (ctx.cr6.eq) goto loc_82208194;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,15844
	ctx.r3.s64 = ctx.r11.s64 + 15844;
	// bl 0x82230c10
	ctx.lr = 0x82208160;
	sub_82230C10(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82208194
	if (!ctx.cr6.eq) goto loc_82208194;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x82208170;
	sub_82367A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224dd0
	ctx.lr = 0x82208188;
	sub_82224DD0(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15844
	ctx.r3.s64 = ctx.r11.s64 + 15844;
	// bl 0x822214d8
	ctx.lr = 0x82208194;
	sub_822214D8(ctx, base);
loc_82208194:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105df8
	ctx.lr = 0x8220819C;
	sub_82105DF8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82208244
	if (ctx.cr6.eq) goto loc_82208244;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// b 0x82208230
	goto loc_82208230;
loc_822081B4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822081c4
	if (ctx.cr6.eq) goto loc_822081C4;
	// stw r7,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
	// b 0x822081d0
	goto loc_822081D0;
loc_822081C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-31368
	ctx.r11.s64 = ctx.r11.s64 + -31368;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_822081D0:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208228
	if (ctx.cr6.eq) goto loc_82208228;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x821fd498
	ctx.lr = 0x822081F8;
	sub_821FD498(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220820C;
	sub_821FBF68(ctx, base);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x821aaa38
	ctx.lr = 0x82208214;
	sub_821AAA38(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x821058a8
	ctx.lr = 0x82208220;
	sub_821058A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208228:
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
loc_82208230:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x820a38e8
	ctx.lr = 0x82208244;
	sub_820A38E8(ctx, base);
loc_82208244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220824C"))) PPC_WEAK_FUNC(sub_8220824C);
PPC_FUNC_IMPL(__imp__sub_8220824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208250"))) PPC_WEAK_FUNC(sub_82208250);
PPC_FUNC_IMPL(__imp__sub_82208250) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lis r4,-6216
	ctx.r4.s64 = -407371776;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lis r6,-32090
	ctx.r6.s64 = -2103050240;
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// ori r4,r4,63999
	ctx.r4.u64 = ctx.r4.u64 | 63999;
	// ori r7,r10,28614
	ctx.r7.u64 = ctx.r10.u64 | 28614;
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// addi r3,r6,-24936
	ctx.r3.s64 = ctx.r6.s64 + -24936;
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822082A0"))) PPC_WEAK_FUNC(sub_822082A0);
PPC_FUNC_IMPL(__imp__sub_822082A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// lis r8,-6216
	ctx.r8.s64 = -407371776;
	// lis r7,-27105
	ctx.r7.s64 = -1776353280;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-24936
	ctx.r3.s64 = ctx.r10.s64 + -24936;
	// ori r4,r8,63999
	ctx.r4.u64 = ctx.r8.u64 | 63999;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// ori r10,r7,28614
	ctx.r10.u64 = ctx.r7.u64 | 28614;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822082D4"))) PPC_WEAK_FUNC(sub_822082D4);
PPC_FUNC_IMPL(__imp__sub_822082D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822082D8"))) PPC_WEAK_FUNC(sub_822082D8);
PPC_FUNC_IMPL(__imp__sub_822082D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,10
	ctx.r9.s64 = 10;
	// lis r8,-6216
	ctx.r8.s64 = -407371776;
	// lis r7,-27105
	ctx.r7.s64 = -1776353280;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-24936
	ctx.r3.s64 = ctx.r10.s64 + -24936;
	// ori r4,r8,63999
	ctx.r4.u64 = ctx.r8.u64 | 63999;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// ori r10,r7,28614
	ctx.r10.u64 = ctx.r7.u64 | 28614;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220830C"))) PPC_WEAK_FUNC(sub_8220830C);
PPC_FUNC_IMPL(__imp__sub_8220830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208310"))) PPC_WEAK_FUNC(sub_82208310);
PPC_FUNC_IMPL(__imp__sub_82208310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220832C"))) PPC_WEAK_FUNC(sub_8220832C);
PPC_FUNC_IMPL(__imp__sub_8220832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208330"))) PPC_WEAK_FUNC(sub_82208330);
PPC_FUNC_IMPL(__imp__sub_82208330) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x822083ec
	if (ctx.cr6.eq) goto loc_822083EC;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82208434
	if (!ctx.cr6.eq) goto loc_82208434;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82208434
	if (!ctx.cr6.eq) goto loc_82208434;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,-24936
	ctx.r31.s64 = ctx.r11.s64 + -24936;
	// addi r3,r31,7408
	ctx.r3.s64 = ctx.r31.s64 + 7408;
	// bl 0x821ebd98
	ctx.lr = 0x82208368;
	sub_821EBD98(ctx, base);
	// addi r3,r31,7408
	ctx.r3.s64 = ctx.r31.s64 + 7408;
	// bl 0x821ebf58
	ctx.lr = 0x82208370;
	sub_821EBF58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822083b8
	if (ctx.cr6.eq) goto loc_822083B8;
	// lis r10,-994
	ctx.r10.s64 = -65142784;
	// lis r9,-27116
	ctx.r9.s64 = -1777074176;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r4,r10,62591
	ctx.r4.u64 = ctx.r10.u64 | 62591;
	// ori r8,r9,41781
	ctx.r8.u64 = ctx.r9.u64 | 41781;
	// addi r5,r11,-31392
	ctx.r5.s64 = ctx.r11.s64 + -31392;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x822083A4;
	sub_820A38E8(ctx, base);
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
loc_822083B8:
	// lis r7,14781
	ctx.r7.s64 = 968687616;
	// lis r3,-27113
	ctx.r3.s64 = -1776877568;
	// ori r4,r7,22641
	ctx.r4.u64 = ctx.r7.u64 | 22641;
	// ori r11,r3,29718
	ctx.r11.u64 = ctx.r3.u64 | 29718;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x822083D8;
	sub_820A38E8(ctx, base);
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
loc_822083EC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,-24936
	ctx.r31.s64 = ctx.r11.s64 + -24936;
	// addi r3,r31,7408
	ctx.r3.s64 = ctx.r31.s64 + 7408;
	// bl 0x821ebb00
	ctx.lr = 0x822083FC;
	sub_821EBB00(ctx, base);
	// addi r3,r31,7408
	ctx.r3.s64 = ctx.r31.s64 + 7408;
	// bl 0x8212bb98
	ctx.lr = 0x82208404;
	sub_8212BB98(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82208418;
	sub_821FBF68(ctx, base);
	// addi r3,r31,7408
	ctx.r3.s64 = ctx.r31.s64 + 7408;
	// bl 0x821aab88
	ctx.lr = 0x82208420;
	sub_821AAB88(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x821fd498
	ctx.lr = 0x82208434;
	sub_821FD498(ctx, base);
loc_82208434:
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

__attribute__((alias("__imp__sub_82208448"))) PPC_WEAK_FUNC(sub_82208448);
PPC_FUNC_IMPL(__imp__sub_82208448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82208450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x822084ec
	if (ctx.cr6.eq) goto loc_822084EC;
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
	// beq cr6,0x82208480
	if (ctx.cr6.eq) goto loc_82208480;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82208480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208514
	if (ctx.cr6.eq) goto loc_82208514;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4db8
	ctx.lr = 0x8220849C;
	sub_821F4DB8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822084d8
	if (ctx.cr6.eq) goto loc_822084D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-27240
	ctx.r3.s64 = ctx.r11.s64 + -27240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x82427c40
	ctx.lr = 0x822084D0;
	sub_82427C40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822084D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4b28
	ctx.lr = 0x822084E4;
	sub_821F4B28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822084EC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,14781
	ctx.r8.s64 = 968687616;
	// lis r7,-27113
	ctx.r7.s64 = -1776877568;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,22641
	ctx.r4.u64 = ctx.r8.u64 | 22641;
	// ori r11,r7,29718
	ctx.r11.u64 = ctx.r7.u64 | 29718;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208514;
	sub_820A38E8(ctx, base);
loc_82208514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220851C"))) PPC_WEAK_FUNC(sub_8220851C);
PPC_FUNC_IMPL(__imp__sub_8220851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208520"))) PPC_WEAK_FUNC(sub_82208520);
PPC_FUNC_IMPL(__imp__sub_82208520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8220855c
	if (ctx.cr6.eq) goto loc_8220855C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82208580
	if (!ctx.cr6.eq) goto loc_82208580;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x821f4b28
	ctx.lr = 0x8220854C;
	sub_821F4B28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220855C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-27220
	ctx.r3.s64 = ctx.r11.s64 + -27220;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// bl 0x82427c40
	ctx.lr = 0x82208580;
	sub_82427C40(ctx, base);
loc_82208580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82208590"))) PPC_WEAK_FUNC(sub_82208590);
PPC_FUNC_IMPL(__imp__sub_82208590) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82208868
	if (ctx.cr6.eq) goto loc_82208868;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82208818
	if (ctx.cr6.eq) goto loc_82208818;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82208890
	if (!ctx.cr6.eq) goto loc_82208890;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82208890
	if (!ctx.cr6.eq) goto loc_82208890;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82208890
	if (ctx.cr6.gt) goto loc_82208890;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-31260
	ctx.r12.s64 = ctx.r12.s64 + -31260;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220876C;
	case 1:
		goto loc_82208890;
	case 2:
		goto loc_82208604;
	case 3:
		goto loc_82208640;
	case 4:
		goto loc_8220867C;
	case 5:
		goto loc_822086B8;
	case 6:
		goto loc_822086F4;
	case 7:
		goto loc_82208730;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-30868(0)
	ctx.r17.u64 = PPC_LOAD_U32(-30868);
	// lwz r17,-30576(0)
	ctx.r17.u64 = PPC_LOAD_U32(-30576);
	// lwz r17,-31228(0)
	ctx.r17.u64 = PPC_LOAD_U32(-31228);
	// lwz r17,-31168(0)
	ctx.r17.u64 = PPC_LOAD_U32(-31168);
	// lwz r17,-31108(0)
	ctx.r17.u64 = PPC_LOAD_U32(-31108);
	// lwz r17,-31048(0)
	ctx.r17.u64 = PPC_LOAD_U32(-31048);
	// lwz r17,-30988(0)
	ctx.r17.u64 = PPC_LOAD_U32(-30988);
	// lwz r17,-30928(0)
	ctx.r17.u64 = PPC_LOAD_U32(-30928);
loc_82208604:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27113
	ctx.r10.s64 = -1776877568;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,14787
	ctx.r11.s64 = 969080832;
	// ori r9,r10,29718
	ctx.r9.u64 = ctx.r10.u64 | 29718;
	// ori r4,r11,36904
	ctx.r4.u64 = ctx.r11.u64 | 36904;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220862C;
	sub_820A38E8(ctx, base);
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
loc_82208640:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,14786
	ctx.r8.s64 = 969015296;
	// lis r7,-27113
	ctx.r7.s64 = -1776877568;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,14504
	ctx.r4.u64 = ctx.r8.u64 | 14504;
	// ori r11,r7,29718
	ctx.r11.u64 = ctx.r7.u64 | 29718;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208668;
	sub_820A38E8(ctx, base);
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
loc_8220867C:
	// lis r10,-26833
	ctx.r10.s64 = -1758527488;
	// lis r9,-27113
	ctx.r9.s64 = -1776877568;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,60844
	ctx.r4.u64 = ctx.r10.u64 | 60844;
	// ori r8,r9,2596
	ctx.r8.u64 = ctx.r9.u64 | 2596;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822086A4;
	sub_820A38E8(ctx, base);
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
loc_822086B8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,14787
	ctx.r7.s64 = 969080832;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27113
	ctx.r11.s64 = -1776877568;
	// ori r4,r7,13664
	ctx.r4.u64 = ctx.r7.u64 | 13664;
	// ori r10,r11,29718
	ctx.r10.u64 = ctx.r11.u64 | 29718;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822086E0;
	sub_820A38E8(ctx, base);
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
loc_822086F4:
	// lis r9,14774
	ctx.r9.s64 = 968228864;
	// lis r8,-27113
	ctx.r8.s64 = -1776877568;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,30
	ctx.r4.u64 = ctx.r9.u64 | 30;
	// ori r7,r8,29718
	ctx.r7.u64 = ctx.r8.u64 | 29718;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220871C;
	sub_820A38E8(ctx, base);
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
loc_82208730:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,24661
	ctx.r4.s64 = 1616183296;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27102
	ctx.r11.s64 = -1776156672;
	// ori r4,r4,51711
	ctx.r4.u64 = ctx.r4.u64 | 51711;
	// ori r10,r11,35028
	ctx.r10.u64 = ctx.r11.u64 | 35028;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208758;
	sub_820A38E8(ctx, base);
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
loc_8220876C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lbz r9,647(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 647);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822087e8
	if (ctx.cr6.eq) goto loc_822087E8;
	// lis r7,-28144
	ctx.r7.s64 = -1844445184;
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// lis r5,-27105
	ctx.r5.s64 = -1776353280;
	// ori r6,r7,51327
	ctx.r6.u64 = ctx.r7.u64 | 51327;
	// ori r4,r5,22369
	ctx.r4.u64 = ctx.r5.u64 | 22369;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r8,r6
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x822087e8
	if (ctx.cr6.eq) goto loc_822087E8;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r9,-27100
	ctx.r9.s64 = -1776025600;
	// addi r3,r10,-24936
	ctx.r3.s64 = ctx.r10.s64 + -24936;
	// lis r10,24161
	ctx.r10.s64 = 1583415296;
	// ori r8,r9,53
	ctx.r8.u64 = ctx.r9.u64 | 53;
	// ori r4,r10,27832
	ctx.r4.u64 = ctx.r10.u64 | 27832;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stb r10,647(r11)
	PPC_STORE_U8(ctx.r11.u32 + 647, ctx.r10.u8);
	// stb r10,646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// bl 0x820a38e8
	ctx.lr = 0x822087D4;
	sub_820A38E8(ctx, base);
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
loc_822087E8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ld r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82208804;
	sub_820A38E8(ctx, base);
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
loc_82208818:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x821fd498
	ctx.lr = 0x8220882C;
	sub_821FD498(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x8210f138
	ctx.lr = 0x8220883C;
	sub_8210F138(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82208890
	if (ctx.cr6.eq) goto loc_82208890;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820fb198
	ctx.lr = 0x82208854;
	sub_820FB198(ctx, base);
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
loc_82208868:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82208878
	if (ctx.cr6.eq) goto loc_82208878;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
loc_82208878:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7088
	ctx.lr = 0x82208888;
	sub_821F7088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd698
	ctx.lr = 0x82208890;
	sub_821FD698(ctx, base);
loc_82208890:
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

__attribute__((alias("__imp__sub_822088A4"))) PPC_WEAK_FUNC(sub_822088A4);
PPC_FUNC_IMPL(__imp__sub_822088A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822088A8"))) PPC_WEAK_FUNC(sub_822088A8);
PPC_FUNC_IMPL(__imp__sub_822088A8) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82208914
	if (ctx.cr6.eq) goto loc_82208914;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82208950
	if (!ctx.cr6.eq) goto loc_82208950;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82208950
	if (!ctx.cr6.eq) goto loc_82208950;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82208950
	if (!ctx.cr6.eq) goto loc_82208950;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27113
	ctx.r10.s64 = -1776877568;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,14781
	ctx.r11.s64 = 968687616;
	// ori r9,r10,29718
	ctx.r9.u64 = ctx.r10.u64 | 29718;
	// ori r4,r11,22641
	ctx.r4.u64 = ctx.r11.u64 | 22641;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208900;
	sub_820A38E8(ctx, base);
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
loc_82208914:
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc018
	ctx.lr = 0x82208920;
	sub_820FC018(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82208934;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aabf8
	ctx.lr = 0x8220893C;
	sub_821AABF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x821fd498
	ctx.lr = 0x82208950;
	sub_821FD498(ctx, base);
loc_82208950:
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

__attribute__((alias("__imp__sub_82208964"))) PPC_WEAK_FUNC(sub_82208964);
PPC_FUNC_IMPL(__imp__sub_82208964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208968"))) PPC_WEAK_FUNC(sub_82208968);
PPC_FUNC_IMPL(__imp__sub_82208968) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82208a24
	if (ctx.cr6.eq) goto loc_82208A24;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82208a60
	if (!ctx.cr6.eq) goto loc_82208A60;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82208a60
	if (!ctx.cr6.eq) goto loc_82208A60;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82208a60
	if (!ctx.cr6.eq) goto loc_82208A60;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x821ebf58
	ctx.lr = 0x822089A0;
	sub_821EBF58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822089ec
	if (ctx.cr6.eq) goto loc_822089EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-994
	ctx.r10.s64 = -65142784;
	// lis r9,-27116
	ctx.r9.s64 = -1777074176;
	// addi r5,r11,-31392
	ctx.r5.s64 = ctx.r11.s64 + -31392;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,62591
	ctx.r4.u64 = ctx.r10.u64 | 62591;
	// ori r8,r9,41781
	ctx.r8.u64 = ctx.r9.u64 | 41781;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822089D8;
	sub_820A38E8(ctx, base);
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
loc_822089EC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,14781
	ctx.r7.s64 = 968687616;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27113
	ctx.r11.s64 = -1776877568;
	// ori r4,r7,22641
	ctx.r4.u64 = ctx.r7.u64 | 22641;
	// ori r10,r11,29718
	ctx.r10.u64 = ctx.r11.u64 | 29718;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208A10;
	sub_820A38E8(ctx, base);
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
loc_82208A24:
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ebb00
	ctx.lr = 0x82208A30;
	sub_821EBB00(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82208A44;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aab88
	ctx.lr = 0x82208A4C;
	sub_821AAB88(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x821fd498
	ctx.lr = 0x82208A60;
	sub_821FD498(ctx, base);
loc_82208A60:
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

__attribute__((alias("__imp__sub_82208A74"))) PPC_WEAK_FUNC(sub_82208A74);
PPC_FUNC_IMPL(__imp__sub_82208A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208A78"))) PPC_WEAK_FUNC(sub_82208A78);
PPC_FUNC_IMPL(__imp__sub_82208A78) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82208ae4
	if (ctx.cr6.eq) goto loc_82208AE4;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82208b20
	if (!ctx.cr6.eq) goto loc_82208B20;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82208b20
	if (!ctx.cr6.eq) goto loc_82208B20;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82208b20
	if (!ctx.cr6.eq) goto loc_82208B20;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27113
	ctx.r10.s64 = -1776877568;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,14781
	ctx.r11.s64 = 968687616;
	// ori r9,r10,29718
	ctx.r9.u64 = ctx.r10.u64 | 29718;
	// ori r4,r11,22641
	ctx.r4.u64 = ctx.r11.u64 | 22641;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208AD0;
	sub_820A38E8(ctx, base);
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
loc_82208AE4:
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc018
	ctx.lr = 0x82208AF0;
	sub_820FC018(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82208B04;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aabf8
	ctx.lr = 0x82208B0C;
	sub_821AABF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x821fd498
	ctx.lr = 0x82208B20;
	sub_821FD498(ctx, base);
loc_82208B20:
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

__attribute__((alias("__imp__sub_82208B34"))) PPC_WEAK_FUNC(sub_82208B34);
PPC_FUNC_IMPL(__imp__sub_82208B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208B38"))) PPC_WEAK_FUNC(sub_82208B38);
PPC_FUNC_IMPL(__imp__sub_82208B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82208B40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82208ce8
	if (ctx.cr6.eq) goto loc_82208CE8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82208bec
	if (ctx.cr6.eq) goto loc_82208BEC;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82208d38
	if (!ctx.cr6.eq) goto loc_82208D38;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82208bb4
	if (ctx.cr6.eq) goto loc_82208BB4;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bne cr6,0x82208d38
	if (!ctx.cr6.eq) goto loc_82208D38;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82208d38
	if (!ctx.cr6.lt) goto loc_82208D38;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x82114870
	ctx.lr = 0x82208BAC;
	sub_82114870(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208BB4:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82208d38
	if (!ctx.cr6.eq) goto loc_82208D38;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,14781
	ctx.r7.s64 = 968687616;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27113
	ctx.r11.s64 = -1776877568;
	// ori r4,r7,22641
	ctx.r4.u64 = ctx.r7.u64 | 22641;
	// ori r10,r11,29718
	ctx.r10.u64 = ctx.r11.u64 | 29718;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208BE4;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208BEC:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14716
	ctx.r8.u64 = ctx.r9.u64 | 14716;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208d38
	if (ctx.cr6.eq) goto loc_82208D38;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,14718
	ctx.r9.u64 = ctx.r10.u64 | 14718;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82208d38
	if (ctx.cr6.eq) goto loc_82208D38;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,14715
	ctx.r6.u64 = ctx.r7.u64 | 14715;
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82208c6c
	if (!ctx.cr6.lt) goto loc_82208C6C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,14781
	ctx.r4.s64 = 968687616;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27113
	ctx.r11.s64 = -1776877568;
	// ori r4,r4,22641
	ctx.r4.u64 = ctx.r4.u64 | 22641;
	// ori r10,r11,29718
	ctx.r10.u64 = ctx.r11.u64 | 29718;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208C64;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208C6C:
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r9,14537
	ctx.r8.s64 = ctx.r9.s64 + 14537;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82208ca8
	if (ctx.cr6.eq) goto loc_82208CA8;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82208cac
	if (!ctx.cr6.eq) goto loc_82208CAC;
loc_82208CA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82208CAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82208d38
	if (!ctx.cr6.eq) goto loc_82208D38;
	// lis r10,14781
	ctx.r10.s64 = 968687616;
	// lis r9,-27113
	ctx.r9.s64 = -1776877568;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,22641
	ctx.r4.u64 = ctx.r10.u64 | 22641;
	// ori r8,r9,29718
	ctx.r8.u64 = ctx.r9.u64 | 29718;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82208CE0;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208CE8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x821fd498
	ctx.lr = 0x82208CFC;
	sub_821FD498(ctx, base);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc018
	ctx.lr = 0x82208D08;
	sub_820FC018(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82208D1C;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b10
	ctx.lr = 0x82208D24;
	sub_821A9B10(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82208D30;
	sub_821FBF68(ctx, base);
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x821aaa38
	ctx.lr = 0x82208D38;
	sub_821AAA38(ctx, base);
loc_82208D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82208D40"))) PPC_WEAK_FUNC(sub_82208D40);
PPC_FUNC_IMPL(__imp__sub_82208D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,31004
	ctx.r9.u64 = ctx.r10.u64 | 31004;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82208de4
	if (ctx.cr6.eq) goto loc_82208DE4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,-27264
	ctx.r5.s64 = ctx.r10.s64 + -27264;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r8,r8,30604
	ctx.r8.s64 = ctx.r8.s64 + 30604;
	// addi r7,r11,9664
	ctx.r7.s64 = ctx.r11.s64 + 9664;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x821e6928
	ctx.lr = 0x82208DAC;
	sub_821E6928(ctx, base);
loc_82208DAC:
	// lis r9,15254
	ctx.r9.s64 = 999686144;
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,27603
	ctx.r4.u64 = ctx.r9.u64 | 27603;
	// ori r7,r8,16132
	ctx.r7.u64 = ctx.r8.u64 | 16132;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_82208DC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x82208DD4;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82208DE4:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d8f0
	ctx.lr = 0x82208DF8;
	sub_8210D8F0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82208dac
	if (ctx.cr6.eq) goto loc_82208DAC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-27202
	ctx.r4.s64 = -1782710272;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27583
	ctx.r11.s64 = -1807679488;
	// ori r4,r4,32151
	ctx.r4.u64 = ctx.r4.u64 | 32151;
	// ori r10,r11,16102
	ctx.r10.u64 = ctx.r11.u64 | 16102;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x82208dc8
	goto loc_82208DC8;
}

__attribute__((alias("__imp__sub_82208E24"))) PPC_WEAK_FUNC(sub_82208E24);
PPC_FUNC_IMPL(__imp__sub_82208E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208E28"))) PPC_WEAK_FUNC(sub_82208E28);
PPC_FUNC_IMPL(__imp__sub_82208E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82208E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82209008
	if (ctx.cr6.eq) goto loc_82209008;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x822090b0
	if (!ctx.cr6.eq) goto loc_822090B0;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822090b0
	if (!ctx.cr6.eq) goto loc_822090B0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82208fa0
	if (ctx.cr6.lt) goto loc_82208FA0;
	// beq cr6,0x82208f0c
	if (ctx.cr6.eq) goto loc_82208F0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822090b0
	if (!ctx.cr6.lt) goto loc_822090B0;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82208e94
	if (ctx.cr6.lt) goto loc_82208E94;
	// bne cr6,0x822090b0
	if (!ctx.cr6.eq) goto loc_822090B0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// ori r9,r10,28614
	ctx.r9.u64 = ctx.r10.u64 | 28614;
	// ori r4,r11,63999
	ctx.r4.u64 = ctx.r11.u64 | 63999;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x8220909c
	goto loc_8220909C;
loc_82208E94:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,-6216
	ctx.r8.s64 = -407371776;
	// lis r7,-27105
	ctx.r7.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r11,r7,28614
	ctx.r11.u64 = ctx.r7.u64 | 28614;
	// ori r4,r8,63999
	ctx.r4.u64 = ctx.r8.u64 | 63999;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// bl 0x820a38e8
	ctx.lr = 0x82208EC4;
	sub_820A38E8(ctx, base);
	// bl 0x8210b298
	ctx.lr = 0x82208EC8;
	sub_8210B298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// li r10,2
	ctx.r10.s64 = 2;
	// bne cr6,0x82208ee4
	if (!ctx.cr6.eq) goto loc_82208EE4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82208EE4:
	// stw r10,3212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3212, ctx.r10.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5498
	ctx.lr = 0x82208EF4;
	sub_821F5498(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8212bb98
	ctx.lr = 0x82208F04;
	sub_8212BB98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208F0C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// stw r10,3212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3212, ctx.r10.u32);
	// bl 0x821f5498
	ctx.lr = 0x82208F28;
	sub_821F5498(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8212bb98
	ctx.lr = 0x82208F38;
	sub_8212BB98(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// bl 0x820daf58
	ctx.lr = 0x82208F44;
	sub_820DAF58(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// addi r31,r11,-28272
	ctx.r31.s64 = ctx.r11.s64 + -28272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x821ea148
	ctx.lr = 0x82208F5C;
	sub_821EA148(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r31,116
	ctx.r9.s64 = ctx.r31.s64 + 116;
	// addi r11,r11,3672
	ctx.r11.s64 = ctx.r11.s64 + 3672;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821ea188
	ctx.lr = 0x82208F88;
	sub_821EA188(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208FA0:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82208ffc
	if (ctx.cr6.lt) goto loc_82208FFC;
	// bne cr6,0x822090b0
	if (!ctx.cr6.eq) goto loc_822090B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// addi r29,r11,-28272
	ctx.r29.s64 = ctx.r11.s64 + -28272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// bl 0x821ea148
	ctx.lr = 0x82208FC4;
	sub_821EA148(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r29,72
	ctx.r6.s64 = ctx.r29.s64 + 72;
	// addi r11,r11,3672
	ctx.r11.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821ea188
	ctx.lr = 0x82208FEC;
	sub_821EA188(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82208FFC:
	// lis r4,-6216
	ctx.r4.s64 = -407371776;
	// ori r4,r4,63999
	ctx.r4.u64 = ctx.r4.u64 | 63999;
	// b 0x82209088
	goto loc_82209088;
loc_82209008:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x822090b0
	if (!ctx.cr6.eq) goto loc_822090B0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x82209024;
	sub_8210B3C8(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822090b0
	if (ctx.cr6.gt) goto loc_822090B0;
	// bso cr6,0x822090b0
	if (ctx.cr6.so) goto loc_822090B0;
	// bl 0x8210b298
	ctx.lr = 0x82209048;
	sub_8210B298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// li r10,2
	ctx.r10.s64 = 2;
	// bne cr6,0x82209064
	if (!ctx.cr6.eq) goto loc_82209064;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82209064:
	// stw r10,3212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3212, ctx.r10.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5498
	ctx.lr = 0x82209074;
	sub_821F5498(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212bb98
	ctx.lr = 0x82209080;
	sub_8212BB98(ctx, base);
	// lis r7,-6216
	ctx.r7.s64 = -407371776;
	// ori r4,r7,63999
	ctx.r4.u64 = ctx.r7.u64 | 63999;
loc_82209088:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27105
	ctx.r11.s64 = -1776353280;
	// ori r10,r11,28614
	ctx.r10.u64 = ctx.r11.u64 | 28614;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_8220909C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// bl 0x820a38e8
	ctx.lr = 0x822090B0;
	sub_820A38E8(ctx, base);
loc_822090B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822090B8"))) PPC_WEAK_FUNC(sub_822090B8);
PPC_FUNC_IMPL(__imp__sub_822090B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822090C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// addi r31,r11,-28008
	ctx.r31.s64 = ctx.r11.s64 + -28008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x821ea148
	ctx.lr = 0x822090E0;
	sub_821EA148(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r31,-64
	ctx.r10.s64 = ctx.r31.s64 + -64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r9,r31,-32
	ctx.r9.s64 = ctx.r31.s64 + -32;
	// addi r11,r11,3672
	ctx.r11.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821ea188
	ctx.lr = 0x8220910C;
	sub_821EA188(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220911C"))) PPC_WEAK_FUNC(sub_8220911C);
PPC_FUNC_IMPL(__imp__sub_8220911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209120"))) PPC_WEAK_FUNC(sub_82209120);
PPC_FUNC_IMPL(__imp__sub_82209120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82209128;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8220919c
	if (!ctx.cr6.eq) goto loc_8220919C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,336
	ctx.r26.s64 = 336;
	// li r27,232
	ctx.r27.s64 = 232;
	// addi r25,r11,-1416
	ctx.r25.s64 = ctx.r11.s64 + -1416;
loc_82209150:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82209188
	if (!ctx.cr6.gt) goto loc_82209188;
loc_82209168:
	// lbzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// bl 0x820ff128
	ctx.lr = 0x8220917C;
	sub_820FF128(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82209168
	if (ctx.cr6.lt) goto loc_82209168;
loc_82209188:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r27,296
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 296, ctx.xer);
	// blt cr6,0x82209150
	if (ctx.cr6.lt) goto loc_82209150;
loc_8220919C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822091A4"))) PPC_WEAK_FUNC(sub_822091A4);
PPC_FUNC_IMPL(__imp__sub_822091A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822091A8"))) PPC_WEAK_FUNC(sub_822091A8);
PPC_FUNC_IMPL(__imp__sub_822091A8) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f6630
	ctx.lr = 0x822091CC;
	sub_821F6630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822091f0
	if (!ctx.cr6.eq) goto loc_822091F0;
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
loc_822091F0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82209214"))) PPC_WEAK_FUNC(sub_82209214);
PPC_FUNC_IMPL(__imp__sub_82209214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209218"))) PPC_WEAK_FUNC(sub_82209218);
PPC_FUNC_IMPL(__imp__sub_82209218) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f6630
	ctx.lr = 0x8220923C;
	sub_821F6630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82209284
	if (!ctx.cr6.eq) goto loc_82209284;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r11,-20348
	ctx.r10.s64 = ctx.r11.s64 + -20348;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,3672
	ctx.r9.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r5,r11,-27188
	ctx.r5.s64 = ctx.r11.s64 + -27188;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// bl 0x82427c40
	ctx.lr = 0x8220927C;
	sub_82427C40(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82209284:
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

__attribute__((alias("__imp__sub_8220929C"))) PPC_WEAK_FUNC(sub_8220929C);
PPC_FUNC_IMPL(__imp__sub_8220929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822092A0"))) PPC_WEAK_FUNC(sub_822092A0);
PPC_FUNC_IMPL(__imp__sub_822092A0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20348
	ctx.r10.s64 = ctx.r11.s64 + -20348;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r9,r11,3672
	ctx.r9.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r5,r11,-27188
	ctx.r5.s64 = ctx.r11.s64 + -27188;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82427c40
	ctx.lr = 0x822092E8;
	sub_82427C40(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,22401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22401, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8220931C"))) PPC_WEAK_FUNC(sub_8220931C);
PPC_FUNC_IMPL(__imp__sub_8220931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209320"))) PPC_WEAK_FUNC(sub_82209320);
PPC_FUNC_IMPL(__imp__sub_82209320) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82209384
	if (!ctx.cr6.eq) goto loc_82209384;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r3,2672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// bl 0x823625f0
	ctx.lr = 0x82209358;
	sub_823625F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209384
	if (ctx.cr6.eq) goto loc_82209384;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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
loc_82209384:
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

__attribute__((alias("__imp__sub_8220939C"))) PPC_WEAK_FUNC(sub_8220939C);
PPC_FUNC_IMPL(__imp__sub_8220939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822093A0"))) PPC_WEAK_FUNC(sub_822093A0);
PPC_FUNC_IMPL(__imp__sub_822093A0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2c68
	ctx.lr = 0x822093C0;
	sub_822D2C68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,32464
	ctx.r10.s64 = ctx.r10.s64 + 32464;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r3,r9,23504
	ctx.r3.s64 = ctx.r9.s64 + 23504;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x822093E0;
	sub_8210FCF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822093F0"))) PPC_WEAK_FUNC(sub_822093F0);
PPC_FUNC_IMPL(__imp__sub_822093F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822093F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8210b050
	ctx.lr = 0x8220940C;
	sub_8210B050(ctx, base);
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x8220942C;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r30,r11,32496
	ctx.r30.s64 = ctx.r11.s64 + 32496;
	// bne cr6,0x822094e8
	if (!ctx.cr6.eq) goto loc_822094E8;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x8220945C;
	sub_8210B068(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822094e8
	if (!ctx.cr6.eq) goto loc_822094E8;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x82209484;
	sub_8210B068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822094e8
	if (!ctx.cr6.eq) goto loc_822094E8;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x822094AC;
	sub_8210B068(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822094e0
	if (!ctx.cr6.eq) goto loc_822094E0;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x822094D4;
	sub_8210B068(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822094f0
	if (ctx.cr6.eq) goto loc_822094F0;
loc_822094E0:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x822094f4
	goto loc_822094F4;
loc_822094E8:
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x822094f4
	goto loc_822094F4;
loc_822094F0:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822094F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x8220950C;
	sub_8259D1B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209518"))) PPC_WEAK_FUNC(sub_82209518);
PPC_FUNC_IMPL(__imp__sub_82209518) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32090
	ctx.r8.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r8,-24936
	ctx.r3.s64 = ctx.r8.s64 + -24936;
	// lis r8,-946
	ctx.r8.s64 = -61997056;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lis r7,-27583
	ctx.r7.s64 = -1807679488;
	// ori r4,r8,42571
	ctx.r4.u64 = ctx.r8.u64 | 42571;
	// ori r8,r7,2141
	ctx.r8.u64 = ctx.r7.u64 | 2141;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r9,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209554"))) PPC_WEAK_FUNC(sub_82209554);
PPC_FUNC_IMPL(__imp__sub_82209554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209558"))) PPC_WEAK_FUNC(sub_82209558);
PPC_FUNC_IMPL(__imp__sub_82209558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82209560;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,28(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r8,r30,368
	ctx.r8.s64 = ctx.r30.s64 + 368;
loc_82209584:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822095b4
	if (ctx.cr6.lt) goto loc_822095B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x82209584
	if (ctx.cr6.lt) goto loc_82209584;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822095b8
	goto loc_822095B8;
loc_822095B4:
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_822095B8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822095cc
	if (ctx.cr6.lt) goto loc_822095CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822095CC:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r4,r11
	ctx.r31.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,296(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 296);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821eabf8
	ctx.lr = 0x822095F4;
	sub_821EABF8(ctx, base);
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29112
	ctx.r11.s64 = ctx.r11.s64 + 29112;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r3,r10,23504
	ctx.r3.s64 = ctx.r10.s64 + 23504;
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82209614;
	sub_8210FCF8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82209620;
	sub_82361BD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220962C"))) PPC_WEAK_FUNC(sub_8220962C);
PPC_FUNC_IMPL(__imp__sub_8220962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209630"))) PPC_WEAK_FUNC(sub_82209630);
PPC_FUNC_IMPL(__imp__sub_82209630) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lwz r4,376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r5,380(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lwz r6,384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r7,388(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r8,392(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822096c4
	if (!ctx.cr6.gt) goto loc_822096C4;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd498
	ctx.lr = 0x822096A8;
	sub_821FD498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f7088
	ctx.lr = 0x822096B0;
	sub_821F7088(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x822096f8
	goto loc_822096F8;
loc_822096C4:
	// lis r10,29658
	ctx.r10.s64 = 1943666688;
	// lis r9,-27584
	ctx.r9.s64 = -1807745024;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,61192
	ctx.r4.u64 = ctx.r10.u64 | 61192;
	// ori r8,r9,45044
	ctx.r8.u64 = ctx.r9.u64 | 45044;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x822096EC;
	sub_820A38E8(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
loc_822096F8:
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

__attribute__((alias("__imp__sub_82209710"))) PPC_WEAK_FUNC(sub_82209710);
PPC_FUNC_IMPL(__imp__sub_82209710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82209730
	if (!ctx.cr6.eq) goto loc_82209730;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82209730:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82209744
	if (ctx.cr6.eq) goto loc_82209744;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82209744:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209758"))) PPC_WEAK_FUNC(sub_82209758);
PPC_FUNC_IMPL(__imp__sub_82209758) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82209558
	ctx.lr = 0x82209780;
	sub_82209558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220981c
	if (ctx.cr6.eq) goto loc_8220981C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-27112
	ctx.r7.s64 = ctx.r11.s64 + -27112;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r5,r11,-27144
	ctx.r5.s64 = ctx.r11.s64 + -27144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82427c40
	ctx.lr = 0x822097C0;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-776
	ctx.r10.s64 = ctx.r11.s64 + -776;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822097CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822097f0
	if (ctx.cr6.eq) goto loc_822097F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822097cc
	if (ctx.cr6.eq) goto loc_822097CC;
loc_822097F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220980c
	if (!ctx.cr6.eq) goto loc_8220980C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// b 0x82209828
	goto loc_82209828;
loc_8220980C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
	// b 0x82209824
	goto loc_82209824;
loc_8220981C:
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
loc_82209824:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209828:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82209840"))) PPC_WEAK_FUNC(sub_82209840);
PPC_FUNC_IMPL(__imp__sub_82209840) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f6630
	ctx.lr = 0x82209864;
	sub_821F6630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82209888
	if (!ctx.cr6.eq) goto loc_82209888;
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
loc_82209888:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822098AC"))) PPC_WEAK_FUNC(sub_822098AC);
PPC_FUNC_IMPL(__imp__sub_822098AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822098B0"))) PPC_WEAK_FUNC(sub_822098B0);
PPC_FUNC_IMPL(__imp__sub_822098B0) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f6630
	ctx.lr = 0x822098D4;
	sub_821F6630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822098f8
	if (ctx.cr6.eq) goto loc_822098F8;
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
loc_822098F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r9,r11,-20348
	ctx.r9.s64 = ctx.r11.s64 + -20348;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,3672
	ctx.r8.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r5,r11,-27144
	ctx.r5.s64 = ctx.r11.s64 + -27144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// bl 0x82427c40
	ctx.lr = 0x82209928;
	sub_82427C40(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8220994C"))) PPC_WEAK_FUNC(sub_8220994C);
PPC_FUNC_IMPL(__imp__sub_8220994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209950"))) PPC_WEAK_FUNC(sub_82209950);
PPC_FUNC_IMPL(__imp__sub_82209950) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r31,372(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lwz r3,376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r4,380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lwz r5,384(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r6,388(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r7,392(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r8,396(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822099c4
	if (ctx.cr6.lt) goto loc_822099C4;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822099C4:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822099DC"))) PPC_WEAK_FUNC(sub_822099DC);
PPC_FUNC_IMPL(__imp__sub_822099DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822099E0"))) PPC_WEAK_FUNC(sub_822099E0);
PPC_FUNC_IMPL(__imp__sub_822099E0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-20348
	ctx.r9.s64 = ctx.r11.s64 + -20348;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r8,r11,3672
	ctx.r8.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r5,r11,-27144
	ctx.r5.s64 = ctx.r11.s64 + -27144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// bl 0x82427c40
	ctx.lr = 0x82209A24;
	sub_82427C40(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,22401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22401, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82209A58"))) PPC_WEAK_FUNC(sub_82209A58);
PPC_FUNC_IMPL(__imp__sub_82209A58) {
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
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x821fd698
	ctx.lr = 0x82209A80;
	sub_821FD698(ctx, base);
	// lis r9,29658
	ctx.r9.s64 = 1943666688;
	// lis r8,-27584
	ctx.r8.s64 = -1807745024;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,61192
	ctx.r4.u64 = ctx.r9.u64 | 61192;
	// ori r7,r8,45044
	ctx.r7.u64 = ctx.r8.u64 | 45044;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82209AA8;
	sub_820A38E8(ctx, base);
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

__attribute__((alias("__imp__sub_82209ABC"))) PPC_WEAK_FUNC(sub_82209ABC);
PPC_FUNC_IMPL(__imp__sub_82209ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209AC0"))) PPC_WEAK_FUNC(sub_82209AC0);
PPC_FUNC_IMPL(__imp__sub_82209AC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-25888
	ctx.r12.s64 = ctx.r12.s64 + -25888;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82209AF8
		return;
	case 1:
		sub_82209B48(ctx, base);
		return;
	case 2:
		sub_82209B48(ctx, base);
		return;
	case 3:
		sub_82209B0C(ctx, base);
		return;
	case 4:
		sub_82209B34(ctx, base);
		return;
	case 5:
		sub_82209B20(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82209AE0"))) PPC_WEAK_FUNC(sub_82209AE0);
PPC_FUNC_IMPL(__imp__sub_82209AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-25864(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25864);
	// lwz r17,-25784(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25784);
	// lwz r17,-25784(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25784);
	// lwz r17,-25844(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25844);
	// lwz r17,-25804(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25804);
	// lwz r17,-25824(0)
	ctx.r17.u64 = PPC_LOAD_U32(-25824);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82209B0C"))) PPC_WEAK_FUNC(sub_82209B0C);
PPC_FUNC_IMPL(__imp__sub_82209B0C) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82209B20"))) PPC_WEAK_FUNC(sub_82209B20);
PPC_FUNC_IMPL(__imp__sub_82209B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82209B34"))) PPC_WEAK_FUNC(sub_82209B34);
PPC_FUNC_IMPL(__imp__sub_82209B34) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82209B48"))) PPC_WEAK_FUNC(sub_82209B48);
PPC_FUNC_IMPL(__imp__sub_82209B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209B4C"))) PPC_WEAK_FUNC(sub_82209B4C);
PPC_FUNC_IMPL(__imp__sub_82209B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209B50"))) PPC_WEAK_FUNC(sub_82209B50);
PPC_FUNC_IMPL(__imp__sub_82209B50) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82209B6C"))) PPC_WEAK_FUNC(sub_82209B6C);
PPC_FUNC_IMPL(__imp__sub_82209B6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209B70"))) PPC_WEAK_FUNC(sub_82209B70);
PPC_FUNC_IMPL(__imp__sub_82209B70) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209B7C"))) PPC_WEAK_FUNC(sub_82209B7C);
PPC_FUNC_IMPL(__imp__sub_82209B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209B80"))) PPC_WEAK_FUNC(sub_82209B80);
PPC_FUNC_IMPL(__imp__sub_82209B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82209B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r29,r11,-24936
	ctx.r29.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x82209bb8
	if (ctx.cr6.eq) goto loc_82209BB8;
	// addi r3,r29,6544
	ctx.r3.s64 = ctx.r29.s64 + 6544;
	// bl 0x821eccd8
	ctx.lr = 0x82209BB0;
	sub_821ECCD8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
loc_82209BB8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f7088
	ctx.lr = 0x82209BC8;
	sub_821F7088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd698
	ctx.lr = 0x82209BD0;
	sub_821FD698(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82209bfc
	if (ctx.cr6.eq) goto loc_82209BFC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82209bf4
	if (ctx.cr6.eq) goto loc_82209BF4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82209bfc
	if (ctx.cr6.eq) goto loc_82209BFC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82209BF4:
	// addi r3,r29,6544
	ctx.r3.s64 = ctx.r29.s64 + 6544;
	// bl 0x821ecc58
	ctx.lr = 0x82209BFC;
	sub_821ECC58(ctx, base);
loc_82209BFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd498
	ctx.lr = 0x82209C0C;
	sub_821FD498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209C14"))) PPC_WEAK_FUNC(sub_82209C14);
PPC_FUNC_IMPL(__imp__sub_82209C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209C18"))) PPC_WEAK_FUNC(sub_82209C18);
PPC_FUNC_IMPL(__imp__sub_82209C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82209C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-24936
	ctx.r30.s64 = ctx.r11.s64 + -24936;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// bl 0x821f2f28
	ctx.lr = 0x82209C38;
	sub_821F2F28(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,30602
	ctx.r10.s64 = 2005532672;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,53333
	ctx.r9.u64 = ctx.r10.u64 | 53333;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// lis r11,-27742
	ctx.r11.s64 = -1818099712;
	// ori r11,r11,46856
	ctx.r11.u64 = ctx.r11.u64 | 46856;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r11.u64);
	// std r11,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r11.u64);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x821ecd38
	ctx.lr = 0x82209C7C;
	sub_821ECD38(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r31,296
	ctx.r6.s64 = ctx.r31.s64 + 296;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r10,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// stb r10,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r10.u8);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x821ecce8
	ctx.lr = 0x82209CB0;
	sub_821ECCE8(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r27,r11,22016
	ctx.r27.s64 = ctx.r11.s64 + 22016;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820acd88
	ctx.lr = 0x82209CC0;
	sub_820ACD88(ctx, base);
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82209d7c
	if (ctx.cr6.eq) goto loc_82209D7C;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82209d14
	if (!ctx.cr6.gt) goto loc_82209D14;
loc_82209CE0:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821ecce8
	ctx.lr = 0x82209CFC;
	sub_821ECCE8(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82209ce0
	if (ctx.cr6.lt) goto loc_82209CE0;
loc_82209D14:
	// lbz r6,643(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 643);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82209d48
	if (ctx.cr6.eq) goto loc_82209D48;
	// lis r3,-27114
	ctx.r3.s64 = -1776943104;
	// lis r4,-8415
	ctx.r4.s64 = -551485440;
	// ori r11,r3,2197
	ctx.r11.u64 = ctx.r3.u64 | 2197;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820acd58
	ctx.lr = 0x82209D40;
	sub_820ACD58(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82209dbc
	goto loc_82209DBC;
loc_82209D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203578
	ctx.lr = 0x82209D50;
	sub_82203578(ctx, base);
	// lis r10,30785
	ctx.r10.s64 = 2017525760;
	// lis r9,-27576
	ctx.r9.s64 = -1807220736;
	// ori r4,r10,1617
	ctx.r4.u64 = ctx.r10.u64 | 1617;
	// ori r8,r9,14885
	ctx.r8.u64 = ctx.r9.u64 | 14885;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82209D74;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82209D7C:
	// lis r7,-8415
	ctx.r7.s64 = -551485440;
	// lis r6,-27114
	ctx.r6.s64 = -1776943104;
	// ori r4,r7,27832
	ctx.r4.u64 = ctx.r7.u64 | 27832;
	// ori r3,r6,2197
	ctx.r3.u64 = ctx.r6.u64 | 2197;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820acd58
	ctx.lr = 0x82209D9C;
	sub_820ACD58(ctx, base);
	// lis r11,-8415
	ctx.r11.s64 = -551485440;
	// lis r10,-27114
	ctx.r10.s64 = -1776943104;
	// ori r4,r11,27832
	ctx.r4.u64 = ctx.r11.u64 | 27832;
	// ori r9,r10,2197
	ctx.r9.u64 = ctx.r10.u64 | 2197;
	// li r5,1
	ctx.r5.s64 = 1;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820acd58
	ctx.lr = 0x82209DBC;
	sub_820ACD58(ctx, base);
loc_82209DBC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f7088
	ctx.lr = 0x82209DC8;
	sub_821F7088(ctx, base);
	// lis r8,24510
	ctx.r8.s64 = 1606287360;
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// ori r4,r8,48960
	ctx.r4.u64 = ctx.r8.u64 | 48960;
	// ori r11,r3,16334
	ctx.r11.u64 = ctx.r3.u64 | 16334;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ad830
	ctx.lr = 0x82209DF0;
	sub_820AD830(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r28)
	PPC_STORE_U8(ctx.r28.u32 + 28, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209E00"))) PPC_WEAK_FUNC(sub_82209E00);
PPC_FUNC_IMPL(__imp__sub_82209E00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// bl 0x821ecc58
	ctx.lr = 0x82209E30;
	sub_821ECC58(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7088
	ctx.lr = 0x82209E40;
	sub_821F7088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd698
	ctx.lr = 0x82209E48;
	sub_821FD698(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82209e64
	if (ctx.cr6.eq) goto loc_82209E64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82209e74
	if (!ctx.cr6.eq) goto loc_82209E74;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x82209e68
	goto loc_82209E68;
loc_82209E64:
	// li r4,75
	ctx.r4.s64 = 75;
loc_82209E68:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd498
	ctx.lr = 0x82209E74;
	sub_821FD498(ctx, base);
loc_82209E74:
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

__attribute__((alias("__imp__sub_82209E8C"))) PPC_WEAK_FUNC(sub_82209E8C);
PPC_FUNC_IMPL(__imp__sub_82209E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209E90"))) PPC_WEAK_FUNC(sub_82209E90);
PPC_FUNC_IMPL(__imp__sub_82209E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82209E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,30602
	ctx.r10.s64 = 2005532672;
	// addi r30,r11,-24936
	ctx.r30.s64 = ctx.r11.s64 + -24936;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// ori r9,r10,53333
	ctx.r9.u64 = ctx.r10.u64 | 53333;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// lis r11,-27742
	ctx.r11.s64 = -1818099712;
	// ori r11,r11,46856
	ctx.r11.u64 = ctx.r11.u64 | 46856;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r11.u64);
	// std r11,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r11.u64);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x821ecd38
	ctx.lr = 0x82209F0C;
	sub_821ECD38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bl 0x821ecd30
	ctx.lr = 0x82209F20;
	sub_821ECD30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stb r11,648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 648, ctx.r11.u8);
	// bl 0x821ecd40
	ctx.lr = 0x82209F38;
	sub_821ECD40(ctx, base);
	// stb r3,643(r31)
	PPC_STORE_U8(ctx.r31.u32 + 643, ctx.r3.u8);
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// bl 0x821ecd48
	ctx.lr = 0x82209F44;
	sub_821ECD48(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220a0e4
	if (ctx.cr6.eq) goto loc_8220A0E4;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82209f88
	if (!ctx.cr6.gt) goto loc_82209F88;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82209F64:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// bl 0x821ed110
	ctx.lr = 0x82209F70;
	sub_821ED110(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82209f64
	if (ctx.cr6.lt) goto loc_82209F64;
loc_82209F88:
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// bl 0x821f2f28
	ctx.lr = 0x82209F90;
	sub_821F2F28(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82209fd8
	if (!ctx.cr6.gt) goto loc_82209FD8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82209FA4:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// addi r3,r30,6544
	ctx.r3.s64 = ctx.r30.s64 + 6544;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821ecce8
	ctx.lr = 0x82209FC0;
	sub_821ECCE8(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82209fa4
	if (ctx.cr6.lt) goto loc_82209FA4;
loc_82209FD8:
	// lbz r5,643(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 643);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220a048
	if (ctx.cr6.eq) goto loc_8220A048;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r3,-27114
	ctx.r3.s64 = -1776943104;
	// lis r4,-8415
	ctx.r4.s64 = -551485440;
	// addi r31,r11,22016
	ctx.r31.s64 = ctx.r11.s64 + 22016;
	// ori r11,r3,2197
	ctx.r11.u64 = ctx.r3.u64 | 2197;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820acd58
	ctx.lr = 0x8220A00C;
	sub_820ACD58(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f7088
	ctx.lr = 0x8220A018;
	sub_821F7088(ctx, base);
	// lis r10,-21361
	ctx.r10.s64 = -1399914496;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// ori r4,r10,51520
	ctx.r4.u64 = ctx.r10.u64 | 51520;
	// ori r8,r9,16334
	ctx.r8.u64 = ctx.r9.u64 | 16334;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ad830
	ctx.lr = 0x8220A040;
	sub_820AD830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220A048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203578
	ctx.lr = 0x8220A050;
	sub_82203578(ctx, base);
	// lis r7,30785
	ctx.r7.s64 = 2017525760;
	// lis r6,-27576
	ctx.r6.s64 = -1807220736;
	// ori r4,r7,1617
	ctx.r4.u64 = ctx.r7.u64 | 1617;
	// ori r5,r6,14885
	ctx.r5.u64 = ctx.r6.u64 | 14885;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldimi r4,r5,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x82362b10
	ctx.lr = 0x8220A06C;
	sub_82362B10(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8220a108
	if (ctx.cr6.eq) goto loc_8220A108;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a0c4
	if (ctx.cr6.eq) goto loc_8220A0C4;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// beq cr6,0x8220a0c4
	if (ctx.cr6.eq) goto loc_8220A0C4;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8220A0C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220A0E4:
	// lis r9,24510
	ctx.r9.s64 = 1606287360;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// ori r4,r9,48960
	ctx.r4.u64 = ctx.r9.u64 | 48960;
	// ori r7,r8,16334
	ctx.r7.u64 = ctx.r8.u64 | 16334;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a38e8
	ctx.lr = 0x8220A108;
	sub_820A38E8(ctx, base);
loc_8220A108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A110"))) PPC_WEAK_FUNC(sub_8220A110);
PPC_FUNC_IMPL(__imp__sub_8220A110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8220A118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r7.u32);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220a13c
	if (!ctx.cr6.eq) goto loc_8220A13C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220A13C:
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// bgt cr6,0x8220a194
	if (ctx.cr6.gt) goto loc_8220A194;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-24224
	ctx.r12.s64 = ctx.r12.s64 + -24224;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		goto loc_8220A178;
	case 1:
		goto loc_8220A178;
	case 2:
		goto loc_8220A180;
	case 3:
		goto loc_8220A178;
	case 4:
		goto loc_8220A180;
	case 5:
		goto loc_8220A178;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-24200(0)
	ctx.r17.u64 = PPC_LOAD_U32(-24200);
	// lwz r17,-24200(0)
	ctx.r17.u64 = PPC_LOAD_U32(-24200);
	// lwz r17,-24192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-24192);
	// lwz r17,-24200(0)
	ctx.r17.u64 = PPC_LOAD_U32(-24200);
	// lwz r17,-24192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-24192);
	// lwz r17,-24200(0)
	ctx.r17.u64 = PPC_LOAD_U32(-24200);
loc_8220A178:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x8220a184
	goto loc_8220A184;
loc_8220A180:
	// li r4,79
	ctx.r4.s64 = 79;
loc_8220A184:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821fd498
	ctx.lr = 0x8220A194;
	sub_821FD498(ctx, base);
loc_8220A194:
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc018
	ctx.lr = 0x8220A1A0;
	sub_820FC018(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220A1B4;
	sub_821FBF68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220A1C0;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aada8
	ctx.lr = 0x8220A1C8;
	sub_821AADA8(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A1E8"))) PPC_WEAK_FUNC(sub_8220A1E8);
PPC_FUNC_IMPL(__imp__sub_8220A1E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220a240
	if (!ctx.cr6.eq) goto loc_8220A240;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// bl 0x82427c40
	ctx.lr = 0x8220A224;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// bl 0x8259cce0
	ctx.lr = 0x8220A234;
	sub_8259CCE0(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_8220A240:
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

__attribute__((alias("__imp__sub_8220A254"))) PPC_WEAK_FUNC(sub_8220A254);
PPC_FUNC_IMPL(__imp__sub_8220A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A258"))) PPC_WEAK_FUNC(sub_8220A258);
PPC_FUNC_IMPL(__imp__sub_8220A258) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8220A294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x8220A2A4;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x8220A2AC;
	sub_821F6898(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// stb r10,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8220A2D0"))) PPC_WEAK_FUNC(sub_8220A2D0);
PPC_FUNC_IMPL(__imp__sub_8220A2D0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// bl 0x821ecc98
	ctx.lr = 0x8220A2FC;
	sub_821ECC98(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7088
	ctx.lr = 0x8220A30C;
	sub_821F7088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd698
	ctx.lr = 0x8220A314;
	sub_821FD698(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220a33c
	if (ctx.cr6.lt) goto loc_8220A33C;
	// beq cr6,0x8220a334
	if (ctx.cr6.eq) goto loc_8220A334;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8220a34c
	if (!ctx.cr6.eq) goto loc_8220A34C;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x8220a340
	goto loc_8220A340;
loc_8220A334:
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x8220a340
	goto loc_8220A340;
loc_8220A33C:
	// li r4,70
	ctx.r4.s64 = 70;
loc_8220A340:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd498
	ctx.lr = 0x8220A34C;
	sub_821FD498(ctx, base);
loc_8220A34C:
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

__attribute__((alias("__imp__sub_8220A364"))) PPC_WEAK_FUNC(sub_8220A364);
PPC_FUNC_IMPL(__imp__sub_8220A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A368"))) PPC_WEAK_FUNC(sub_8220A368);
PPC_FUNC_IMPL(__imp__sub_8220A368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8220A370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,30602
	ctx.r10.s64 = 2005532672;
	// addi r29,r11,-24936
	ctx.r29.s64 = ctx.r11.s64 + -24936;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// ori r9,r10,53333
	ctx.r9.u64 = ctx.r10.u64 | 53333;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r29,6544
	ctx.r3.s64 = ctx.r29.s64 + 6544;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// lis r11,-27742
	ctx.r11.s64 = -1818099712;
	// ori r11,r11,46856
	ctx.r11.u64 = ctx.r11.u64 | 46856;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r11.u64);
	// std r11,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r11.u64);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x821ecd38
	ctx.lr = 0x8220A3C4;
	sub_821ECD38(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r31,296
	ctx.r6.s64 = ctx.r31.s64 + 296;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r10,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,6544
	ctx.r3.s64 = ctx.r29.s64 + 6544;
	// stb r10,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r10.u8);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// bl 0x821ecce8
	ctx.lr = 0x8220A3F8;
	sub_821ECCE8(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r8,-8415
	ctx.r8.s64 = -551485440;
	// lis r7,-27114
	ctx.r7.s64 = -1776943104;
	// addi r31,r11,22016
	ctx.r31.s64 = ctx.r11.s64 + 22016;
	// ori r4,r8,27832
	ctx.r4.u64 = ctx.r8.u64 | 27832;
	// ori r6,r7,2197
	ctx.r6.u64 = ctx.r7.u64 | 2197;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r6,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820acd58
	ctx.lr = 0x8220A420;
	sub_820ACD58(ctx, base);
	// lis r3,-27114
	ctx.r3.s64 = -1776943104;
	// lis r4,-8415
	ctx.r4.s64 = -551485440;
	// ori r11,r3,2197
	ctx.r11.u64 = ctx.r3.u64 | 2197;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// li r5,1
	ctx.r5.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820acd58
	ctx.lr = 0x8220A440;
	sub_820ACD58(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f7088
	ctx.lr = 0x8220A44C;
	sub_821F7088(ctx, base);
	// lis r10,-18250
	ctx.r10.s64 = -1196032000;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r4,r10,9024
	ctx.r4.u64 = ctx.r10.u64 | 9024;
	// ori r8,r9,16334
	ctx.r8.u64 = ctx.r9.u64 | 16334;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ad830
	ctx.lr = 0x8220A474;
	sub_820AD830(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A47C"))) PPC_WEAK_FUNC(sub_8220A47C);
PPC_FUNC_IMPL(__imp__sub_8220A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A480"))) PPC_WEAK_FUNC(sub_8220A480);
PPC_FUNC_IMPL(__imp__sub_8220A480) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,69
	ctx.r4.s64 = 69;
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// bl 0x821fd498
	ctx.lr = 0x8220A4B4;
	sub_821FD498(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4de0
	ctx.lr = 0x8220A4C0;
	sub_821F4DE0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x8220A4D4;
	sub_82104600(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8220a4ec
	if (ctx.cr6.eq) goto loc_8220A4EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x82114500
	ctx.lr = 0x8220A4EC;
	sub_82114500(ctx, base);
loc_8220A4EC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220A500;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aae18
	ctx.lr = 0x8220A508;
	sub_821AAE18(ctx, base);
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

__attribute__((alias("__imp__sub_8220A520"))) PPC_WEAK_FUNC(sub_8220A520);
PPC_FUNC_IMPL(__imp__sub_8220A520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r9,-812
	ctx.r5.s64 = ctx.r9.s64 + -812;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// std r4,608(r11)
	PPC_STORE_U64(ctx.r11.u32 + 608, ctx.r4.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-27076
	ctx.r3.s64 = ctx.r9.s64 + -27076;
	// stw r10,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r8.u32);
	// bl 0x82427c40
	ctx.lr = 0x8220A560;
	sub_82427C40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A570"))) PPC_WEAK_FUNC(sub_8220A570);
PPC_FUNC_IMPL(__imp__sub_8220A570) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x8220A594;
	sub_82104600(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8220a5ac
	if (ctx.cr6.eq) goto loc_8220A5AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82114500
	ctx.lr = 0x8220A5AC;
	sub_82114500(ctx, base);
loc_8220A5AC:
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

__attribute__((alias("__imp__sub_8220A5C0"))) PPC_WEAK_FUNC(sub_8220A5C0);
PPC_FUNC_IMPL(__imp__sub_8220A5C0) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a604
	if (ctx.cr6.eq) goto loc_8220A604;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9be0
	ctx.lr = 0x8220A5E4;
	sub_820F9BE0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// stw r10,3516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3516, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220A604:
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220a640
	if (ctx.cr6.lt) goto loc_8220A640;
	// bne cr6,0x8220a678
	if (!ctx.cr6.eq) goto loc_8220A678;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-6216
	ctx.r10.s64 = -407371776;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r9,-27105
	ctx.r9.s64 = -1776353280;
	// li r11,8
	ctx.r11.s64 = 8;
	// ori r4,r10,63999
	ctx.r4.u64 = ctx.r10.u64 | 63999;
	// ori r8,r9,28614
	ctx.r8.u64 = ctx.r9.u64 | 28614;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x8220a670
	goto loc_8220A670;
loc_8220A640:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9b10
	ctx.lr = 0x8220A64C;
	sub_820F9B10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,29312
	ctx.r7.s64 = 1920991232;
	// addi r5,r11,-31416
	ctx.r5.s64 = ctx.r11.s64 + -31416;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r7,34385
	ctx.r4.u64 = ctx.r7.u64 | 34385;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-14074
	ctx.r11.s64 = -922353664;
	// ori r10,r11,59998
	ctx.r10.u64 = ctx.r11.u64 | 59998;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_8220A670:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x8220A678;
	sub_820A38E8(ctx, base);
loc_8220A678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A688"))) PPC_WEAK_FUNC(sub_8220A688);
PPC_FUNC_IMPL(__imp__sub_8220A688) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// b 0x8220a6a4
	goto loc_8220A6A4;
loc_8220A698:
	// lbz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
loc_8220A6A4:
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bge cr6,0x8220a708
	if (!ctx.cr6.lt) goto loc_8220A708;
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r5,r6,240
	ctx.r5.s64 = ctx.r6.s64 + 240;
	// lbz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32161
	ctx.r5.s64 = -2107703296;
	// addi r4,r5,32512
	ctx.r4.s64 = ctx.r5.s64 + 32512;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// lbz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x8220a698
	goto loc_8220A698;
loc_8220A708:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A70C"))) PPC_WEAK_FUNC(sub_8220A70C);
PPC_FUNC_IMPL(__imp__sub_8220A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A710"))) PPC_WEAK_FUNC(sub_8220A710);
PPC_FUNC_IMPL(__imp__sub_8220A710) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa500
	ctx.lr = 0x8220A738;
	sub_820FA500(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x8220a76c
	if (ctx.cr6.eq) goto loc_8220A76C;
	// lis r7,-18726
	ctx.r7.s64 = -1227227136;
	// lis r11,29368
	ctx.r11.s64 = 1924661248;
	// ori r4,r7,34385
	ctx.r4.u64 = ctx.r7.u64 | 34385;
	// ori r10,r11,14264
	ctx.r10.u64 = ctx.r11.u64 | 14264;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x8220a780
	goto loc_8220A780;
loc_8220A76C:
	// lis r9,-30806
	ctx.r9.s64 = -2018902016;
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r4,r9,55416
	ctx.r4.u64 = ctx.r9.u64 | 55416;
	// ori r7,r8,29197
	ctx.r7.u64 = ctx.r8.u64 | 29197;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_8220A780:
	// bl 0x820a38e8
	ctx.lr = 0x8220A784;
	sub_820A38E8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9c98
	ctx.lr = 0x8220A790;
	sub_820F9C98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A7A0"))) PPC_WEAK_FUNC(sub_8220A7A0);
PPC_FUNC_IMPL(__imp__sub_8220A7A0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220a810
	if (ctx.cr6.eq) goto loc_8220A810;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8220a84c
	if (!ctx.cr6.eq) goto loc_8220A84C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8220a7f0
	if (!ctx.cr6.eq) goto loc_8220A7F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r31,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r31.u32);
loc_8220A7F0:
	// bl 0x820f9ed0
	ctx.lr = 0x8220A7F4;
	sub_820F9ED0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8220a84c
	if (ctx.cr6.gt) goto loc_8220A84C;
	// bso cr6,0x8220a84c
	if (ctx.cr6.so) goto loc_8220A84C;
	// stw r31,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r31.u32);
	// b 0x8220a84c
	goto loc_8220A84C;
loc_8220A810:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232dd18
	ctx.lr = 0x8220A81C;
	sub_8232DD18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220a84c
	if (!ctx.cr6.eq) goto loc_8220A84C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1452
	ctx.r31.s64 = ctx.r11.s64 + -1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9848
	ctx.lr = 0x8220A838;
	sub_820F9848(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220a84c
	if (ctx.cr6.eq) goto loc_8220A84C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f98b8
	ctx.lr = 0x8220A84C;
	sub_820F98B8(ctx, base);
loc_8220A84C:
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

__attribute__((alias("__imp__sub_8220A864"))) PPC_WEAK_FUNC(sub_8220A864);
PPC_FUNC_IMPL(__imp__sub_8220A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A868"))) PPC_WEAK_FUNC(sub_8220A868);
PPC_FUNC_IMPL(__imp__sub_8220A868) {
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
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8220a968
	if (ctx.cr6.gt) goto loc_8220A968;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-22372
	ctx.r12.s64 = ctx.r12.s64 + -22372;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220A8AC;
	case 1:
		goto loc_8220A8D4;
	case 2:
		goto loc_8220A924;
	case 3:
		goto loc_8220A95C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-22356(0)
	ctx.r17.u64 = PPC_LOAD_U32(-22356);
	// lwz r17,-22316(0)
	ctx.r17.u64 = PPC_LOAD_U32(-22316);
	// lwz r17,-22236(0)
	ctx.r17.u64 = PPC_LOAD_U32(-22236);
	// lwz r17,-22180(0)
	ctx.r17.u64 = PPC_LOAD_U32(-22180);
loc_8220A8AC:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8220a968
	if (ctx.cr6.eq) goto loc_8220A968;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f98b8
	ctx.lr = 0x8220A8C0;
	sub_820F98B8(ctx, base);
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
loc_8220A8D4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9780
	ctx.lr = 0x8220A8E4;
	sub_820F9780(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,7240
	ctx.r9.u64 = ctx.r10.u64 | 7240;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220A910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_8220A924:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1452
	ctx.r31.s64 = ctx.r11.s64 + -1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9a08
	ctx.lr = 0x8220A934;
	sub_820F9A08(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8220a968
	if (!ctx.cr6.eq) goto loc_8220A968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9948
	ctx.lr = 0x8220A948;
	sub_820F9948(ctx, base);
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
loc_8220A95C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9c80
	ctx.lr = 0x8220A968;
	sub_820F9C80(ctx, base);
loc_8220A968:
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

__attribute__((alias("__imp__sub_8220A97C"))) PPC_WEAK_FUNC(sub_8220A97C);
PPC_FUNC_IMPL(__imp__sub_8220A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A980"))) PPC_WEAK_FUNC(sub_8220A980);
PPC_FUNC_IMPL(__imp__sub_8220A980) {
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
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8220ad40
	if (ctx.cr6.gt) goto loc_8220AD40;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-22088
	ctx.r12.s64 = ctx.r12.s64 + -22088;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220A9D0;
	case 1:
		goto loc_8220AAC4;
	case 2:
		goto loc_8220ABE8;
	case 3:
		goto loc_8220AC24;
	case 4:
		goto loc_8220AD40;
	case 5:
		goto loc_8220AC74;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-22064(0)
	ctx.r17.u64 = PPC_LOAD_U32(-22064);
	// lwz r17,-21820(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21820);
	// lwz r17,-21528(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21528);
	// lwz r17,-21468(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21468);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21388(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21388);
loc_8220A9D0:
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// bgt cr6,0x8220ad40
	if (ctx.cr6.gt) goto loc_8220AD40;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-22032
	ctx.r12.s64 = ctx.r12.s64 + -22032;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8220AD34;
	case 1:
		goto loc_8220AD40;
	case 2:
		goto loc_8220AD40;
	case 3:
		goto loc_8220AD40;
	case 4:
		goto loc_8220AD40;
	case 5:
		goto loc_8220AD40;
	case 6:
		goto loc_8220AD40;
	case 7:
		goto loc_8220AD40;
	case 8:
		goto loc_8220AD40;
	case 9:
		goto loc_8220AD40;
	case 10:
		goto loc_8220AA40;
	case 11:
		goto loc_8220AA68;
	case 12:
		goto loc_8220AD18;
	case 13:
		goto loc_8220AD40;
	case 14:
		goto loc_8220AD40;
	case 15:
		goto loc_8220AD40;
	case 16:
		goto loc_8220AD40;
	case 17:
		goto loc_8220AD40;
	case 18:
		goto loc_8220AA9C;
	case 19:
		goto loc_8220AC3C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21196(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21196);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21952(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21952);
	// lwz r17,-21912(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21912);
	// lwz r17,-21224(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21224);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21860(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21860);
	// lwz r17,-21444(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21444);
loc_8220AA40:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9aa0
	ctx.lr = 0x8220AA4C;
	sub_820F9AA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
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
loc_8220AA68:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9da0
	ctx.lr = 0x8220AA74;
	sub_820F9DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ad40
	if (ctx.cr6.eq) goto loc_8220AD40;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
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
loc_8220AA9C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9dd8
	ctx.lr = 0x8220AAA8;
	sub_820F9DD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r7.u32);
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
loc_8220AAC4:
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// bgt cr6,0x8220ad40
	if (ctx.cr6.gt) goto loc_8220AD40;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-21788
	ctx.r12.s64 = ctx.r12.s64 + -21788;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8220AD34;
	case 1:
		goto loc_8220AD40;
	case 2:
		goto loc_8220AD40;
	case 3:
		goto loc_8220AD40;
	case 4:
		goto loc_8220AD40;
	case 5:
		goto loc_8220AD40;
	case 6:
		goto loc_8220AD40;
	case 7:
		goto loc_8220AD40;
	case 8:
		goto loc_8220AD40;
	case 9:
		goto loc_8220AD40;
	case 10:
		goto loc_8220AB34;
	case 11:
		goto loc_8220AB54;
	case 12:
		goto loc_8220AD40;
	case 13:
		goto loc_8220AB74;
	case 14:
		goto loc_8220AB90;
	case 15:
		goto loc_8220AD40;
	case 16:
		goto loc_8220ABAC;
	case 17:
		goto loc_8220AD40;
	case 18:
		goto loc_8220ABC8;
	case 19:
		goto loc_8220AC3C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21196(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21196);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21708(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21708);
	// lwz r17,-21676(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21676);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21644(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21644);
	// lwz r17,-21616(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21616);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21588(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21588);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21560(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21560);
	// lwz r17,-21444(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21444);
loc_8220AB34:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9aa0
	ctx.lr = 0x8220AB40;
	sub_820F9AA0(ctx, base);
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
loc_8220AB54:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9da0
	ctx.lr = 0x8220AB60;
	sub_820F9DA0(ctx, base);
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
loc_8220AB74:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r6.u32);
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
loc_8220AB90:
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r5.u32);
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
loc_8220ABAC:
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r4.u32);
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
loc_8220ABC8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9dd8
	ctx.lr = 0x8220ABD4;
	sub_820F9DD8(ctx, base);
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
loc_8220ABE8:
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// bne cr6,0x8220ad40
	if (!ctx.cr6.eq) goto loc_8220AD40;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9a08
	ctx.lr = 0x8220ABFC;
	sub_820F9A08(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8220ad40
	if (!ctx.cr6.eq) goto loc_8220AD40;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
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
loc_8220AC24:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8220ad34
	if (ctx.cr6.eq) goto loc_8220AD34;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// beq cr6,0x8220ac58
	if (ctx.cr6.eq) goto loc_8220AC58;
	// cmpwi cr6,r4,19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19, ctx.xer);
	// bne cr6,0x8220ad40
	if (!ctx.cr6.eq) goto loc_8220AD40;
loc_8220AC3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a710
	ctx.lr = 0x8220AC44;
	sub_8220A710(ctx, base);
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
loc_8220AC58:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
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
loc_8220AC74:
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// bgt cr6,0x8220ad40
	if (ctx.cr6.gt) goto loc_8220AD40;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-21356
	ctx.r12.s64 = ctx.r12.s64 + -21356;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8220AD34;
	case 1:
		goto loc_8220AD40;
	case 2:
		goto loc_8220AD40;
	case 3:
		goto loc_8220AD40;
	case 4:
		goto loc_8220AD40;
	case 5:
		goto loc_8220AD40;
	case 6:
		goto loc_8220AD40;
	case 7:
		goto loc_8220AD40;
	case 8:
		goto loc_8220AD40;
	case 9:
		goto loc_8220AD40;
	case 10:
		goto loc_8220ACE4;
	case 11:
		goto loc_8220AD0C;
	case 12:
		goto loc_8220AD40;
	case 13:
		goto loc_8220AD40;
	case 14:
		goto loc_8220AD40;
	case 15:
		goto loc_8220AD40;
	case 16:
		goto loc_8220AD40;
	case 17:
		goto loc_8220AD40;
	case 18:
		goto loc_8220AD40;
	case 19:
		goto loc_8220AC3C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21196(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21196);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21276(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21276);
	// lwz r17,-21236(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21236);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21184(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21184);
	// lwz r17,-21444(0)
	ctx.r17.u64 = PPC_LOAD_U32(-21444);
loc_8220ACE4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9aa0
	ctx.lr = 0x8220ACF0;
	sub_820F9AA0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
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
loc_8220AD0C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9da0
	ctx.lr = 0x8220AD18;
	sub_820F9DA0(ctx, base);
loc_8220AD18:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
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
loc_8220AD34:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9cb8
	ctx.lr = 0x8220AD40;
	sub_820F9CB8(ctx, base);
loc_8220AD40:
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

__attribute__((alias("__imp__sub_8220AD54"))) PPC_WEAK_FUNC(sub_8220AD54);
PPC_FUNC_IMPL(__imp__sub_8220AD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AD58"))) PPC_WEAK_FUNC(sub_8220AD58);
PPC_FUNC_IMPL(__imp__sub_8220AD58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4964
	ctx.r3.s64 = ctx.r30.s64 + 4964;
	// bl 0x821095a0
	ctx.lr = 0x8220AD88;
	sub_821095A0(ctx, base);
	// addis r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 458752;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d8c8
	ctx.lr = 0x8220AD9C;
	sub_8210D8C8(ctx, base);
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// lis r9,-27105
	ctx.r9.s64 = -1776353280;
	// ori r10,r11,63999
	ctx.r10.u64 = ctx.r11.u64 | 63999;
	// ori r8,r9,28614
	ctx.r8.u64 = ctx.r9.u64 | 28614;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r31,r10
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8220ae2c
	if (ctx.cr6.eq) goto loc_8220AE2C;
	// addi r3,r30,4964
	ctx.r3.s64 = ctx.r30.s64 + 4964;
	// bl 0x82109138
	ctx.lr = 0x8220ADC0;
	sub_82109138(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// ori r6,r7,51957
	ctx.r6.u64 = ctx.r7.u64 | 51957;
	// lbzx r5,r31,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220ade8
	if (ctx.cr6.eq) goto loc_8220ADE8;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,-13980
	ctx.r3.s64 = ctx.r11.s64 + -13980;
	// bl 0x82228208
	ctx.lr = 0x8220ADE8;
	sub_82228208(ctx, base);
loc_8220ADE8:
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r4,51970
	ctx.r3.u64 = ctx.r4.u64 | 51970;
	// stbx r11,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r3,r30,4964
	ctx.r3.s64 = ctx.r30.s64 + 4964;
	// bl 0x82112d88
	ctx.lr = 0x8220AE00;
	sub_82112D88(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821e7730
	ctx.lr = 0x8220AE0C;
	sub_821E7730(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821e76a8
	ctx.lr = 0x8220AE18;
	sub_821E76A8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x8210d230
	ctx.lr = 0x8220AE2C;
	sub_8210D230(ctx, base);
loc_8220AE2C:
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

__attribute__((alias("__imp__sub_8220AE44"))) PPC_WEAK_FUNC(sub_8220AE44);
PPC_FUNC_IMPL(__imp__sub_8220AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AE48"))) PPC_WEAK_FUNC(sub_8220AE48);
PPC_FUNC_IMPL(__imp__sub_8220AE48) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,437(r4)
	PPC_STORE_U8(ctx.r4.u32 + 437, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220AE54"))) PPC_WEAK_FUNC(sub_8220AE54);
PPC_FUNC_IMPL(__imp__sub_8220AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AE58"))) PPC_WEAK_FUNC(sub_8220AE58);
PPC_FUNC_IMPL(__imp__sub_8220AE58) {
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
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220aec4
	if (ctx.cr6.eq) goto loc_8220AEC4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220aec4
	if (ctx.cr6.eq) goto loc_8220AEC4;
	// lbz r11,505(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 505);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220aec4
	if (ctx.cr6.eq) goto loc_8220AEC4;
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220aec4
	if (ctx.cr6.eq) goto loc_8220AEC4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x821090c0
	ctx.lr = 0x8220AEA0;
	sub_821090C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8220aeb0
	if (ctx.cr6.gt) goto loc_8220AEB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220AEB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220AEC4:
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
}

__attribute__((alias("__imp__sub_8220AED8"))) PPC_WEAK_FUNC(sub_8220AED8);
PPC_FUNC_IMPL(__imp__sub_8220AED8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,505(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 505);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220aefc
	if (ctx.cr6.eq) goto loc_8220AEFC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r3,17104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17104);
	// blr 
	return;
loc_8220AEFC:
	// lwz r11,440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220af24
	if (ctx.cr6.eq) goto loc_8220AF24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// b 0x821e6ea0
	sub_821E6EA0(ctx, base);
	return;
loc_8220AF24:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// b 0x821e6e98
	sub_821E6E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AF38"))) PPC_WEAK_FUNC(sub_8220AF38);
PPC_FUNC_IMPL(__imp__sub_8220AF38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220AF40"))) PPC_WEAK_FUNC(sub_8220AF40);
PPC_FUNC_IMPL(__imp__sub_8220AF40) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220af8c
	if (ctx.cr6.eq) goto loc_8220AF8C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// stb r9,505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 505, ctx.r9.u8);
	// bl 0x821edc30
	ctx.lr = 0x8220AF78;
	sub_821EDC30(ctx, base);
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
loc_8220AF8C:
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r8,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r8.u32);
	// blt cr6,0x8220b048
	if (ctx.cr6.lt) goto loc_8220B048;
	// beq cr6,0x8220b020
	if (ctx.cr6.eq) goto loc_8220B020;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8220b090
	if (!ctx.cr6.lt) goto loc_8220B090;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r7,440(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bne cr6,0x8220afdc
	if (!ctx.cr6.eq) goto loc_8220AFDC;
	// bl 0x821e74a8
	ctx.lr = 0x8220AFD8;
	sub_821E74A8(ctx, base);
	// b 0x8220afe0
	goto loc_8220AFE0;
loc_8220AFDC:
	// bl 0x821e7568
	ctx.lr = 0x8220AFE0;
	sub_821E7568(ctx, base);
loc_8220AFE0:
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8220b090
	if (ctx.cr6.eq) goto loc_8220B090;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r3,r5,14715
	ctx.r3.u64 = ctx.r5.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af680
	ctx.lr = 0x8220B00C;
	sub_825AF680(ctx, base);
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
loc_8220B020:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r11,505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 505, ctx.r11.u8);
	// bl 0x821edc30
	ctx.lr = 0x8220B030;
	sub_821EDC30(ctx, base);
	// lwz r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r4,6
	ctx.r4.s64 = 6;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8220b06c
	if (ctx.cr6.eq) goto loc_8220B06C;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8220b06c
	goto loc_8220B06C;
loc_8220B048:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r9,505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 505, ctx.r9.u8);
	// bl 0x821edc30
	ctx.lr = 0x8220B058;
	sub_821EDC30(ctx, base);
	// lwz r8,440(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8220b06c
	if (ctx.cr6.eq) goto loc_8220B06C;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8220B06C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,16296
	ctx.r5.s64 = ctx.r10.s64 + 16296;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x8211f830
	ctx.lr = 0x8220B090;
	sub_8211F830(ctx, base);
loc_8220B090:
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

__attribute__((alias("__imp__sub_8220B0A4"))) PPC_WEAK_FUNC(sub_8220B0A4);
PPC_FUNC_IMPL(__imp__sub_8220B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B0A8"))) PPC_WEAK_FUNC(sub_8220B0A8);
PPC_FUNC_IMPL(__imp__sub_8220B0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8220B0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,247
	ctx.r4.s64 = 247;
	// li r30,1
	ctx.r30.s64 = 1;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aeb50
	ctx.lr = 0x8220B0E4;
	sub_825AEB50(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,246
	ctx.r4.s64 = 246;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aeb50
	ctx.lr = 0x8220B0F4;
	sub_825AEB50(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8220b108
	if (ctx.cr6.eq) goto loc_8220B108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220B108:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8220b120
	if (ctx.cr6.eq) goto loc_8220B120;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220B120:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x8220b1e4
	if (ctx.cr6.gt) goto loc_8220B1E4;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-20156
	ctx.r12.s64 = ctx.r12.s64 + -20156;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_8220B158;
	case 1:
		goto loc_8220B168;
	case 2:
		goto loc_8220B198;
	case 3:
		goto loc_8220B1A0;
	case 4:
		goto loc_8220B1C8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20136(0)
	ctx.r17.u64 = PPC_LOAD_U32(-20136);
	// lwz r17,-20120(0)
	ctx.r17.u64 = PPC_LOAD_U32(-20120);
	// lwz r17,-20072(0)
	ctx.r17.u64 = PPC_LOAD_U32(-20072);
	// lwz r17,-20064(0)
	ctx.r17.u64 = PPC_LOAD_U32(-20064);
	// lwz r17,-20024(0)
	ctx.r17.u64 = PPC_LOAD_U32(-20024);
loc_8220B158:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220B168:
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8220b184
	if (!ctx.cr6.eq) goto loc_8220B184;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220b188
	if (ctx.cr6.eq) goto loc_8220B188;
loc_8220B184:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8220B188:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220B198:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x8220b1cc
	goto loc_8220B1CC;
loc_8220B1A0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r7,r8,51957
	ctx.r7.u64 = ctx.r8.u64 | 51957;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// and r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 & ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220B1C8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
loc_8220B1CC:
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r3,r4,51957
	ctx.r3.u64 = ctx.r4.u64 | 51957;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8220B1E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B1F0"))) PPC_WEAK_FUNC(sub_8220B1F0);
PPC_FUNC_IMPL(__imp__sub_8220B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8220B1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,32576
	ctx.r11.s64 = ctx.r11.s64 + 32576;
	// stb r30,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r30.u8);
	// addi r7,r10,-20672
	ctx.r7.s64 = ctx.r10.s64 + -20672;
	// stb r29,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r29.u8);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// stb r28,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r28.u8);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,184
	ctx.r5.s64 = ctx.r31.s64 + 184;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x821eda60
	ctx.lr = 0x8220B288;
	sub_821EDA60(ctx, base);
	// stb r30,505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 505, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B294"))) PPC_WEAK_FUNC(sub_8220B294);
PPC_FUNC_IMPL(__imp__sub_8220B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B298"))) PPC_WEAK_FUNC(sub_8220B298);
PPC_FUNC_IMPL(__imp__sub_8220B298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8220B2A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r28,r11,32644
	ctx.r28.s64 = ctx.r11.s64 + 32644;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,440(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// addi r11,r28,-20
	ctx.r11.s64 = ctx.r28.s64 + -20;
	// li r5,128
	ctx.r5.s64 = 128;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x8220B2D4;
	sub_8259D2A0(ctx, base);
	// lwz r11,440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8220b2fc
	if (!ctx.cr6.eq) goto loc_8220B2FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,-26956
	ctx.r4.s64 = ctx.r11.s64 + -26956;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8220B2F4;
	sub_8259D2A0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8220B2FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// bne cr6,0x8220b330
	if (!ctx.cr6.eq) goto loc_8220B330;
	// lwz r11,444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8220b330
	if (!ctx.cr6.lt) goto loc_8220B330;
	// addi r8,r28,20
	ctx.r8.s64 = ctx.r28.s64 + 20;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8220B32C;
	sub_8210FCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220B330:
	// lwz r11,440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220b344
	if (ctx.cr6.eq) goto loc_8220B344;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220b37c
	if (!ctx.cr6.eq) goto loc_8220B37C;
loc_8220B344:
	// lwz r11,480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8220b37c
	if (ctx.cr6.eq) goto loc_8220B37C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220b368
	if (ctx.cr6.lt) goto loc_8220B368;
	// bne cr6,0x8220b37c
	if (!ctx.cr6.eq) goto loc_8220B37C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26988
	ctx.r4.s64 = ctx.r11.s64 + -26988;
	// b 0x8220b370
	goto loc_8220B370;
loc_8220B368:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-27016
	ctx.r4.s64 = ctx.r11.s64 + -27016;
loc_8220B370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220B378;
	sub_8210FCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220B37C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8220b39c
	if (!ctx.cr6.eq) goto loc_8220B39C;
	// lwz r6,440(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8220B398;
	sub_8210FCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8220B39C:
	// lbz r4,505(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 505);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220b3d4
	if (ctx.cr6.eq) goto loc_8220B3D4;
	// lwz r3,496(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 496);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8220b3d4
	if (ctx.cr6.eq) goto loc_8220B3D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-27680
	ctx.r4.s64 = ctx.r11.s64 + -27680;
	// bl 0x8210fcf8
	ctx.lr = 0x8220B3C4;
	sub_8210FCF8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x821090d0
	ctx.lr = 0x8220B3D4;
	sub_821090D0(ctx, base);
loc_8220B3D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361f88
	ctx.lr = 0x8220B3E4;
	sub_82361F88(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361bd8
	ctx.lr = 0x8220B3F4;
	sub_82361BD8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B3FC"))) PPC_WEAK_FUNC(sub_8220B3FC);
PPC_FUNC_IMPL(__imp__sub_8220B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B400"))) PPC_WEAK_FUNC(sub_8220B400);
PPC_FUNC_IMPL(__imp__sub_8220B400) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821e6ea0
	ctx.lr = 0x8220B42C;
	sub_821E6EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8220b478
	if (!ctx.cr6.gt) goto loc_8220B478;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e69f0
	ctx.lr = 0x8220B444;
	sub_821E69F0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x821edc30
	ctx.lr = 0x8220B44C;
	sub_821EDC30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 505, ctx.r11.u8);
	// bl 0x821fd498
	ctx.lr = 0x8220B464;
	sub_821FD498(ctx, base);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// stw r9,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r9.u32);
	// b 0x8220b4c0
	goto loc_8220B4C0;
loc_8220B478:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,-27736
	ctx.r5.s64 = ctx.r10.s64 + -27736;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r7,r11,-17512
	ctx.r7.s64 = ctx.r11.s64 + -17512;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x8220B4B8;
	sub_821E6928(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r8.u32);
loc_8220B4C0:
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

__attribute__((alias("__imp__sub_8220B4D8"))) PPC_WEAK_FUNC(sub_8220B4D8);
PPC_FUNC_IMPL(__imp__sub_8220B4D8) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x8220B500;
	sub_82366C90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8220b574
	if (ctx.cr6.lt) goto loc_8220B574;
	// beq cr6,0x8220b534
	if (ctx.cr6.eq) goto loc_8220B534;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8220b574
	if (!ctx.cr6.lt) goto loc_8220B574;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821f3c48
	ctx.lr = 0x8220B520;
	sub_821F3C48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r11.u8);
	// bl 0x8220b400
	ctx.lr = 0x8220B530;
	sub_8220B400(ctx, base);
	// b 0x8220b574
	goto loc_8220B574;
loc_8220B534:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-27736
	ctx.r5.s64 = ctx.r11.s64 + -27736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x8220B56C;
	sub_821E6928(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
loc_8220B574:
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

__attribute__((alias("__imp__sub_8220B58C"))) PPC_WEAK_FUNC(sub_8220B58C);
PPC_FUNC_IMPL(__imp__sub_8220B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B590"))) PPC_WEAK_FUNC(sub_8220B590);
PPC_FUNC_IMPL(__imp__sub_8220B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bgt cr6,0x8220b630
	if (ctx.cr6.gt) goto loc_8220B630;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-19012
	ctx.r12.s64 = ctx.r12.s64 + -19012;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8220B5E0;
	case 1:
		goto loc_8220B610;
	case 2:
		goto loc_8220B5F8;
	case 3:
		goto loc_8220B604;
	case 4:
		goto loc_8220B610;
	case 5:
		goto loc_8220B5EC;
	case 6:
		goto loc_8220B61C;
	case 7:
		goto loc_8220B630;
	case 8:
		goto loc_8220B5E0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18976(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18976);
	// lwz r17,-18928(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18928);
	// lwz r17,-18952(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18952);
	// lwz r17,-18940(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18940);
	// lwz r17,-18928(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18928);
	// lwz r17,-18964(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18964);
	// lwz r17,-18916(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18916);
	// lwz r17,-18896(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18896);
	// lwz r17,-18976(0)
	ctx.r17.u64 = PPC_LOAD_U32(-18976);
loc_8220B5E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-20272
	ctx.r4.s64 = ctx.r11.s64 + -20272;
	// b 0x8220b624
	goto loc_8220B624;
loc_8220B5EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// b 0x8220b624
	goto loc_8220B624;
loc_8220B5F8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-20256
	ctx.r4.s64 = ctx.r11.s64 + -20256;
	// b 0x8220b624
	goto loc_8220B624;
loc_8220B604:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26896
	ctx.r4.s64 = ctx.r11.s64 + -26896;
	// b 0x8220b624
	goto loc_8220B624;
loc_8220B610:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26916
	ctx.r4.s64 = ctx.r11.s64 + -26916;
	// b 0x8220b624
	goto loc_8220B624;
loc_8220B61C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26932
	ctx.r4.s64 = ctx.r11.s64 + -26932;
loc_8220B624:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d2a0
	ctx.lr = 0x8220B630;
	sub_8259D2A0(ctx, base);
loc_8220B630:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x8220B640;
	sub_8210FCF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B650"))) PPC_WEAK_FUNC(sub_8220B650);
PPC_FUNC_IMPL(__imp__sub_8220B650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r9,r10,25916
	ctx.r9.u64 = ctx.r10.u64 | 25916;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8220b680
	if (ctx.cr6.eq) goto loc_8220B680;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220b680
	if (ctx.cr6.eq) goto loc_8220B680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8220B680:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r7,r8,25880
	ctx.r7.u64 = ctx.r8.u64 | 25880;
	// ori r4,r5,26392
	ctx.r4.u64 = ctx.r5.u64 | 26392;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B6C4"))) PPC_WEAK_FUNC(sub_8220B6C4);
PPC_FUNC_IMPL(__imp__sub_8220B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B6C8"))) PPC_WEAK_FUNC(sub_8220B6C8);
PPC_FUNC_IMPL(__imp__sub_8220B6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,-31380
	ctx.r11.s64 = ctx.r11.s64 + -31380;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,-48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,-27612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27612);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f11,-27616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27616);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8235aa30
	ctx.lr = 0x8220B760;
	sub_8235AA30(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8235aaa8
	ctx.lr = 0x8220B778;
	sub_8235AAA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B788"))) PPC_WEAK_FUNC(sub_8220B788);
PPC_FUNC_IMPL(__imp__sub_8220B788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220b79c
	if (ctx.cr6.eq) goto loc_8220B79C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220B79C:
	// lwz r10,444(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220b7b0
	if (ctx.cr6.eq) goto loc_8220B7B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220B7B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B7B8"))) PPC_WEAK_FUNC(sub_8220B7B8);
PPC_FUNC_IMPL(__imp__sub_8220B7B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8220b7cc
	if (ctx.cr6.eq) goto loc_8220B7CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220B7CC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B7D4"))) PPC_WEAK_FUNC(sub_8220B7D4);
PPC_FUNC_IMPL(__imp__sub_8220B7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B7D8"))) PPC_WEAK_FUNC(sub_8220B7D8);
PPC_FUNC_IMPL(__imp__sub_8220B7D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b804
	if (ctx.cr6.eq) goto loc_8220B804;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// stw r10,8300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8300, ctx.r10.u32);
	// b 0x820f9780
	sub_820F9780(ctx, base);
	return;
loc_8220B804:
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220b83c
	if (ctx.cr6.lt) goto loc_8220B83C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,28623
	ctx.r10.s64 = 1875836928;
	// lis r9,23485
	ctx.r9.s64 = 1539112960;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,26567
	ctx.r4.u64 = ctx.r10.u64 | 26567;
	// ori r8,r9,31649
	ctx.r8.u64 = ctx.r9.u64 | 31649;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
loc_8220B83C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,-6216
	ctx.r7.s64 = -407371776;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27105
	ctx.r11.s64 = -1776353280;
	// ori r4,r7,63999
	ctx.r4.u64 = ctx.r7.u64 | 63999;
	// ori r10,r11,28614
	ctx.r10.u64 = ctx.r11.u64 | 28614;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B86C"))) PPC_WEAK_FUNC(sub_8220B86C);
PPC_FUNC_IMPL(__imp__sub_8220B86C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B870"))) PPC_WEAK_FUNC(sub_8220B870);
PPC_FUNC_IMPL(__imp__sub_8220B870) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// b 0x8220b88c
	goto loc_8220B88C;
loc_8220B880:
	// lbz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
loc_8220B88C:
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bge cr6,0x8220b8f0
	if (!ctx.cr6.lt) goto loc_8220B8F0;
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r5,r6,240
	ctx.r5.s64 = ctx.r6.s64 + 240;
	// lbz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32161
	ctx.r5.s64 = -2107703296;
	// addi r4,r5,32704
	ctx.r4.s64 = ctx.r5.s64 + 32704;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// lbz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x8220b880
	goto loc_8220B880;
loc_8220B8F0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B8F4"))) PPC_WEAK_FUNC(sub_8220B8F4);
PPC_FUNC_IMPL(__imp__sub_8220B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B8F8"))) PPC_WEAK_FUNC(sub_8220B8F8);
PPC_FUNC_IMPL(__imp__sub_8220B8F8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,28623
	ctx.r9.s64 = 1875836928;
	// lis r7,23485
	ctx.r7.s64 = 1539112960;
	// ori r8,r9,26567
	ctx.r8.u64 = ctx.r9.u64 | 26567;
	// ori r6,r7,31649
	ctx.r6.u64 = ctx.r7.u64 | 31649;
	// ld r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 256);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8220b948
	if (!ctx.cr6.eq) goto loc_8220B948;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r5.u32);
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
loc_8220B948:
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// stw r9,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r9.u32);
	// bl 0x820f9780
	ctx.lr = 0x8220B960;
	sub_820F9780(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,-31359
	ctx.r8.s64 = -2055143424;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r7,-27095
	ctx.r7.s64 = -1775697920;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,22562
	ctx.r4.u64 = ctx.r8.u64 | 22562;
	// ori r6,r7,44691
	ctx.r6.u64 = ctx.r7.u64 | 44691;
	// addi r5,r11,7976
	ctx.r5.s64 = ctx.r11.s64 + 7976;
	// rldimi r4,r6,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addi r3,r10,24760
	ctx.r3.s64 = ctx.r10.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x8220B994;
	sub_82103EC8(ctx, base);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220B9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8220B9CC"))) PPC_WEAK_FUNC(sub_8220B9CC);
PPC_FUNC_IMPL(__imp__sub_8220B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B9D0"))) PPC_WEAK_FUNC(sub_8220B9D0);
PPC_FUNC_IMPL(__imp__sub_8220B9D0) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220ba28
	if (!ctx.cr6.eq) goto loc_8220BA28;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232dd18
	ctx.lr = 0x8220B9F8;
	sub_8232DD18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ba28
	if (!ctx.cr6.eq) goto loc_8220BA28;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1452
	ctx.r31.s64 = ctx.r11.s64 + -1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9848
	ctx.lr = 0x8220BA14;
	sub_820F9848(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220ba28
	if (ctx.cr6.eq) goto loc_8220BA28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f98b8
	ctx.lr = 0x8220BA28;
	sub_820F98B8(ctx, base);
loc_8220BA28:
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

__attribute__((alias("__imp__sub_8220BA3C"))) PPC_WEAK_FUNC(sub_8220BA3C);
PPC_FUNC_IMPL(__imp__sub_8220BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BA40"))) PPC_WEAK_FUNC(sub_8220BA40);
PPC_FUNC_IMPL(__imp__sub_8220BA40) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220baac
	if (ctx.cr6.lt) goto loc_8220BAAC;
	// beq cr6,0x8220ba80
	if (ctx.cr6.eq) goto loc_8220BA80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-27040
	ctx.r4.s64 = ctx.r10.s64 + -27040;
	// addi r7,r11,-18472
	ctx.r7.s64 = ctx.r11.s64 + -18472;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r8,240
	ctx.r5.s64 = ctx.r8.s64 + 240;
	// addi r3,r8,24
	ctx.r3.s64 = ctx.r8.s64 + 24;
	// b 0x821eda60
	sub_821EDA60(ctx, base);
	return;
loc_8220BA80:
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,7240
	ctx.r9.u64 = ctx.r10.u64 | 7240;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8220BAAC:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// b 0x820f98b8
	sub_820F98B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220BAC0"))) PPC_WEAK_FUNC(sub_8220BAC0);
PPC_FUNC_IMPL(__imp__sub_8220BAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BAC4"))) PPC_WEAK_FUNC(sub_8220BAC4);
PPC_FUNC_IMPL(__imp__sub_8220BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BAC8"))) PPC_WEAK_FUNC(sub_8220BAC8);
PPC_FUNC_IMPL(__imp__sub_8220BAC8) {
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
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8220bcd8
	if (ctx.cr6.gt) goto loc_8220BCD8;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-17664
	ctx.r12.s64 = ctx.r12.s64 + -17664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220BB10;
	case 1:
		goto loc_8220BBC4;
	case 2:
		goto loc_8220BCD8;
	case 3:
		goto loc_8220BC70;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-17648(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17648);
	// lwz r17,-17468(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17468);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17296(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17296);
loc_8220BB10:
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// bgt cr6,0x8220bcd8
	if (ctx.cr6.gt) goto loc_8220BCD8;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-17616
	ctx.r12.s64 = ctx.r12.s64 + -17616;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8220BCCC;
	case 1:
		goto loc_8220BCD8;
	case 2:
		goto loc_8220BCD8;
	case 3:
		goto loc_8220BCD8;
	case 4:
		goto loc_8220BCD8;
	case 5:
		goto loc_8220BCD8;
	case 6:
		goto loc_8220BCD8;
	case 7:
		goto loc_8220BCD8;
	case 8:
		goto loc_8220BCD8;
	case 9:
		goto loc_8220BCD8;
	case 10:
		goto loc_8220BB80;
	case 11:
		goto loc_8220BCD8;
	case 12:
		goto loc_8220BBA8;
	case 13:
		goto loc_8220BCD8;
	case 14:
		goto loc_8220BCD8;
	case 15:
		goto loc_8220BCD8;
	case 16:
		goto loc_8220BCD8;
	case 17:
		goto loc_8220BCD8;
	case 18:
		goto loc_8220BCD8;
	case 19:
		goto loc_8220BC88;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-17204(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17204);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17536(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17536);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17496(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17496);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17272(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17272);
loc_8220BB80:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9aa0
	ctx.lr = 0x8220BB8C;
	sub_820F9AA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
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
loc_8220BBA8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
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
loc_8220BBC4:
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// bgt cr6,0x8220bcd8
	if (ctx.cr6.gt) goto loc_8220BCD8;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-17436
	ctx.r12.s64 = ctx.r12.s64 + -17436;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8220BCCC;
	case 1:
		goto loc_8220BCD8;
	case 2:
		goto loc_8220BCD8;
	case 3:
		goto loc_8220BCD8;
	case 4:
		goto loc_8220BCD8;
	case 5:
		goto loc_8220BCD8;
	case 6:
		goto loc_8220BCD8;
	case 7:
		goto loc_8220BCD8;
	case 8:
		goto loc_8220BCD8;
	case 9:
		goto loc_8220BCD8;
	case 10:
		goto loc_8220BC34;
	case 11:
		goto loc_8220BCD8;
	case 12:
		goto loc_8220BCD8;
	case 13:
		goto loc_8220BC54;
	case 14:
		goto loc_8220BCD8;
	case 15:
		goto loc_8220BCD8;
	case 16:
		goto loc_8220BCD8;
	case 17:
		goto loc_8220BCD8;
	case 18:
		goto loc_8220BCD8;
	case 19:
		goto loc_8220BC88;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-17204(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17204);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17356(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17356);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17324(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17324);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17192(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17192);
	// lwz r17,-17272(0)
	ctx.r17.u64 = PPC_LOAD_U32(-17272);
loc_8220BC34:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9aa0
	ctx.lr = 0x8220BC40;
	sub_820F9AA0(ctx, base);
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
loc_8220BC54:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
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
loc_8220BC70:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8220bccc
	if (ctx.cr6.eq) goto loc_8220BCCC;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x8220bca4
	if (ctx.cr6.eq) goto loc_8220BCA4;
	// cmpwi cr6,r4,19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19, ctx.xer);
	// bne cr6,0x8220bcd8
	if (!ctx.cr6.eq) goto loc_8220BCD8;
loc_8220BC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220b8f8
	ctx.lr = 0x8220BC90;
	sub_8220B8F8(ctx, base);
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
loc_8220BCA4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9aa0
	ctx.lr = 0x8220BCB0;
	sub_820F9AA0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
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
loc_8220BCCC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9cb8
	ctx.lr = 0x8220BCD8;
	sub_820F9CB8(ctx, base);
loc_8220BCD8:
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

__attribute__((alias("__imp__sub_8220BCEC"))) PPC_WEAK_FUNC(sub_8220BCEC);
PPC_FUNC_IMPL(__imp__sub_8220BCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BCF0"))) PPC_WEAK_FUNC(sub_8220BCF0);
PPC_FUNC_IMPL(__imp__sub_8220BCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// sth r10,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r10.u16);
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bne cr6,0x8220bd24
	if (!ctx.cr6.eq) goto loc_8220BD24;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8220BD24:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220bd30
	if (!ctx.cr6.eq) goto loc_8220BD30;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8220BD30:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8220BD44;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BD54"))) PPC_WEAK_FUNC(sub_8220BD54);
PPC_FUNC_IMPL(__imp__sub_8220BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BD58"))) PPC_WEAK_FUNC(sub_8220BD58);
PPC_FUNC_IMPL(__imp__sub_8220BD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8220BD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8220bfc8
	if (ctx.cr6.gt) goto loc_8220BFC8;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-17012
	ctx.r12.s64 = ctx.r12.s64 + -17012;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220BFBC;
	case 1:
		goto loc_8220BD9C;
	case 2:
		goto loc_8220BE34;
	case 3:
		goto loc_8220BDDC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-16452(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16452);
	// lwz r17,-16996(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16996);
	// lwz r17,-16844(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16844);
	// lwz r17,-16932(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16932);
loc_8220BD9C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x821f7088
	ctx.lr = 0x8220BDC0;
	sub_821F7088(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821f6af0
	ctx.lr = 0x8220BDD4;
	sub_821F6AF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220BDDC:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x8220bfc8
	if (!ctx.cr6.eq) goto loc_8220BFC8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8220bfc8
	if (!ctx.cr6.eq) goto loc_8220BFC8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8220bfc8
	if (!ctx.cr6.eq) goto loc_8220BFC8;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,22401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22401, ctx.r10.u8);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// lwz r4,24(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x821f6af0
	ctx.lr = 0x8220BE20;
	sub_821F6AF0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220BE34:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8220bfc8
	if (ctx.cr6.gt) goto loc_8220BFC8;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r29,r11,14528
	ctx.r29.s64 = ctx.r11.s64 + 14528;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r28,r11,-18560
	ctx.r28.s64 = ctx.r11.s64 + -18560;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-16784
	ctx.r12.s64 = ctx.r12.s64 + -16784;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8220BE88;
	case 1:
		goto loc_8220BEB8;
	case 2:
		goto loc_8220BEEC;
	case 3:
		goto loc_8220BF14;
	case 4:
		goto loc_8220BF54;
	case 5:
		goto loc_8220BF84;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-16760(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16760);
	// lwz r17,-16712(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16712);
	// lwz r17,-16660(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16660);
	// lwz r17,-16620(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16620);
	// lwz r17,-16556(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16556);
	// lwz r17,-16508(0)
	ctx.r17.u64 = PPC_LOAD_U32(-16508);
loc_8220BE88:
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// bl 0x822036f0
	ctx.lr = 0x8220BE9C;
	sub_822036F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd498
	ctx.lr = 0x8220BEAC;
	sub_821FD498(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
loc_8220BEB8:
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220becc
	if (!ctx.cr6.eq) goto loc_8220BECC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220BECC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220bfc8
	if (!ctx.cr6.eq) goto loc_8220BFC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203960
	ctx.lr = 0x8220BEE0;
	sub_82203960(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_8220BEEC:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// bl 0x821f70a0
	ctx.lr = 0x8220BEFC;
	sub_821F70A0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220bfc8
	if (ctx.cr6.eq) goto loc_8220BFC8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
loc_8220BF14:
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x821f70a0
	ctx.lr = 0x8220BF24;
	sub_821F70A0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220bfc8
	if (!ctx.cr6.eq) goto loc_8220BFC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,22401(r29)
	PPC_STORE_U8(ctx.r29.u32 + 22401, ctx.r11.u8);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x821f6af0
	ctx.lr = 0x8220BF48;
	sub_821F6AF0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8220BF54:
	// lwz r11,22348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8220bfc8
	if (!ctx.cr6.eq) goto loc_8220BFC8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r3,2672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// bl 0x823625f0
	ctx.lr = 0x8220BF70;
	sub_823625F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220bfc8
	if (ctx.cr6.eq) goto loc_8220BFC8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8220BF84:
	// addis r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ade70
	ctx.lr = 0x8220BF90;
	sub_822ADE70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220BFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220BFBC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821fd698
	ctx.lr = 0x8220BFC8;
	sub_821FD698(ctx, base);
loc_8220BFC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220BFD0"))) PPC_WEAK_FUNC(sub_8220BFD0);
PPC_FUNC_IMPL(__imp__sub_8220BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8220BFD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821e9500
	ctx.lr = 0x8220BFF4;
	sub_821E9500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c01c
	if (ctx.cr6.eq) goto loc_8220C01C;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821f0690
	ctx.lr = 0x8220C00C;
	sub_821F0690(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8220c01c
	if (!ctx.cr6.eq) goto loc_8220C01C;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8220C01C;
	sub_82367A40(ctx, base);
loc_8220C01C:
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,15844
	ctx.r3.s64 = ctx.r11.s64 + 15844;
	// bl 0x82230c10
	ctx.lr = 0x8220C02C;
	sub_82230C10(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8220c080
	if (!ctx.cr6.eq) goto loc_8220C080;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8220C03C;
	sub_82367A40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,16792
	ctx.r6.s64 = ctx.r11.s64 + 16792;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82224dd0
	ctx.lr = 0x8220C05C;
	sub_82224DD0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,15844
	ctx.r3.s64 = ctx.r11.s64 + 15844;
	// stb r10,917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 917, ctx.r10.u8);
	// bl 0x822214d8
	ctx.lr = 0x8220C070;
	sub_822214D8(ctx, base);
	// cmpwi cr6,r29,-25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -25, ctx.xer);
	// bne cr6,0x8220c080
	if (!ctx.cr6.eq) goto loc_8220C080;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,927(r31)
	PPC_STORE_U8(ctx.r31.u32 + 927, ctx.r9.u8);
loc_8220C080:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r8,930(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 930);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-29004
	ctx.r29.s64 = ctx.r11.s64 + -29004;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r28,r11,3672
	ctx.r28.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r27,r11,10416
	ctx.r27.s64 = ctx.r11.s64 + 10416;
	// beq cr6,0x8220c0dc
	if (ctx.cr6.eq) goto loc_8220C0DC;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,-17512
	ctx.r7.s64 = ctx.r11.s64 + -17512;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e6928
	ctx.lr = 0x8220C0D8;
	sub_821E6928(ctx, base);
	// stb r30,930(r31)
	PPC_STORE_U8(ctx.r31.u32 + 930, ctx.r30.u8);
loc_8220C0DC:
	// lbz r7,931(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 931);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220c118
	if (ctx.cr6.eq) goto loc_8220C118;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e6928
	ctx.lr = 0x8220C114;
	sub_821E6928(ctx, base);
	// stb r30,931(r31)
	PPC_STORE_U8(ctx.r31.u32 + 931, ctx.r30.u8);
loc_8220C118:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C120"))) PPC_WEAK_FUNC(sub_8220C120);
PPC_FUNC_IMPL(__imp__sub_8220C120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbz r11,917(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 917);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8220c16c
	if (!ctx.cr6.eq) goto loc_8220C16C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,31004
	ctx.r9.u64 = ctx.r10.u64 | 31004;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8220c240
	if (!ctx.cr6.eq) goto loc_8220C240;
	// stb r4,920(r8)
	PPC_STORE_U8(ctx.r8.u32 + 920, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220C16C:
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r7,16264
	ctx.r7.s64 = ctx.r7.s64 + 16264;
	// bne cr6,0x8220c1c4
	if (!ctx.cr6.eq) goto loc_8220C1C4;
	// addi r10,r10,-29856
	ctx.r10.s64 = ctx.r10.s64 + -29856;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,-32
	ctx.r5.s64 = ctx.r10.s64 + -32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C1B4;
	sub_821E6928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220C1C4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8220c21c
	if (!ctx.cr6.eq) goto loc_8220C21C;
	// addi r10,r10,-29856
	ctx.r10.s64 = ctx.r10.s64 + -29856;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,224
	ctx.r5.s64 = ctx.r10.s64 + 224;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C1F4;
	sub_821E6928(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b1dc8
	ctx.lr = 0x8220C20C;
	sub_822B1DC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220C21C:
	// addi r5,r10,-29856
	ctx.r5.s64 = ctx.r10.s64 + -29856;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C240;
	sub_821E6928(ctx, base);
loc_8220C240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C250"))) PPC_WEAK_FUNC(sub_8220C250);
PPC_FUNC_IMPL(__imp__sub_8220C250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r7,-17512
	ctx.r7.s64 = ctx.r7.s64 + -17512;
	// bne cr6,0x8220c2b8
	if (!ctx.cr6.eq) goto loc_8220C2B8;
	// addi r10,r10,-29800
	ctx.r10.s64 = ctx.r10.s64 + -29800;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,-32
	ctx.r5.s64 = ctx.r10.s64 + -32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C2A8;
	sub_821E6928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220C2B8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8220c2f8
	if (!ctx.cr6.eq) goto loc_8220C2F8;
	// addi r10,r10,-29800
	ctx.r10.s64 = ctx.r10.s64 + -29800;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,188
	ctx.r5.s64 = ctx.r10.s64 + 188;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C2E8;
	sub_821E6928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8220C2F8:
	// addi r5,r10,-29800
	ctx.r5.s64 = ctx.r10.s64 + -29800;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C31C;
	sub_821E6928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C32C"))) PPC_WEAK_FUNC(sub_8220C32C);
PPC_FUNC_IMPL(__imp__sub_8220C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C330"))) PPC_WEAK_FUNC(sub_8220C330);
PPC_FUNC_IMPL(__imp__sub_8220C330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8220C338;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r10,-30216
	ctx.r5.s64 = ctx.r10.s64 + -30216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,15512
	ctx.r7.s64 = ctx.r11.s64 + 15512;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x8220C384;
	sub_821E6928(ctx, base);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mulli r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 * 56;
	// stb r30,918(r31)
	PPC_STORE_U8(ctx.r31.u32 + 918, ctx.r30.u8);
	// addi r29,r10,26752
	ctx.r29.s64 = ctx.r10.s64 + 26752;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,3
	ctx.r9.s64 = 3;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r6,r29,3
	ctx.r6.s64 = ctx.r29.s64 + 196608;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stb r10,920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 920, ctx.r10.u8);
	// stb r9,917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 917, ctx.r9.u8);
	// addi r3,r6,15720
	ctx.r3.s64 = ctx.r6.s64 + 15720;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r8,-32616
	ctx.r8.s64 = ctx.r8.s64 + -32616;
	// stb r28,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r28.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// bl 0x82231538
	ctx.lr = 0x8220C3E0;
	sub_82231538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,919(r31)
	PPC_STORE_U8(ctx.r31.u32 + 919, ctx.r30.u8);
	// bl 0x8222a678
	ctx.lr = 0x8220C3EC;
	sub_8222A678(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x8221f518
	ctx.lr = 0x8220C3F8;
	sub_8221F518(ctx, base);
	// stb r28,925(r31)
	PPC_STORE_U8(ctx.r31.u32 + 925, ctx.r28.u8);
	// stb r30,926(r31)
	PPC_STORE_U8(ctx.r31.u32 + 926, ctx.r30.u8);
	// stb r30,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r30.u8);
	// stb r30,933(r31)
	PPC_STORE_U8(ctx.r31.u32 + 933, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C410"))) PPC_WEAK_FUNC(sub_8220C410);
PPC_FUNC_IMPL(__imp__sub_8220C410) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220c454
	if (!ctx.cr6.eq) goto loc_8220C454;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203d10
	ctx.lr = 0x8220C438;
	sub_82203D10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,933(r31)
	PPC_STORE_U8(ctx.r31.u32 + 933, ctx.r11.u8);
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
loc_8220C454:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,933(r31)
	PPC_STORE_U8(ctx.r31.u32 + 933, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8220C470"))) PPC_WEAK_FUNC(sub_8220C470);
PPC_FUNC_IMPL(__imp__sub_8220C470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8220C478;
	__savegprlr_26(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x8220C490;
	sub_82368400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c520
	if (!ctx.cr6.eq) goto loc_8220C520;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-29956
	ctx.r30.s64 = ctx.r11.s64 + -29956;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C4B8;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// bl 0x82361f50
	ctx.lr = 0x8220C4C4;
	sub_82361F50(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C4D0;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// bl 0x82361f50
	ctx.lr = 0x8220C4DC;
	sub_82361F50(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C4E8;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// bl 0x82361f50
	ctx.lr = 0x8220C4F4;
	sub_82361F50(ctx, base);
	// lbz r9,916(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 916);
	// addi r10,r30,-148
	ctx.r10.s64 = ctx.r30.s64 + -148;
	// mulli r11,r9,21
	ctx.r11.s64 = ctx.r9.s64 * 21;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C50C;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// bl 0x82361f50
	ctx.lr = 0x8220C518;
	sub_82361F50(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220C520:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8222fbc0
	ctx.lr = 0x8220C528;
	sub_8222FBC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x823682a0
	ctx.lr = 0x8220C534;
	sub_823682A0(ctx, base);
	// lbz r11,919(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 919);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,764(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 764);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8220c600
	if (!ctx.cr6.lt) goto loc_8220C600;
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r11,r7,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x7;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220c580
	if (ctx.cr6.eq) goto loc_8220C580;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8220c580
	if (ctx.cr6.eq) goto loc_8220C580;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8220c580
	if (ctx.cr6.eq) goto loc_8220C580;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-29956
	ctx.r29.s64 = ctx.r11.s64 + -29956;
	// addi r27,r29,-20
	ctx.r27.s64 = ctx.r29.s64 + -20;
	// b 0x8220c58c
	goto loc_8220C58C;
loc_8220C580:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-29956
	ctx.r29.s64 = ctx.r11.s64 + -29956;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8220C58C:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,32232
	ctx.r11.s64 = ctx.r11.s64 + 32232;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r30,r10,23504
	ctx.r30.s64 = ctx.r10.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8210fcf8
	ctx.lr = 0x8220C5B4;
	sub_8210FCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C5C4;
	sub_8210FCF8(ctx, base);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r26,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r26.u16);
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8220c5e4
	if (!ctx.cr6.eq) goto loc_8220C5E4;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_8220C5E4:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8220C5FC;
	sub_8236B2F8(ctx, base);
	// b 0x8220c700
	goto loc_8220C700;
loc_8220C600:
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r9,r3,24,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x7;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8220c650
	if (ctx.cr6.eq) goto loc_8220C650;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8220c650
	if (ctx.cr6.eq) goto loc_8220C650;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8220c650
	if (ctx.cr6.eq) goto loc_8220C650;
	// addi r10,r11,97
	ctx.r10.s64 = ctx.r11.s64 + 97;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ldx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x82104af8
	ctx.lr = 0x8220C640;
	sub_82104AF8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-29956
	ctx.r29.s64 = ctx.r11.s64 + -29956;
	// addi r28,r29,-20
	ctx.r28.s64 = ctx.r29.s64 + -20;
	// b 0x8220c688
	goto loc_8220C688;
loc_8220C650:
	// lbz r8,764(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 764);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// bl 0x822210a8
	ctx.lr = 0x8220C664;
	sub_822210A8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82104a80
	ctx.lr = 0x8220C67C;
	sub_82104A80(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-29956
	ctx.r29.s64 = ctx.r11.s64 + -29956;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8220C688:
	// lbz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8220c6d8
	if (!ctx.cr6.eq) goto loc_8220C6D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// bl 0x8210fcf8
	ctx.lr = 0x8220C6A4;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r26,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, ctx.r26.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8220C6D4;
	sub_8236B2F8(ctx, base);
	// b 0x8220c700
	goto loc_8220C700;
loc_8220C6D8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C6E0;
	sub_8210FCF8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C6F0;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// bl 0x821ee418
	ctx.lr = 0x8220C700;
	sub_821EE418(ctx, base);
loc_8220C700:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,24,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mulli r10,r10,25
	ctx.r10.s64 = ctx.r10.s64 * 25;
	// addi r11,r11,27744
	ctx.r11.s64 = ctx.r11.s64 + 27744;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C720;
	sub_8210FCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C730;
	sub_8210FCF8(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r26,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r26.u16);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8220c750
	if (!ctx.cr6.eq) goto loc_8220C750;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_8220C750:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8220C768;
	sub_8236B2F8(ctx, base);
	// lwz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// rlwinm r8,r9,21,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8220C780;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x8212e710
	ctx.lr = 0x8220C790;
	sub_8212E710(ctx, base);
	// lbz r7,916(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 916);
	// addi r10,r29,-148
	ctx.r10.s64 = ctx.r29.s64 + -148;
	// mulli r11,r7,21
	ctx.r11.s64 = ctx.r7.s64 * 21;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8220C7A8;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// bl 0x82361f50
	ctx.lr = 0x8220C7B4;
	sub_82361F50(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,929(r31)
	PPC_STORE_U8(ctx.r31.u32 + 929, ctx.r6.u8);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C7C4"))) PPC_WEAK_FUNC(sub_8220C7C4);
PPC_FUNC_IMPL(__imp__sub_8220C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C7C8"))) PPC_WEAK_FUNC(sub_8220C7C8);
PPC_FUNC_IMPL(__imp__sub_8220C7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,-29380
	ctx.r5.s64 = ctx.r10.s64 + -29380;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r7,r11,-17512
	ctx.r7.s64 = ctx.r11.s64 + -17512;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220C814;
	sub_821E6928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C824"))) PPC_WEAK_FUNC(sub_8220C824);
PPC_FUNC_IMPL(__imp__sub_8220C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C828"))) PPC_WEAK_FUNC(sub_8220C828);
PPC_FUNC_IMPL(__imp__sub_8220C828) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8220c8c4
	if (!ctx.cr6.eq) goto loc_8220C8C4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369aa8
	ctx.lr = 0x8220C858;
	sub_82369AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c8b8
	if (ctx.cr6.eq) goto loc_8220C8B8;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369930
	ctx.lr = 0x8220C86C;
	sub_82369930(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x8220c8b8
	if (!ctx.cr6.gt) goto loc_8220C8B8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,-29712
	ctx.r5.s64 = ctx.r10.s64 + -29712;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r7,r11,16144
	ctx.r7.s64 = ctx.r11.s64 + 16144;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220C8B4;
	sub_821E6928(ctx, base);
	// b 0x8220c8c4
	goto loc_8220C8C4;
loc_8220C8B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82203d10
	ctx.lr = 0x8220C8C4;
	sub_82203D10(ctx, base);
loc_8220C8C4:
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

__attribute__((alias("__imp__sub_8220C8DC"))) PPC_WEAK_FUNC(sub_8220C8DC);
PPC_FUNC_IMPL(__imp__sub_8220C8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C8E0"))) PPC_WEAK_FUNC(sub_8220C8E0);
PPC_FUNC_IMPL(__imp__sub_8220C8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8220C8E8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220cb20
	if (ctx.cr6.eq) goto loc_8220CB20;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8220cb80
	if (!ctx.cr6.eq) goto loc_8220CB80;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220ca44
	if (ctx.cr6.lt) goto loc_8220CA44;
	// bne cr6,0x8220cb80
	if (!ctx.cr6.eq) goto loc_8220CB80;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8220c958
	if (!ctx.cr6.gt) goto loc_8220C958;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
loc_8220C938:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220c954
	if (ctx.cr6.eq) goto loc_8220C954;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8220c938
	if (ctx.cr6.lt) goto loc_8220C938;
	// b 0x8220c958
	goto loc_8220C958;
loc_8220C954:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8220C958:
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8220c98c
	if (!ctx.cr6.eq) goto loc_8220C98C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-28968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28968);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8220cb80
	if (ctx.cr6.lt) goto loc_8220CB80;
	// bso cr6,0x8220cb80
	if (ctx.cr6.so) goto loc_8220CB80;
loc_8220C98C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r29,r11,11600
	ctx.r29.s64 = ctx.r11.s64 + 11600;
loc_8220C994:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bne cr6,0x8220c9a8
	if (!ctx.cr6.eq) goto loc_8220C9A8;
	// bl 0x82365698
	ctx.lr = 0x8220C9A4;
	sub_82365698(ctx, base);
	// b 0x8220c9bc
	goto loc_8220C9BC;
loc_8220C9A8:
	// bl 0x82365698
	ctx.lr = 0x8220C9AC;
	sub_82365698(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// ble cr6,0x8220c9bc
	if (!ctx.cr6.gt) goto loc_8220C9BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8220C9BC:
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// addi r9,r3,18
	ctx.r9.s64 = ctx.r3.s64 + 18;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r29,424
	ctx.r8.s64 = ctx.r29.s64 + 424;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ldx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// addi r3,r29,472
	ctx.r3.s64 = ctx.r29.s64 + 472;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// stdx r6,r5,r8
	PPC_STORE_U64(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u64);
	// lwzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stwx r11,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// blt cr6,0x8220c994
	if (ctx.cr6.lt) goto loc_8220C994;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203578
	ctx.lr = 0x8220CA00;
	sub_82203578(ctx, base);
	// lis r10,30785
	ctx.r10.s64 = 2017525760;
	// lis r9,-27576
	ctx.r9.s64 = -1807220736;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,1617
	ctx.r4.u64 = ctx.r10.u64 | 1617;
	// ori r8,r9,14885
	ctx.r8.u64 = ctx.r9.u64 | 14885;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220CA28;
	sub_820A38E8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// bl 0x821fec30
	ctx.lr = 0x8220CA38;
	sub_821FEC30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220CA44:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8220CA54;
	sub_8210B3C8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lfs f11,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8220CA70;
	sub_82365698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 3;
	// addi r11,r11,31360
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// ldx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// lfs f31,2864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// cmpld cr6,r6,r10
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x8220cab4
	if (!ctx.cr6.eq) goto loc_8220CAB4;
	// addi r5,r30,18
	ctx.r5.s64 = ctx.r30.s64 + 18;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8220cae0
	if (ctx.cr6.eq) goto loc_8220CAE0;
loc_8220CAB4:
	// addi r8,r30,18
	ctx.r8.s64 = ctx.r30.s64 + 18;
	// stdx r10,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u64);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
	// lfs f9,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// ble cr6,0x8220cae0
	if (!ctx.cr6.gt) goto loc_8220CAE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204290
	ctx.lr = 0x8220CAE0;
	sub_82204290(ctx, base);
loc_8220CAE0:
	// lfs f8,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// bgt cr6,0x8220cb80
	if (ctx.cr6.gt) goto loc_8220CB80;
	// bso cr6,0x8220cb80
	if (ctx.cr6.so) goto loc_8220CB80;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f0,128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r28.u8);
	// bl 0x82204290
	ctx.lr = 0x8220CB0C;
	sub_82204290(ctx, base);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stb r28,96(r6)
	PPC_STORE_U8(ctx.r6.u32 + 96, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220CB20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28968
	ctx.r11.s64 = ctx.r11.s64 + -28968;
	// addi r9,r31,72
	ctx.r9.s64 = ctx.r31.s64 + 72;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_8220CB48:
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r30,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8220cb48
	if (ctx.cr6.lt) goto loc_8220CB48;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,31360
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82201f70
	ctx.lr = 0x8220CB80;
	sub_82201F70(ctx, base);
loc_8220CB80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220CB8C"))) PPC_WEAK_FUNC(sub_8220CB8C);
PPC_FUNC_IMPL(__imp__sub_8220CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220CB90"))) PPC_WEAK_FUNC(sub_8220CB90);
PPC_FUNC_IMPL(__imp__sub_8220CB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8220CB98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r10,-28848
	ctx.r31.s64 = ctx.r10.s64 + -28848;
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220cbc0
	if (ctx.cr6.lt) goto loc_8220CBC0;
	// bne cr6,0x8220cbc8
	if (!ctx.cr6.eq) goto loc_8220CBC8;
	// addi r28,r31,-44
	ctx.r28.s64 = ctx.r31.s64 + -44;
	// b 0x8220cbcc
	goto loc_8220CBCC;
loc_8220CBC0:
	// addi r28,r31,-68
	ctx.r28.s64 = ctx.r31.s64 + -68;
	// b 0x8220cbcc
	goto loc_8220CBCC;
loc_8220CBC8:
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8220CBCC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8220CBE4;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821fcb38
	ctx.lr = 0x8220CC00;
	sub_821FCB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8210d9f8
	ctx.lr = 0x8220CC14;
	sub_8210D9F8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r7,r11,17384
	ctx.r7.s64 = ctx.r11.s64 + 17384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821e6928
	ctx.lr = 0x8220CC4C;
	sub_821E6928(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// stb r9,360(r30)
	PPC_STORE_U8(ctx.r30.u32 + 360, ctx.r9.u8);
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x8220CC74;
	sub_822C5960(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220CC7C"))) PPC_WEAK_FUNC(sub_8220CC7C);
PPC_FUNC_IMPL(__imp__sub_8220CC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220CC80"))) PPC_WEAK_FUNC(sub_8220CC80);
PPC_FUNC_IMPL(__imp__sub_8220CC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8220CC88;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8220CCA0;
	sub_8210B3C8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8220ccb8
	if (!ctx.cr6.eq) goto loc_8220CCB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220CCB8:
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r10,26752
	ctx.r31.s64 = ctx.r10.s64 + 26752;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82370928
	ctx.lr = 0x8220CCCC;
	sub_82370928(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8220CCE4;
	sub_8210CF48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8220ce2c
	if (ctx.cr6.eq) goto loc_8220CE2C;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8220CCFC;
	sub_8210D3F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82366a00
	ctx.lr = 0x8220CD10;
	sub_82366A00(ctx, base);
	// bl 0x8210b0b0
	ctx.lr = 0x8220CD14;
	sub_8210B0B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-28664
	ctx.r11.s64 = ctx.r11.s64 + -28664;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// ori r10,r10,21504
	ctx.r10.u64 = ctx.r10.u64 | 21504;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r7,r7,18392
	ctx.r7.s64 = ctx.r7.s64 + 18392;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r5,-5432
	ctx.r5.s64 = ctx.r5.s64 + -5432;
	// lwz r9,23500(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// li r4,1234
	ctx.r4.s64 = 1234;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82370968
	ctx.lr = 0x8220CD64;
	sub_82370968(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lwz r10,7584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7584);
	// ori r7,r8,14715
	ctx.r7.u64 = ctx.r8.u64 | 14715;
	// stw r10,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r10.u32);
	// lbzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// ble cr6,0x8220cdfc
	if (!ctx.cr6.gt) goto loc_8220CDFC;
	// addis r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 458752;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r10,14537
	ctx.r5.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220cdc0
	if (ctx.cr6.eq) goto loc_8220CDC0;
	// addis r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 458752;
	// addi r10,r10,14520
	ctx.r10.s64 = ctx.r10.s64 + 14520;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8220cdc4
	if (ctx.cr6.eq) goto loc_8220CDC4;
loc_8220CDC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220CDC4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220cdfc
	if (ctx.cr6.eq) goto loc_8220CDFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// bl 0x8240a760
	ctx.lr = 0x8220CDE0;
	sub_8240A760(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// stw r6,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r6.u32);
	// bl 0x821f04b8
	ctx.lr = 0x8220CDF4;
	sub_821F04B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8220CDFC:
	// li r4,4
	ctx.r4.s64 = 4;
	// addis r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r4.u32);
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82114870
	ctx.lr = 0x8220CE20;
	sub_82114870(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821f04b8
	ctx.lr = 0x8220CE2C;
	sub_821F04B8(ctx, base);
loc_8220CE2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220CE34"))) PPC_WEAK_FUNC(sub_8220CE34);
PPC_FUNC_IMPL(__imp__sub_8220CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220CE38"))) PPC_WEAK_FUNC(sub_8220CE38);
PPC_FUNC_IMPL(__imp__sub_8220CE38) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,14716
	ctx.r9.u64 = ctx.r10.u64 | 14716;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220cf2c
	if (ctx.cr6.eq) goto loc_8220CF2C;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r10,r3,14719
	ctx.r10.u64 = ctx.r3.u64 | 14719;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220cf2c
	if (!ctx.cr6.eq) goto loc_8220CF2C;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,14715
	ctx.r7.u64 = ctx.r8.u64 | 14715;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8220cf10
	if (ctx.cr6.eq) goto loc_8220CF10;
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r9,14537
	ctx.r5.s64 = ctx.r9.s64 + 14537;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220ced4
	if (ctx.cr6.eq) goto loc_8220CED4;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r11,r11,14520
	ctx.r11.s64 = ctx.r11.s64 + 14520;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8220ced8
	if (ctx.cr6.eq) goto loc_8220CED8;
loc_8220CED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220CED8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220cf10
	if (ctx.cr6.eq) goto loc_8220CF10;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// bl 0x8240a760
	ctx.lr = 0x8220CEF4;
	sub_8240A760(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
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
loc_8220CF10:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x82229fa8
	ctx.lr = 0x8220CF20;
	sub_82229FA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204a38
	ctx.lr = 0x8220CF2C;
	sub_82204A38(ctx, base);
loc_8220CF2C:
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

__attribute__((alias("__imp__sub_8220CF40"))) PPC_WEAK_FUNC(sub_8220CF40);
PPC_FUNC_IMPL(__imp__sub_8220CF40) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f258
	ctx.lr = 0x8220CF68;
	sub_8236F258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8220cfd0
	if (ctx.cr6.eq) goto loc_8220CFD0;
	// bge cr6,0x8220cfc0
	if (!ctx.cr6.lt) goto loc_8220CFC0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r4,r11,-28632
	ctx.r4.s64 = ctx.r11.s64 + -28632;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32248
	ctx.r11.s64 = ctx.r11.s64 + 32248;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821e6928
	ctx.lr = 0x8220CFBC;
	sub_821E6928(ctx, base);
	// b 0x8220cfc8
	goto loc_8220CFC8;
loc_8220CFC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822049a8
	ctx.lr = 0x8220CFC8;
	sub_822049A8(ctx, base);
loc_8220CFC8:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f410
	ctx.lr = 0x8220CFD0;
	sub_8236F410(ctx, base);
loc_8220CFD0:
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

__attribute__((alias("__imp__sub_8220CFE8"))) PPC_WEAK_FUNC(sub_8220CFE8);
PPC_FUNC_IMPL(__imp__sub_8220CFE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82229fa8
	ctx.lr = 0x8220D00C;
	sub_82229FA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204a38
	ctx.lr = 0x8220D018;
	sub_82204A38(ctx, base);
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

__attribute__((alias("__imp__sub_8220D02C"))) PPC_WEAK_FUNC(sub_8220D02C);
PPC_FUNC_IMPL(__imp__sub_8220D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D030"))) PPC_WEAK_FUNC(sub_8220D030);
PPC_FUNC_IMPL(__imp__sub_8220D030) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x8220d0e4
	if (ctx.cr6.eq) goto loc_8220D0E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8220d064
	if (ctx.cr6.eq) goto loc_8220D064;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8220D064:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r11.u8);
	// bl 0x8210b050
	ctx.lr = 0x8220D070;
	sub_8210B050(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x8220D090;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220d0ac
	if (ctx.cr6.eq) goto loc_8220D0AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82204920
	ctx.lr = 0x8220D0A8;
	sub_82204920(ctx, base);
	// b 0x8220d0e4
	goto loc_8220D0E4;
loc_8220D0AC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r10,-28632
	ctx.r4.s64 = ctx.r10.s64 + -28632;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r5,r4,188
	ctx.r5.s64 = ctx.r4.s64 + 188;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,18720
	ctx.r7.s64 = ctx.r11.s64 + 18720;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x8220D0E4;
	sub_821E6928(ctx, base);
loc_8220D0E4:
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

__attribute__((alias("__imp__sub_8220D0FC"))) PPC_WEAK_FUNC(sub_8220D0FC);
PPC_FUNC_IMPL(__imp__sub_8220D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D100"))) PPC_WEAK_FUNC(sub_8220D100);
PPC_FUNC_IMPL(__imp__sub_8220D100) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d198
	if (ctx.cr6.eq) goto loc_8220D198;
	// lis r10,-31359
	ctx.r10.s64 = -2055143424;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27095
	ctx.r8.s64 = -1775697920;
	// ori r9,r10,22562
	ctx.r9.u64 = ctx.r10.u64 | 22562;
	// ori r7,r8,44691
	ctx.r7.u64 = ctx.r8.u64 | 44691;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x8220d198
	if (!ctx.cr6.eq) goto loc_8220D198;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8220d18c
	if (!ctx.cr6.eq) goto loc_8220D18C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8220D168;
	sub_82367A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224dd0
	ctx.lr = 0x8220D180;
	sub_82224DD0(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r5,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r5.u32);
	// b 0x8220d198
	goto loc_8220D198;
loc_8220D18C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82204a38
	ctx.lr = 0x8220D198;
	sub_82204A38(ctx, base);
loc_8220D198:
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

__attribute__((alias("__imp__sub_8220D1B0"))) PPC_WEAK_FUNC(sub_8220D1B0);
PPC_FUNC_IMPL(__imp__sub_8220D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8220D1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220d240
	if (ctx.cr6.eq) goto loc_8220D240;
	// bl 0x82204ec8
	ctx.lr = 0x8220D1E0;
	sub_82204EC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8220d240
	if (!ctx.cr6.eq) goto loc_8220D240;
	// lwz r7,588(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8220d30c
	if (!ctx.cr6.eq) goto loc_8220D30C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,-28364
	ctx.r5.s64 = ctx.r10.s64 + -28364;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r7,r11,20744
	ctx.r7.s64 = ctx.r11.s64 + 20744;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220D238;
	sub_821E6928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220D240:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-18560
	ctx.r30.s64 = ctx.r11.s64 + -18560;
	// li r5,295
	ctx.r5.s64 = 295;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c5988
	ctx.lr = 0x8220D260;
	sub_822C5988(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x8220D26C;
	sub_821E69F0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lwz r6,420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// addi r10,r10,8984
	ctx.r10.s64 = ctx.r10.s64 + 8984;
	// addi r5,r10,3648
	ctx.r5.s64 = ctx.r10.s64 + 3648;
	// lwz r29,552(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mulli r11,r6,3672
	ctx.r11.s64 = ctx.r6.s64 * 3672;
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bne cr6,0x8220d2b0
	if (!ctx.cr6.eq) goto loc_8220D2B0;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r9,r3,51969
	ctx.r9.u64 = ctx.r3.u64 | 51969;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220d2e8
	if (ctx.cr6.eq) goto loc_8220D2E8;
loc_8220D2B0:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820bbec0
	ctx.lr = 0x8220D2B8;
	sub_820BBEC0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220d2e8
	if (ctx.cr6.eq) goto loc_8220D2E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// stb r7,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r7.u8);
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c5960
	ctx.lr = 0x8220D2E0;
	sub_822C5960(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8220D2E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// stb r29,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r29.u8);
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c5960
	ctx.lr = 0x8220D308;
	sub_822C5960(ctx, base);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
loc_8220D30C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D314"))) PPC_WEAK_FUNC(sub_8220D314);
PPC_FUNC_IMPL(__imp__sub_8220D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D318"))) PPC_WEAK_FUNC(sub_8220D318);
PPC_FUNC_IMPL(__imp__sub_8220D318) {
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
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220d368
	if (ctx.cr6.eq) goto loc_8220D368;
	// bl 0x82204ec8
	ctx.lr = 0x8220D350;
	sub_82204EC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8220d458
	if (!ctx.cr6.eq) goto loc_8220D458;
	// lwz r7,588(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8220d458
	if (ctx.cr6.eq) goto loc_8220D458;
loc_8220D368:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r5,294
	ctx.r5.s64 = 294;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c5988
	ctx.lr = 0x8220D388;
	sub_822C5988(ctx, base);
	// lwz r6,420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mulli r10,r6,3672
	ctx.r10.s64 = ctx.r6.s64 * 3672;
	// addi r11,r11,8984
	ctx.r11.s64 = ctx.r11.s64 + 8984;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d3b8
	if (ctx.cr6.eq) goto loc_8220D3B8;
	// lbz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220d3bc
	if (!ctx.cr6.eq) goto loc_8220D3BC;
loc_8220D3B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220D3BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d458
	if (ctx.cr6.eq) goto loc_8220D458;
	// lbz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 424);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,425(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 425);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r8,425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 425, ctx.r8.u8);
	// bl 0x820bbe80
	ctx.lr = 0x8220D3E4;
	sub_820BBE80(ctx, base);
	// lbz r6,424(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 424);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r4,425(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 425);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8220d410
	if (!ctx.cr6.gt) goto loc_8220D410;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 425, ctx.r10.u8);
loc_8220D410:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,51969
	ctx.r8.u64 = ctx.r9.u64 | 51969;
	// lbzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220d42c
	if (ctx.cr6.eq) goto loc_8220D42C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204f88
	ctx.lr = 0x8220D42C;
	sub_82204F88(ctx, base);
loc_8220D42C:
	// lbz r6,424(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 424);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r5,420(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// mulli r3,r5,19200
	ctx.r3.s64 = ctx.r5.s64 * 19200;
	// lbz r10,425(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 425);
	// addi r9,r11,-28327
	ctx.r9.s64 = ctx.r11.s64 + -28327;
	// stbx r10,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u8);
loc_8220D458:
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

__attribute__((alias("__imp__sub_8220D470"))) PPC_WEAK_FUNC(sub_8220D470);
PPC_FUNC_IMPL(__imp__sub_8220D470) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lbz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 424);
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r7,r9,19200
	ctx.r7.s64 = ctx.r9.s64 * 19200;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r11,-28327
	ctx.r5.s64 = ctx.r11.s64 + -28327;
	// lbz r6,425(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 425);
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
	// bl 0x82204b48
	ctx.lr = 0x8220D4B4;
	sub_82204B48(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r10,r3,51969
	ctx.r10.u64 = ctx.r3.u64 | 51969;
	// stb r4,578(r31)
	PPC_STORE_U8(ctx.r31.u32 + 578, ctx.r4.u8);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220d4e0
	if (ctx.cr6.eq) goto loc_8220D4E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204f88
	ctx.lr = 0x8220D4E0;
	sub_82204F88(ctx, base);
loc_8220D4E0:
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

__attribute__((alias("__imp__sub_8220D4F4"))) PPC_WEAK_FUNC(sub_8220D4F4);
PPC_FUNC_IMPL(__imp__sub_8220D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D4F8"))) PPC_WEAK_FUNC(sub_8220D4F8);
PPC_FUNC_IMPL(__imp__sub_8220D4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8220D500;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220d764
	if (ctx.cr6.eq) goto loc_8220D764;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220d5b4
	if (ctx.cr6.eq) goto loc_8220D5B4;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220d76c
	if (!ctx.cr6.eq) goto loc_8220D76C;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8220d76c
	if (ctx.cr6.gt) goto loc_8220D76C;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-10940
	ctx.r12.s64 = ctx.r12.s64 + -10940;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220D76C;
	case 1:
		goto loc_8220D554;
	case 2:
		goto loc_8220D574;
	case 3:
		goto loc_8220D594;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-10388(0)
	ctx.r17.u64 = PPC_LOAD_U32(-10388);
	// lwz r17,-10924(0)
	ctx.r17.u64 = PPC_LOAD_U32(-10924);
	// lwz r17,-10892(0)
	ctx.r17.u64 = PPC_LOAD_U32(-10892);
	// lwz r17,-10860(0)
	ctx.r17.u64 = PPC_LOAD_U32(-10860);
loc_8220D554:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220D574:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220D58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220D594:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220D5B4:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220d5d8
	if (!ctx.cr6.eq) goto loc_8220D5D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220D5D8:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8220d634
	if (ctx.cr6.eq) goto loc_8220D634;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16236
	ctx.r4.u64 = ctx.r5.u64 | 16236;
	// lwzx r11,r29,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220d600
	if (!ctx.cr6.eq) goto loc_8220D600;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220D600:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d634
	if (!ctx.cr6.eq) goto loc_8220D634;
	// lis r10,-4506
	ctx.r10.s64 = -295305216;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,52856
	ctx.r4.u64 = ctx.r10.u64 | 52856;
	// ori r8,r9,16102
	ctx.r8.u64 = ctx.r9.u64 | 16102;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220D634;
	sub_820A38E8(ctx, base);
loc_8220D634:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r6,r7,51969
	ctx.r6.u64 = ctx.r7.u64 | 51969;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220d76c
	if (ctx.cr6.eq) goto loc_8220D76C;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8220d76c
	if (ctx.cr6.eq) goto loc_8220D76C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lbz r3,22397(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22397);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220d76c
	if (!ctx.cr6.eq) goto loc_8220D76C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x821154b0
	ctx.lr = 0x8220D680;
	sub_821154B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d6a0
	if (!ctx.cr6.eq) goto loc_8220D6A0;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16296
	ctx.r9.u64 = ctx.r10.u64 | 16296;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220d76c
	if (ctx.cr6.eq) goto loc_8220D76C;
loc_8220D6A0:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,37
	ctx.r7.s64 = 2424832;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,49145
	ctx.r6.u64 = ctx.r7.u64 | 49145;
	// lbzx r5,r31,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220d6d4
	if (!ctx.cr6.eq) goto loc_8220D6D4;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// ori r3,r4,49144
	ctx.r3.u64 = ctx.r4.u64 | 49144;
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8220d6d8
	if (ctx.cr6.eq) goto loc_8220D6D8;
loc_8220D6D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8220D6D8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220d76c
	if (!ctx.cr6.eq) goto loc_8220D76C;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// bl 0x822aca88
	ctx.lr = 0x8220D6F8;
	sub_822ACA88(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,52521
	ctx.r7.u64 = ctx.r8.u64 | 52521;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r11,-15216
	ctx.r3.s64 = ctx.r11.s64 + -15216;
	// bl 0x820ac8c8
	ctx.lr = 0x8220D714;
	sub_820AC8C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82114700
	ctx.lr = 0x8220D720;
	sub_82114700(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r6,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r6.u32);
	// bl 0x821fd498
	ctx.lr = 0x8220D73C;
	sub_821FD498(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-26600
	ctx.r3.s64 = ctx.r11.s64 + -26600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82427c40
	ctx.lr = 0x8220D75C;
	sub_82427C40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220D764:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r5.u32);
loc_8220D76C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D774"))) PPC_WEAK_FUNC(sub_8220D774);
PPC_FUNC_IMPL(__imp__sub_8220D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D778"))) PPC_WEAK_FUNC(sub_8220D778);
PPC_FUNC_IMPL(__imp__sub_8220D778) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8220d818
	if (!ctx.cr6.eq) goto loc_8220D818;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,300(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 300);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8220D7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// lis r4,3638
	ctx.r4.s64 = 238419968;
	// ori r11,r3,15958
	ctx.r11.u64 = ctx.r3.u64 | 15958;
	// ori r4,r4,32087
	ctx.r4.u64 = ctx.r4.u64 | 32087;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x8220D7EC;
	sub_82103EC8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x8220D7FC;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x8220D804;
	sub_821F6898(ctx, base);
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
loc_8220D818:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822054d0
	ctx.lr = 0x8220D820;
	sub_822054D0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f6a20
	ctx.lr = 0x8220D82C;
	sub_821F6A20(ctx, base);
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

__attribute__((alias("__imp__sub_8220D840"))) PPC_WEAK_FUNC(sub_8220D840);
PPC_FUNC_IMPL(__imp__sub_8220D840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8220D848;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220dd2c
	if (ctx.cr6.eq) goto loc_8220DD2C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220dc08
	if (ctx.cr6.eq) goto loc_8220DC08;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16228
	ctx.r10.u64 = ctx.r11.u64 | 16228;
	// lwzx r29,r31,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8220d8b8
	if (ctx.cr6.eq) goto loc_8220D8B8;
	// extsb r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	// addi r7,r31,2585
	ctx.r7.s64 = ctx.r31.s64 + 2585;
	// addi r10,r31,1156
	ctx.r10.s64 = ctx.r31.s64 + 1156;
	// li r4,6
	ctx.r4.s64 = 6;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// mulli r11,r5,360
	ctx.r11.s64 = ctx.r5.s64 * 360;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82108a60
	ctx.lr = 0x8220D8B0;
	sub_82108A60(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8211a318
	ctx.lr = 0x8220D8B8;
	sub_8211A318(ctx, base);
loc_8220D8B8:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8220de94
	if (ctx.cr6.gt) goto loc_8220DE94;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-10016
	ctx.r12.s64 = ctx.r12.s64 + -10016;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220D8F4;
	case 1:
		goto loc_8220DB64;
	case 2:
		goto loc_8220DB64;
	case 3:
		goto loc_8220DB64;
	case 4:
		goto loc_8220DAB0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-9996(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9996);
	// lwz r17,-9372(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9372);
	// lwz r17,-9372(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9372);
	// lwz r17,-9372(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9372);
	// lwz r17,-9552(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9552);
loc_8220D8F4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8220de94
	if (ctx.cr6.gt) goto loc_8220DE94;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-9952
	ctx.r12.s64 = ctx.r12.s64 + -9952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220D9CC;
	case 1:
		goto loc_8220D988;
	case 2:
		goto loc_8220D93C;
	case 3:
		goto loc_8220D99C;
	case 4:
		goto loc_8220DE94;
	case 5:
		goto loc_8220DA18;
	case 6:
		goto loc_8220DA64;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-9780(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9780);
	// lwz r17,-9848(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9848);
	// lwz r17,-9924(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9924);
	// lwz r17,-9828(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9828);
	// lwz r17,-8556(0)
	ctx.r17.u64 = PPC_LOAD_U32(-8556);
	// lwz r17,-9704(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9704);
	// lwz r17,-9628(0)
	ctx.r17.u64 = PPC_LOAD_U32(-9628);
loc_8220D93C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r11,-27308
	ctx.r5.s64 = ctx.r11.s64 + -27308;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-27324
	ctx.r4.s64 = ctx.r11.s64 + -27324;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220D978;
	sub_821E6928(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220D988:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82205c40
	ctx.lr = 0x8220D994;
	sub_82205C40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220D99C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-4506
	ctx.r11.s64 = -295305216;
	// ori r9,r10,16102
	ctx.r9.u64 = ctx.r10.u64 | 16102;
	// ori r4,r11,46912
	ctx.r4.u64 = ctx.r11.u64 | 46912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220D9C4;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220D9CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-27344
	ctx.r4.s64 = ctx.r11.s64 + -27344;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220DA08;
	sub_821E6928(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r8,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DA18:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r11,-26528
	ctx.r5.s64 = ctx.r11.s64 + -26528;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-27324
	ctx.r4.s64 = ctx.r11.s64 + -27324;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220DA54;
	sub_821E6928(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DA64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r11,-27308
	ctx.r5.s64 = ctx.r11.s64 + -27308;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,-27324
	ctx.r4.s64 = ctx.r11.s64 + -27324;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x8220DAA0;
	sub_821E6928(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DAB0:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x8220dae4
	if (ctx.cr6.eq) goto loc_8220DAE4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x8220DAD4;
	sub_821E69F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DAE4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e69f0
	ctx.lr = 0x8220DAF4;
	sub_821E69F0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,30785
	ctx.r4.s64 = 2017525760;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27576
	ctx.r11.s64 = -1807220736;
	// ori r4,r4,1617
	ctx.r4.u64 = ctx.r4.u64 | 1617;
	// ori r10,r11,14885
	ctx.r10.u64 = ctx.r11.u64 | 14885;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220DB1C;
	sub_820A38E8(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r8,r9,16236
	ctx.r8.u64 = ctx.r9.u64 | 16236;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a20
	ctx.lr = 0x8220DB54;
	sub_821F6A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x8220DB5C;
	sub_821F6898(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DB64:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x8220db98
	if (ctx.cr6.eq) goto loc_8220DB98;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x8220DB88;
	sub_821E69F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DB98:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e69f0
	ctx.lr = 0x8220DBA4;
	sub_821E69F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104798
	ctx.lr = 0x8220DBB0;
	sub_82104798(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104798
	ctx.lr = 0x8220DBBC;
	sub_82104798(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8220dbd8
	if (!ctx.cr6.eq) goto loc_8220DBD8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82205cf8
	ctx.lr = 0x8220DBD0;
	sub_82205CF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DBD8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220dbf0
	if (!ctx.cr6.eq) goto loc_8220DBF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82205e30
	ctx.lr = 0x8220DBE8;
	sub_82205E30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DBF0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82205eb8
	ctx.lr = 0x8220DC00;
	sub_82205EB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DC08:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220dcdc
	if (ctx.cr6.eq) goto loc_8220DCDC;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,74(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dcdc
	if (ctx.cr6.eq) goto loc_8220DCDC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r7,r11,28544
	ctx.r7.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8220dcdc
	if (!ctx.cr6.gt) goto loc_8220DCDC;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addis r10,r7,35
	ctx.r10.s64 = ctx.r7.s64 + 2293760;
	// addi r11,r11,8984
	ctx.r11.s64 = ctx.r11.s64 + 8984;
	// addi r9,r11,3648
	ctx.r9.s64 = ctx.r11.s64 + 3648;
	// addi r11,r10,-13279
	ctx.r11.s64 = ctx.r10.s64 + -13279;
loc_8220DC88:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dca4
	if (ctx.cr6.eq) goto loc_8220DCA4;
	// lbz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220dca8
	if (!ctx.cr6.eq) goto loc_8220DCA8;
loc_8220DCA4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8220DCA8:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220dcc8
	if (!ctx.cr6.eq) goto loc_8220DCC8;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// ori r8,r10,37004
	ctx.r8.u64 = ctx.r10.u64 | 37004;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_8220DCC8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,3672
	ctx.r9.s64 = ctx.r9.s64 + 3672;
	// addi r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 + 19200;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8220dc88
	if (ctx.cr6.lt) goto loc_8220DC88;
loc_8220DCDC:
	// lwz r7,36(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x8220dd00
	if (ctx.cr6.eq) goto loc_8220DD00;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8220DD00:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220de94
	if (!ctx.cr6.eq) goto loc_8220DE94;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r4.u32);
	// stb r10,22400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22400, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DD2C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// stw r31,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r31.u32);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220dd64
	if (ctx.cr6.eq) goto loc_8220DD64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220DD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220DD64:
	// addi r29,r27,32
	ctx.r29.s64 = ctx.r27.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fc018
	ctx.lr = 0x8220DD70;
	sub_820FC018(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r28,r11,14528
	ctx.r28.s64 = ctx.r11.s64 + 14528;
	// addi r3,r28,7432
	ctx.r3.s64 = ctx.r28.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220DD84;
	sub_821FBF68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aacc8
	ctx.lr = 0x8220DD8C;
	sub_821AACC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82104148
	ctx.lr = 0x8220DD94;
	sub_82104148(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220dda8
	if (ctx.cr6.eq) goto loc_8220DDA8;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x8220ddd0
	goto loc_8220DDD0;
loc_8220DDA8:
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa4b0
	ctx.lr = 0x8220DDBC;
	sub_820FA4B0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,35
	ctx.r4.s64 = 35;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220ddd0
	if (!ctx.cr6.eq) goto loc_8220DDD0;
	// li r4,33
	ctx.r4.s64 = 33;
loc_8220DDD0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821fd498
	ctx.lr = 0x8220DDE0;
	sub_821FD498(ctx, base);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stb r31,22400(r28)
	PPC_STORE_U8(ctx.r28.u32 + 22400, ctx.r31.u8);
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa4b0
	ctx.lr = 0x8220DDF8;
	sub_820FA4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220de10
	if (ctx.cr6.eq) goto loc_8220DE10;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26544
	ctx.r4.s64 = ctx.r11.s64 + -26544;
	// b 0x8220de44
	goto loc_8220DE44;
loc_8220DE10:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa500
	ctx.lr = 0x8220DE24;
	sub_820FA500(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220de3c
	if (ctx.cr6.eq) goto loc_8220DE3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26556
	ctx.r4.s64 = ctx.r11.s64 + -26556;
	// b 0x8220de44
	goto loc_8220DE44;
loc_8220DE3C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-26564
	ctx.r4.s64 = ctx.r11.s64 + -26564;
loc_8220DE44:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x8220DE50;
	sub_8210FCF8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26584
	ctx.r4.s64 = ctx.r11.s64 + -26584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5fb0
	ctx.lr = 0x8220DE64;
	sub_821F5FB0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8220de7c
	if (ctx.cr6.eq) goto loc_8220DE7C;
	// ld r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r7,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r7.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220DE7C:
	// lis r6,30785
	ctx.r6.s64 = 2017525760;
	// lis r4,-27576
	ctx.r4.s64 = -1807220736;
	// ori r5,r6,1617
	ctx.r5.u64 = ctx.r6.u64 | 1617;
	// ori r3,r4,14885
	ctx.r3.u64 = ctx.r4.u64 | 14885;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// std r5,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r5.u64);
loc_8220DE94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220DE9C"))) PPC_WEAK_FUNC(sub_8220DE9C);
PPC_FUNC_IMPL(__imp__sub_8220DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220DEA0"))) PPC_WEAK_FUNC(sub_8220DEA0);
PPC_FUNC_IMPL(__imp__sub_8220DEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8220DEA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,22016
	ctx.r30.s64 = ctx.r11.s64 + 22016;
	// addi r3,r30,1048
	ctx.r3.s64 = ctx.r30.s64 + 1048;
	// bl 0x820e2e70
	ctx.lr = 0x8220DEC0;
	sub_820E2E70(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,98
	ctx.r4.s64 = 98;
	// addi r27,r11,-18560
	ctx.r27.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c5960
	ctx.lr = 0x8220DEE0;
	sub_822C5960(ctx, base);
	// lis r11,-8415
	ctx.r11.s64 = -551485440;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r10,r11,27832
	ctx.r10.u64 = ctx.r11.u64 | 27832;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,-27114
	ctx.r9.s64 = -1776943104;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,24816
	ctx.r6.u64 = ctx.r7.u64 | 24816;
	// ori r8,r9,2197
	ctx.r8.u64 = ctx.r9.u64 | 2197;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// ldx r11,r26,r6
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + ctx.r6.u32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8220e130
	if (ctx.cr6.eq) goto loc_8220E130;
	// lis r29,-32090
	ctx.r29.s64 = -2103050240;
	// lbz r5,-24976(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + -24976);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220df3c
	if (!ctx.cr6.eq) goto loc_8220DF3C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x821fd498
	ctx.lr = 0x8220DF34;
	sub_821FD498(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-24976(r29)
	PPC_STORE_U8(ctx.r29.u32 + -24976, ctx.r11.u8);
loc_8220DF3C:
	// lbz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220dfa8
	if (ctx.cr6.eq) goto loc_8220DFA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-26504
	ctx.r3.s64 = ctx.r11.s64 + -26504;
	// bl 0x82427c40
	ctx.lr = 0x8220DF64;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-776
	ctx.r10.s64 = ctx.r11.s64 + -776;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8220DF70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x8220df94
	if (ctx.cr6.eq) goto loc_8220DF94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220df70
	if (ctx.cr6.eq) goto loc_8220DF70;
loc_8220DF94:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220dfa4
	if (!ctx.cr6.eq) goto loc_8220DFA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220DFA4:
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
loc_8220DFA8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51970
	ctx.r9.u64 = ctx.r10.u64 | 51970;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220e130
	if (ctx.cr6.eq) goto loc_8220E130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,644(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// bl 0x82207048
	ctx.lr = 0x8220DFD0;
	sub_82207048(ctx, base);
	// ld r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 544);
	// cmpld cr6,r7,r11
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8220dff4
	if (!ctx.cr6.eq) goto loc_8220DFF4;
	// lbz r10,624(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 624);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8220e060
	if (ctx.cr6.eq) goto loc_8220E060;
loc_8220DFF4:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8220e038
	if (!ctx.cr6.eq) goto loc_8220E038;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r11,r3,26457
	ctx.r11.u64 = ctx.r3.u64 | 26457;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e028
	if (ctx.cr6.eq) goto loc_8220E028;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r11,624(r30)
	PPC_STORE_U8(ctx.r30.u32 + 624, ctx.r11.u8);
	// b 0x8220e044
	goto loc_8220E044;
loc_8220E028:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r11,624(r30)
	PPC_STORE_U8(ctx.r30.u32 + 624, ctx.r11.u8);
	// b 0x8220e044
	goto loc_8220E044;
loc_8220E038:
	// lbz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 624);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
loc_8220E044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207160
	ctx.lr = 0x8220E04C;
	sub_82207160(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8220e060
	if (!ctx.cr6.eq) goto loc_8220E060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206fe0
	ctx.lr = 0x8220E060;
	sub_82206FE0(ctx, base);
loc_8220E060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207160
	ctx.lr = 0x8220E068;
	sub_82207160(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8220e098
	if (!ctx.cr6.eq) goto loc_8220E098;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8220e098
	if (!ctx.cr6.eq) goto loc_8220E098;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8220e098
	if (ctx.cr6.eq) goto loc_8220E098;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,4796(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4796, ctx.r11.u8);
	// bl 0x822070f8
	ctx.lr = 0x8220E098;
	sub_822070F8(ctx, base);
loc_8220E098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207160
	ctx.lr = 0x8220E0A0;
	sub_82207160(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lfs f0,128(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220e110
	if (ctx.cr6.eq) goto loc_8220E110;
	// addi r11,r11,-28968
	ctx.r11.s64 = ctx.r11.s64 + -28968;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r11,4796(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4796, ctx.r11.u8);
	// bl 0x822070f8
	ctx.lr = 0x8220E0DC;
	sub_822070F8(ctx, base);
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b1dc8
	ctx.lr = 0x8220E0EC;
	sub_822B1DC8(ctx, base);
	// addi r3,r30,1048
	ctx.r3.s64 = ctx.r30.s64 + 1048;
	// ld r4,544(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 544);
	// bl 0x820bbec0
	ctx.lr = 0x8220E0F8;
	sub_820BBEC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r11.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8220E110:
	// lfs f2,-28968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28968);
	ctx.f2.f64 = double(temp.f32);
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x822b1848
	ctx.lr = 0x8220E12C;
	sub_822B1848(ctx, base);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_8220E130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E13C"))) PPC_WEAK_FUNC(sub_8220E13C);
PPC_FUNC_IMPL(__imp__sub_8220E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E140"))) PPC_WEAK_FUNC(sub_8220E140);
PPC_FUNC_IMPL(__imp__sub_8220E140) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220e364
	if (ctx.cr6.eq) goto loc_8220E364;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220e2d0
	if (ctx.cr6.eq) goto loc_8220E2D0;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220e42c
	if (!ctx.cr6.eq) goto loc_8220E42C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8220e42c
	if (!ctx.cr6.eq) goto loc_8220E42C;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x8220e42c
	if (ctx.cr6.gt) goto loc_8220E42C;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-7784
	ctx.r12.s64 = ctx.r12.s64 + -7784;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		goto loc_8220E1AC;
	case 1:
		goto loc_8220E1D8;
	case 2:
		goto loc_8220E204;
	case 3:
		goto loc_8220E230;
	case 4:
		goto loc_8220E260;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-7764(0)
	ctx.r17.u64 = PPC_LOAD_U32(-7764);
	// lwz r17,-7720(0)
	ctx.r17.u64 = PPC_LOAD_U32(-7720);
	// lwz r17,-7676(0)
	ctx.r17.u64 = PPC_LOAD_U32(-7676);
	// lwz r17,-7632(0)
	ctx.r17.u64 = PPC_LOAD_U32(-7632);
	// lwz r17,-7584(0)
	ctx.r17.u64 = PPC_LOAD_U32(-7584);
loc_8220E1AC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27100
	ctx.r10.s64 = -1776025600;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,24161
	ctx.r11.s64 = 1583415296;
	// ori r9,r10,53
	ctx.r9.u64 = ctx.r10.u64 | 53;
	// ori r4,r11,27832
	ctx.r4.u64 = ctx.r11.u64 | 27832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E1D4;
	sub_820A38E8(ctx, base);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E1D8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,23479
	ctx.r8.s64 = 1538719744;
	// lis r7,-27583
	ctx.r7.s64 = -1807679488;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,12096
	ctx.r4.u64 = ctx.r8.u64 | 12096;
	// ori r11,r7,16339
	ctx.r11.u64 = ctx.r7.u64 | 16339;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E200;
	sub_820A38E8(ctx, base);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E204:
	// lis r10,-31359
	ctx.r10.s64 = -2055143424;
	// lis r9,-27095
	ctx.r9.s64 = -1775697920;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,22562
	ctx.r4.u64 = ctx.r10.u64 | 22562;
	// ori r8,r9,44691
	ctx.r8.u64 = ctx.r9.u64 | 44691;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E22C;
	sub_820A38E8(ctx, base);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E230:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,14781
	ctx.r7.s64 = 968687616;
	// addi r5,r11,-31408
	ctx.r5.s64 = ctx.r11.s64 + -31408;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r7,22641
	ctx.r4.u64 = ctx.r7.u64 | 22641;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27113
	ctx.r11.s64 = -1776877568;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r11,29718
	ctx.r10.u64 = ctx.r11.u64 | 29718;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E25C;
	sub_820A38E8(ctx, base);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E260:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14715
	ctx.r8.u64 = ctx.r9.u64 | 14715;
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8220e2a8
	if (ctx.cr6.eq) goto loc_8220E2A8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-31359
	ctx.r4.s64 = -2055143424;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27095
	ctx.r11.s64 = -1775697920;
	// ori r4,r4,22562
	ctx.r4.u64 = ctx.r4.u64 | 22562;
	// ori r10,r11,44691
	ctx.r10.u64 = ctx.r11.u64 | 44691;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r3,7976
	ctx.r5.s64 = ctx.r3.s64 + 7976;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E2A4;
	sub_820A38E8(ctx, base);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E2A8:
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x82114870
	ctx.lr = 0x8220E2C4;
	sub_82114870(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E2D0:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8220e42c
	if (!ctx.cr6.eq) goto loc_8220E42C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,14716
	ctx.r6.u64 = ctx.r7.u64 | 14716;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220e42c
	if (ctx.cr6.eq) goto loc_8220E42C;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,14718
	ctx.r7.u64 = ctx.r8.u64 | 14718;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x8220e42c
	if (ctx.cr6.eq) goto loc_8220E42C;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,14715
	ctx.r4.u64 = ctx.r5.u64 | 14715;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x8220e358
	if (!ctx.cr6.gt) goto loc_8220E358;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27095
	ctx.r10.s64 = -1775697920;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-31359
	ctx.r11.s64 = -2055143424;
	// ori r9,r10,44691
	ctx.r9.u64 = ctx.r10.u64 | 44691;
	// ori r4,r11,22562
	ctx.r4.u64 = ctx.r11.u64 | 22562;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r3,7976
	ctx.r5.s64 = ctx.r3.s64 + 7976;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E354;
	sub_820A38E8(ctx, base);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E358:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// b 0x8220e42c
	goto loc_8220E42C;
loc_8220E364:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r6,51970
	ctx.r5.u64 = ctx.r6.u64 | 51970;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stbx r11,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u8);
	// bl 0x820fef58
	ctx.lr = 0x8220E390;
	sub_820FEF58(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822a4090
	ctx.lr = 0x8220E3A4;
	sub_822A4090(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822a40d8
	ctx.lr = 0x8220E3B0;
	sub_822A40D8(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ad8c8
	ctx.lr = 0x8220E3BC;
	sub_822AD8C8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8220e3e0
	if (!ctx.cr6.eq) goto loc_8220E3E0;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822bf618
	ctx.lr = 0x8220E3D4;
	sub_822BF618(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822bf560
	ctx.lr = 0x8220E3E0;
	sub_822BF560(ctx, base);
loc_8220E3E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd498
	ctx.lr = 0x8220E3F8;
	sub_821FD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7088
	ctx.lr = 0x8220E400;
	sub_821F7088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd698
	ctx.lr = 0x8220E408;
	sub_821FD698(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r11,r3,31004
	ctx.r11.u64 = ctx.r3.u64 | 31004;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e42c
	if (ctx.cr6.eq) goto loc_8220E42C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,31004
	ctx.r8.u64 = ctx.r9.u64 | 31004;
	// stbx r11,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u8);
loc_8220E42C:
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

__attribute__((alias("__imp__sub_8220E444"))) PPC_WEAK_FUNC(sub_8220E444);
PPC_FUNC_IMPL(__imp__sub_8220E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E448"))) PPC_WEAK_FUNC(sub_8220E448);
PPC_FUNC_IMPL(__imp__sub_8220E448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8220E450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220e7e0
	if (ctx.cr6.eq) goto loc_8220E7E0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220e6c4
	if (ctx.cr6.eq) goto loc_8220E6C4;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8220e4cc
	if (ctx.cr6.eq) goto loc_8220E4CC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8288
	ctx.lr = 0x8220E4A4;
	sub_821F8288(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220e4b8
	if (ctx.cr6.eq) goto loc_8220E4B8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f82a0
	ctx.lr = 0x8220E4B8;
	sub_821F82A0(ctx, base);
loc_8220E4B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8280
	ctx.lr = 0x8220E4C4;
	sub_821F8280(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E4CC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8220e514
	if (!ctx.cr6.eq) goto loc_8220E514;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,24161
	ctx.r9.s64 = 1583415296;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r8,-27100
	ctx.r8.s64 = -1776025600;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r4,r9,27832
	ctx.r4.u64 = ctx.r9.u64 | 27832;
	// ori r7,r8,53
	ctx.r7.u64 = ctx.r8.u64 | 53;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stb r10,646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// bl 0x820a38e8
	ctx.lr = 0x8220E50C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E514:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8220e810
	if (ctx.cr6.gt) goto loc_8220E810;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,-6856
	ctx.r12.s64 = ctx.r12.s64 + -6856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8220E624;
	case 1:
		goto loc_8220E5E0;
	case 2:
		goto loc_8220E810;
	case 3:
		goto loc_8220E810;
	case 4:
		goto loc_8220E570;
	case 5:
		goto loc_8220E570;
	case 6:
		goto loc_8220E570;
	case 7:
		goto loc_8220E570;
	case 8:
		goto loc_8220E570;
	case 9:
		goto loc_8220E570;
	case 10:
		goto loc_8220E570;
	case 11:
		goto loc_8220E570;
	case 12:
		goto loc_8220E810;
	case 13:
		goto loc_8220E5D0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-6620(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6620);
	// lwz r17,-6688(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6688);
	// lwz r17,-6128(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6128);
	// lwz r17,-6128(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6128);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6800(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6800);
	// lwz r17,-6128(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6128);
	// lwz r17,-6704(0)
	ctx.r17.u64 = PPC_LOAD_U32(-6704);
loc_8220E570:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8288
	ctx.lr = 0x8220E580;
	sub_821F8288(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220e594
	if (ctx.cr6.eq) goto loc_8220E594;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f82a0
	ctx.lr = 0x8220E594;
	sub_821F82A0(ctx, base);
loc_8220E594:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8280
	ctx.lr = 0x8220E5A0;
	sub_821F8280(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,21805
	ctx.r4.s64 = 1429012480;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27112
	ctx.r11.s64 = -1776812032;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// ori r10,r11,24731
	ctx.r10.u64 = ctx.r11.u64 | 24731;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E5C8;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E5D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82207da8
	ctx.lr = 0x8220E5D8;
	sub_82207DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E5E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,14781
	ctx.r9.s64 = 968687616;
	// addi r5,r11,-31400
	ctx.r5.s64 = ctx.r11.s64 + -31400;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,-27113
	ctx.r8.s64 = -1776877568;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// ori r4,r9,22641
	ctx.r4.u64 = ctx.r9.u64 | 22641;
	// ori r7,r8,29718
	ctx.r7.u64 = ctx.r8.u64 | 29718;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stb r10,646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// bl 0x820a38e8
	ctx.lr = 0x8220E61C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E624:
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addi r10,r10,11600
	ctx.r10.s64 = ctx.r10.s64 + 11600;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r5,r6,14715
	ctx.r5.u64 = ctx.r6.u64 | 14715;
	// stb r9,646(r10)
	PPC_STORE_U8(ctx.r10.u32 + 646, ctx.r9.u8);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r31,r10,-24936
	ctx.r31.s64 = ctx.r10.s64 + -24936;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// beq cr6,0x8220e680
	if (ctx.cr6.eq) goto loc_8220E680;
	// lis r3,-31359
	ctx.r3.s64 = -2055143424;
	// lis r11,-27095
	ctx.r11.s64 = -1775697920;
	// ori r4,r3,22562
	ctx.r4.u64 = ctx.r3.u64 | 22562;
	// ori r10,r11,44691
	ctx.r10.u64 = ctx.r11.u64 | 44691;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,7976
	ctx.r5.s64 = ctx.r31.s64 + 7976;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x8220E67C;
	sub_820A38E8(ctx, base);
	// b 0x8220e6a4
	goto loc_8220E6A4;
loc_8220E680:
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x82114870
	ctx.lr = 0x8220E69C;
	sub_82114870(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
loc_8220E6A4:
	// lis r8,24161
	ctx.r8.s64 = 1583415296;
	// lis r7,-27100
	ctx.r7.s64 = -1776025600;
	// ori r11,r8,27832
	ctx.r11.u64 = ctx.r8.u64 | 27832;
	// ori r6,r7,53
	ctx.r6.u64 = ctx.r7.u64 | 53;
	// rldimi r11,r6,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,7552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7552, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E6C4:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220e76c
	if (ctx.cr6.lt) goto loc_8220E76C;
	// beq cr6,0x8220e79c
	if (ctx.cr6.eq) goto loc_8220E79C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r4,r5,14716
	ctx.r4.u64 = ctx.r5.u64 | 14716;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8220e810
	if (ctx.cr6.eq) goto loc_8220E810;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,14718
	ctx.r5.u64 = ctx.r6.u64 | 14718;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x8220e810
	if (ctx.cr6.eq) goto loc_8220E810;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r10,r3,14715
	ctx.r10.u64 = ctx.r3.u64 | 14715;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// ble cr6,0x8220e75c
	if (!ctx.cr6.gt) goto loc_8220E75C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,-31359
	ctx.r8.s64 = -2055143424;
	// lis r7,-27095
	ctx.r7.s64 = -1775697920;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r4,r8,22562
	ctx.r4.u64 = ctx.r8.u64 | 22562;
	// ori r11,r7,44691
	ctx.r11.u64 = ctx.r7.u64 | 44691;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r3,7976
	ctx.r5.s64 = ctx.r3.s64 + 7976;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220E754;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E75C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E76C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220e788
	if (!ctx.cr6.eq) goto loc_8220E788;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220E788:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r7.u32);
loc_8220E79C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-26484
	ctx.r3.s64 = ctx.r11.s64 + -26484;
	// bl 0x82427c40
	ctx.lr = 0x8220E7B8;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// bl 0x8259cce0
	ctx.lr = 0x8220E7C8;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220e810
	if (!ctx.cr6.eq) goto loc_8220E810;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220E7E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r5.u32);
	// stb r10,646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 646, ctx.r10.u8);
	// bl 0x821f7088
	ctx.lr = 0x8220E808;
	sub_821F7088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd698
	ctx.lr = 0x8220E810;
	sub_821FD698(ctx, base);
loc_8220E810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E818"))) PPC_WEAK_FUNC(sub_8220E818);
PPC_FUNC_IMPL(__imp__sub_8220E818) {
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
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,-27114
	ctx.r10.s64 = -1776943104;
	// addi r31,r11,22016
	ctx.r31.s64 = ctx.r11.s64 + 22016;
	// lis r11,-8415
	ctx.r11.s64 = -551485440;
	// ori r9,r10,2197
	ctx.r9.u64 = ctx.r10.u64 | 2197;
	// ori r4,r11,27832
	ctx.r4.u64 = ctx.r11.u64 | 27832;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820acd58
	ctx.lr = 0x8220E854;
	sub_820ACD58(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,11600
	ctx.r30.s64 = ctx.r11.s64 + 11600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8288
	ctx.lr = 0x8220E864;
	sub_821F8288(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820fd6e8
	ctx.lr = 0x8220E874;
	sub_820FD6E8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220e8f4
	if (ctx.cr6.eq) goto loc_8220E8F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8288
	ctx.lr = 0x8220E890;
	sub_821F8288(ctx, base);
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,16095
	ctx.r9.u64 = ctx.r10.u64 | 16095;
	// addi r5,r11,-32504
	ctx.r5.s64 = ctx.r11.s64 + -32504;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,30785
	ctx.r8.s64 = 2017525760;
	// lis r7,-27576
	ctx.r7.s64 = -1807220736;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// ori r6,r7,14885
	ctx.r6.u64 = ctx.r7.u64 | 14885;
	// stb r10,37(r5)
	PPC_STORE_U8(ctx.r5.u32 + 37, ctx.r10.u8);
	// ori r10,r8,1617
	ctx.r10.u64 = ctx.r8.u64 | 1617;
	// lis r3,29453
	ctx.r3.s64 = 1930231808;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// ori r4,r3,24215
	ctx.r4.u64 = ctx.r3.u64 | 24215;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// stb r10,36(r5)
	PPC_STORE_U8(ctx.r5.u32 + 36, ctx.r10.u8);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// bl 0x820acd58
	ctx.lr = 0x8220E8F4;
	sub_820ACD58(ctx, base);
loc_8220E8F4:
	// lis r3,-27112
	ctx.r3.s64 = -1776812032;
	// lis r4,21805
	ctx.r4.s64 = 1429012480;
	// ori r11,r3,24731
	ctx.r11.u64 = ctx.r3.u64 | 24731;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ad830
	ctx.lr = 0x8220E91C;
	sub_820AD830(ctx, base);
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

__attribute__((alias("__imp__sub_8220E934"))) PPC_WEAK_FUNC(sub_8220E934);
PPC_FUNC_IMPL(__imp__sub_8220E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E938"))) PPC_WEAK_FUNC(sub_8220E938);
PPC_FUNC_IMPL(__imp__sub_8220E938) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8220e968
	if (!ctx.cr6.eq) goto loc_8220E968;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x821f8288
	ctx.lr = 0x8220E960;
	sub_821F8288(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_8220E968:
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

__attribute__((alias("__imp__sub_8220E97C"))) PPC_WEAK_FUNC(sub_8220E97C);
PPC_FUNC_IMPL(__imp__sub_8220E97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E980"))) PPC_WEAK_FUNC(sub_8220E980);
PPC_FUNC_IMPL(__imp__sub_8220E980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8220E988;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220eca4
	if (ctx.cr6.eq) goto loc_8220ECA4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220eb88
	if (ctx.cr6.eq) goto loc_8220EB88;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// lwz r11,888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 888);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8220ea10
	if (ctx.cr6.eq) goto loc_8220EA10;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8298
	ctx.lr = 0x8220E9DC;
	sub_821F8298(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220e9fc
	if (ctx.cr6.eq) goto loc_8220E9FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8280
	ctx.lr = 0x8220E9F0;
	sub_821F8280(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f82a0
	ctx.lr = 0x8220E9FC;
	sub_821F82A0(ctx, base);
loc_8220E9FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8290
	ctx.lr = 0x8220EA08;
	sub_821F8290(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EA10:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8220ea48
	if (!ctx.cr6.eq) goto loc_8220EA48;
	// lis r9,-28144
	ctx.r9.s64 = -1844445184;
	// lis r8,-27105
	ctx.r8.s64 = -1776353280;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r9,51327
	ctx.r4.u64 = ctx.r9.u64 | 51327;
	// ori r7,r8,22369
	ctx.r7.u64 = ctx.r8.u64 | 22369;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x8220EA40;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EA48:
	// cmpwi cr6,r30,-3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -3, ctx.xer);
	// bne cr6,0x8220ea84
	if (!ctx.cr6.eq) goto loc_8220EA84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r4,14781
	ctx.r4.s64 = 968687616;
	// addi r5,r11,-31400
	ctx.r5.s64 = ctx.r11.s64 + -31400;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r4,22641
	ctx.r4.u64 = ctx.r4.u64 | 22641;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27113
	ctx.r11.s64 = -1776877568;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r11,29718
	ctx.r10.u64 = ctx.r11.u64 | 29718;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x8220EA7C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EA84:
	// cmpwi cr6,r30,-4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -4, ctx.xer);
	// bne cr6,0x8220eb1c
	if (!ctx.cr6.eq) goto loc_8220EB1C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14715
	ctx.r8.u64 = ctx.r9.u64 | 14715;
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r31,r10,-24936
	ctx.r31.s64 = ctx.r10.s64 + -24936;
	// beq cr6,0x8220ead8
	if (ctx.cr6.eq) goto loc_8220EAD8;
	// lis r3,-27095
	ctx.r3.s64 = -1775697920;
	// lis r4,-31359
	ctx.r4.s64 = -2055143424;
	// ori r11,r3,44691
	ctx.r11.u64 = ctx.r3.u64 | 44691;
	// ori r4,r4,22562
	ctx.r4.u64 = ctx.r4.u64 | 22562;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,7976
	ctx.r5.s64 = ctx.r31.s64 + 7976;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x8220EAD4;
	sub_820A38E8(ctx, base);
	// b 0x8220eafc
	goto loc_8220EAFC;
loc_8220EAD8:
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x82114870
	ctx.lr = 0x8220EAF4;
	sub_82114870(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 888, ctx.r10.u32);
loc_8220EAFC:
	// lis r9,24161
	ctx.r9.s64 = 1583415296;
	// lis r8,-27100
	ctx.r8.s64 = -1776025600;
	// ori r11,r9,27832
	ctx.r11.u64 = ctx.r9.u64 | 27832;
	// ori r7,r8,53
	ctx.r7.u64 = ctx.r8.u64 | 53;
	// rldimi r11,r7,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,7552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7552, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EB1C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8298
	ctx.lr = 0x8220EB2C;
	sub_821F8298(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220eb4c
	if (ctx.cr6.eq) goto loc_8220EB4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8280
	ctx.lr = 0x8220EB40;
	sub_821F8280(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f82a0
	ctx.lr = 0x8220EB4C;
	sub_821F82A0(ctx, base);
loc_8220EB4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8290
	ctx.lr = 0x8220EB58;
	sub_821F8290(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,18969
	ctx.r4.s64 = 1243152384;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27114
	ctx.r11.s64 = -1776943104;
	// ori r4,r4,27832
	ctx.r4.u64 = ctx.r4.u64 | 27832;
	// ori r10,r11,14479
	ctx.r10.u64 = ctx.r11.u64 | 14479;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x8220EB80;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EB88:
	// lwz r11,888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 888);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220ec30
	if (ctx.cr6.lt) goto loc_8220EC30;
	// beq cr6,0x8220ec60
	if (ctx.cr6.eq) goto loc_8220EC60;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14716
	ctx.r8.u64 = ctx.r9.u64 | 14716;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220ed24
	if (ctx.cr6.eq) goto loc_8220ED24;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,14718
	ctx.r9.u64 = ctx.r10.u64 | 14718;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x8220ed24
	if (ctx.cr6.eq) goto loc_8220ED24;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,14715
	ctx.r6.u64 = ctx.r7.u64 | 14715;
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x8220ec20
	if (!ctx.cr6.gt) goto loc_8220EC20;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-31359
	ctx.r4.s64 = -2055143424;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27095
	ctx.r11.s64 = -1775697920;
	// ori r4,r4,22562
	ctx.r4.u64 = ctx.r4.u64 | 22562;
	// ori r10,r11,44691
	ctx.r10.u64 = ctx.r11.u64 | 44691;
	// addi r5,r3,7976
	ctx.r5.s64 = ctx.r3.s64 + 7976;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x8220EC18;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EC20:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 888, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220EC30:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8220ec4c
	if (!ctx.cr6.eq) goto loc_8220EC4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220EC4C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 888, ctx.r6.u32);
loc_8220EC60:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-26484
	ctx.r3.s64 = ctx.r11.s64 + -26484;
	// bl 0x82427c40
	ctx.lr = 0x8220EC7C;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// bl 0x8259cce0
	ctx.lr = 0x8220EC8C;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 888, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8220ECA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 888, ctx.r4.u32);
	// bl 0x821eaae8
	ctx.lr = 0x8220ECB8;
	sub_821EAAE8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8220ECCC;
	sub_821FBF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaaa8
	ctx.lr = 0x8220ECD4;
	sub_821AAAA8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821fd498
	ctx.lr = 0x8220ECE8;
	sub_821FD498(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lbz r3,646(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 646);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8220ed24
	if (!ctx.cr6.eq) goto loc_8220ED24;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27114
	ctx.r10.s64 = -1776943104;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,18969
	ctx.r11.s64 = 1243152384;
	// ori r9,r10,14479
	ctx.r9.u64 = ctx.r10.u64 | 14479;
	// ori r4,r11,27832
	ctx.r4.u64 = ctx.r11.u64 | 27832;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x8220ED24;
	sub_820A38E8(ctx, base);
loc_8220ED24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220ED2C"))) PPC_WEAK_FUNC(sub_8220ED2C);
PPC_FUNC_IMPL(__imp__sub_8220ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220ED30"))) PPC_WEAK_FUNC(sub_8220ED30);
PPC_FUNC_IMPL(__imp__sub_8220ED30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220eecc
	if (ctx.cr6.eq) goto loc_8220EECC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220eda4
	if (ctx.cr6.eq) goto loc_8220EDA4;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220eeec
	if (!ctx.cr6.eq) goto loc_8220EEEC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8220eeec
	if (!ctx.cr6.eq) goto loc_8220EEEC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8220eeec
	if (!ctx.cr6.eq) goto loc_8220EEEC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220ed88
	if (ctx.cr6.eq) goto loc_8220ED88;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_8220ED88:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220EDA4:
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220ee44
	if (ctx.cr6.lt) goto loc_8220EE44;
	// beq cr6,0x8220edf4
	if (ctx.cr6.eq) goto loc_8220EDF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8220eeec
	if (!ctx.cr6.lt) goto loc_8220EEEC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8220eeec
	if (!ctx.cr6.eq) goto loc_8220EEEC;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// bl 0x82208078
	ctx.lr = 0x8220EDE0;
	sub_82208078(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220EDF4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x821f9280
	ctx.lr = 0x8220EE00;
	sub_821F9280(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220eeec
	if (ctx.cr6.eq) goto loc_8220EEEC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220ee28
	if (ctx.cr6.eq) goto loc_8220EE28;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_8220EE28:
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r8,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220EE44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13348
	ctx.r4.s64 = ctx.r11.s64 + 13348;
	// bl 0x8259d1b0
	ctx.lr = 0x8220EE58;
	sub_8259D1B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,-26464
	ctx.r3.s64 = ctx.r11.s64 + -26464;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82427c40
	ctx.lr = 0x8220EE78;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-776
	ctx.r10.s64 = ctx.r11.s64 + -776;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8220EE84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8220eea8
	if (ctx.cr6.eq) goto loc_8220EEA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220ee84
	if (ctx.cr6.eq) goto loc_8220EE84;
loc_8220EEA8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220eeec
	if (!ctx.cr6.eq) goto loc_8220EEEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220EECC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,15
	ctx.r4.s64 = 15;
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// bl 0x821fd498
	ctx.lr = 0x8220EEEC;
	sub_821FD498(ctx, base);
loc_8220EEEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EF00"))) PPC_WEAK_FUNC(sub_8220EF00);
PPC_FUNC_IMPL(__imp__sub_8220EF00) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8220f00c
	if (ctx.cr6.eq) goto loc_8220F00C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8220ef74
	if (ctx.cr6.eq) goto loc_8220EF74;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8220f028
	if (!ctx.cr6.eq) goto loc_8220F028;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8220f028
	if (!ctx.cr6.eq) goto loc_8220F028;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8220f028
	if (!ctx.cr6.eq) goto loc_8220F028;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220ef58
	if (ctx.cr6.eq) goto loc_8220EF58;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_8220EF58:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
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
loc_8220EF74:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220efbc
	if (ctx.cr6.lt) goto loc_8220EFBC;
	// bne cr6,0x8220f028
	if (!ctx.cr6.eq) goto loc_8220F028;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8220f028
	if (!ctx.cr6.eq) goto loc_8220F028;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// bl 0x82208078
	ctx.lr = 0x8220EFA8;
	sub_82208078(ctx, base);
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
loc_8220EFBC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x821f9280
	ctx.lr = 0x8220EFC8;
	sub_821F9280(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220f028
	if (ctx.cr6.eq) goto loc_8220F028;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8220eff0
	if (ctx.cr6.eq) goto loc_8220EFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_8220EFF0:
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r8.u8);
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
loc_8220F00C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r7,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r7.u8);
	// bl 0x821fd498
	ctx.lr = 0x8220F028;
	sub_821FD498(ctx, base);
loc_8220F028:
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


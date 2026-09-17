#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82221118"))) PPC_WEAK_FUNC(sub_82221118);
PPC_FUNC_IMPL(__imp__sub_82221118) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822d62f0
	ctx.lr = 0x82221138;
	sub_822D62F0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820faf08
	ctx.lr = 0x82221148;
	sub_820FAF08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221170
	if (ctx.cr6.eq) goto loc_82221170;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
loc_82221170:
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

__attribute__((alias("__imp__sub_82221188"))) PPC_WEAK_FUNC(sub_82221188);
PPC_FUNC_IMPL(__imp__sub_82221188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82221190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-1416
	ctx.r30.s64 = ctx.r11.s64 + -1416;
loc_822211A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d62d8
	ctx.lr = 0x822211B0;
	sub_822D62D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820faf08
	ctx.lr = 0x822211BC;
	sub_820FAF08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822211e0
	if (ctx.cr6.eq) goto loc_822211E0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, ctx.xer);
	// bne cr6,0x822211e0
	if (!ctx.cr6.eq) goto loc_822211E0;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r9,r28
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x822211f8
	if (ctx.cr6.eq) goto loc_822211F8;
loc_822211E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,50
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 50, ctx.xer);
	// blt cr6,0x822211a8
	if (ctx.cr6.lt) goto loc_822211A8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822211F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221204"))) PPC_WEAK_FUNC(sub_82221204);
PPC_FUNC_IMPL(__imp__sub_82221204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221208"))) PPC_WEAK_FUNC(sub_82221208);
PPC_FUNC_IMPL(__imp__sub_82221208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-23080
	ctx.r3.s64 = ctx.r11.s64 + -23080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221214"))) PPC_WEAK_FUNC(sub_82221214);
PPC_FUNC_IMPL(__imp__sub_82221214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221218"))) PPC_WEAK_FUNC(sub_82221218);
PPC_FUNC_IMPL(__imp__sub_82221218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1284
	ctx.r3.s64 = 1284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221220"))) PPC_WEAK_FUNC(sub_82221220);
PPC_FUNC_IMPL(__imp__sub_82221220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221228"))) PPC_WEAK_FUNC(sub_82221228);
PPC_FUNC_IMPL(__imp__sub_82221228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822212b4
	if (ctx.cr6.eq) goto loc_822212B4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82221254:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822212a4
	if (ctx.cr6.eq) goto loc_822212A4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
loc_8222126C:
	// lwz r5,-28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82221294
	if (!ctx.cr6.eq) goto loc_82221294;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82221294
	if (!ctx.cr6.eq) goto loc_82221294;
	// ld r5,-36(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -36);
	// cmpld cr6,r5,r4
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r4.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82221294:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222126c
	if (ctx.cr6.lt) goto loc_8222126C;
loc_822212A4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82221254
	if (ctx.cr6.lt) goto loc_82221254;
loc_822212B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822212BC"))) PPC_WEAK_FUNC(sub_822212BC);
PPC_FUNC_IMPL(__imp__sub_822212BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822212C0"))) PPC_WEAK_FUNC(sub_822212C0);
PPC_FUNC_IMPL(__imp__sub_822212C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822212CC"))) PPC_WEAK_FUNC(sub_822212CC);
PPC_FUNC_IMPL(__imp__sub_822212CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822212D0"))) PPC_WEAK_FUNC(sub_822212D0);
PPC_FUNC_IMPL(__imp__sub_822212D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822212D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210cf48
	ctx.lr = 0x822212F8;
	sub_8210CF48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82221348
	if (ctx.cr6.eq) goto loc_82221348;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x82221310;
	sub_8210D3F0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82366a00
	ctx.lr = 0x8222132C;
	sub_82366A00(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821f04b8
	ctx.lr = 0x82221338;
	sub_821F04B8(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823718c8
	ctx.lr = 0x82221340;
	sub_823718C8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82221348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221350"))) PPC_WEAK_FUNC(sub_82221350);
PPC_FUNC_IMPL(__imp__sub_82221350) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-20740
	ctx.r4.s64 = ctx.r10.s64 + -20740;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x8236e908
	ctx.lr = 0x8222137C;
	sub_8236E908(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82221398"))) PPC_WEAK_FUNC(sub_82221398);
PPC_FUNC_IMPL(__imp__sub_82221398) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// stb r5,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r5.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822213AC"))) PPC_WEAK_FUNC(sub_822213AC);
PPC_FUNC_IMPL(__imp__sub_822213AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822213B0"))) PPC_WEAK_FUNC(sub_822213B0);
PPC_FUNC_IMPL(__imp__sub_822213B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822213B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82221408
	if (!ctx.cr6.gt) goto loc_82221408;
loc_822213D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x822213E4;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822213f8
	if (ctx.cr6.eq) goto loc_822213F8;
	// stb r29,23140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23140, ctx.r29.u8);
	// std r29,23128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 23128, ctx.r29.u64);
	// stw r29,23136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23136, ctx.r29.u32);
loc_822213F8:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822213d8
	if (ctx.cr6.lt) goto loc_822213D8;
loc_82221408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221410"))) PPC_WEAK_FUNC(sub_82221410);
PPC_FUNC_IMPL(__imp__sub_82221410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82221424
	if (!ctx.cr6.eq) goto loc_82221424;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82221424:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82221438
	if (!ctx.cr6.eq) goto loc_82221438;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82221438:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221448"))) PPC_WEAK_FUNC(sub_82221448);
PPC_FUNC_IMPL(__imp__sub_82221448) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822214b4
	if (ctx.cr6.eq) goto loc_822214B4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821e6e10
	ctx.lr = 0x82221480;
	sub_821E6E10(ctx, base);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8212bb98
	ctx.lr = 0x82221488;
	sub_8212BB98(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x822214a0
	if (!ctx.cr6.lt) goto loc_822214A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x822214A0;
	sub_82103ED8(ctx, base);
loc_822214A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822213b0
	ctx.lr = 0x822214A8;
	sub_822213B0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x822214bc
	goto loc_822214BC;
loc_822214B4:
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_822214BC:
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

__attribute__((alias("__imp__sub_822214D4"))) PPC_WEAK_FUNC(sub_822214D4);
PPC_FUNC_IMPL(__imp__sub_822214D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822214D8"))) PPC_WEAK_FUNC(sub_822214D8);
PPC_FUNC_IMPL(__imp__sub_822214D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822214FC"))) PPC_WEAK_FUNC(sub_822214FC);
PPC_FUNC_IMPL(__imp__sub_822214FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221500"))) PPC_WEAK_FUNC(sub_82221500);
PPC_FUNC_IMPL(__imp__sub_82221500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82221508;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82221594
	if (!ctx.cr6.eq) goto loc_82221594;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r27,1232
	ctx.r31.s64 = ctx.r27.s64 + 1232;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
loc_8222152C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823475c0
	ctx.lr = 0x82221534;
	sub_823475C0(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8222154c
	if (!ctx.cr6.eq) goto loc_8222154C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82221588
	if (ctx.cr6.eq) goto loc_82221588;
loc_8222154C:
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x82221554;
	sub_823656E8(ctx, base);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8222156c
	if (!ctx.cr6.eq) goto loc_8222156C;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82221588
	if (ctx.cr6.eq) goto loc_82221588;
loc_8222156C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8222152c
	if (ctx.cr6.lt) goto loc_8222152C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82221588:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82221594:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,1304
	ctx.r30.s64 = ctx.r28.s64 + 1304;
	// addi r31,r27,1328
	ctx.r31.s64 = ctx.r27.s64 + 1328;
	// subf r26,r27,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_822215A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823475c0
	ctx.lr = 0x822215AC;
	sub_823475C0(ctx, base);
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822215c4
	if (!ctx.cr6.eq) goto loc_822215C4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82221588
	if (ctx.cr6.eq) goto loc_82221588;
loc_822215C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823475c0
	ctx.lr = 0x822215CC;
	sub_823475C0(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822215e4
	if (!ctx.cr6.eq) goto loc_822215E4;
	// lwzx r4,r26,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82221588
	if (ctx.cr6.eq) goto loc_82221588;
loc_822215E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// blt cr6,0x822215a4
	if (ctx.cr6.lt) goto loc_822215A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221604"))) PPC_WEAK_FUNC(sub_82221604);
PPC_FUNC_IMPL(__imp__sub_82221604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221608"))) PPC_WEAK_FUNC(sub_82221608);
PPC_FUNC_IMPL(__imp__sub_82221608) {
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
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x822216b0
	if (ctx.cr6.lt) goto loc_822216B0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x82221658;
	sub_82368400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221690
	if (ctx.cr6.eq) goto loc_82221690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82369a00
	ctx.lr = 0x82221670;
	sub_82369A00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bne cr6,0x822216ac
	if (!ctx.cr6.eq) goto loc_822216AC;
	// bl 0x82368590
	ctx.lr = 0x8222168C;
	sub_82368590(ctx, base);
	// b 0x822216b0
	goto loc_822216B0;
loc_82221690:
	// bl 0x82369bd0
	ctx.lr = 0x82221694;
	sub_82369BD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822216b0
	if (ctx.cr6.eq) goto loc_822216B0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
loc_822216AC:
	// bl 0x8236fed0
	ctx.lr = 0x822216B0;
	sub_8236FED0(ctx, base);
loc_822216B0:
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

__attribute__((alias("__imp__sub_822216C8"))) PPC_WEAK_FUNC(sub_822216C8);
PPC_FUNC_IMPL(__imp__sub_822216C8) {
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
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822216FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82221730
	if (ctx.cr6.lt) goto loc_82221730;
	// beq cr6,0x82221718
	if (ctx.cr6.eq) goto loc_82221718;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82221730
	if (!ctx.cr6.lt) goto loc_82221730;
loc_82221710:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82221734
	goto loc_82221734;
loc_82221718:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x82221720;
	sub_82367A40(ctx, base);
	// cmpwi cr6,r3,-38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -38, ctx.xer);
	// beq cr6,0x82221710
	if (ctx.cr6.eq) goto loc_82221710;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r10.u8);
loc_82221730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82221734:
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

__attribute__((alias("__imp__sub_8222174C"))) PPC_WEAK_FUNC(sub_8222174C);
PPC_FUNC_IMPL(__imp__sub_8222174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221750"))) PPC_WEAK_FUNC(sub_82221750);
PPC_FUNC_IMPL(__imp__sub_82221750) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82221790
	if (ctx.cr6.eq) goto loc_82221790;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
loc_82221790:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_822217B4"))) PPC_WEAK_FUNC(sub_822217B4);
PPC_FUNC_IMPL(__imp__sub_822217B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822217B8"))) PPC_WEAK_FUNC(sub_822217B8);
PPC_FUNC_IMPL(__imp__sub_822217B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x822217C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x821f3a98
	ctx.lr = 0x822217E8;
	sub_821F3A98(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x821e6e98
	ctx.lr = 0x822217FC;
	sub_821E6E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82221858
	if (!ctx.cr6.gt) goto loc_82221858;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r28,r1,496
	ctx.r28.s64 = ctx.r1.s64 + 496;
loc_8222180C:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821e6eb0
	ctx.lr = 0x82221820;
	sub_821E6EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221840
	if (ctx.cr6.eq) goto loc_82221840;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82221840:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821e6e98
	ctx.lr = 0x82221850;
	sub_821E6E98(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8222180c
	if (ctx.cr6.lt) goto loc_8222180C;
loc_82221858:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x82221860;
	sub_82361330(ctx, base);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8222187C;
	sub_8259D2A0(ctx, base);
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r30,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x8236ebd0
	ctx.lr = 0x822218AC;
	sub_8236EBD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x822218bc
	if (!ctx.cr6.eq) goto loc_822218BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822218BC:
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822218C4"))) PPC_WEAK_FUNC(sub_822218C4);
PPC_FUNC_IMPL(__imp__sub_822218C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822218C8"))) PPC_WEAK_FUNC(sub_822218C8);
PPC_FUNC_IMPL(__imp__sub_822218C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822218D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,56(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8222193c
	if (!ctx.cr6.gt) goto loc_8222193C;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_822218F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82221904;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221920
	if (ctx.cr6.eq) goto loc_82221920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222191C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82221928
	goto loc_82221928;
loc_82221920:
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x82221928;
	sub_82361330(ctx, base);
loc_82221928:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822218f8
	if (ctx.cr6.lt) goto loc_822218F8;
loc_8222193C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// ori r7,r8,24896
	ctx.r7.u64 = ctx.r8.u64 | 24896;
	// mulli r9,r27,584
	ctx.r9.s64 = ctx.r27.s64 * 584;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822219b8
	if (ctx.cr6.gt) goto loc_822219B8;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,6532
	ctx.r12.s64 = ctx.r12.s64 + 6532;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222199C;
	case 1:
		goto loc_8222199C;
	case 2:
		goto loc_822219A8;
	case 3:
		goto loc_822219A8;
	case 4:
		goto loc_822219A8;
	case 5:
		goto loc_8222199C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,6556(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6556);
	// lwz r17,6556(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6556);
	// lwz r17,6568(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6568);
	// lwz r17,6568(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6568);
	// lwz r17,6568(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6568);
	// lwz r17,6556(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 6556);
loc_8222199C:
	// ld r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// bl 0x822d6298
	ctx.lr = 0x822219A4;
	sub_822D6298(ctx, base);
	// b 0x822219b4
	goto loc_822219B4;
loc_822219A8:
	// ld r4,200(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 200);
	// ld r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// bl 0x82221188
	ctx.lr = 0x822219B4;
	sub_82221188(ctx, base);
loc_822219B4:
	// stw r3,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r3.u32);
loc_822219B8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r6,28(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x8236ebd0
	ctx.lr = 0x822219DC;
	sub_8236EBD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822219E4"))) PPC_WEAK_FUNC(sub_822219E4);
PPC_FUNC_IMPL(__imp__sub_822219E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822219E8"))) PPC_WEAK_FUNC(sub_822219E8);
PPC_FUNC_IMPL(__imp__sub_822219E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r7,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r7.u32);
	// stw r8,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r8.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x822217b8
	ctx.lr = 0x82221A28;
	sub_822217B8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82221A44"))) PPC_WEAK_FUNC(sub_82221A44);
PPC_FUNC_IMPL(__imp__sub_82221A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221A48"))) PPC_WEAK_FUNC(sub_82221A48);
PPC_FUNC_IMPL(__imp__sub_82221A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82221A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r28,3480
	ctx.r29.s64 = ctx.r28.s64 + 3480;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
loc_82221A68:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82221a9c
	if (!ctx.cr6.gt) goto loc_82221A9C;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
loc_82221A7C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82221a8c
	if (ctx.cr6.eq) goto loc_82221A8C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82221A8C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221a7c
	if (!ctx.cr6.eq) goto loc_82221A7C;
loc_82221A9C:
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bge cr6,0x82221ac0
	if (!ctx.cr6.lt) goto loc_82221AC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82365c18
	ctx.lr = 0x82221AB0;
	sub_82365C18(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x82221a68
	goto loc_82221A68;
loc_82221AC0:
	// bl 0x82365698
	ctx.lr = 0x82221AC4;
	sub_82365698(ctx, base);
	// stw r3,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221AD0"))) PPC_WEAK_FUNC(sub_82221AD0);
PPC_FUNC_IMPL(__imp__sub_82221AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac8
	ctx.lr = 0x82221AD8;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r17,r11,26752
	ctx.r17.s64 = ctx.r11.s64 + 26752;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// addi r3,r17,2896
	ctx.r3.s64 = ctx.r17.s64 + 2896;
	// bl 0x823695f8
	ctx.lr = 0x82221AF8;
	sub_823695F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1150
	ctx.r4.s64 = 1150;
	// addi r3,r17,2896
	ctx.r3.s64 = ctx.r17.s64 + 2896;
	// bl 0x823695f8
	ctx.lr = 0x82221B08;
	sub_823695F8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x82221B1C;
	sub_8259D300(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// addi r6,r11,-20504
	ctx.r6.s64 = ctx.r11.s64 + -20504;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20508
	ctx.r5.s64 = ctx.r11.s64 + -20508;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82405fe0
	ctx.lr = 0x82221B40;
	sub_82405FE0(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r7,32(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,24896
	ctx.r9.u64 = ctx.r10.u64 | 24896;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mulli r10,r7,5956
	ctx.r10.s64 = ctx.r7.s64 * 5956;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r18,r10,r29
	ctx.r18.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r8,584
	ctx.r11.s64 = ctx.r8.s64 * 584;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// lwz r11,300(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x82222138
	if (ctx.cr6.gt) goto loc_82222138;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,7064
	ctx.r12.s64 = ctx.r12.s64 + 7064;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82221BE4;
	case 1:
		goto loc_82222138;
	case 2:
		goto loc_82222138;
	case 3:
		goto loc_82222138;
	case 4:
		goto loc_82222138;
	case 5:
		goto loc_82221D10;
	case 6:
		goto loc_82222138;
	case 7:
		goto loc_82221EB0;
	case 8:
		goto loc_82222138;
	case 9:
		goto loc_82222138;
	case 10:
		goto loc_82222138;
	case 11:
		goto loc_82222138;
	case 12:
		goto loc_82222138;
	case 13:
		goto loc_82222138;
	case 14:
		goto loc_82221FF4;
	case 15:
		goto loc_82222138;
	case 16:
		goto loc_82221FF4;
	case 17:
		goto loc_82222138;
	case 18:
		goto loc_82221FF4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,7140(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7140);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,7440(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7440);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,7856(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 7856);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8180(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8180);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8180(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8180);
	// lwz r17,8504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8504);
	// lwz r17,8180(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8180);
loc_82221BE4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20520
	ctx.r5.s64 = ctx.r11.s64 + -20520;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221BFC;
	sub_82403A90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lfs f1,10564(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 10564);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r11,-20532
	ctx.r5.s64 = ctx.r11.s64 + -20532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405728
	ctx.lr = 0x82221C14;
	sub_82405728(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82222150
	if (!ctx.cr6.gt) goto loc_82222150;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-20544
	ctx.r25.s64 = ctx.r11.s64 + -20544;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// addi r24,r11,-20556
	ctx.r24.s64 = ctx.r11.s64 + -20556;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,-20568
	ctx.r23.s64 = ctx.r11.s64 + -20568;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,-20580
	ctx.r22.s64 = ctx.r11.s64 + -20580;
loc_82221C4C:
	// lwz r6,32(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mulli r11,r6,5956
	ctx.r11.s64 = ctx.r6.s64 * 5956;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x82221C6C;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,10660(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221C80;
	sub_82403A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82221C90;
	sub_8259D1B0(ctx, base);
	// ld r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x822d6298
	ctx.lr = 0x82221C98;
	sub_822D6298(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221CAC;
	sub_82403A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d1b0
	ctx.lr = 0x82221CBC;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lfs f1,10592(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 10592);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405728
	ctx.lr = 0x82221CD0;
	sub_82405728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259d1b0
	ctx.lr = 0x82221CE0;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lfs f1,10588(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 10588);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405728
	ctx.lr = 0x82221CF4;
	sub_82405728(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,328
	ctx.r27.s64 = ctx.r27.s64 + 328;
	// addi r26,r26,584
	ctx.r26.s64 = ctx.r26.s64 + 584;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221c4c
	if (ctx.cr6.lt) goto loc_82221C4C;
	// b 0x82222150
	goto loc_82222150;
loc_82221D10:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-20520
	ctx.r5.s64 = ctx.r11.s64 + -20520;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221D28;
	sub_82403A90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,10560(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10560);
	// addi r5,r11,-20596
	ctx.r5.s64 = ctx.r11.s64 + -20596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221D40;
	sub_82403A90(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82222150
	if (!ctx.cr6.gt) goto loc_82222150;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r11,-20608
	ctx.r24.s64 = ctx.r11.s64 + -20608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// addi r23,r11,-20616
	ctx.r23.s64 = ctx.r11.s64 + -20616;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r20,r11,-20556
	ctx.r20.s64 = ctx.r11.s64 + -20556;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,-20568
	ctx.r22.s64 = ctx.r11.s64 + -20568;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r11,-20580
	ctx.r21.s64 = ctx.r11.s64 + -20580;
loc_82221D80:
	// lwz r5,32(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r5,5956
	ctx.r11.s64 = ctx.r5.s64 * 5956;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,10580
	ctx.r30.s64 = ctx.r11.s64 + 10580;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221dbc
	if (ctx.cr6.eq) goto loc_82221DBC;
	// lbz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82221db4
	if (ctx.cr6.eq) goto loc_82221DB4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82221DB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221dcc
	if (!ctx.cr6.eq) goto loc_82221DCC;
loc_82221DBC:
	// lbz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82221dcc
	if (!ctx.cr6.eq) goto loc_82221DCC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82221DCC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d1b0
	ctx.lr = 0x82221DDC;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221DF0;
	sub_82403A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d1b0
	ctx.lr = 0x82221E00;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lbz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221E14;
	sub_82403A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d1b0
	ctx.lr = 0x82221E24;
	sub_8259D1B0(ctx, base);
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221E38;
	sub_82403A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82221E48;
	sub_8259D1B0(ctx, base);
	// ld r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x822d6298
	ctx.lr = 0x82221E50;
	sub_822D6298(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221E64;
	sub_82403A90(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221e94
	if (!ctx.cr6.eq) goto loc_82221E94;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d1b0
	ctx.lr = 0x82221E80;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405728
	ctx.lr = 0x82221E94;
	sub_82405728(ctx, base);
loc_82221E94:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,584
	ctx.r26.s64 = ctx.r26.s64 + 584;
	// addi r25,r25,328
	ctx.r25.s64 = ctx.r25.s64 + 328;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221d80
	if (ctx.cr6.lt) goto loc_82221D80;
	// b 0x82222150
	goto loc_82222150;
loc_82221EB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,-20520
	ctx.r5.s64 = ctx.r11.s64 + -20520;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221EC8;
	sub_82403A90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,10556(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10556);
	// addi r5,r11,-20636
	ctx.r5.s64 = ctx.r11.s64 + -20636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221EE0;
	sub_82403A90(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82222150
	if (!ctx.cr6.gt) goto loc_82222150;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r22,r11,-20644
	ctx.r22.s64 = ctx.r11.s64 + -20644;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-20660
	ctx.r25.s64 = ctx.r11.s64 + -20660;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// addi r24,r11,-20568
	ctx.r24.s64 = ctx.r11.s64 + -20568;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,-20580
	ctx.r23.s64 = ctx.r11.s64 + -20580;
loc_82221F20:
	// lwz r10,32(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mulli r11,r10,5956
	ctx.r11.s64 = ctx.r10.s64 * 5956;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r28,r11,10580
	ctx.r28.s64 = ctx.r11.s64 + 10580;
	// bl 0x8259d1b0
	ctx.lr = 0x82221F44;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r6,80(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221F58;
	sub_82403A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82221F68;
	sub_8259D1B0(ctx, base);
	// ld r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x822d6298
	ctx.lr = 0x82221F70;
	sub_822D6298(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221F84;
	sub_82403A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259d1b0
	ctx.lr = 0x82221F94;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,72(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82221FA8;
	sub_82403A90(ctx, base);
	// lwz r9,80(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82221fd8
	if (!ctx.cr6.eq) goto loc_82221FD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d1b0
	ctx.lr = 0x82221FC4;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405728
	ctx.lr = 0x82221FD8;
	sub_82405728(ctx, base);
loc_82221FD8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,328
	ctx.r27.s64 = ctx.r27.s64 + 328;
	// addi r26,r26,584
	ctx.r26.s64 = ctx.r26.s64 + 584;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82221f20
	if (ctx.cr6.lt) goto loc_82221F20;
	// b 0x82222150
	goto loc_82222150;
loc_82221FF4:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x82222004
	if (!ctx.cr6.eq) goto loc_82222004;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82222020
	goto loc_82222020;
loc_82222004:
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x82222014
	if (!ctx.cr6.eq) goto loc_82222014;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x82222020
	goto loc_82222020;
loc_82222014:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x82222034
	if (!ctx.cr6.eq) goto loc_82222034;
	// li r6,5
	ctx.r6.s64 = 5;
loc_82222020:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// addi r5,r11,-20520
	ctx.r5.s64 = ctx.r11.s64 + -20520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82222034;
	sub_82403A90(ctx, base);
loc_82222034:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,10548(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10548);
	// li r4,1064
	ctx.r4.s64 = 1064;
	// addi r5,r11,-20676
	ctx.r5.s64 = ctx.r11.s64 + -20676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x8222204C;
	sub_82403A90(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82222150
	if (!ctx.cr6.gt) goto loc_82222150;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r22,r11,-20692
	ctx.r22.s64 = ctx.r11.s64 + -20692;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// addi r24,r11,-20704
	ctx.r24.s64 = ctx.r11.s64 + -20704;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,-20580
	ctx.r23.s64 = ctx.r11.s64 + -20580;
loc_8222207C:
	// lwz r8,32(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mulli r11,r8,5956
	ctx.r11.s64 = ctx.r8.s64 * 5956;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x8222209C;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,10660(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x822220B0;
	sub_82403A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x822220C0;
	sub_8259D1B0(ctx, base);
	// ld r4,184(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 184);
	// ld r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// bl 0x82221188
	ctx.lr = 0x822220CC;
	sub_82221188(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x822220E0;
	sub_82403A90(ctx, base);
	// lwz r7,300(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x82222104
	if (!ctx.cr6.eq) goto loc_82222104;
	// bl 0x8259d1b0
	ctx.lr = 0x822220FC;
	sub_8259D1B0(ctx, base);
	// lwz r6,10664(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10664);
	// b 0x8222210c
	goto loc_8222210C;
loc_82222104:
	// bl 0x8259d1b0
	ctx.lr = 0x82222108;
	sub_8259D1B0(ctx, base);
	// lwz r6,10636(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10636);
loc_8222210C:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x8222211C;
	sub_82403A90(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,584
	ctx.r27.s64 = ctx.r27.s64 + 584;
	// addi r26,r26,328
	ctx.r26.s64 = ctx.r26.s64 + 328;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222207c
	if (ctx.cr6.lt) goto loc_8222207C;
	// b 0x82222150
	goto loc_82222150;
loc_82222138:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,-20520
	ctx.r5.s64 = ctx.r11.s64 + -20520;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82222150;
	sub_82403A90(ctx, base);
loc_82222150:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,1064
	ctx.r4.s64 = 1064;
	// addi r5,r11,-20716
	ctx.r5.s64 = ctx.r11.s64 + -20716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82222168;
	sub_82403A90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// lwz r6,10572(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10572);
	// addi r5,r11,-20732
	ctx.r5.s64 = ctx.r11.s64 + -20732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403a90
	ctx.lr = 0x82222180;
	sub_82403A90(ctx, base);
	// li r6,1150
	ctx.r6.s64 = 1150;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r17,2896
	ctx.r3.s64 = ctx.r17.s64 + 2896;
	// bl 0x8236ee00
	ctx.lr = 0x82222194;
	sub_8236EE00(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8259bb18
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822221A0"))) PPC_WEAK_FUNC(sub_822221A0);
PPC_FUNC_IMPL(__imp__sub_822221A0) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// lwz r10,2896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822221D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82222204
	if (ctx.cr6.lt) goto loc_82222204;
	// beq cr6,0x822221fc
	if (ctx.cr6.eq) goto loc_822221FC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82222204
	if (!ctx.cr6.lt) goto loc_82222204;
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
loc_822221FC:
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_82222204:
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

__attribute__((alias("__imp__sub_8222221C"))) PPC_WEAK_FUNC(sub_8222221C);
PPC_FUNC_IMPL(__imp__sub_8222221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222220"))) PPC_WEAK_FUNC(sub_82222220);
PPC_FUNC_IMPL(__imp__sub_82222220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82222228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,7368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7368);
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r11,7376
	ctx.r31.s64 = ctx.r11.s64 + 7376;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8259d2a0
	ctx.lr = 0x82222254;
	sub_8259D2A0(ctx, base);
	// extsb r9,r29
	ctx.r9.s64 = ctx.r29.s8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r9,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r9.u8);
	// beq cr6,0x822222ac
	if (ctx.cr6.eq) goto loc_822222AC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82222270:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82222270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82222270;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,54
	ctx.r4.s64 = ctx.r31.s64 + 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82108e58
	ctx.lr = 0x82222298;
	sub_82108E58(ctx, base);
	// lwz r11,7368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7368);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,7368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7368, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822222AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r11.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,7368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7368);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,7368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7368, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822222CC"))) PPC_WEAK_FUNC(sub_822222CC);
PPC_FUNC_IMPL(__imp__sub_822222CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822222D0"))) PPC_WEAK_FUNC(sub_822222D0);
PPC_FUNC_IMPL(__imp__sub_822222D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,11084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11084, ctx.r3.u32);
	// stb r11,11080(r5)
	PPC_STORE_U8(ctx.r5.u32 + 11080, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822222E0"))) PPC_WEAK_FUNC(sub_822222E0);
PPC_FUNC_IMPL(__imp__sub_822222E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822222E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,7360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82222398
	if (!ctx.cr6.gt) goto loc_82222398;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
loc_82222308:
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r9,53(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82222320
	if (ctx.cr6.eq) goto loc_82222320;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82222378
	goto loc_82222378;
loc_82222320:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
loc_82222328:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8222234c
	if (ctx.cr6.eq) goto loc_8222234C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82222328
	if (ctx.cr6.eq) goto loc_82222328;
loc_8222234C:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82222364
	if (!ctx.cr6.eq) goto loc_82222364;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82222378
	goto loc_82222378;
loc_82222364:
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824065f0
	ctx.lr = 0x82222370;
	sub_824065F0(ctx, base);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_82222378:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822223b8
	if (!ctx.cr6.eq) goto loc_822223B8;
	// lwz r10,7360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7360);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82222308
	if (ctx.cr6.lt) goto loc_82222308;
loc_82222398:
	// lwz r11,7360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7360);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bge cr6,0x822223c4
	if (!ctx.cr6.lt) goto loc_822223C4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// stw r9,7360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7360, ctx.r9.u32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x822223e8
	goto loc_822223E8;
loc_822223B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822223C4:
	// lwz r11,7364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7364);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// stw r10,7364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7364, ctx.r10.u32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// blt cr6,0x822223e8
	if (ctx.cr6.lt) goto loc_822223E8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,7364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7364, ctx.r8.u32);
loc_822223E8:
	// li r5,184
	ctx.r5.s64 = 184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x822223F4;
	sub_8259D3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222400"))) PPC_WEAK_FUNC(sub_82222400);
PPC_FUNC_IMPL(__imp__sub_82222400) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// lwz r10,2896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82222488
	if (ctx.cr6.lt) goto loc_82222488;
	// beq cr6,0x8222245c
	if (ctx.cr6.eq) goto loc_8222245C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82222488
	if (!ctx.cr6.lt) goto loc_82222488;
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
loc_8222245C:
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82222488
	if (!ctx.cr6.eq) goto loc_82222488;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r8.u8);
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
loc_82222488:
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

__attribute__((alias("__imp__sub_822224A0"))) PPC_WEAK_FUNC(sub_822224A0);
PPC_FUNC_IMPL(__imp__sub_822224A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,260
	ctx.r3.s64 = ctx.r11.s64 + 260;
	// stb r10,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r10.u8);
	// b 0x8259d3a0
	sub_8259D3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822224B4"))) PPC_WEAK_FUNC(sub_822224B4);
PPC_FUNC_IMPL(__imp__sub_822224B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822224B8"))) PPC_WEAK_FUNC(sub_822224B8);
PPC_FUNC_IMPL(__imp__sub_822224B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,401(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 401);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822224C0"))) PPC_WEAK_FUNC(sub_822224C0);
PPC_FUNC_IMPL(__imp__sub_822224C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r7,14908
	ctx.r7.s64 = 977010688;
	// addi r3,r10,-24936
	ctx.r3.s64 = ctx.r10.s64 + -24936;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-27098
	ctx.r10.s64 = -1775894528;
	// ori r4,r7,65535
	ctx.r4.u64 = ctx.r7.u64 | 65535;
	// ori r7,r10,3488
	ctx.r7.u64 = ctx.r10.u64 | 3488;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r9,400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 400, ctx.r9.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r8,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r8.u8);
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822224FC"))) PPC_WEAK_FUNC(sub_822224FC);
PPC_FUNC_IMPL(__imp__sub_822224FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222500"))) PPC_WEAK_FUNC(sub_82222500);
PPC_FUNC_IMPL(__imp__sub_82222500) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// lbz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// bl 0x821f39f0
	ctx.lr = 0x82222530;
	sub_821F39F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8222254C"))) PPC_WEAK_FUNC(sub_8222254C);
PPC_FUNC_IMPL(__imp__sub_8222254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222550"))) PPC_WEAK_FUNC(sub_82222550);
PPC_FUNC_IMPL(__imp__sub_82222550) {
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
	// lbz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// beq cr6,0x82222578
	if (ctx.cr6.eq) goto loc_82222578;
	// addi r11,r11,-23020
	ctx.r11.s64 = ctx.r11.s64 + -23020;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// b 0x8222257c
	goto loc_8222257C;
loc_82222578:
	// addi r5,r11,-23020
	ctx.r5.s64 = ctx.r11.s64 + -23020;
loc_8222257C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x822225AC;
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

__attribute__((alias("__imp__sub_822225BC"))) PPC_WEAK_FUNC(sub_822225BC);
PPC_FUNC_IMPL(__imp__sub_822225BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822225C0"))) PPC_WEAK_FUNC(sub_822225C0);
PPC_FUNC_IMPL(__imp__sub_822225C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222268c
	if (!ctx.cr6.eq) goto loc_8222268C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14715
	ctx.r10.u64 = ctx.r11.u64 | 14715;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82222634
	if (!ctx.cr6.eq) goto loc_82222634;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821143f8
	ctx.lr = 0x82222604;
	sub_821143F8(ctx, base);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821045e8
	ctx.lr = 0x82222618;
	sub_821045E8(ctx, base);
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
	ctx.lr = 0x82222634;
	sub_82114870(ctx, base);
loc_82222634:
	// lis r7,-994
	ctx.r7.s64 = -65142784;
	// lis r6,-27116
	ctx.r6.s64 = -1777074176;
	// ori r4,r7,62591
	ctx.r4.u64 = ctx.r7.u64 | 62591;
	// ori r3,r6,41781
	ctx.r3.u64 = ctx.r6.u64 | 41781;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x82222658;
	sub_82103EC8(ctx, base);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// bl 0x820a38e8
	ctx.lr = 0x82222688;
	sub_820A38E8(ctx, base);
	// b 0x82222694
	goto loc_82222694;
loc_8222268C:
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 400, ctx.r8.u8);
loc_82222694:
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

__attribute__((alias("__imp__sub_822226AC"))) PPC_WEAK_FUNC(sub_822226AC);
PPC_FUNC_IMPL(__imp__sub_822226AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822226B0"))) PPC_WEAK_FUNC(sub_822226B0);
PPC_FUNC_IMPL(__imp__sub_822226B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822226c8
	if (!ctx.cr6.eq) goto loc_822226C8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// b 0x82115468
	sub_82115468(ctx, base);
	return;
loc_822226C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,400(r4)
	PPC_STORE_U8(ctx.r4.u32 + 400, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822226D4"))) PPC_WEAK_FUNC(sub_822226D4);
PPC_FUNC_IMPL(__imp__sub_822226D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822226D8"))) PPC_WEAK_FUNC(sub_822226D8);
PPC_FUNC_IMPL(__imp__sub_822226D8) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8222281c
	if (!ctx.cr6.eq) goto loc_8222281C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// addi r31,r10,26080
	ctx.r31.s64 = ctx.r10.s64 + 26080;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222790
	if (ctx.cr6.eq) goto loc_82222790;
	// lis r10,-4506
	ctx.r10.s64 = -295305216;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// ori r9,r10,46912
	ctx.r9.u64 = ctx.r10.u64 | 46912;
	// ori r7,r8,16102
	ctx.r7.u64 = ctx.r8.u64 | 16102;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x8222274c
	if (ctx.cr6.eq) goto loc_8222274C;
	// lis r6,-4506
	ctx.r6.s64 = -295305216;
	// lis r4,-27583
	ctx.r4.s64 = -1807679488;
	// ori r5,r6,52856
	ctx.r5.u64 = ctx.r6.u64 | 52856;
	// ori r10,r4,16102
	ctx.r10.u64 = ctx.r4.u64 | 16102;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// bne cr6,0x82222790
	if (!ctx.cr6.eq) goto loc_82222790;
loc_8222274C:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r9,30785
	ctx.r9.s64 = 2017525760;
	// lis r8,-27576
	ctx.r8.s64 = -1807220736;
	// ori r10,r11,16228
	ctx.r10.u64 = ctx.r11.u64 | 16228;
	// ori r4,r9,1617
	ctx.r4.u64 = ctx.r9.u64 | 1617;
	// ori r7,r8,14885
	ctx.r7.u64 = ctx.r8.u64 | 14885;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x820a38e8
	ctx.lr = 0x82222778;
	sub_820A38E8(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// ori r8,r9,16236
	ctx.r8.u64 = ctx.r9.u64 | 16236;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// bl 0x821f6a20
	ctx.lr = 0x82222790;
	sub_821F6A20(ctx, base);
loc_82222790:
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
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
	ctx.lr = 0x822227B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822227f8
	if (ctx.cr6.eq) goto loc_822227F8;
	// lis r7,3638
	ctx.r7.s64 = 238419968;
	// lis r6,-27583
	ctx.r6.s64 = -1807679488;
	// ori r4,r7,32087
	ctx.r4.u64 = ctx.r7.u64 | 32087;
	// ori r3,r6,15958
	ctx.r3.u64 = ctx.r6.u64 | 15958;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x822227F4;
	sub_82103EC8(ctx, base);
	// b 0x82222824
	goto loc_82222824;
loc_822227F8:
	// lis r11,-31359
	ctx.r11.s64 = -2055143424;
	// lis r10,-27095
	ctx.r10.s64 = -1775697920;
	// ori r4,r11,22562
	ctx.r4.u64 = ctx.r11.u64 | 22562;
	// ori r9,r10,44691
	ctx.r9.u64 = ctx.r10.u64 | 44691;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x82222818;
	sub_82103EC8(ctx, base);
	// b 0x82222824
	goto loc_82222824;
loc_8222281C:
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,400(r4)
	PPC_STORE_U8(ctx.r4.u32 + 400, ctx.r8.u8);
loc_82222824:
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

__attribute__((alias("__imp__sub_8222283C"))) PPC_WEAK_FUNC(sub_8222283C);
PPC_FUNC_IMPL(__imp__sub_8222283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222840"))) PPC_WEAK_FUNC(sub_82222840);
PPC_FUNC_IMPL(__imp__sub_82222840) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,260
	ctx.r11.s64 = ctx.r3.s64 + 260;
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222854"))) PPC_WEAK_FUNC(sub_82222854);
PPC_FUNC_IMPL(__imp__sub_82222854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222858"))) PPC_WEAK_FUNC(sub_82222858);
PPC_FUNC_IMPL(__imp__sub_82222858) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222874"))) PPC_WEAK_FUNC(sub_82222874);
PPC_FUNC_IMPL(__imp__sub_82222874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222878"))) PPC_WEAK_FUNC(sub_82222878);
PPC_FUNC_IMPL(__imp__sub_82222878) {
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
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822228ec
	if (ctx.cr6.eq) goto loc_822228EC;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beq cr6,0x822228ec
	if (ctx.cr6.eq) goto loc_822228EC;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// bl 0x825af7b8
	ctx.lr = 0x822228B8;
	sub_825AF7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822228d0
	if (ctx.cr6.lt) goto loc_822228D0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822228d4
	if (ctx.cr6.eq) goto loc_822228D4;
loc_822228D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822228D4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822228EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822228EC:
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

__attribute__((alias("__imp__sub_82222904"))) PPC_WEAK_FUNC(sub_82222904);
PPC_FUNC_IMPL(__imp__sub_82222904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222908"))) PPC_WEAK_FUNC(sub_82222908);
PPC_FUNC_IMPL(__imp__sub_82222908) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// addi r7,r9,14537
	ctx.r7.s64 = ctx.r9.s64 + 14537;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222978
	if (ctx.cr6.eq) goto loc_82222978;
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
	// beq cr6,0x8222297c
	if (ctx.cr6.eq) goto loc_8222297C;
loc_82222978:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222297C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82222998
	if (!ctx.cr6.eq) goto loc_82222998;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82222994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822229d8
	goto loc_822229D8;
loc_82222998:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r6,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r4.u32);
	// srawi r10,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 16;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r11,r11,-20492
	ctx.r11.s64 = ctx.r11.s64 + -20492;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// addi r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 + 12;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r5,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, ctx.r5.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82420740
	ctx.lr = 0x822229D8;
	sub_82420740(ctx, base);
loc_822229D8:
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

__attribute__((alias("__imp__sub_822229F0"))) PPC_WEAK_FUNC(sub_822229F0);
PPC_FUNC_IMPL(__imp__sub_822229F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x82222ae0
	if (ctx.cr6.gt) {
		// ERROR 82222AE0
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,10768
	ctx.r12.s64 = ctx.r12.s64 + 10768;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82222A24
		return;
	case 1:
		// ERROR: 0x82222A3C
		return;
	case 2:
		// ERROR: 0x82222A80
		return;
	case 3:
		// ERROR: 0x82222A90
		return;
	case 4:
		// ERROR: 0x82222AD4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82222A10"))) PPC_WEAK_FUNC(sub_82222A10);
PPC_FUNC_IMPL(__imp__sub_82222A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,10788(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10788);
	// lwz r17,10812(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10812);
	// lwz r17,10880(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10880);
	// lwz r17,10896(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10896);
	// lwz r17,10964(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10964);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82222a34
	if (!ctx.cr6.eq) goto loc_82222A34;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82222A34:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222A3C"))) PPC_WEAK_FUNC(sub_82222A3C);
PPC_FUNC_IMPL(__imp__sub_82222A3C) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82222a64
	if (ctx.cr6.eq) goto loc_82222A64;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82222a5c
	if (ctx.cr6.eq) goto loc_82222A5C;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x82222ae0
	if (!ctx.cr6.eq) {
		// ERROR 82222AE0
		return;
	}
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82222A5C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82222A64:
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82222a78
	if (!ctx.cr6.eq) goto loc_82222A78;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82222A78:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222A80"))) PPC_WEAK_FUNC(sub_82222A80);
PPC_FUNC_IMPL(__imp__sub_82222A80) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82222ae0
	if (!ctx.cr6.eq) {
		// ERROR 82222AE0
		return;
	}
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222A90"))) PPC_WEAK_FUNC(sub_82222A90);
PPC_FUNC_IMPL(__imp__sub_82222A90) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82222ab8
	if (ctx.cr6.eq) goto loc_82222AB8;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82222ab0
	if (ctx.cr6.eq) goto loc_82222AB0;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x82222ae0
	if (!ctx.cr6.eq) {
		// ERROR 82222AE0
		return;
	}
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82222AB0:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82222AB8:
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82222acc
	if (!ctx.cr6.eq) goto loc_82222ACC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82222ACC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222AD4"))) PPC_WEAK_FUNC(sub_82222AD4);
PPC_FUNC_IMPL(__imp__sub_82222AD4) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r3,12
	ctx.r3.s64 = 12;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222AE8"))) PPC_WEAK_FUNC(sub_82222AE8);
PPC_FUNC_IMPL(__imp__sub_82222AE8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222b00
	if (!ctx.cr6.eq) goto loc_82222B00;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,17008
	ctx.r9.u64 = ctx.r11.u64 | 17008;
	// stbx r10,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82222B00:
	// addis r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r9,r9,16996
	ctx.r9.s64 = ctx.r9.s64 + 16996;
	// ori r7,r8,17004
	ctx.r7.u64 = ctx.r8.u64 | 17004;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r10,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r11,17000
	ctx.r11.s64 = ctx.r11.s64 + 17000;
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82222B44"))) PPC_WEAK_FUNC(sub_82222B44);
PPC_FUNC_IMPL(__imp__sub_82222B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222B48"))) PPC_WEAK_FUNC(sub_82222B48);
PPC_FUNC_IMPL(__imp__sub_82222B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222B64"))) PPC_WEAK_FUNC(sub_82222B64);
PPC_FUNC_IMPL(__imp__sub_82222B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222B68"))) PPC_WEAK_FUNC(sub_82222B68);
PPC_FUNC_IMPL(__imp__sub_82222B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82222B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82222ba4
	if (!ctx.cr6.eq) goto loc_82222BA4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82222BA4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwz r28,56(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82222bfc
	if (!ctx.cr6.gt) goto loc_82222BFC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,10568
	ctx.r29.s64 = ctx.r10.s64 + 10568;
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
loc_82222BCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232da90
	ctx.lr = 0x82222BD8;
	sub_8232DA90(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,5956
	ctx.r29.s64 = ctx.r29.s64 + 5956;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// blt cr6,0x82222bcc
	if (ctx.cr6.lt) goto loc_82222BCC;
loc_82222BFC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,11080
	ctx.r6.s64 = ctx.r11.s64 + 11080;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x82222C14;
	sub_8259CD88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222C20"))) PPC_WEAK_FUNC(sub_82222C20);
PPC_FUNC_IMPL(__imp__sub_82222C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82222C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r28,32767
	ctx.r28.s64 = 2147418112;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// lwz r26,56(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,52520
	ctx.r10.u64 = ctx.r11.u64 | 52520;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// ble cr6,0x82222ccc
	if (!ctx.cr6.gt) goto loc_82222CCC;
loc_82222C64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82222C70;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222c8c
	if (ctx.cr6.eq) goto loc_82222C8C;
	// lwz r9,1932(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// addi r11,r3,1584
	ctx.r11.s64 = ctx.r3.s64 + 1584;
	// lbz r8,15480(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15480);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// b 0x82222ca4
	goto loc_82222CA4;
loc_82222C8C:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,52520
	ctx.r6.u64 = ctx.r7.u64 | 52520;
	// lbzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,26400
	ctx.r11.s64 = ctx.r11.s64 + 26400;
loc_82222CA4:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82222cc0
	if (ctx.cr6.eq) goto loc_82222CC0;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82222cc0
	if (!ctx.cr6.lt) goto loc_82222CC0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82222CC0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82222c64
	if (ctx.cr6.lt) goto loc_82222C64;
loc_82222CCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222CD8"))) PPC_WEAK_FUNC(sub_82222CD8);
PPC_FUNC_IMPL(__imp__sub_82222CD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82222d34
	if (ctx.cr6.gt) {
		sub_82222D34(ctx, base);
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,11512
	ctx.r12.s64 = ctx.r12.s64 + 11512;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82222D2C
		return;
	case 1:
		// ERROR: 0x82222D24
		return;
	case 2:
		// ERROR: 0x82222D1C
		return;
	case 3:
		// ERROR: 0x82222D14
		return;
	case 4:
		// ERROR: 0x82222D14
		return;
	case 5:
		// ERROR: 0x82222D14
		return;
	case 6:
		// ERROR: 0x82222D14
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82222CF8"))) PPC_WEAK_FUNC(sub_82222CF8);
PPC_FUNC_IMPL(__imp__sub_82222CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,11564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11564);
	// lwz r17,11556(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11556);
	// lwz r17,11548(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11548);
	// lwz r17,11540(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11540);
	// lwz r17,11540(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11540);
	// lwz r17,11540(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11540);
	// lwz r17,11540(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11540);
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D1C"))) PPC_WEAK_FUNC(sub_82222D1C);
PPC_FUNC_IMPL(__imp__sub_82222D1C) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D24"))) PPC_WEAK_FUNC(sub_82222D24);
PPC_FUNC_IMPL(__imp__sub_82222D24) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D2C"))) PPC_WEAK_FUNC(sub_82222D2C);
PPC_FUNC_IMPL(__imp__sub_82222D2C) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D34"))) PPC_WEAK_FUNC(sub_82222D34);
PPC_FUNC_IMPL(__imp__sub_82222D34) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D3C"))) PPC_WEAK_FUNC(sub_82222D3C);
PPC_FUNC_IMPL(__imp__sub_82222D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222D40"))) PPC_WEAK_FUNC(sub_82222D40);
PPC_FUNC_IMPL(__imp__sub_82222D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82222D48;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r23,r11,-24856
	ctx.r23.s64 = ctx.r11.s64 + -24856;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r11,-31856
	ctx.r28.s64 = ctx.r11.s64 + -31856;
loc_82222D68:
	// mulli r11,r25,10565
	ctx.r11.s64 = ctx.r25.s64 * 10565;
	// add r27,r11,r22
	ctx.r27.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82222D80:
	// lbzx r11,r24,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r26.u32);
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// lbzx r10,r24,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82222e4c
	if (ctx.cr6.eq) goto loc_82222E4C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82222e4c
	if (!ctx.cr6.gt) goto loc_82222E4C;
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
loc_82222DAC:
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// bgt cr6,0x82222e1c
	if (ctx.cr6.gt) goto loc_82222E1C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,11724
	ctx.r12.s64 = ctx.r12.s64 + 11724;
	// rlwinm r0,r25,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r25.u64) {
	case 0:
		goto loc_82222DE8;
	case 1:
		goto loc_82222DF0;
	case 2:
		goto loc_82222DF8;
	case 3:
		goto loc_82222E00;
	case 4:
		goto loc_82222E08;
	case 5:
		goto loc_82222E10;
	case 6:
		goto loc_82222E18;
	default:
		__builtin_unreachable();
	}
	// lwz r17,11752(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11752);
	// lwz r17,11760(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11760);
	// lwz r17,11768(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11768);
	// lwz r17,11776(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11776);
	// lwz r17,11784(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11784);
	// lwz r17,11792(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11792);
	// lwz r17,11800(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11800);
loc_82222DE8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82222e1c
	goto loc_82222E1C;
loc_82222DF0:
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// b 0x82222e1c
	goto loc_82222E1C;
loc_82222DF8:
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// b 0x82222e1c
	goto loc_82222E1C;
loc_82222E00:
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// b 0x82222e1c
	goto loc_82222E1C;
loc_82222E08:
	// addi r30,r28,64
	ctx.r30.s64 = ctx.r28.s64 + 64;
	// b 0x82222e1c
	goto loc_82222E1C;
loc_82222E10:
	// addi r30,r28,80
	ctx.r30.s64 = ctx.r28.s64 + 80;
	// b 0x82222e1c
	goto loc_82222E1C;
loc_82222E18:
	// addi r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 96;
loc_82222E1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8259da78
	ctx.lr = 0x82222E38;
	sub_8259DA78(ctx, base);
	// lbz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82222dac
	if (ctx.cr6.lt) goto loc_82222DAC;
loc_82222E4C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,2113
	ctx.r27.s64 = ctx.r27.s64 + 2113;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// blt cr6,0x82222d80
	if (ctx.cr6.lt) goto loc_82222D80;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// blt cr6,0x82222d68
	if (ctx.cr6.lt) goto loc_82222D68;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222E70"))) PPC_WEAK_FUNC(sub_82222E70);
PPC_FUNC_IMPL(__imp__sub_82222E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82222E78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r26,7
	ctx.r26.s64 = 7;
	// addi r28,r11,23504
	ctx.r28.s64 = ctx.r11.s64 + 23504;
loc_82222E88:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,5
	ctx.r27.s64 = 5;
loc_82222E90:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82222ecc
	if (!ctx.cr6.gt) goto loc_82222ECC;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
loc_82222EA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82222EB4;
	sub_8210FCF8(ctx, base);
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82222ea8
	if (ctx.cr6.lt) goto loc_82222EA8;
loc_82222ECC:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r29,r29,2113
	ctx.r29.s64 = ctx.r29.s64 + 2113;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82222e90
	if (!ctx.cr6.eq) goto loc_82222E90;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82222e88
	if (!ctx.cr6.eq) goto loc_82222E88;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222EF4"))) PPC_WEAK_FUNC(sub_82222EF4);
PPC_FUNC_IMPL(__imp__sub_82222EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222EF8"))) PPC_WEAK_FUNC(sub_82222EF8);
PPC_FUNC_IMPL(__imp__sub_82222EF8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82222F00;
	__savegprlr_25(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,289
	ctx.r6.s64 = 289;
	// li r9,287
	ctx.r9.s64 = 287;
	// stw r8,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,-96(r1)
	PPC_STORE_U8(ctx.r1.u32 + -96, ctx.r10.u8);
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r7,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r7.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r6,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r6.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r5,291
	ctx.r5.s64 = 291;
	// stw r9,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,292
	ctx.r7.s64 = 292;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// li r29,286
	ctx.r29.s64 = 286;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// stw r30,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r30.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// li r11,285
	ctx.r11.s64 = 285;
	// li r28,288
	ctx.r28.s64 = 288;
	// lwz r10,-92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// lbz r6,-96(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -96);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,-84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// stb r6,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r6.u8);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r6,-76(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r10,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r10.u8);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stb r9,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r9.u8);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// stb r8,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r8.u8);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stb r7,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r7.u8);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// stb r6,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r6.u8);
	// stw r30,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r30.u32);
	// li r30,25
	ctx.r30.s64 = 25;
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r29,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r29.u32);
	// stb r10,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r10.u8);
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r31.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r28,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r28.u32);
	// ori r11,r4,65535
	ctx.r11.u64 = ctx.r4.u64 | 65535;
	// stb r9,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r9.u8);
	// li r4,290
	ctx.r4.s64 = 290;
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// li r5,280
	ctx.r5.s64 = 280;
	// stw r30,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r30.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r5,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// stb r7,-96(r1)
	PPC_STORE_U8(ctx.r1.u32 + -96, ctx.r7.u8);
	// li r7,50
	ctx.r7.s64 = 50;
	// li r5,281
	ctx.r5.s64 = 281;
	// stb r8,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r8.u8);
	// stw r31,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r31.u32);
	// li r30,76
	ctx.r30.s64 = 76;
	// lwz r31,-76(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// li r29,100
	ctx.r29.s64 = 100;
	// stw r4,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r4.u32);
	// li r4,51
	ctx.r4.s64 = 51;
	// stw r7,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// li r7,75
	ctx.r7.s64 = 75;
	// stw r5,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// li r5,282
	ctx.r5.s64 = 282;
	// li r28,283
	ctx.r28.s64 = 283;
	// stw r31,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r31.u32);
	// li r27,101
	ctx.r27.s64 = 101;
	// lwz r31,-80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// li r26,284
	ctx.r26.s64 = 284;
	// li r25,278
	ctx.r25.s64 = 278;
	// stw r31,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r31.u32);
	// lbz r31,-96(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -96);
	// stb r31,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r31.u8);
	// lwz r31,-84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// stb r6,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r6.u8);
	// stw r31,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r31.u32);
	// lwz r31,-88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// stw r31,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r31.u32);
	// lwz r31,-92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// stw r31,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r31.u32);
	// stb r10,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// stw r7,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r7.u32);
	// li r7,279
	ctx.r7.s64 = 279;
	// stw r5,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r5.u32);
	// stb r9,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, ctx.r9.u8);
	// li r9,276
	ctx.r9.s64 = 276;
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// stw r10,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r10.u32);
	// stw r30,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r30.u32);
	// stw r29,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r29.u32);
	// stw r28,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r28.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stb r8,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r8.u8);
	// stw r27,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r27.u32);
	// stw r26,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r26.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stb r10,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r10.u8);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r25,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r25.u32);
	// stw r10,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r10.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stb r11,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, ctx.r11.u8);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r10,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r10.u32);
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// stw r10,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// ori r10,r4,65535
	ctx.r10.u64 = ctx.r4.u64 | 65535;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r11.u8);
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stb r11,-96(r1)
	PPC_STORE_U8(ctx.r1.u32 + -96, ctx.r11.u8);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stw r10,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// stw r9,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r9.u32);
	// stw r6,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r6.u32);
	// stb r4,316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 316, ctx.r4.u8);
	// lwz r5,-80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r11,-84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// stw r5,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r5.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,277
	ctx.r6.s64 = 277;
	// stw r10,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r10,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r10.u8);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// stb r11,348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 348, ctx.r11.u8);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stw r10,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r10.u32);
	// stb r11,364(r3)
	PPC_STORE_U8(ctx.r3.u32 + 364, ctx.r11.u8);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stw r10,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r10.u32);
	// stb r11,380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 380, ctx.r11.u8);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// stb r11,396(r3)
	PPC_STORE_U8(ctx.r3.u32 + 396, ctx.r11.u8);
	// stw r8,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r8.u32);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// stw r7,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r7.u32);
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// stb r10,412(r3)
	PPC_STORE_U8(ctx.r3.u32 + 412, ctx.r10.u8);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r10,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r10.u32);
	// stb r11,428(r3)
	PPC_STORE_U8(ctx.r3.u32 + 428, ctx.r11.u8);
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r11.u32);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
	// stw r10,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r10.u32);
	// stb r11,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r11.u8);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// stw r5,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r5.u32);
	// stw r4,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r4.u32);
	// stb r11,460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 460, ctx.r11.u8);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// stb r11,476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 476, ctx.r11.u8);
	// stw r10,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r10.u32);
	// stw r7,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r7.u32);
	// stw r6,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r6.u32);
	// stb r10,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r10.u8);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// stw r10,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r10.u32);
	// stb r11,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r11.u8);
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// stw r10,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r10.u32);
	// stb r11,524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 524, ctx.r11.u8);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// stw r10,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
	// stb r11,540(r3)
	PPC_STORE_U8(ctx.r3.u32 + 540, ctx.r11.u8);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// stw r11,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r11.u32);
	// stw r10,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r10.u32);
	// stb r11,556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 556, ctx.r11.u8);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822232A8"))) PPC_WEAK_FUNC(sub_822232A8);
PPC_FUNC_IMPL(__imp__sub_822232A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822232B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8240c080
	ctx.lr = 0x822232C4;
	sub_8240C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82223318
	if (!ctx.cr6.gt) goto loc_82223318;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
loc_822232DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cce0
	ctx.lr = 0x822232E8;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223304
	if (!ctx.cr6.eq) goto loc_82223304;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x8259cce0
	ctx.lr = 0x822232FC;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223324
	if (ctx.cr6.eq) goto loc_82223324;
loc_82223304:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,324
	ctx.r31.s64 = ctx.r31.s64 + 324;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822232dc
	if (ctx.cr6.lt) goto loc_822232DC;
loc_82223318:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82223324:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223330"))) PPC_WEAK_FUNC(sub_82223330);
PPC_FUNC_IMPL(__imp__sub_82223330) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8240c080
	ctx.lr = 0x8222334C;
	sub_8240C080(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8222337c
	if (!ctx.cr6.gt) goto loc_8222337C;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
loc_82223360:
	// lwz r8,320(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82223394
	if (ctx.cr6.eq) goto loc_82223394;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82223360
	if (ctx.cr6.lt) goto loc_82223360;
loc_8222337C:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82223394:
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
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

__attribute__((alias("__imp__sub_822233AC"))) PPC_WEAK_FUNC(sub_822233AC);
PPC_FUNC_IMPL(__imp__sub_822233AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822233B0"))) PPC_WEAK_FUNC(sub_822233B0);
PPC_FUNC_IMPL(__imp__sub_822233B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822233B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8240c080
	ctx.lr = 0x822233D0;
	sub_8240C080(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82223450
	if (!ctx.cr6.gt) goto loc_82223450;
	// addi r30,r28,80
	ctx.r30.s64 = ctx.r28.s64 + 80;
loc_822233F0:
	// lwz r9,520(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r8,524(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82223450
	if (!ctx.cr6.lt) goto loc_82223450;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// addi r3,r30,288
	ctx.r3.s64 = ctx.r30.s64 + 288;
	// bl 0x8259cce0
	ctx.lr = 0x8222340C;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222343c
	if (!ctx.cr6.eq) goto loc_8222343C;
	// lwz r7,520(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82223430;
	sub_8259D2A0(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r6.u32);
loc_8222343C:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,324
	ctx.r30.s64 = ctx.r30.s64 + 324;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822233f0
	if (ctx.cr6.lt) goto loc_822233F0;
loc_82223450:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stb r4,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r4.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223464"))) PPC_WEAK_FUNC(sub_82223464);
PPC_FUNC_IMPL(__imp__sub_82223464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223468"))) PPC_WEAK_FUNC(sub_82223468);
PPC_FUNC_IMPL(__imp__sub_82223468) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,101
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 101, ctx.xer);
	// bgt cr6,0x82223678
	if (ctx.cr6.gt) {
		sub_82223678(ctx, base);
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,13448
	ctx.r12.s64 = ctx.r12.s64 + 13448;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		// ERROR: 0x82223678
		return;
	case 1:
		// ERROR: 0x82223620
		return;
	case 2:
		// ERROR: 0x82223628
		return;
	case 3:
		// ERROR: 0x82223630
		return;
	case 4:
		// ERROR: 0x82223638
		return;
	case 5:
		// ERROR: 0x82223640
		return;
	case 6:
		// ERROR: 0x82223648
		return;
	case 7:
		// ERROR: 0x82223650
		return;
	case 8:
		// ERROR: 0x82223658
		return;
	case 9:
		// ERROR: 0x82223660
		return;
	case 10:
		// ERROR: 0x82223678
		return;
	case 11:
		// ERROR: 0x82223678
		return;
	case 12:
		// ERROR: 0x82223678
		return;
	case 13:
		// ERROR: 0x82223678
		return;
	case 14:
		// ERROR: 0x82223678
		return;
	case 15:
		// ERROR: 0x82223678
		return;
	case 16:
		// ERROR: 0x82223678
		return;
	case 17:
		// ERROR: 0x82223678
		return;
	case 18:
		// ERROR: 0x82223678
		return;
	case 19:
		// ERROR: 0x82223678
		return;
	case 20:
		// ERROR: 0x82223678
		return;
	case 21:
		// ERROR: 0x82223678
		return;
	case 22:
		// ERROR: 0x82223678
		return;
	case 23:
		// ERROR: 0x82223678
		return;
	case 24:
		// ERROR: 0x82223678
		return;
	case 25:
		// ERROR: 0x82223678
		return;
	case 26:
		// ERROR: 0x82223678
		return;
	case 27:
		// ERROR: 0x82223678
		return;
	case 28:
		// ERROR: 0x82223678
		return;
	case 29:
		// ERROR: 0x82223678
		return;
	case 30:
		// ERROR: 0x82223678
		return;
	case 31:
		// ERROR: 0x82223678
		return;
	case 32:
		// ERROR: 0x82223678
		return;
	case 33:
		// ERROR: 0x82223678
		return;
	case 34:
		// ERROR: 0x82223678
		return;
	case 35:
		// ERROR: 0x82223678
		return;
	case 36:
		// ERROR: 0x82223678
		return;
	case 37:
		// ERROR: 0x82223678
		return;
	case 38:
		// ERROR: 0x82223678
		return;
	case 39:
		// ERROR: 0x82223678
		return;
	case 40:
		// ERROR: 0x82223678
		return;
	case 41:
		// ERROR: 0x82223678
		return;
	case 42:
		// ERROR: 0x82223678
		return;
	case 43:
		// ERROR: 0x82223678
		return;
	case 44:
		// ERROR: 0x82223678
		return;
	case 45:
		// ERROR: 0x82223678
		return;
	case 46:
		// ERROR: 0x82223678
		return;
	case 47:
		// ERROR: 0x82223678
		return;
	case 48:
		// ERROR: 0x82223678
		return;
	case 49:
		// ERROR: 0x82223678
		return;
	case 50:
		// ERROR: 0x82223678
		return;
	case 51:
		// ERROR: 0x82223678
		return;
	case 52:
		// ERROR: 0x82223678
		return;
	case 53:
		// ERROR: 0x82223678
		return;
	case 54:
		// ERROR: 0x82223678
		return;
	case 55:
		// ERROR: 0x82223678
		return;
	case 56:
		// ERROR: 0x82223678
		return;
	case 57:
		// ERROR: 0x82223678
		return;
	case 58:
		// ERROR: 0x82223678
		return;
	case 59:
		// ERROR: 0x82223678
		return;
	case 60:
		// ERROR: 0x82223678
		return;
	case 61:
		// ERROR: 0x82223678
		return;
	case 62:
		// ERROR: 0x82223678
		return;
	case 63:
		// ERROR: 0x82223678
		return;
	case 64:
		// ERROR: 0x82223678
		return;
	case 65:
		// ERROR: 0x82223678
		return;
	case 66:
		// ERROR: 0x82223678
		return;
	case 67:
		// ERROR: 0x82223678
		return;
	case 68:
		// ERROR: 0x82223678
		return;
	case 69:
		// ERROR: 0x82223678
		return;
	case 70:
		// ERROR: 0x82223678
		return;
	case 71:
		// ERROR: 0x82223678
		return;
	case 72:
		// ERROR: 0x82223678
		return;
	case 73:
		// ERROR: 0x82223678
		return;
	case 74:
		// ERROR: 0x82223678
		return;
	case 75:
		// ERROR: 0x82223678
		return;
	case 76:
		// ERROR: 0x82223678
		return;
	case 77:
		// ERROR: 0x82223678
		return;
	case 78:
		// ERROR: 0x82223678
		return;
	case 79:
		// ERROR: 0x82223678
		return;
	case 80:
		// ERROR: 0x82223678
		return;
	case 81:
		// ERROR: 0x82223678
		return;
	case 82:
		// ERROR: 0x82223678
		return;
	case 83:
		// ERROR: 0x82223678
		return;
	case 84:
		// ERROR: 0x82223678
		return;
	case 85:
		// ERROR: 0x82223678
		return;
	case 86:
		// ERROR: 0x82223678
		return;
	case 87:
		// ERROR: 0x82223678
		return;
	case 88:
		// ERROR: 0x82223678
		return;
	case 89:
		// ERROR: 0x82223678
		return;
	case 90:
		// ERROR: 0x82223678
		return;
	case 91:
		// ERROR: 0x82223678
		return;
	case 92:
		// ERROR: 0x82223678
		return;
	case 93:
		// ERROR: 0x82223678
		return;
	case 94:
		// ERROR: 0x82223678
		return;
	case 95:
		// ERROR: 0x82223678
		return;
	case 96:
		// ERROR: 0x82223678
		return;
	case 97:
		// ERROR: 0x82223678
		return;
	case 98:
		// ERROR: 0x82223678
		return;
	case 99:
		// ERROR: 0x82223678
		return;
	case 100:
		// ERROR: 0x82223668
		return;
	case 101:
		// ERROR: 0x82223670
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82223488"))) PPC_WEAK_FUNC(sub_82223488);
PPC_FUNC_IMPL(__imp__sub_82223488) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13856(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13856);
	// lwz r17,13864(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13864);
	// lwz r17,13872(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13872);
	// lwz r17,13880(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13880);
	// lwz r17,13888(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13888);
	// lwz r17,13896(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13896);
	// lwz r17,13904(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13904);
	// lwz r17,13912(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13912);
	// lwz r17,13920(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13920);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13944);
	// lwz r17,13928(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13928);
	// lwz r17,13936(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13936);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223628"))) PPC_WEAK_FUNC(sub_82223628);
PPC_FUNC_IMPL(__imp__sub_82223628) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223630"))) PPC_WEAK_FUNC(sub_82223630);
PPC_FUNC_IMPL(__imp__sub_82223630) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223638"))) PPC_WEAK_FUNC(sub_82223638);
PPC_FUNC_IMPL(__imp__sub_82223638) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223640"))) PPC_WEAK_FUNC(sub_82223640);
PPC_FUNC_IMPL(__imp__sub_82223640) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223648"))) PPC_WEAK_FUNC(sub_82223648);
PPC_FUNC_IMPL(__imp__sub_82223648) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223650"))) PPC_WEAK_FUNC(sub_82223650);
PPC_FUNC_IMPL(__imp__sub_82223650) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223658"))) PPC_WEAK_FUNC(sub_82223658);
PPC_FUNC_IMPL(__imp__sub_82223658) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223660"))) PPC_WEAK_FUNC(sub_82223660);
PPC_FUNC_IMPL(__imp__sub_82223660) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223668"))) PPC_WEAK_FUNC(sub_82223668);
PPC_FUNC_IMPL(__imp__sub_82223668) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223670"))) PPC_WEAK_FUNC(sub_82223670);
PPC_FUNC_IMPL(__imp__sub_82223670) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223678"))) PPC_WEAK_FUNC(sub_82223678);
PPC_FUNC_IMPL(__imp__sub_82223678) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223680"))) PPC_WEAK_FUNC(sub_82223680);
PPC_FUNC_IMPL(__imp__sub_82223680) {
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
	// addi r5,r31,184
	ctx.r5.s64 = ctx.r31.s64 + 184;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x822232a8
	ctx.lr = 0x822236A0;
	sub_822232A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x822236d0
	if (!ctx.cr6.eq) goto loc_822236D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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
loc_822236D0:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x8240c438
	ctx.lr = 0x822236E0;
	sub_8240C438(ctx, base);
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

__attribute__((alias("__imp__sub_822236F4"))) PPC_WEAK_FUNC(sub_822236F4);
PPC_FUNC_IMPL(__imp__sub_822236F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822236F8"))) PPC_WEAK_FUNC(sub_822236F8);
PPC_FUNC_IMPL(__imp__sub_822236F8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223738
	if (ctx.cr6.eq) goto loc_82223738;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82223738
	if (ctx.cr6.eq) goto loc_82223738;
	// bl 0x8240c568
	ctx.lr = 0x82223728;
	sub_8240C568(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stb r9,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r9.u8);
loc_82223738:
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

__attribute__((alias("__imp__sub_8222374C"))) PPC_WEAK_FUNC(sub_8222374C);
PPC_FUNC_IMPL(__imp__sub_8222374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223750"))) PPC_WEAK_FUNC(sub_82223750);
PPC_FUNC_IMPL(__imp__sub_82223750) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r5,r11,-22920
	ctx.r5.s64 = ctx.r11.s64 + -22920;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
loc_82223774:
	// lbzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_82223780:
	// lbzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822237a0
	if (ctx.cr6.eq) goto loc_822237A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x82223780
	if (ctx.cr6.lt) goto loc_82223780;
	// b 0x822237b0
	goto loc_822237B0;
loc_822237A0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r3,r11,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// or r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_822237B0:
	// lbzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// ble cr6,0x822237d0
	if (!ctx.cr6.gt) goto loc_822237D0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_822237D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// blt cr6,0x82223774
	if (ctx.cr6.lt) goto loc_82223774;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822237E0"))) PPC_WEAK_FUNC(sub_822237E0);
PPC_FUNC_IMPL(__imp__sub_822237E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-22920
	ctx.r7.s64 = ctx.r10.s64 + -22920;
loc_822237F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sraw r6,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r6.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r5,r6,26
	ctx.r5.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r10.u8);
	// beq cr6,0x82223900
	if (ctx.cr6.eq) goto loc_82223900;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// ble cr6,0x82223824
	if (!ctx.cr6.gt) goto loc_82223824;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82223824:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// sraw r5,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r5.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// lbzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// beq cr6,0x82223900
	if (ctx.cr6.eq) goto loc_82223900;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// ble cr6,0x82223858
	if (!ctx.cr6.gt) goto loc_82223858;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82223858:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// sraw r5,r3,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r5.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// lbzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r10.u8);
	// beq cr6,0x82223900
	if (ctx.cr6.eq) goto loc_82223900;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// ble cr6,0x8222388c
	if (!ctx.cr6.gt) goto loc_8222388C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8222388C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// sraw r5,r3,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r5.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// lbzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r10.u8);
	// beq cr6,0x82223900
	if (ctx.cr6.eq) goto loc_82223900;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// ble cr6,0x822238c0
	if (!ctx.cr6.gt) goto loc_822238C0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822238C0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// sraw r5,r3,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r5.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// lbzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r10.u8);
	// beq cr6,0x82223900
	if (ctx.cr6.eq) goto loc_82223900;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// ble cr6,0x822238f4
	if (!ctx.cr6.gt) goto loc_822238F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822238F4:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// blt cr6,0x822237f4
	if (ctx.cr6.lt) goto loc_822237F4;
loc_82223900:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,15(r4)
	PPC_STORE_U8(ctx.r4.u32 + 15, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222390C"))) PPC_WEAK_FUNC(sub_8222390C);
PPC_FUNC_IMPL(__imp__sub_8222390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223910"))) PPC_WEAK_FUNC(sub_82223910);
PPC_FUNC_IMPL(__imp__sub_82223910) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_8222391C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82223944
	if (!ctx.cr6.eq) goto loc_82223944;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8222391c
	if (ctx.cr6.lt) goto loc_8222391C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82223944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222394C"))) PPC_WEAK_FUNC(sub_8222394C);
PPC_FUNC_IMPL(__imp__sub_8222394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223950"))) PPC_WEAK_FUNC(sub_82223950);
PPC_FUNC_IMPL(__imp__sub_82223950) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_8222395C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82223988
	if (ctx.cr6.lt) goto loc_82223988;
	// bgt cr6,0x82223980
	if (ctx.cr6.gt) goto loc_82223980;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x8222395c
	if (ctx.cr6.lt) goto loc_8222395C;
loc_82223980:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82223988:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223990"))) PPC_WEAK_FUNC(sub_82223990);
PPC_FUNC_IMPL(__imp__sub_82223990) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_8222399C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822239c8
	if (ctx.cr6.gt) goto loc_822239C8;
	// blt cr6,0x822239c0
	if (ctx.cr6.lt) goto loc_822239C0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x8222399c
	if (ctx.cr6.lt) goto loc_8222399C;
loc_822239C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822239C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822239D0"))) PPC_WEAK_FUNC(sub_822239D0);
PPC_FUNC_IMPL(__imp__sub_822239D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82361a18
	sub_82361A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822239D4"))) PPC_WEAK_FUNC(sub_822239D4);
PPC_FUNC_IMPL(__imp__sub_822239D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822239D8"))) PPC_WEAK_FUNC(sub_822239D8);
PPC_FUNC_IMPL(__imp__sub_822239D8) {
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
	ctx.lr = 0x822239FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361a30
	ctx.lr = 0x82223A08;
	sub_82361A30(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82223a2c
	if (!ctx.cr6.eq) goto loc_82223A2C;
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
loc_82223A2C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82223A4C"))) PPC_WEAK_FUNC(sub_82223A4C);
PPC_FUNC_IMPL(__imp__sub_82223A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223A50"))) PPC_WEAK_FUNC(sub_82223A50);
PPC_FUNC_IMPL(__imp__sub_82223A50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82361a80
	sub_82361A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223A54"))) PPC_WEAK_FUNC(sub_82223A54);
PPC_FUNC_IMPL(__imp__sub_82223A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223A58"))) PPC_WEAK_FUNC(sub_82223A58);
PPC_FUNC_IMPL(__imp__sub_82223A58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8212bb98
	sub_8212BB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223A5C"))) PPC_WEAK_FUNC(sub_82223A5C);
PPC_FUNC_IMPL(__imp__sub_82223A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223A60"))) PPC_WEAK_FUNC(sub_82223A60);
PPC_FUNC_IMPL(__imp__sub_82223A60) {
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
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82223a90
	if (!ctx.cr6.eq) goto loc_82223A90;
loc_82223A7C:
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
loc_82223A90:
	// lbz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223a7c
	if (ctx.cr6.eq) goto loc_82223A7C;
	// bl 0x82589630
	ctx.lr = 0x82223AA0;
	sub_82589630(ctx, base);
	// rlwinm r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82223ab4
	if (!ctx.cr6.eq) goto loc_82223AB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223AB4:
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
}

__attribute__((alias("__imp__sub_82223AC8"))) PPC_WEAK_FUNC(sub_82223AC8);
PPC_FUNC_IMPL(__imp__sub_82223AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82223AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26384
	ctx.r4.s64 = ctx.r11.s64 + 26384;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x82223B08;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x82223B18;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82223b28
	if (!ctx.cr6.eq) goto loc_82223B28;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82223B28:
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82223b38
	if (!ctx.cr6.eq) goto loc_82223B38;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82223B38:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x82223B54;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223B5C"))) PPC_WEAK_FUNC(sub_82223B5C);
PPC_FUNC_IMPL(__imp__sub_82223B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223B60"))) PPC_WEAK_FUNC(sub_82223B60);
PPC_FUNC_IMPL(__imp__sub_82223B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82223B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26388
	ctx.r4.s64 = ctx.r11.s64 + 26388;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x82223BA0;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x82223BB0;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82223bc0
	if (!ctx.cr6.eq) goto loc_82223BC0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82223BC0:
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82223bd0
	if (!ctx.cr6.eq) goto loc_82223BD0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82223BD0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x82223BEC;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223BF4"))) PPC_WEAK_FUNC(sub_82223BF4);
PPC_FUNC_IMPL(__imp__sub_82223BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223BF8"))) PPC_WEAK_FUNC(sub_82223BF8);
PPC_FUNC_IMPL(__imp__sub_82223BF8) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,-99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -99, ctx.xer);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bgt cr6,0x82223c2c
	if (ctx.cr6.gt) goto loc_82223C2C;
	// li r10,-99
	ctx.r10.s64 = -99;
loc_82223C2C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// bl 0x82360f70
	ctx.lr = 0x82223C38;
	sub_82360F70(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x82223C44;
	sub_82364000(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82223C60"))) PPC_WEAK_FUNC(sub_82223C60);
PPC_FUNC_IMPL(__imp__sub_82223C60) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// blt cr6,0x82223c94
	if (ctx.cr6.lt) goto loc_82223C94;
	// li r10,99
	ctx.r10.s64 = 99;
loc_82223C94:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// bl 0x82360f70
	ctx.lr = 0x82223CA0;
	sub_82360F70(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x82223CAC;
	sub_82364000(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82223CC8"))) PPC_WEAK_FUNC(sub_82223CC8);
PPC_FUNC_IMPL(__imp__sub_82223CC8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,9999
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9999, ctx.xer);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// blt cr6,0x82223d04
	if (ctx.cr6.lt) goto loc_82223D04;
	// li r10,9999
	ctx.r10.s64 = 9999;
loc_82223D04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// bl 0x82360f70
	ctx.lr = 0x82223D10;
	sub_82360F70(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x82223D1C;
	sub_82364000(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82223D38"))) PPC_WEAK_FUNC(sub_82223D38);
PPC_FUNC_IMPL(__imp__sub_82223D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82223D40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223eb8
	if (ctx.cr6.eq) goto loc_82223EB8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// li r30,5
	ctx.r30.s64 = 5;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82223d78
	if (!ctx.cr6.eq) goto loc_82223D78;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82223D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823475c0
	ctx.lr = 0x82223D80;
	sub_823475C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82365b88
	ctx.lr = 0x82223D90;
	sub_82365B88(ctx, base);
	// lis r27,-32090
	ctx.r27.s64 = -2103050240;
	// lwz r11,26592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82223da8
	if (!ctx.cr6.eq) goto loc_82223DA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223DA8:
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r4,r3,r30
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// divw r10,r5,r11
	ctx.r10.s32 = ctx.r5.s32 / ctx.r11.s32;
	// andc r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x82223e04
	if (!ctx.cr6.eq) goto loc_82223E04;
	// addi r3,r28,2472
	ctx.r3.s64 = ctx.r28.s64 + 2472;
	// bl 0x82223a60
	ctx.lr = 0x82223DF4;
	sub_82223A60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,1364
	ctx.r3.s64 = ctx.r31.s64 + 1364;
	// lfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82219b70
	ctx.lr = 0x82223E04;
	sub_82219B70(ctx, base);
loc_82223E04:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x8221a538
	ctx.lr = 0x82223E14;
	sub_8221A538(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82223e6c
	if (ctx.cr6.eq) goto loc_82223E6C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r28,2518
	ctx.r11.s64 = ctx.r28.s64 + 2518;
loc_82223E28:
	// lwz r5,-26(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26);
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82223e38
	if (!ctx.cr6.eq) goto loc_82223E38;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82223E38:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r4,r28,2686
	ctx.r4.s64 = ctx.r28.s64 + 2686;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82223e28
	if (ctx.cr6.lt) goto loc_82223E28;
	// lwz r11,26592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82223e5c
	if (!ctx.cr6.eq) goto loc_82223E5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223E5C:
	// addi r3,r31,1396
	ctx.r3.s64 = ctx.r31.s64 + 1396;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// sth r11,1352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1352, ctx.r11.u16);
	// bl 0x82219bb0
	ctx.lr = 0x82223E6C;
	sub_82219BB0(ctx, base);
loc_82223E6C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x8221a5b0
	ctx.lr = 0x82223E78;
	sub_8221A5B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223eb8
	if (ctx.cr6.eq) goto loc_82223EB8;
	// lwz r11,26592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82223e98
	if (!ctx.cr6.eq) goto loc_82223E98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223E98:
	// sth r11,1352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1352, ctx.r11.u16);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-1472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1472);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1356(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
loc_82223EB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223EC0"))) PPC_WEAK_FUNC(sub_82223EC0);
PPC_FUNC_IMPL(__imp__sub_82223EC0) {
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
	// bl 0x8212bb98
	ctx.lr = 0x82223ED8;
	sub_8212BB98(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,1380
	ctx.r7.s64 = ctx.r31.s64 + 1380;
	// addi r6,r31,1364
	ctx.r6.s64 = ctx.r31.s64 + 1364;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82223EFC;
	sub_82364AC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,1408
	ctx.r7.s64 = ctx.r31.s64 + 1408;
	// addi r6,r31,1396
	ctx.r6.s64 = ctx.r31.s64 + 1396;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82223F20;
	sub_82364AC0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r9,r9,-14664
	ctx.r9.s64 = ctx.r9.s64 + -14664;
	// addi r8,r11,-14736
	ctx.r8.s64 = ctx.r11.s64 + -14736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,1420
	ctx.r6.s64 = ctx.r31.s64 + 1420;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82223F50;
	sub_82364AC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,1496
	ctx.r7.s64 = ctx.r31.s64 + 1496;
	// addi r6,r31,1484
	ctx.r6.s64 = ctx.r31.s64 + 1484;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82223F74;
	sub_82364AC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,1544
	ctx.r7.s64 = ctx.r31.s64 + 1544;
	// addi r6,r31,1508
	ctx.r6.s64 = ctx.r31.s64 + 1508;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82223F98;
	sub_82364AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82223FAC"))) PPC_WEAK_FUNC(sub_82223FAC);
PPC_FUNC_IMPL(__imp__sub_82223FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223FB0"))) PPC_WEAK_FUNC(sub_82223FB0);
PPC_FUNC_IMPL(__imp__sub_82223FB0) {
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
	// bl 0x8221c328
	ctx.lr = 0x82223FC8;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223ff4
	if (ctx.cr6.eq) goto loc_82223FF4;
	// addi r3,r3,-13632
	ctx.r3.s64 = ctx.r3.s64 + -13632;
	// bl 0x82366308
	ctx.lr = 0x82223FE0;
	sub_82366308(ctx, base);
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
loc_82223FF4:
	// addi r3,r3,-13728
	ctx.r3.s64 = ctx.r3.s64 + -13728;
	// bl 0x82365fd0
	ctx.lr = 0x82223FFC;
	sub_82365FD0(ctx, base);
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

__attribute__((alias("__imp__sub_82224010"))) PPC_WEAK_FUNC(sub_82224010);
PPC_FUNC_IMPL(__imp__sub_82224010) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221c328
	ctx.lr = 0x82224030;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224078
	if (ctx.cr6.eq) goto loc_82224078;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82224054
	if (!ctx.cr6.eq) goto loc_82224054;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224054:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// ori r8,r9,51912
	ctx.r8.u64 = ctx.r9.u64 | 51912;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r3,r3,-13632
	ctx.r3.s64 = ctx.r3.s64 + -13632;
	// lfsx f1,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823732c8
	ctx.lr = 0x82224074;
	sub_823732C8(ctx, base);
	// b 0x822240b0
	goto loc_822240B0;
loc_82224078:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822240b0
	if (ctx.cr6.eq) goto loc_822240B0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x8222409c
	if (!ctx.cr6.eq) goto loc_8222409C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222409C:
	// addis r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 262144;
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r5,r5,-13624
	ctx.r5.s64 = ctx.r5.s64 + -13624;
	// addi r3,r3,-13728
	ctx.r3.s64 = ctx.r3.s64 + -13728;
	// bl 0x82373080
	ctx.lr = 0x822240B0;
	sub_82373080(ctx, base);
loc_822240B0:
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

__attribute__((alias("__imp__sub_822240C8"))) PPC_WEAK_FUNC(sub_822240C8);
PPC_FUNC_IMPL(__imp__sub_822240C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822240D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822240f4
	if (!ctx.cr6.eq) goto loc_822240F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822240F4:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r8,r9,51950
	ctx.r8.u64 = ctx.r9.u64 | 51950;
	// addi r31,r10,26752
	ctx.r31.s64 = ctx.r10.s64 + 26752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r11,r30,r8
	PPC_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u16);
	// bl 0x8221c328
	ctx.lr = 0x82224110;
	sub_8221C328(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222412c
	if (ctx.cr6.eq) goto loc_8222412C;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// bl 0x82366308
	ctx.lr = 0x82224128;
	sub_82366308(ctx, base);
	// b 0x82224134
	goto loc_82224134;
loc_8222412C:
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// bl 0x82365fd0
	ctx.lr = 0x82224134;
	sub_82365FD0(ctx, base);
loc_82224134:
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82224154
	if (ctx.cr6.eq) goto loc_82224154;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365d58
	ctx.lr = 0x82224150;
	sub_82365D58(ctx, base);
	// b 0x82224168
	goto loc_82224168;
loc_82224154:
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82224168:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365d50
	ctx.lr = 0x82224178;
	sub_82365D50(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822241b8
	if (ctx.cr6.eq) goto loc_822241B8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822241b8
	if (ctx.cr6.eq) goto loc_822241B8;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,264(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822241B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822241B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x822241C0;
	sub_8221C328(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822241dc
	if (ctx.cr6.eq) goto loc_822241DC;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// bl 0x823662a0
	ctx.lr = 0x822241D8;
	sub_823662A0(ctx, base);
	// b 0x822241e4
	goto loc_822241E4;
loc_822241DC:
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// bl 0x82365f48
	ctx.lr = 0x822241E4;
	sub_82365F48(ctx, base);
loc_822241E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82360f70
	ctx.lr = 0x822241EC;
	sub_82360F70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82360f70
	ctx.lr = 0x822241F4;
	sub_82360F70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822241FC"))) PPC_WEAK_FUNC(sub_822241FC);
PPC_FUNC_IMPL(__imp__sub_822241FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224200"))) PPC_WEAK_FUNC(sub_82224200);
PPC_FUNC_IMPL(__imp__sub_82224200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x82224208;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addis r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 262144;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r11,r11,-13584
	ctx.r11.s64 = ctx.r11.s64 + -13584;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// ori r28,r9,51950
	ctx.r28.u64 = ctx.r9.u64 | 51950;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82224294
	if (ctx.cr6.eq) goto loc_82224294;
	// stb r20,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r20.u8);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82224250
	if (!ctx.cr6.eq) goto loc_82224250;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82224250:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lbz r10,6036(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6036);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,500
	ctx.r10.s64 = 500;
	// bne cr6,0x82224268
	if (!ctx.cr6.eq) goto loc_82224268;
	// li r10,600
	ctx.r10.s64 = 600;
loc_82224268:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8222428c
	if (!ctx.cr6.eq) goto loc_8222428C;
	// sth r20,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r20.u16);
loc_8222428C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82360f70
	ctx.lr = 0x82224294;
	sub_82360F70(ctx, base);
loc_82224294:
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// lbzx r11,r27,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822242b4
	if (ctx.cr6.eq) goto loc_822242B4;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82365d58
	ctx.lr = 0x822242B0;
	sub_82365D58(ctx, base);
	// b 0x822242c8
	goto loc_822242C8;
loc_822242B4:
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822242C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822242C8:
	// addi r21,r27,24
	ctx.r21.s64 = ctx.r27.s64 + 24;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823656f8
	ctx.lr = 0x822242D8;
	sub_823656F8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822242ec
	if (ctx.cr6.eq) goto loc_822242EC;
	// bl 0x823475c0
	ctx.lr = 0x822242E8;
	sub_823475C0(ctx, base);
	// b 0x822242f4
	goto loc_822242F4;
loc_822242EC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823656e8
	ctx.lr = 0x822242F4;
	sub_823656E8(ctx, base);
loc_822242F4:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// ori r25,r8,51920
	ctx.r25.u64 = ctx.r8.u64 | 51920;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82224644
	if (!ctx.cr6.gt) goto loc_82224644;
loc_82224318:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82365758
	ctx.lr = 0x82224324;
	sub_82365758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822244d4
	if (ctx.cr6.eq) goto loc_822244D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1496
	ctx.r3.s64 = ctx.r30.s64 + 1496;
	// bl 0x8221a428
	ctx.lr = 0x8222433C;
	sub_8221A428(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822243e4
	if (ctx.cr6.eq) goto loc_822243E4;
	// bl 0x82101828
	ctx.lr = 0x8222434C;
	sub_82101828(ctx, base);
	// add r8,r27,r25
	ctx.r8.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sthx r3,r27,r28
	PPC_STORE_U16(ctx.r27.u32 + ctx.r28.u32, ctx.r3.u16);
loc_82224360:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822244a8
	if (ctx.cr6.eq) goto loc_822244A8;
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x82224384
	if (ctx.cr6.eq) goto loc_82224384;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x82224360
	if (ctx.cr6.lt) goto loc_82224360;
loc_82224384:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82224388:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822243e4
	if (ctx.cr6.eq) goto loc_822243E4;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x822243d8
	if (ctx.cr6.eq) goto loc_822243D8;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822243A4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822244b0
	if (ctx.cr6.eq) goto loc_822244B0;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x822243c8
	if (ctx.cr6.eq) goto loc_822243C8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x822243a4
	if (ctx.cr6.lt) goto loc_822243A4;
loc_822243C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822243CC:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822243e4
	if (ctx.cr6.eq) goto loc_822243E4;
loc_822243D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82360f70
	ctx.lr = 0x822243E0;
	sub_82360F70(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822243E4:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1544
	ctx.r3.s64 = ctx.r30.s64 + 1544;
	// bl 0x8221a498
	ctx.lr = 0x822243F4;
	sub_8221A498(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822244d4
	if (ctx.cr6.eq) goto loc_822244D4;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x822244d4
	if (ctx.cr6.eq) goto loc_822244D4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82224450
	if (ctx.cr6.eq) goto loc_82224450;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// add r10,r27,r25
	ctx.r10.u64 = ctx.r27.u64 + ctx.r25.u64;
loc_8222441C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822244b8
	if (ctx.cr6.eq) goto loc_822244B8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82224440
	if (ctx.cr6.eq) goto loc_82224440;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8222441c
	if (ctx.cr6.lt) goto loc_8222441C;
loc_82224440:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82224444:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822244d4
	if (ctx.cr6.eq) goto loc_822244D4;
loc_82224450:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82360f70
	ctx.lr = 0x82224458;
	sub_82360F70(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222446C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8222446c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222446C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82224488:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x822244c0
	if (ctx.cr6.eq) goto loc_822244C0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x82224488
	if (ctx.cr6.lt) goto loc_82224488;
	// b 0x822244d4
	goto loc_822244D4;
loc_822244A8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82224388
	goto loc_82224388;
loc_822244B0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x822243cc
	goto loc_822243CC;
loc_822244B8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82224444
	goto loc_82224444;
loc_822244C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823475c0
	ctx.lr = 0x822244C8;
	sub_823475C0(ctx, base);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stwx r3,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r3.u32);
loc_822244D4:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82224318
	if (ctx.cr6.lt) goto loc_82224318;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x8222458c
	if (ctx.cr6.eq) goto loc_8222458C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222458c
	if (!ctx.cr6.gt) goto loc_8222458C;
loc_822244FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82365758
	ctx.lr = 0x82224508;
	sub_82365758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222457c
	if (ctx.cr6.eq) goto loc_8222457C;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
loc_8222451C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823475c0
	ctx.lr = 0x82224524;
	sub_823475C0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82224540
	if (ctx.cr6.eq) goto loc_82224540;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8222451c
	if (ctx.cr6.lt) goto loc_8222451C;
loc_82224540:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x8222457c
	if (!ctx.cr6.eq) goto loc_8222457C;
	// addi r3,r29,1508
	ctx.r3.s64 = ctx.r29.s64 + 1508;
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82224564
	if (ctx.cr6.eq) goto loc_82224564;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82224564:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222457c
	if (!ctx.cr6.eq) goto loc_8222457C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82219ab8
	ctx.lr = 0x8222457C;
	sub_82219AB8(ctx, base);
loc_8222457C:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822244fc
	if (ctx.cr6.lt) goto loc_822244FC;
loc_8222458C:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x822245a0
	if (!ctx.cr6.eq) goto loc_822245A0;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82224644
	if (ctx.cr6.eq) goto loc_82224644;
	// b 0x822245f0
	goto loc_822245F0;
loc_822245A0:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x822245b0
	if (!ctx.cr6.eq) goto loc_822245B0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x822245f4
	goto loc_822245F4;
loc_822245B0:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// add r10,r27,r25
	ctx.r10.u64 = ctx.r27.u64 + ctx.r25.u64;
loc_822245B8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x822247b8
	if (ctx.cr6.eq) goto loc_822247B8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x822245dc
	if (ctx.cr6.eq) goto loc_822245DC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x822245b8
	if (ctx.cr6.lt) goto loc_822245B8;
loc_822245DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822245E0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822245f4
	if (!ctx.cr6.eq) goto loc_822245F4;
loc_822245F0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_822245F4:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// add r10,r27,r25
	ctx.r10.u64 = ctx.r27.u64 + ctx.r25.u64;
loc_822245FC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822247c0
	if (ctx.cr6.eq) goto loc_822247C0;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x82224620
	if (ctx.cr6.eq) goto loc_82224620;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x822245fc
	if (ctx.cr6.lt) goto loc_822245FC;
loc_82224620:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82224624:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82224644
	if (ctx.cr6.eq) goto loc_82224644;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// bl 0x822240c8
	ctx.lr = 0x8222463C;
	sub_822240C8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82360f70
	ctx.lr = 0x82224644;
	sub_82360F70(ctx, base);
loc_82224644:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822247c8
	if (ctx.cr6.eq) goto loc_822247C8;
	// clrlwi r6,r19,24
	ctx.r6.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822247d0
	if (!ctx.cr6.eq) goto loc_822247D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221c018
	ctx.lr = 0x82224660;
	sub_8221C018(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822247d0
	if (!ctx.cr6.eq) goto loc_822247D0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823656e8
	ctx.lr = 0x82224674;
	sub_823656E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221c128
	ctx.lr = 0x82224680;
	sub_8221C128(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82224708
	if (!ctx.cr6.eq) goto loc_82224708;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
loc_82224694:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x822246b0
	if (ctx.cr6.eq) goto loc_822246B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82224694
	if (ctx.cr6.lt) goto loc_82224694;
loc_822246B0:
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// ori r29,r11,62132
	ctx.r29.u64 = ctx.r11.u64 | 62132;
	// bge cr6,0x822246fc
	if (!ctx.cr6.lt) goto loc_822246FC;
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_822246D0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x822246fc
	if (ctx.cr6.eq) goto loc_822246FC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823656f8
	ctx.lr = 0x822246E4;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822246fc
	if (!ctx.cr6.eq) goto loc_822246FC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x822246d0
	if (ctx.cr6.lt) goto loc_822246D0;
loc_822246FC:
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r8,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
loc_82224708:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82360f70
	ctx.lr = 0x82224710;
	sub_82360F70(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82224720:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82224720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82224720;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222479c
	if (!ctx.cr6.gt) goto loc_8222479C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
loc_82224744:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82224750;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222478c
	if (ctx.cr6.eq) goto loc_8222478C;
	// addi r3,r3,1508
	ctx.r3.s64 = ctx.r3.s64 + 1508;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82224774
	if (ctx.cr6.eq) goto loc_82224774;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82224774:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222478c
	if (!ctx.cr6.eq) goto loc_8222478C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82219ab8
	ctx.lr = 0x8222478C;
	sub_82219AB8(ctx, base);
loc_8222478C:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82224744
	if (ctx.cr6.lt) goto loc_82224744;
loc_8222479C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82360f70
	ctx.lr = 0x822247A4;
	sub_82360F70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822240c8
	ctx.lr = 0x822247B0;
	sub_822240C8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_822247B8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x822245e0
	goto loc_822245E0;
loc_822247C0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82224624
	goto loc_82224624;
loc_822247C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221bec8
	ctx.lr = 0x822247D0;
	sub_8221BEC8(ctx, base);
loc_822247D0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822247D8"))) PPC_WEAK_FUNC(sub_822247D8);
PPC_FUNC_IMPL(__imp__sub_822247D8) {
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
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r10,24760
	ctx.r10.s64 = ctx.r10.s64 + 24760;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82224844
	if (!ctx.cr6.eq) goto loc_82224844;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// stb r7,7570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7570, ctx.r7.u8);
	// bl 0x82203858
	ctx.lr = 0x8222482C;
	sub_82203858(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,15720
	ctx.r11.s64 = ctx.r11.s64 + 15720;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
loc_82224844:
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

__attribute__((alias("__imp__sub_8222485C"))) PPC_WEAK_FUNC(sub_8222485C);
PPC_FUNC_IMPL(__imp__sub_8222485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224860"))) PPC_WEAK_FUNC(sub_82224860);
PPC_FUNC_IMPL(__imp__sub_82224860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82224868;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addis r23,r25,4
	ctx.r23.s64 = ctx.r25.s64 + 262144;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r23,r23,-13548
	ctx.r23.s64 = ctx.r23.s64 + -13548;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r22,r10,51980
	ctx.r22.u64 = ctx.r10.u64 | 51980;
	// ori r31,r9,51912
	ctx.r31.u64 = ctx.r9.u64 | 51912;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822248ac
	if (ctx.cr6.eq) goto loc_822248AC;
	// lfsx f0,r25,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r22.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r25,r31
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bso cr6,0x822248ac
	if (ctx.cr6.so) goto loc_822248AC;
	// bge cr6,0x82224a88
	if (!ctx.cr6.lt) goto loc_82224A88;
loc_822248AC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82219e98
	ctx.lr = 0x822248BC;
	sub_82219E98(ctx, base);
	// lbz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r24,r7,51984
	ctx.r24.u64 = ctx.r7.u64 | 51984;
	// beq cr6,0x82224918
	if (ctx.cr6.eq) goto loc_82224918;
	// addis r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
loc_822248E0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822249a0
	if (ctx.cr6.eq) goto loc_822249A0;
	// lwzx r6,r25,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82224908
	if (ctx.cr6.eq) goto loc_82224908;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x822248e0
	if (ctx.cr6.lt) goto loc_822248E0;
loc_82224908:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8222490C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82224a88
	if (ctx.cr6.eq) goto loc_82224A88;
loc_82224918:
	// lfsx f12,r25,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82224978
	if (!ctx.cr6.gt) goto loc_82224978;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82224954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,3638
	ctx.r9.s64 = 238419968;
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// ori r4,r9,32087
	ctx.r4.u64 = ctx.r9.u64 | 32087;
	// ori r7,r8,15958
	ctx.r7.u64 = ctx.r8.u64 | 15958;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x82224978;
	sub_82103EC8(ctx, base);
loc_82224978:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82224980:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x822249a8
	if (ctx.cr6.eq) goto loc_822249A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82224980
	if (ctx.cr6.lt) goto loc_82224980;
	// b 0x822249b4
	goto loc_822249B4;
loc_822249A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222490c
	goto loc_8222490C;
loc_822249A8:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stwx r30,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r30.u32);
loc_822249B4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82224a70
	if (!ctx.cr6.gt) goto loc_82224A70;
loc_822249CC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x822249D8;
	sub_82365758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82224a60
	if (ctx.cr6.eq) goto loc_82224A60;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_822249F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823475c0
	ctx.lr = 0x822249F8;
	sub_823475C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82224a18
	if (ctx.cr6.eq) goto loc_82224A18;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x822249f0
	if (ctx.cr6.lt) goto loc_822249F0;
	// b 0x82224a1c
	goto loc_82224A1C;
loc_82224A18:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82224A1C:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82224a60
	if (!ctx.cr6.eq) goto loc_82224A60;
	// addi r3,r29,3420
	ctx.r3.s64 = ctx.r29.s64 + 3420;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82224a44
	if (ctx.cr6.eq) goto loc_82224A44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224A44:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82224a60
	if (!ctx.cr6.eq) goto loc_82224A60;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82219dc8
	ctx.lr = 0x82224A60;
	sub_82219DC8(ctx, base);
loc_82224A60:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822249cc
	if (ctx.cr6.lt) goto loc_822249CC;
loc_82224A70:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r25,r22
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r22.u32, temp.u32);
	// stwx r5,r25,r24
	PPC_STORE_U32(ctx.r25.u32 + ctx.r24.u32, ctx.r5.u32);
	// stb r4,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r4.u8);
loc_82224A88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224A90"))) PPC_WEAK_FUNC(sub_82224A90);
PPC_FUNC_IMPL(__imp__sub_82224A90) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1000, ctx.xer);
	// bgt cr6,0x82224a9c
	if (ctx.cr6.gt) goto loc_82224A9C;
	// b 0x8221c780
	sub_8221C780(ctx, base);
	return;
loc_82224A9C:
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bgt cr6,0x82224dc0
	if (ctx.cr6.gt) {
		sub_82224DC0(ctx, base);
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,19136
	ctx.r12.s64 = ctx.r12.s64 + 19136;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82224DB4
		return;
	case 1:
		// ERROR: 0x82224DA8
		return;
	case 2:
		// ERROR: 0x82224D9C
		return;
	case 3:
		// ERROR: 0x82224D90
		return;
	case 4:
		// ERROR: 0x82224D84
		return;
	case 5:
		// ERROR: 0x82224D78
		return;
	case 6:
		// ERROR: 0x82224C04
		return;
	case 7:
		// ERROR: 0x82224D6C
		return;
	case 8:
		// ERROR: 0x82224D60
		return;
	case 9:
		// ERROR: 0x82224D54
		return;
	case 10:
		// ERROR: 0x82224D48
		return;
	case 11:
		// ERROR: 0x82224D3C
		return;
	case 12:
		// ERROR: 0x82224D30
		return;
	case 13:
		// ERROR: 0x82224D24
		return;
	case 14:
		// ERROR: 0x82224D18
		return;
	case 15:
		// ERROR: 0x82224D0C
		return;
	case 16:
		// ERROR: 0x82224D00
		return;
	case 17:
		// ERROR: 0x82224CF4
		return;
	case 18:
		// ERROR: 0x82224CE8
		return;
	case 19:
		// ERROR: 0x82224BE0
		return;
	case 20:
		// ERROR: 0x82224CDC
		return;
	case 21:
		// ERROR: 0x82224CD0
		return;
	case 22:
		// ERROR: 0x82224CC4
		return;
	case 23:
		// ERROR: 0x82224C1C
		return;
	case 24:
		// ERROR: 0x82224CB8
		return;
	case 25:
		// ERROR: 0x82224CAC
		return;
	case 26:
		// ERROR: 0x82224CA0
		return;
	case 27:
		// ERROR: 0x82224C94
		return;
	case 28:
		// ERROR: 0x82224C10
		return;
	case 29:
		// ERROR: 0x82224C88
		return;
	case 30:
		// ERROR: 0x82224C7C
		return;
	case 31:
		// ERROR: 0x82224BF8
		return;
	case 32:
		// ERROR: 0x82224C70
		return;
	case 33:
		// ERROR: 0x82224C64
		return;
	case 34:
		// ERROR: 0x82224C58
		return;
	case 35:
		// ERROR: 0x82224C4C
		return;
	case 36:
		// ERROR: 0x82224C34
		return;
	case 37:
		// ERROR: 0x82224C40
		return;
	case 38:
		// ERROR: 0x82224C34
		return;
	case 39:
		// ERROR: 0x82224C28
		return;
	case 40:
		// ERROR: 0x82224C1C
		return;
	case 41:
		// ERROR: 0x82224C10
		return;
	case 42:
		// ERROR: 0x82224C04
		return;
	case 43:
		// ERROR: 0x82224BF8
		return;
	case 44:
		// ERROR: 0x82224BEC
		return;
	case 45:
		// ERROR: 0x82224BE0
		return;
	case 46:
		// ERROR: 0x82224BE0
		return;
	case 47:
		// ERROR: 0x82224DC0
		return;
	case 48:
		// ERROR: 0x82224C40
		return;
	case 49:
		// ERROR: 0x82224BD4
		return;
	case 50:
		// ERROR: 0x82224BC8
		return;
	case 51:
		// ERROR: 0x82224BBC
		return;
	case 52:
		// ERROR: 0x82224DC0
		return;
	case 53:
		// ERROR: 0x82224BB0
		return;
	case 54:
		// ERROR: 0x82224BA4
		return;
	case 55:
		// ERROR: 0x82224DC0
		return;
	case 56:
		// ERROR: 0x82224DC0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82224AC0"))) PPC_WEAK_FUNC(sub_82224AC0);
PPC_FUNC_IMPL(__imp__sub_82224AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,19892(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19892);
	// lwz r17,19880(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19880);
	// lwz r17,19868(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19868);
	// lwz r17,19856(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19856);
	// lwz r17,19844(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19844);
	// lwz r17,19832(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19832);
	// lwz r17,19460(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19460);
	// lwz r17,19820(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19820);
	// lwz r17,19808(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19808);
	// lwz r17,19796(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19796);
	// lwz r17,19784(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19784);
	// lwz r17,19772(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19772);
	// lwz r17,19760(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19760);
	// lwz r17,19748(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19748);
	// lwz r17,19736(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19736);
	// lwz r17,19724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19724);
	// lwz r17,19712(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19712);
	// lwz r17,19700(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19700);
	// lwz r17,19688(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19688);
	// lwz r17,19424(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19424);
	// lwz r17,19676(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19676);
	// lwz r17,19664(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19664);
	// lwz r17,19652(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19652);
	// lwz r17,19484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19484);
	// lwz r17,19640(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19640);
	// lwz r17,19628(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19628);
	// lwz r17,19616(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19616);
	// lwz r17,19604(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19604);
	// lwz r17,19472(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19472);
	// lwz r17,19592(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19592);
	// lwz r17,19580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19580);
	// lwz r17,19448(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19448);
	// lwz r17,19568(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19568);
	// lwz r17,19556(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19556);
	// lwz r17,19544(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19544);
	// lwz r17,19532(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19532);
	// lwz r17,19508(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19508);
	// lwz r17,19520(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19520);
	// lwz r17,19508(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19508);
	// lwz r17,19496(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19496);
	// lwz r17,19484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19484);
	// lwz r17,19472(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19472);
	// lwz r17,19460(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19460);
	// lwz r17,19448(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19448);
	// lwz r17,19436(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19436);
	// lwz r17,19424(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19424);
	// lwz r17,19424(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19424);
	// lwz r17,19904(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19904);
	// lwz r17,19520(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19520);
	// lwz r17,19412(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19412);
	// lwz r17,19400(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19400);
	// lwz r17,19388(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19388);
	// lwz r17,19904(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19904);
	// lwz r17,19376(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19376);
	// lwz r17,19364(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19364);
	// lwz r17,19904(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19904);
	// lwz r17,19904(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19904);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19004
	ctx.r3.s64 = ctx.r11.s64 + -19004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BB0"))) PPC_WEAK_FUNC(sub_82224BB0);
PPC_FUNC_IMPL(__imp__sub_82224BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BBC"))) PPC_WEAK_FUNC(sub_82224BBC);
PPC_FUNC_IMPL(__imp__sub_82224BBC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BC8"))) PPC_WEAK_FUNC(sub_82224BC8);
PPC_FUNC_IMPL(__imp__sub_82224BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BD4"))) PPC_WEAK_FUNC(sub_82224BD4);
PPC_FUNC_IMPL(__imp__sub_82224BD4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19108
	ctx.r3.s64 = ctx.r11.s64 + -19108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BE0"))) PPC_WEAK_FUNC(sub_82224BE0);
PPC_FUNC_IMPL(__imp__sub_82224BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19140
	ctx.r3.s64 = ctx.r11.s64 + -19140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BEC"))) PPC_WEAK_FUNC(sub_82224BEC);
PPC_FUNC_IMPL(__imp__sub_82224BEC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BF8"))) PPC_WEAK_FUNC(sub_82224BF8);
PPC_FUNC_IMPL(__imp__sub_82224BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19196
	ctx.r3.s64 = ctx.r11.s64 + -19196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C04"))) PPC_WEAK_FUNC(sub_82224C04);
PPC_FUNC_IMPL(__imp__sub_82224C04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C10"))) PPC_WEAK_FUNC(sub_82224C10);
PPC_FUNC_IMPL(__imp__sub_82224C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C1C"))) PPC_WEAK_FUNC(sub_82224C1C);
PPC_FUNC_IMPL(__imp__sub_82224C1C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19280
	ctx.r3.s64 = ctx.r11.s64 + -19280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C28"))) PPC_WEAK_FUNC(sub_82224C28);
PPC_FUNC_IMPL(__imp__sub_82224C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20856
	ctx.r3.s64 = ctx.r11.s64 + -20856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C34"))) PPC_WEAK_FUNC(sub_82224C34);
PPC_FUNC_IMPL(__imp__sub_82224C34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C40"))) PPC_WEAK_FUNC(sub_82224C40);
PPC_FUNC_IMPL(__imp__sub_82224C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22396
	ctx.r3.s64 = ctx.r11.s64 + -22396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C4C"))) PPC_WEAK_FUNC(sub_82224C4C);
PPC_FUNC_IMPL(__imp__sub_82224C4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19308
	ctx.r3.s64 = ctx.r11.s64 + -19308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C58"))) PPC_WEAK_FUNC(sub_82224C58);
PPC_FUNC_IMPL(__imp__sub_82224C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20808
	ctx.r3.s64 = ctx.r11.s64 + -20808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C64"))) PPC_WEAK_FUNC(sub_82224C64);
PPC_FUNC_IMPL(__imp__sub_82224C64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19336
	ctx.r3.s64 = ctx.r11.s64 + -19336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C70"))) PPC_WEAK_FUNC(sub_82224C70);
PPC_FUNC_IMPL(__imp__sub_82224C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19364
	ctx.r3.s64 = ctx.r11.s64 + -19364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C7C"))) PPC_WEAK_FUNC(sub_82224C7C);
PPC_FUNC_IMPL(__imp__sub_82224C7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19392
	ctx.r3.s64 = ctx.r11.s64 + -19392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C88"))) PPC_WEAK_FUNC(sub_82224C88);
PPC_FUNC_IMPL(__imp__sub_82224C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19416
	ctx.r3.s64 = ctx.r11.s64 + -19416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224C94"))) PPC_WEAK_FUNC(sub_82224C94);
PPC_FUNC_IMPL(__imp__sub_82224C94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19436
	ctx.r3.s64 = ctx.r11.s64 + -19436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CA0"))) PPC_WEAK_FUNC(sub_82224CA0);
PPC_FUNC_IMPL(__imp__sub_82224CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CAC"))) PPC_WEAK_FUNC(sub_82224CAC);
PPC_FUNC_IMPL(__imp__sub_82224CAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CB8"))) PPC_WEAK_FUNC(sub_82224CB8);
PPC_FUNC_IMPL(__imp__sub_82224CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19532
	ctx.r3.s64 = ctx.r11.s64 + -19532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CC4"))) PPC_WEAK_FUNC(sub_82224CC4);
PPC_FUNC_IMPL(__imp__sub_82224CC4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19556
	ctx.r3.s64 = ctx.r11.s64 + -19556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CD0"))) PPC_WEAK_FUNC(sub_82224CD0);
PPC_FUNC_IMPL(__imp__sub_82224CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19580
	ctx.r3.s64 = ctx.r11.s64 + -19580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CDC"))) PPC_WEAK_FUNC(sub_82224CDC);
PPC_FUNC_IMPL(__imp__sub_82224CDC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19604
	ctx.r3.s64 = ctx.r11.s64 + -19604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CE8"))) PPC_WEAK_FUNC(sub_82224CE8);
PPC_FUNC_IMPL(__imp__sub_82224CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19636
	ctx.r3.s64 = ctx.r11.s64 + -19636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224CF4"))) PPC_WEAK_FUNC(sub_82224CF4);
PPC_FUNC_IMPL(__imp__sub_82224CF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19668
	ctx.r3.s64 = ctx.r11.s64 + -19668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D00"))) PPC_WEAK_FUNC(sub_82224D00);
PPC_FUNC_IMPL(__imp__sub_82224D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19696
	ctx.r3.s64 = ctx.r11.s64 + -19696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D0C"))) PPC_WEAK_FUNC(sub_82224D0C);
PPC_FUNC_IMPL(__imp__sub_82224D0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19724
	ctx.r3.s64 = ctx.r11.s64 + -19724;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D18"))) PPC_WEAK_FUNC(sub_82224D18);
PPC_FUNC_IMPL(__imp__sub_82224D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19748
	ctx.r3.s64 = ctx.r11.s64 + -19748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D24"))) PPC_WEAK_FUNC(sub_82224D24);
PPC_FUNC_IMPL(__imp__sub_82224D24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20836
	ctx.r3.s64 = ctx.r11.s64 + -20836;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D30"))) PPC_WEAK_FUNC(sub_82224D30);
PPC_FUNC_IMPL(__imp__sub_82224D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19780
	ctx.r3.s64 = ctx.r11.s64 + -19780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D3C"))) PPC_WEAK_FUNC(sub_82224D3C);
PPC_FUNC_IMPL(__imp__sub_82224D3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19812
	ctx.r3.s64 = ctx.r11.s64 + -19812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D48"))) PPC_WEAK_FUNC(sub_82224D48);
PPC_FUNC_IMPL(__imp__sub_82224D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19840
	ctx.r3.s64 = ctx.r11.s64 + -19840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D54"))) PPC_WEAK_FUNC(sub_82224D54);
PPC_FUNC_IMPL(__imp__sub_82224D54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D60"))) PPC_WEAK_FUNC(sub_82224D60);
PPC_FUNC_IMPL(__imp__sub_82224D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19916
	ctx.r3.s64 = ctx.r11.s64 + -19916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D6C"))) PPC_WEAK_FUNC(sub_82224D6C);
PPC_FUNC_IMPL(__imp__sub_82224D6C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D78"))) PPC_WEAK_FUNC(sub_82224D78);
PPC_FUNC_IMPL(__imp__sub_82224D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19976
	ctx.r3.s64 = ctx.r11.s64 + -19976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D84"))) PPC_WEAK_FUNC(sub_82224D84);
PPC_FUNC_IMPL(__imp__sub_82224D84) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20004
	ctx.r3.s64 = ctx.r11.s64 + -20004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D90"))) PPC_WEAK_FUNC(sub_82224D90);
PPC_FUNC_IMPL(__imp__sub_82224D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224D9C"))) PPC_WEAK_FUNC(sub_82224D9C);
PPC_FUNC_IMPL(__imp__sub_82224D9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224DA8"))) PPC_WEAK_FUNC(sub_82224DA8);
PPC_FUNC_IMPL(__imp__sub_82224DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20060
	ctx.r3.s64 = ctx.r11.s64 + -20060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224DB4"))) PPC_WEAK_FUNC(sub_82224DB4);
PPC_FUNC_IMPL(__imp__sub_82224DB4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224DC0"))) PPC_WEAK_FUNC(sub_82224DC0);
PPC_FUNC_IMPL(__imp__sub_82224DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224DCC"))) PPC_WEAK_FUNC(sub_82224DCC);
PPC_FUNC_IMPL(__imp__sub_82224DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224DD0"))) PPC_WEAK_FUNC(sub_82224DD0);
PPC_FUNC_IMPL(__imp__sub_82224DD0) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224e04
	if (ctx.cr6.eq) goto loc_82224E04;
	// cmpwi cr6,r4,-38
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -38, ctx.xer);
	// bne cr6,0x82224e04
	if (!ctx.cr6.eq) goto loc_82224E04;
	// li r4,-8
	ctx.r4.s64 = -8;
loc_82224E04:
	// bl 0x82224a90
	ctx.lr = 0x82224E08;
	sub_82224A90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-56
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -56, ctx.xer);
	// beq cr6,0x82224e2c
	if (ctx.cr6.eq) goto loc_82224E2C;
	// cmpwi cr6,r4,-12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -12, ctx.xer);
	// beq cr6,0x82224e24
	if (ctx.cr6.eq) goto loc_82224E24;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// beq cr6,0x82224e2c
	if (ctx.cr6.eq) goto loc_82224E2C;
loc_82224E24:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82224e30
	goto loc_82224E30;
loc_82224E2C:
	// li r6,4
	ctx.r6.s64 = 4;
loc_82224E30:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r11,-24648
	ctx.r4.s64 = ctx.r11.s64 + -24648;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x821e6928
	ctx.lr = 0x82224E5C;
	sub_821E6928(ctx, base);
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

__attribute__((alias("__imp__sub_82224E74"))) PPC_WEAK_FUNC(sub_82224E74);
PPC_FUNC_IMPL(__imp__sub_82224E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224E78"))) PPC_WEAK_FUNC(sub_82224E78);
PPC_FUNC_IMPL(__imp__sub_82224E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82224E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,2472
	ctx.r3.s64 = ctx.r3.s64 + 2472;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x821911c8
	ctx.lr = 0x82224E98;
	sub_821911C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-24668
	ctx.r10.s64 = ctx.r10.s64 + -24668;
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r9,26752
	ctx.r28.s64 = ctx.r9.s64 + 26752;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r28,2472
	ctx.r3.s64 = ctx.r28.s64 + 2472;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// stb r27,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r27.u8);
	// bl 0x821ee3b8
	ctx.lr = 0x82224EC8;
	sub_821EE3B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82224ee0
	if (ctx.cr6.eq) goto loc_82224EE0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r8,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r8.u8);
	// b 0x82224f20
	goto loc_82224F20;
loc_82224EE0:
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82224f20
	if (ctx.cr6.eq) goto loc_82224F20;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82224F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82224f18
	if (ctx.cr6.eq) goto loc_82224F18;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r3,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r3.u8);
	// b 0x82224f20
	goto loc_82224F20;
loc_82224F18:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
loc_82224F20:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82224F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r11.u8);
	// stb r8,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r8.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82224F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82224F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x823656e8
	ctx.lr = 0x82224F80;
	sub_823656E8(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82224f90
	if (ctx.cr6.eq) goto loc_82224F90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224F90:
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82224FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stb r3,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224FB8"))) PPC_WEAK_FUNC(sub_82224FB8);
PPC_FUNC_IMPL(__imp__sub_82224FB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1649, ctx.r11.u8);
	// bl 0x8221ae50
	ctx.lr = 0x82224FD8;
	sub_8221AE50(ctx, base);
	// addi r3,r31,1940
	ctx.r3.s64 = ctx.r31.s64 + 1940;
	// bl 0x82220ca8
	ctx.lr = 0x82224FE0;
	sub_82220CA8(ctx, base);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// bl 0x82220ca8
	ctx.lr = 0x82224FE8;
	sub_82220CA8(ctx, base);
	// addi r3,r31,3212
	ctx.r3.s64 = ctx.r31.s64 + 3212;
	// bl 0x82219928
	ctx.lr = 0x82224FF0;
	sub_82219928(ctx, base);
	// addi r3,r31,3372
	ctx.r3.s64 = ctx.r31.s64 + 3372;
	// bl 0x82219928
	ctx.lr = 0x82224FF8;
	sub_82219928(ctx, base);
	// addi r3,r31,3388
	ctx.r3.s64 = ctx.r31.s64 + 3388;
	// bl 0x82219910
	ctx.lr = 0x82225000;
	sub_82219910(ctx, base);
	// addi r3,r31,3404
	ctx.r3.s64 = ctx.r31.s64 + 3404;
	// bl 0x82219910
	ctx.lr = 0x82225008;
	sub_82219910(ctx, base);
	// addi r3,r31,3484
	ctx.r3.s64 = ctx.r31.s64 + 3484;
	// bl 0x82219910
	ctx.lr = 0x82225010;
	sub_82219910(ctx, base);
	// addi r3,r31,3500
	ctx.r3.s64 = ctx.r31.s64 + 3500;
	// bl 0x82219910
	ctx.lr = 0x82225018;
	sub_82219910(ctx, base);
	// addi r3,r31,3420
	ctx.r3.s64 = ctx.r31.s64 + 3420;
	// bl 0x82219928
	ctx.lr = 0x82225020;
	sub_82219928(ctx, base);
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// bl 0x82219910
	ctx.lr = 0x82225028;
	sub_82219910(ctx, base);
	// addi r3,r31,3476
	ctx.r3.s64 = ctx.r31.s64 + 3476;
	// bl 0x82219910
	ctx.lr = 0x82225030;
	sub_82219910(ctx, base);
	// addi r3,r31,3516
	ctx.r3.s64 = ctx.r31.s64 + 3516;
	// bl 0x82219928
	ctx.lr = 0x82225038;
	sub_82219928(ctx, base);
	// addi r3,r31,3572
	ctx.r3.s64 = ctx.r31.s64 + 3572;
	// bl 0x82219928
	ctx.lr = 0x82225040;
	sub_82219928(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82364830
	ctx.lr = 0x82225048;
	sub_82364830(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82364830
	ctx.lr = 0x82225050;
	sub_82364830(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82364830
	ctx.lr = 0x82225058;
	sub_82364830(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82364830
	ctx.lr = 0x82225060;
	sub_82364830(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82364830
	ctx.lr = 0x82225068;
	sub_82364830(ctx, base);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82364830
	ctx.lr = 0x82225070;
	sub_82364830(ctx, base);
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

__attribute__((alias("__imp__sub_82225084"))) PPC_WEAK_FUNC(sub_82225084);
PPC_FUNC_IMPL(__imp__sub_82225084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225088"))) PPC_WEAK_FUNC(sub_82225088);
PPC_FUNC_IMPL(__imp__sub_82225088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82225090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,1940
	ctx.r3.s64 = ctx.r31.s64 + 1940;
	// bl 0x82220ca8
	ctx.lr = 0x822250A0;
	sub_82220CA8(ctx, base);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// bl 0x82220ca8
	ctx.lr = 0x822250A8;
	sub_82220CA8(ctx, base);
	// addi r3,r31,3484
	ctx.r3.s64 = ctx.r31.s64 + 3484;
	// bl 0x823646e0
	ctx.lr = 0x822250B0;
	sub_823646E0(ctx, base);
	// addi r3,r31,3500
	ctx.r3.s64 = ctx.r31.s64 + 3500;
	// bl 0x82219910
	ctx.lr = 0x822250B8;
	sub_82219910(ctx, base);
	// addi r3,r31,3516
	ctx.r3.s64 = ctx.r31.s64 + 3516;
	// bl 0x82219928
	ctx.lr = 0x822250C0;
	sub_82219928(ctx, base);
	// addi r29,r31,3604
	ctx.r29.s64 = ctx.r31.s64 + 3604;
	// li r30,16
	ctx.r30.s64 = 16;
loc_822250C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82220ca8
	ctx.lr = 0x822250D0;
	sub_82220CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,636
	ctx.r29.s64 = ctx.r29.s64 + 636;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822250c8
	if (!ctx.cr6.eq) goto loc_822250C8;
	// addi r28,r31,13792
	ctx.r28.s64 = ctx.r31.s64 + 13792;
	// stw r30,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r30.u32);
	// li r29,24
	ctx.r29.s64 = 24;
loc_822250EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221acd0
	ctx.lr = 0x822250F4;
	sub_8221ACD0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,192
	ctx.r28.s64 = ctx.r28.s64 + 192;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822250ec
	if (!ctx.cr6.eq) goto loc_822250EC;
	// addi r28,r31,18416
	ctx.r28.s64 = ctx.r31.s64 + 18416;
	// stw r30,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r30.u32);
	// li r29,24
	ctx.r29.s64 = 24;
	// stw r30,18404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18404, ctx.r30.u32);
	// stb r30,23032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23032, ctx.r30.u8);
loc_82225118:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221acd0
	ctx.lr = 0x82225120;
	sub_8221ACD0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,192
	ctx.r28.s64 = ctx.r28.s64 + 192;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82225118
	if (!ctx.cr6.eq) goto loc_82225118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,23024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23024, ctx.r30.u32);
	// stw r30,23028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23028, ctx.r30.u32);
	// stb r30,23033(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23033, ctx.r30.u8);
	// stb r30,23034(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23034, ctx.r30.u8);
	// stb r30,23035(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23035, ctx.r30.u8);
	// stb r30,23036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23036, ctx.r30.u8);
	// stw r30,23080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23080, ctx.r30.u32);
	// stw r30,23084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23084, ctx.r30.u32);
	// stw r30,23088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23088, ctx.r30.u32);
	// stw r30,23092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23092, ctx.r30.u32);
	// bl 0x8221ec78
	ctx.lr = 0x82225160;
	sub_8221EC78(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// addi r11,r31,1668
	ctx.r11.s64 = ctx.r31.s64 + 1668;
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82225184:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82225184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225184;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r10,1926(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1926, ctx.r10.u16);
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// stw r30,23040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23040, ctx.r30.u32);
	// stw r30,23044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23044, ctx.r30.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// sth r11,1924(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1924, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r30.u32);
	// stb r30,1648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1648, ctx.r30.u8);
	// stb r30,1649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1649, ctx.r30.u8);
	// stb r30,23140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23140, ctx.r30.u8);
	// stb r11,23048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23048, ctx.r11.u8);
	// std r30,23128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23128, ctx.r30.u64);
	// stw r30,23136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23136, ctx.r30.u32);
	// stb r11,1354(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1354, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822251D8"))) PPC_WEAK_FUNC(sub_822251D8);
PPC_FUNC_IMPL(__imp__sub_822251D8) {
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
	// addi r3,r31,1940
	ctx.r3.s64 = ctx.r31.s64 + 1940;
	// bl 0x823646e0
	ctx.lr = 0x822251F4;
	sub_823646E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,1608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1608, ctx.r11.u64);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// stw r10,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r10.u32);
	// stb r11,1640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1640, ctx.r11.u8);
	// stb r11,1641(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1641, ctx.r11.u8);
	// stb r11,1642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1642, ctx.r11.u8);
	// stb r11,1643(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1643, ctx.r11.u8);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// stb r11,1644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1644, ctx.r11.u8);
	// stb r11,23124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23124, ctx.r11.u8);
	// bl 0x82225088
	ctx.lr = 0x8222522C;
	sub_82225088(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r9,1352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1352, ctx.r9.u16);
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

__attribute__((alias("__imp__sub_82225248"))) PPC_WEAK_FUNC(sub_82225248);
PPC_FUNC_IMPL(__imp__sub_82225248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82225250;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r10,1651(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1651);
	// lbz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222527c
	if (!ctx.cr6.eq) goto loc_8222527C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8222533c
	goto loc_8222533C;
loc_8222527C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822252e8
	if (ctx.cr6.eq) goto loc_822252E8;
	// bl 0x8221adf0
	ctx.lr = 0x82225294;
	sub_8221ADF0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822252ac
	if (!ctx.cr6.eq) goto loc_822252AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822252AC:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r6,r7,51972
	ctx.r6.u64 = ctx.r7.u64 | 51972;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822252d0
	if (!ctx.cr6.eq) goto loc_822252D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822252D0:
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,21845
	ctx.r6.s64 = 21845;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82364210
	ctx.lr = 0x822252E4;
	sub_82364210(ctx, base);
	// b 0x8222533c
	goto loc_8222533C;
loc_822252E8:
	// bl 0x8221adf0
	ctx.lr = 0x822252EC;
	sub_8221ADF0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82225304
	if (!ctx.cr6.eq) goto loc_82225304;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225304:
	// lis r8,3
	ctx.r8.s64 = 196608;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r7,r8,51972
	ctx.r7.u64 = ctx.r8.u64 | 51972;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82225328
	if (!ctx.cr6.eq) goto loc_82225328;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225328:
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,21845
	ctx.r6.s64 = 21845;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823643b0
	ctx.lr = 0x8222533C;
	sub_823643B0(ctx, base);
loc_8222533C:
	// lwz r4,13780(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82225398
	if (!ctx.cr6.gt) goto loc_82225398;
	// addi r25,r31,3620
	ctx.r25.s64 = ctx.r31.s64 + 3620;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82225358:
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82225384
	if (ctx.cr6.eq) goto loc_82225384;
	// lwz r8,13780(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,636
	ctx.r11.s64 = ctx.r11.s64 + 636;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82225358
	if (ctx.cr6.lt) goto loc_82225358;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82225384:
	// mulli r11,r10,636
	ctx.r11.s64 = ctx.r10.s64 * 636;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,3604
	ctx.r11.s64 = ctx.r11.s64 + 3604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822253a4
	if (!ctx.cr6.eq) goto loc_822253A4;
loc_82225398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_822253A4:
	// lis r7,6594
	ctx.r7.s64 = 432144384;
	// lhz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r27,r7,53583
	ctx.r27.u64 = ctx.r7.u64 | 53583;
loc_822253BC:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r26,21845
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 21845, ctx.xer);
	// bge cr6,0x822253dc
	if (!ctx.cr6.lt) goto loc_822253DC;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r6,43690
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 43690, ctx.xer);
	// ble cr6,0x822253dc
	if (!ctx.cr6.gt) goto loc_822253DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82225400
	goto loc_82225400;
loc_822253DC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x822253f0
	if (!ctx.cr6.lt) goto loc_822253F0;
	// cmplwi cr6,r26,43690
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 43690, ctx.xer);
	// bgt cr6,0x822253fc
	if (ctx.cr6.gt) goto loc_822253FC;
loc_822253F0:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82225400
	if (ctx.cr6.gt) goto loc_82225400;
loc_822253FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225400:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222546c
	if (ctx.cr6.eq) goto loc_8222546C;
	// mulhw r4,r30,r27
	ctx.r4.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32)) >> 32;
	// lwz r11,13780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// srawi r10,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 6;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82225434
	if (!ctx.cr6.eq) goto loc_82225434;
	// stw r9,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r9.u32);
	// b 0x82225460
	goto loc_82225460;
loc_82225434:
	// mulli r9,r11,636
	ctx.r9.s64 = ctx.r11.s64 * 636;
	// mulli r11,r10,636
	ctx.r11.s64 = ctx.r10.s64 * 636;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,636
	ctx.r5.s64 = 636;
	// addi r4,r10,2968
	ctx.r4.s64 = ctx.r10.s64 + 2968;
	// addi r3,r11,3604
	ctx.r3.s64 = ctx.r11.s64 + 3604;
	// bl 0x8259d3a0
	ctx.lr = 0x82225454;
	sub_8259D3A0(ctx, base);
	// lwz r11,13780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r3.u32);
loc_82225460:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,-636
	ctx.r30.s64 = ctx.r30.s64 + -636;
	// addi r29,r29,-636
	ctx.r29.s64 = ctx.r29.s64 + -636;
loc_8222546C:
	// lwz r11,13780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,636
	ctx.r30.s64 = ctx.r30.s64 + 636;
	// addi r29,r29,636
	ctx.r29.s64 = ctx.r29.s64 + 636;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822253bc
	if (ctx.cr6.lt) goto loc_822253BC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822254d0
	if (!ctx.cr6.gt) goto loc_822254D0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8222549C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822254c4
	if (ctx.cr6.eq) goto loc_822254C4;
	// lwz r8,13780(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,636
	ctx.r10.s64 = ctx.r10.s64 + 636;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8222549c
	if (ctx.cr6.lt) goto loc_8222549C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_822254C4:
	// mulli r11,r11,636
	ctx.r11.s64 = ctx.r11.s64 * 636;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,3604
	ctx.r3.s64 = ctx.r11.s64 + 3604;
loc_822254D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822254D8"))) PPC_WEAK_FUNC(sub_822254D8);
PPC_FUNC_IMPL(__imp__sub_822254D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822254E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r5,22
	ctx.r11.s64 = ctx.r5.s64 * 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// stb r27,23032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23032, ctx.r27.u8);
	// bl 0x8221fbe0
	ctx.lr = 0x82225510;
	sub_8221FBE0(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r28,256(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// rotlwi r11,r28,9
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 9);
	// addis r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 131072;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221e540
	ctx.lr = 0x82225538;
	sub_8221E540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222576c
	if (!ctx.cr6.eq) goto loc_8222576C;
	// lbz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 488);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222555c
	if (!ctx.cr6.eq) goto loc_8222555C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222555C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r25,r11,26752
	ctx.r25.s64 = ctx.r11.s64 + 26752;
	// beq cr6,0x822255b4
	if (ctx.cr6.eq) goto loc_822255B4;
	// lwz r7,496(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82225584
	if (!ctx.cr6.eq) goto loc_82225584;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225584:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822255b4
	if (ctx.cr6.eq) goto loc_822255B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232cc00
	ctx.lr = 0x82225598;
	sub_8232CC00(ctx, base);
	// lbz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x822255b4
	if (!ctx.cr6.eq) goto loc_822255B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232cc00
	ctx.lr = 0x822255AC;
	sub_8232CC00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x822256a8
	goto loc_822256A8;
loc_822255B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221d0c8
	ctx.lr = 0x822255BC;
	sub_8221D0C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8222576c
	if (ctx.cr6.eq) goto loc_8222576C;
	// lbz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 12);
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8222562c
	if (!ctx.cr6.eq) goto loc_8222562C;
	// lbz r10,599(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 599);
	// li r30,15
	ctx.r30.s64 = 15;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822255ec
	if (ctx.cr6.eq) goto loc_822255EC;
	// lbz r30,627(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 627);
loc_822255EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823475c0
	ctx.lr = 0x822255F4;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,24
	ctx.r3.s64 = ctx.r25.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x82225600;
	sub_82365B88(ctx, base);
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8228fe98
	ctx.lr = 0x82225628;
	sub_8228FE98(ctx, base);
	// b 0x822256a8
	goto loc_822256A8;
loc_8222562C:
	// lbz r9,599(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 599);
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82225648
	if (ctx.cr6.eq) goto loc_82225648;
	// lbz r30,627(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 627);
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8222566c
	goto loc_8222566C;
loc_82225648:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r8,20362(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20362);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lfs f1,-24908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24908);
	ctx.f1.f64 = double(temp.f32);
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x82237d60
	ctx.lr = 0x82225668;
	sub_82237D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8222566C:
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82292350
	ctx.lr = 0x82225680;
	sub_82292350(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822256a8
	if (!ctx.cr6.eq) goto loc_822256A8;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822256a8
	if (ctx.cr6.eq) goto loc_822256A8;
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x82237f68
	ctx.lr = 0x822256A8;
	sub_82237F68(ctx, base);
loc_822256A8:
	// lbz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 12);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x8222576c
	if (!ctx.cr6.eq) goto loc_8222576C;
	// lwz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,19643(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 19643);
	// extsb r30,r4
	ctx.r30.s64 = ctx.r4.s8;
	// bl 0x823475c0
	ctx.lr = 0x822256C8;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,24
	ctx.r3.s64 = ctx.r25.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x822256D4;
	sub_82365B88(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8222576c
	if (!ctx.cr6.eq) goto loc_8222576C;
	// lwz r11,18400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,24
	ctx.r9.s64 = 24;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,13792
	ctx.r11.s64 = ctx.r11.s64 + 13792;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82225700:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82225700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225700;
	// lwz r11,18400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// lhz r8,1926(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1926);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,18400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18400, ctx.r7.u32);
	// lwz r4,516(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r30,r11,13792
	ctx.r30.s64 = ctx.r11.s64 + 13792;
	// addi r29,r30,160
	ctx.r29.s64 = ctx.r30.s64 + 160;
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8221d2c8
	ctx.lr = 0x82225754;
	sub_8221D2C8(ctx, base);
	// addi r4,r30,177
	ctx.r4.s64 = ctx.r30.s64 + 177;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e158
	ctx.lr = 0x82225760;
	sub_8221E158(ctx, base);
	// lhz r5,1926(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1926);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,18404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18404, ctx.r4.u32);
loc_8222576C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225774"))) PPC_WEAK_FUNC(sub_82225774);
PPC_FUNC_IMPL(__imp__sub_82225774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225778"))) PPC_WEAK_FUNC(sub_82225778);
PPC_FUNC_IMPL(__imp__sub_82225778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82225780;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,23033(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23033, ctx.r11.u8);
	// lbz r10,19(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x822257a4
	if (!ctx.cr6.eq) goto loc_822257A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822257A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mulli r11,r8,22
	ctx.r11.s64 = ctx.r8.s64 * 22;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x8221fbe0
	ctx.lr = 0x822257CC;
	sub_8221FBE0(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// rotlwi r11,r7,9
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 9);
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8221e540
	ctx.lr = 0x822257F4;
	sub_8221E540(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822259b4
	if (!ctx.cr6.eq) goto loc_822259B4;
	// lbz r5,488(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 488);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82225818
	if (!ctx.cr6.eq) goto loc_82225818;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225818:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225868
	if (ctx.cr6.eq) goto loc_82225868;
	// lwz r11,496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82225838
	if (!ctx.cr6.eq) goto loc_82225838;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225838:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82225868
	if (ctx.cr6.eq) goto loc_82225868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232cc00
	ctx.lr = 0x8222584C;
	sub_8232CC00(ctx, base);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bne cr6,0x82225868
	if (!ctx.cr6.eq) goto loc_82225868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232cc00
	ctx.lr = 0x82225860;
	sub_8232CC00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822258f4
	goto loc_822258F4;
loc_82225868:
	// lbz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// bl 0x8221d0c8
	ctx.lr = 0x82225870;
	sub_8221D0C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// lbz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// ori r5,r6,4416
	ctx.r5.u64 = ctx.r6.u64 | 4416;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822258a8
	if (!ctx.cr6.gt) goto loc_822258A8;
	// addis r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 655360;
	// addi r11,r11,-7344
	ctx.r11.s64 = ctx.r11.s64 + -7344;
	// b 0x822258ac
	goto loc_822258AC;
loc_822258A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822258AC:
	// lwz r4,516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82292690
	ctx.lr = 0x822258C0;
	sub_82292690(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// lwz r3,1936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,6912(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6912);
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// lbz r9,15480(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15480);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// bl 0x82299a20
	ctx.lr = 0x822258F4;
	sub_82299A20(ctx, base);
loc_822258F4:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,20362(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20362);
	// extsb r30,r8
	ctx.r30.s64 = ctx.r8.s8;
	// bl 0x823475c0
	ctx.lr = 0x82225908;
	sub_823475C0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x8222591C;
	sub_82365B88(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822259b4
	if (!ctx.cr6.eq) goto loc_822259B4;
	// lwz r11,23024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23024);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,24
	ctx.r9.s64 = 24;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,18416
	ctx.r11.s64 = ctx.r11.s64 + 18416;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82225948:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82225948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225948;
	// lwz r11,23024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23024);
	// lhz r5,1926(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1926);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,23024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23024, ctx.r4.u32);
	// lwz r4,516(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r30,r11,18416
	ctx.r30.s64 = ctx.r11.s64 + 18416;
	// addi r29,r30,160
	ctx.r29.s64 = ctx.r30.s64 + 160;
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8221d2c8
	ctx.lr = 0x8222599C;
	sub_8221D2C8(ctx, base);
	// addi r4,r30,177
	ctx.r4.s64 = ctx.r30.s64 + 177;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e158
	ctx.lr = 0x822259A8;
	sub_8221E158(ctx, base);
	// lhz r10,1926(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1926);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,23028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23028, ctx.r9.u32);
loc_822259B4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822259BC"))) PPC_WEAK_FUNC(sub_822259BC);
PPC_FUNC_IMPL(__imp__sub_822259BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822259C0"))) PPC_WEAK_FUNC(sub_822259C0);
PPC_FUNC_IMPL(__imp__sub_822259C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822259C8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bb80
	ctx.lr = 0x822259D0;
	__savefpr_18(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,23032(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225ab0
	if (ctx.cr6.eq) goto loc_82225AB0;
	// lwz r10,18400(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stb r27,23032(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23032, ctx.r27.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82225ab0
	if (!ctx.cr6.gt) goto loc_82225AB0;
	// addi r31,r28,13920
	ctx.r31.s64 = ctx.r28.s64 + 13920;
loc_82225A00:
	// lbz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// bl 0x8221d180
	ctx.lr = 0x82225A08;
	sub_8221D180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82225a9c
	if (ctx.cr6.eq) goto loc_82225A9C;
	// lwz r11,19636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225a60
	if (ctx.cr6.eq) goto loc_82225A60;
	// lwz r8,18400(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82225a58
	if (!ctx.cr6.gt) goto loc_82225A58;
	// lbz r9,19641(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19641);
	// addi r11,r28,13968
	ctx.r11.s64 = ctx.r28.s64 + 13968;
loc_82225A38:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82225a58
	if (ctx.cr6.eq) goto loc_82225A58;
	// lwz r6,18400(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82225a38
	if (ctx.cr6.lt) goto loc_82225A38;
loc_82225A58:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82225a9c
	if (!ctx.cr6.lt) goto loc_82225A9C;
loc_82225A60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fc020
	ctx.lr = 0x82225A6C;
	sub_820FC020(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r30,208
	ctx.r10.s64 = ctx.r30.s64 + 208;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// lbz r3,49(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82225a9c
	if (!ctx.cr6.eq) goto loc_82225A9C;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a5940
	ctx.lr = 0x82225A9C;
	sub_820A5940(ctx, base);
loc_82225A9C:
	// lwz r11,18400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82225a00
	if (ctx.cr6.lt) goto loc_82225A00;
loc_82225AB0:
	// lbz r10,23033(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23033);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82225b34
	if (ctx.cr6.eq) goto loc_82225B34;
	// lwz r9,23024(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23024);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stb r27,23033(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23033, ctx.r27.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82225b34
	if (!ctx.cr6.gt) goto loc_82225B34;
	// addi r31,r28,18544
	ctx.r31.s64 = ctx.r28.s64 + 18544;
loc_82225AD4:
	// lbz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// bl 0x8221d220
	ctx.lr = 0x82225ADC;
	sub_8221D220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82225b20
	if (ctx.cr6.eq) goto loc_82225B20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822588f0
	ctx.lr = 0x82225AF0;
	sub_822588F0(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r30,208
	ctx.r10.s64 = ctx.r30.s64 + 208;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lbz r6,49(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82225b20
	if (!ctx.cr6.eq) goto loc_82225B20;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a5940
	ctx.lr = 0x82225B20;
	sub_820A5940(ctx, base);
loc_82225B20:
	// lwz r5,23024(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23024);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82225ad4
	if (ctx.cr6.lt) goto loc_82225AD4;
loc_82225B34:
	// lbz r4,23035(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23035);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82225b4c
	if (ctx.cr6.eq) goto loc_82225B4C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221e610
	ctx.lr = 0x82225B48;
	sub_8221E610(ctx, base);
	// stb r27,23035(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23035, ctx.r27.u8);
loc_82225B4C:
	// lbz r3,23034(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23034);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225b64
	if (ctx.cr6.eq) goto loc_82225B64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221e740
	ctx.lr = 0x82225B60;
	sub_8221E740(ctx, base);
	// stb r27,23034(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23034, ctx.r27.u8);
loc_82225B64:
	// lwz r11,18404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18404);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,-4832(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lfd f31,-4840(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// lfs f18,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f18.f64 = double(temp.f32);
	// lfs f19,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f19.f64 = double(temp.f32);
	// ble cr6,0x82226788
	if (!ctx.cr6.gt) goto loc_82226788;
	// lwz r10,18400(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8222677c
	if (!ctx.cr6.gt) goto loc_8222677C;
	// addi r31,r28,13896
	ctx.r31.s64 = ctx.r28.s64 + 13896;
loc_82225BA4:
	// lbz r9,73(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82226768
	if (ctx.cr6.eq) goto loc_82226768;
	// lbz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// bl 0x8221d180
	ctx.lr = 0x82225BB8;
	sub_8221D180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226768
	if (ctx.cr6.eq) goto loc_82226768;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lfs f0,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lfs f13,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// lfs f10,-36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// lfs f12,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f25,f0,f5
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f9,-32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f23,f11,f4
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f24,f13,f5
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f8,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f22,f10,f4
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f7,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f21,f8,f3
	ctx.f21.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f20,f7,f3
	ctx.f20.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfs f29,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// fadds f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// lfs f26,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f23,f7,f29
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fadds f24,f22,f24
	ctx.f24.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f4,f25,f21
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f21.f64));
	// stfs f4,384(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmuls f25,f10,f1
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fadds f4,f24,f20
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f20.f64));
	// stfs f4,388(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fmuls f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fadds f3,f5,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f3,392(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// fmuls f5,f0,f2
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f24,f8,f29
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f29,f6,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// fadds f4,f25,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// fmuls f25,f13,f27
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f1,f4,f23
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f23.f64));
	// stfs f1,436(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fmuls f1,f7,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f23,f10,f26
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fadds f2,f5,f24
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// stfs f2,432(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fadds f5,f3,f29
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// stfs f5,440(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fmuls f2,f8,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmuls f29,f6,f28
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fmuls f28,f0,f27
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f24,f11,f26
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmuls f27,f12,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// fmuls f26,f9,f26
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fadds f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f3,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f28,f24,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// lfs f24,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fadds f27,f26,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// lfs f26,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fadds f1,f25,f1
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f1.f64));
	// stfs f1,324(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// li r7,8
	ctx.r7.s64 = 8;
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f2,f28,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// stfs f2,320(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fadds f1,f27,f29
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// stfs f1,328(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// fadds f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82225DD4:
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// bdnz 0x82225dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225DD4;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f11,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f9,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f6,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f8,224(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f5,228(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f3,232(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f8,f8
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f6,f10,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f2,f7,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f1,f0,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f12,f4,f4,f6
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f9,f3,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrts f2,f1
	ctx.f2.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f29,f9
	ctx.f29.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f12,f19,f2
	ctx.f12.f64 = double(float(ctx.f19.f64 / ctx.f2.f64));
	// fdivs f9,f19,f1
	ctx.f9.f64 = double(float(ctx.f19.f64 / ctx.f1.f64));
	// fdivs f6,f19,f29
	ctx.f6.f64 = double(float(ctx.f19.f64 / ctx.f29.f64));
	// fcmpu cr6,f2,f18
	ctx.cr6.compare(ctx.f2.f64, ctx.f18.f64);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f8,f7,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x82226634
	if (!ctx.cr6.gt) goto loc_82226634;
	// fcmpu cr6,f1,f18
	ctx.cr6.compare(ctx.f1.f64, ctx.f18.f64);
	// ble cr6,0x82226504
	if (!ctx.cr6.gt) goto loc_82226504;
	// fcmpu cr6,f29,f18
	ctx.cr6.compare(ctx.f29.f64, ctx.f18.f64);
	// ble cr6,0x822263d4
	if (!ctx.cr6.gt) goto loc_822263D4;
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f3,f8,f11,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f1,f7,f13,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f5,f6,f9,f3
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f3,f10,f13,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f4,f8,f0,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmadds f3,f11,f0,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fabs f4,f4
	ctx.f4.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f3,f3
	ctx.f3.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// bge cr6,0x8222616c
	if (!ctx.cr6.lt) goto loc_8222616C;
	// fcmpu cr6,f5,f3
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// bge cr6,0x8222603c
	if (!ctx.cr6.lt) goto loc_8222603C;
	// fmuls f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// fmuls f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmsubs f0,f7,f11,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f1.f64));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmsubs f13,f6,f10,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f2.f64));
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f8,f9,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f7,f0,f30
	ctx.f7.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f6,f8,f0,f31
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f4,f0,f30
	ctx.f4.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f3,f5,f0,f31
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f0,f9,f0,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f5.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmsubs f12,f10,f12,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmsubs f13,f11,f13,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f9,f0,f30
	ctx.f9.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f10,f0,f31
	ctx.f8.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// b 0x8222673c
	goto loc_8222673C;
loc_8222603C:
	// fmuls f1,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmsubs f12,f11,f12,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f1.f64));
	// stfs f12,420(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// fmsubs f13,f9,f13,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,416(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// fmsubs f0,f10,f0,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f2,f4,f0,f31
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f1,f0,f31
	ctx.f8.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f12,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f11,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f13,f10,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f3.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmsubs f13,f12,f9,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f0,f30
	ctx.f10.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f11,f0,f31
	ctx.f9.f64 = -(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f9,f10,f0
	ctx.f0.f64 = ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64;
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f8,f0,f31
	ctx.f7.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f5,f7,f6,f0
	ctx.f5.f64 = ctx.f7.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82226760
	goto loc_82226760;
loc_8222616C:
	// fcmpu cr6,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bge cr6,0x822262a4
	if (!ctx.cr6.lt) goto loc_822262A4;
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fmuls f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmsubs f13,f8,f13,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmsubs f12,f7,f12,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmsubs f0,f6,f0,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f4,f6,f0,f31
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f4,f5,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64;
	// fmul f3,f13,f0
	ctx.f3.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f1,f3,f0,f31
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f12,f10,f12,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmsubs f0,f9,f0,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f5.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmsubs f13,f11,f13,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f9,f0,f30
	ctx.f9.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f10,f0,f31
	ctx.f8.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82226760
	goto loc_82226760;
loc_822262A4:
	// fmuls f8,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmsubs f0,f10,f0,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmsubs f13,f9,f13,f1
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f1.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f12,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f2,f4,f0,f31
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f1,f0,f31
	ctx.f8.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f12,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f9,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmsubs f12,f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f3.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmsubs f13,f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f13,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f0,f30
	ctx.f10.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f11,f0,f31
	ctx.f9.f64 = -(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f9,f10,f0
	ctx.f0.f64 = ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64;
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f8,f0,f31
	ctx.f7.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f5,f7,f6,f0
	ctx.f5.f64 = ctx.f7.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82226760
	goto loc_82226760;
loc_822263D4:
	// fmuls f8,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmsubs f12,f11,f12,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmsubs f13,f9,f13,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmsubs f0,f10,f0,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f3,f12,f0
	ctx.f3.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f1,f3,f0,f31
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f30
	ctx.f8.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f12,f0,f31
	ctx.f7.f64 = -(ctx.f12.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f6,f7,f8,f0
	ctx.f6.f64 = ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f3.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f13,f10,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f2.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmsubs f13,f12,f9,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f1.f64));
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f12,f13,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f30
	ctx.f8.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f9,f0,f31
	ctx.f7.f64 = -(ctx.f9.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f7,f8,f0
	ctx.f0.f64 = ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64;
	// fmul f6,f12,f0
	ctx.f6.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmul f4,f0,f30
	ctx.f4.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f5,f6,f0,f31
	ctx.f5.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f3,f5,f4,f0
	ctx.f3.f64 = ctx.f5.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82226760
	goto loc_82226760;
loc_82226504:
	// fmuls f10,f8,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmsubs f0,f6,f0,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f8,f13,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fmsubs f13,f7,f12,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f2,f0,f31
	ctx.f8.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmadd f0,f8,f1,f0
	ctx.f0.f64 = ctx.f8.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f5,f7,f0,f31
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f0,f9,f0,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmsubs f12,f10,f12,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fmsubs f13,f11,f13,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f1.f64));
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f2,f4,f0,f31
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f11,f0,f30
	ctx.f11.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f12,f1,f0,f31
	ctx.f12.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f10,f12,f11,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64;
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82226760
	goto loc_82226760;
loc_82226634:
	// fmuls f3,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// fmuls f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmsubs f0,f7,f11,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f3.f64));
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fmsubs f13,f6,f10,f4
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f13,368(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f8,f9,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f7,f0,f30
	ctx.f7.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f6,f8,f0,f31
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f4,f0,f30
	ctx.f4.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f3,f5,f0,f31
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f0,f9,f0,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f5.f64));
	// stfs f0,404(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fmsubs f12,f10,f12,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,408(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// fmsubs f13,f11,f13,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,400(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f30
	ctx.f8.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f10,f0,f31
	ctx.f9.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f9,f8,f0
	ctx.f7.f64 = ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64;
loc_8222673C:
	// frsp f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82226760:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820a5940
	ctx.lr = 0x82226768;
	sub_820A5940(ctx, base);
loc_82226768:
	// lwz r3,18400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82225ba4
	if (ctx.cr6.lt) goto loc_82225BA4;
loc_8222677C:
	// lwz r11,18404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18404);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,18404(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18404, ctx.r11.u32);
loc_82226788:
	// lwz r10,23028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23028);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822273a0
	if (!ctx.cr6.gt) goto loc_822273A0;
	// lwz r9,23024(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23024);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82227394
	if (!ctx.cr6.gt) goto loc_82227394;
	// addi r31,r28,18520
	ctx.r31.s64 = ctx.r28.s64 + 18520;
loc_822267A8:
	// lbz r8,73(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82227380
	if (ctx.cr6.eq) goto loc_82227380;
	// lbz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// bl 0x8221d220
	ctx.lr = 0x822267BC;
	sub_8221D220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227380
	if (ctx.cr6.eq) goto loc_82227380;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lfs f0,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// lfs f13,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// lfs f10,-36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// lfs f12,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f25,f0,f5
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f9,-32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f23,f11,f4
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f24,f13,f5
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f8,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f22,f10,f4
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f7,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f21,f8,f3
	ctx.f21.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f20,f7,f3
	ctx.f20.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfs f29,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// fadds f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// lfs f26,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f23,f7,f29
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fadds f24,f22,f24
	ctx.f24.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f4,f25,f21
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f21.f64));
	// stfs f4,400(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fmuls f25,f10,f1
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fadds f4,f24,f20
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f20.f64));
	// stfs f4,404(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fmuls f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fadds f3,f5,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f3,408(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// fmuls f5,f0,f2
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f24,f8,f29
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f29,f6,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// fadds f4,f25,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// fmuls f25,f13,f27
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f1,f4,f23
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f23.f64));
	// stfs f1,372(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fmuls f1,f7,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f23,f10,f26
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fadds f2,f5,f24
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// stfs f2,368(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fadds f5,f3,f29
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// stfs f5,376(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fmuls f2,f8,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmuls f29,f6,f28
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fmuls f28,f0,f27
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f24,f11,f26
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmuls f27,f12,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// fmuls f26,f9,f26
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fadds f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f3,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f28,f24,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// lfs f24,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fadds f27,f26,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// lfs f26,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fadds f1,f25,f1
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f1.f64));
	// stfs f1,340(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// li r7,8
	ctx.r7.s64 = 8;
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f2,f28,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// stfs f2,336(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fadds f1,f27,f29
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// stfs f1,344(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// fadds f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_822269D8:
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// bdnz 0x822269d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822269D8;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lfs f11,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f9,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f6,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f8,240(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f5,244(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f3,248(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f13,f13
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f10,f10
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f12,f7,f7
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f6,f11,f11,f1
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f2,f8,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f1,f5,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fmadds f12,f4,f4,f6
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f9,f3,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrts f2,f1
	ctx.f2.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f29,f9
	ctx.f29.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f12,f19,f2
	ctx.f12.f64 = double(float(ctx.f19.f64 / ctx.f2.f64));
	// fdivs f9,f19,f1
	ctx.f9.f64 = double(float(ctx.f19.f64 / ctx.f1.f64));
	// fdivs f6,f19,f29
	ctx.f6.f64 = double(float(ctx.f19.f64 / ctx.f29.f64));
	// fcmpu cr6,f2,f18
	ctx.cr6.compare(ctx.f2.f64, ctx.f18.f64);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x8222724c
	if (!ctx.cr6.gt) goto loc_8222724C;
	// fcmpu cr6,f1,f18
	ctx.cr6.compare(ctx.f1.f64, ctx.f18.f64);
	// ble cr6,0x8222711c
	if (!ctx.cr6.gt) goto loc_8222711C;
	// fcmpu cr6,f29,f18
	ctx.cr6.compare(ctx.f29.f64, ctx.f18.f64);
	// ble cr6,0x82226fec
	if (!ctx.cr6.gt) goto loc_82226FEC;
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f3,f8,f11,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f1,f8,f0,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f5,f6,f9,f3
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f3,f11,f0,f2
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f4,f6,f12,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmadds f3,f9,f12,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fabs f4,f4
	ctx.f4.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f3,f3
	ctx.f3.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// bge cr6,0x82226d84
	if (!ctx.cr6.lt) goto loc_82226D84;
	// fcmpu cr6,f5,f3
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// bge cr6,0x82226c54
	if (!ctx.cr6.lt) goto loc_82226C54;
	// fmuls f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// fmuls f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmsubs f0,f8,f9,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmsubs f13,f6,f10,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f7,f11,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f1.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f7,f0,f30
	ctx.f7.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f6,f8,f0,f31
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f4,f0,f30
	ctx.f4.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f3,f5,f0,f31
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f0,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f10,f13,f6
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmsubs f13,f9,f12,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f12,f13,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f9,f0,f30
	ctx.f9.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f10,f0,f31
	ctx.f8.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// b 0x82227368
	goto loc_82227368;
loc_82226C54:
	// fmuls f1,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmsubs f12,f11,f12,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f1.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmsubs f13,f9,f13,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmsubs f0,f10,f0,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f2,f4,f0,f31
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f1,f0,f31
	ctx.f8.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f12,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f9,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f12,f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f3.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmsubs f13,f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f13,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f0,f30
	ctx.f10.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f11,f0,f31
	ctx.f9.f64 = -(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f9,f10,f0
	ctx.f0.f64 = ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64;
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f8,f0,f31
	ctx.f7.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f5,f7,f6,f0
	ctx.f5.f64 = ctx.f7.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82227378
	goto loc_82227378;
loc_82226D84:
	// fcmpu cr6,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bge cr6,0x82226ebc
	if (!ctx.cr6.lt) goto loc_82226EBC;
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// fmuls f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmsubs f13,f8,f13,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmsubs f12,f7,f12,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,288(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmsubs f0,f6,f0,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f4,f6,f0,f31
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f4,f5,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64;
	// fmul f3,f13,f0
	ctx.f3.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f1,f3,f0,f31
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f12,f10,f12,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,424(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// fmsubs f0,f9,f0,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f5.f64));
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// fmsubs f13,f11,f13,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,416(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f9,f0,f30
	ctx.f9.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f10,f0,f31
	ctx.f8.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82227378
	goto loc_82227378;
loc_82226EBC:
	// fmuls f8,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmsubs f0,f10,f0,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmsubs f13,f9,f13,f1
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f1.f64));
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f12,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f2,f4,f0,f31
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f1,f0,f31
	ctx.f8.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f8,f12,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f0,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f11,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f13,f10,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f3.f64));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmsubs f13,f12,f9,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f0,f30
	ctx.f10.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f11,f0,f31
	ctx.f9.f64 = -(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f9,f10,f0
	ctx.f0.f64 = ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64;
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f8,f0,f31
	ctx.f7.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f5,f7,f6,f0
	ctx.f5.f64 = ctx.f7.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82227378
	goto loc_82227378;
loc_82226FEC:
	// fmuls f8,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmsubs f12,f11,f12,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmsubs f13,f9,f13,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmsubs f0,f10,f0,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f3,f12,f0
	ctx.f3.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f1,f3,f0,f31
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f30
	ctx.f8.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f7,f12,f0,f31
	ctx.f7.f64 = -(ctx.f12.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f6,f7,f8,f0
	ctx.f6.f64 = ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f9,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f1.f64));
	// stfs f0,452(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// fmsubs f12,f12,f10,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f2.f64));
	// stfs f12,456(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// fmsubs f13,f13,f11,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f3.f64));
	// stfs f13,448(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f12,f0,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f9,f0,f30
	ctx.f9.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f8,f10,f0,f31
	ctx.f8.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f8,f9,f0
	ctx.f0.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f6,f7,f0,f31
	ctx.f6.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f4,f6,f5,f0
	ctx.f4.f64 = ctx.f6.f64 * ctx.f5.f64 + ctx.f0.f64;
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82227378
	goto loc_82227378;
loc_8222711C:
	// fmuls f10,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// fmuls f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmsubs f13,f8,f13,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmsubs f12,f7,f12,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmsubs f0,f6,f0,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f4,f6,f0,f31
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f4,f5,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64;
	// fmul f3,f13,f0
	ctx.f3.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f1,f3,f0,f31
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f12,f10,f12,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fmsubs f0,f9,f0,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f5.f64));
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmsubs f13,f11,f13,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,320(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f30
	ctx.f8.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f10,f0,f31
	ctx.f9.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f9,f8,f0
	ctx.f7.f64 = ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82227378
	goto loc_82227378;
loc_8222724C:
	// fmuls f1,f6,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f12,f7,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmsubs f0,f8,f9,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f1.f64));
	// stfs f0,436(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f7,f11,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,440(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// fmsubs f13,f6,f10,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f12.f64));
	// stfs f13,432(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f5,f7,f0,f31
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f2,f4,f0,f31
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f0,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f10,f13,f6
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// fmsubs f13,f9,f12,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f12,f13,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f11,f2,f0,f31
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f30
	ctx.f8.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fnmsub f9,f10,f0,f31
	ctx.f9.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fmadd f7,f9,f8,f0
	ctx.f7.f64 = ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
loc_82227368:
	// fmuls f6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82227378:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820a5940
	ctx.lr = 0x82227380;
	sub_820A5940(ctx, base);
loc_82227380:
	// lwz r3,23024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23024);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822267a8
	if (ctx.cr6.lt) goto loc_822267A8;
loc_82227394:
	// lwz r11,23028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23028);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,23028(r28)
	PPC_STORE_U32(ctx.r28.u32 + 23028, ctx.r11.u32);
loc_822273A0:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbcc
	ctx.lr = 0x822273AC;
	__restfpr_18(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822273B0"))) PPC_WEAK_FUNC(sub_822273B0);
PPC_FUNC_IMPL(__imp__sub_822273B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822273B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,1201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1201);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82227480
	if (!ctx.cr6.eq) goto loc_82227480;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x823475c0
	ctx.lr = 0x822273DC;
	sub_823475C0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x822273F0;
	sub_82365B88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82365698
	ctx.lr = 0x822273FC;
	sub_82365698(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82227414
	if (!ctx.cr6.eq) goto loc_82227414;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227414:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r6,r7,51972
	ctx.r6.u64 = ctx.r7.u64 | 51972;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82227438
	if (!ctx.cr6.eq) goto loc_82227438;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227438:
	// addi r9,r31,1940
	ctx.r9.s64 = ctx.r31.s64 + 1940;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82227458
	if (ctx.cr6.eq) goto loc_82227458;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82227458:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222748c
	if (ctx.cr6.eq) goto loc_8222748C;
	// lwz r11,23096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23096);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// stw r11,23096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23096, ctx.r11.u32);
	// ble cr6,0x82227480
	if (!ctx.cr6.gt) goto loc_82227480;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82220ca8
	ctx.lr = 0x82227480;
	sub_82220CA8(ctx, base);
loc_82227480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8222748C:
	// lbz r4,23036(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23036);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,23096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23096, ctx.r5.u32);
	// ble cr6,0x822274c0
	if (!ctx.cr6.gt) goto loc_822274C0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,23036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23036, ctx.r10.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822274C0:
	// lhz r9,1926(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1926);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bne cr6,0x822274f8
	if (!ctx.cr6.eq) goto loc_822274F8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_822274F8:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82227514
	if (!ctx.cr6.eq) goto loc_82227514;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82227514:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82227528
	if (!ctx.cr6.gt) goto loc_82227528;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82227528:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82227480
	if (ctx.cr6.lt) goto loc_82227480;
	// lwz r4,1928(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82227480
	if (!ctx.cr6.gt) goto loc_82227480;
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227550"))) PPC_WEAK_FUNC(sub_82227550);
PPC_FUNC_IMPL(__imp__sub_82227550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82227558;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r22,r11,28544
	ctx.r22.s64 = ctx.r11.s64 + 28544;
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// ori r10,r11,4428
	ctx.r10.u64 = ctx.r11.u64 | 4428;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwzx r11,r22,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822276d0
	if (!ctx.cr6.gt) goto loc_822276D0;
	// addis r11,r22,33
	ctx.r11.s64 = ctx.r22.s64 + 2162688;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r24,r11,4152
	ctx.r24.s64 = ctx.r11.s64 + 4152;
loc_82227594:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lbz r9,19643(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19643);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// bl 0x82365698
	ctx.lr = 0x822275A8;
	sub_82365698(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822276b4
	if (!ctx.cr6.eq) goto loc_822276B4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,516(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lbz r27,19641(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19641);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// bge cr6,0x822276d0
	if (!ctx.cr6.lt) goto loc_822276D0;
	// lbz r3,19640(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822276b4
	if (!ctx.cr6.eq) goto loc_822276B4;
	// lwz r11,19636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227694
	if (ctx.cr6.eq) goto loc_82227694;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r11,208
	ctx.r7.s64 = ctx.r11.s64 + 208;
	// lfs f9,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// bge cr6,0x822276d0
	if (!ctx.cr6.lt) goto loc_822276D0;
	// lwz r11,19636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19636);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r3,r25,1940
	ctx.r3.s64 = ctx.r25.s64 + 1940;
	// lwz r5,516(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// lbz r4,19641(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19641);
	// bl 0x82220db0
	ctx.lr = 0x8222768C;
	sub_82220DB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82227694:
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r25,1940
	ctx.r3.s64 = ctx.r25.s64 + 1940;
	// bl 0x82220db0
	ctx.lr = 0x822276AC;
	sub_82220DB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_822276B4:
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// ori r5,r6,4428
	ctx.r5.u64 = ctx.r6.u64 | 4428;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lwzx r11,r22,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82227594
	if (ctx.cr6.lt) goto loc_82227594;
loc_822276D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822276DC"))) PPC_WEAK_FUNC(sub_822276DC);
PPC_FUNC_IMPL(__imp__sub_822276DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822276E0"))) PPC_WEAK_FUNC(sub_822276E0);
PPC_FUNC_IMPL(__imp__sub_822276E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x822276E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// ori r10,r11,4432
	ctx.r10.u64 = ctx.r11.u64 | 4432;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82227828
	if (!ctx.cr6.gt) goto loc_82227828;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
loc_8222771C:
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0c8
	ctx.lr = 0x8222772C;
	sub_8223D0C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lbz r9,20362(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20362);
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// bl 0x82365698
	ctx.lr = 0x82227740;
	sub_82365698(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82227810
	if (!ctx.cr6.eq) goto loc_82227810;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lbz r4,20360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20360);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bge cr6,0x82227828
	if (!ctx.cr6.lt) goto loc_82227828;
	// addi r9,r27,1940
	ctx.r9.s64 = ctx.r27.s64 + 1940;
	// addi r31,r9,6
	ctx.r31.s64 = ctx.r9.s64 + 6;
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x822277bc
	if (!ctx.cr6.eq) goto loc_822277BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822277BC:
	// lbz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x822277d0
	if (!ctx.cr6.eq) goto loc_822277D0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822277D0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x82227808
	if (!ctx.cr6.lt) goto loc_82227808;
	// mulli r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 * 22;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x8221f908
	ctx.lr = 0x822277FC;
	sub_8221F908(ctx, base);
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r5.u8);
loc_82227808:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82227810:
	// lis r3,33
	ctx.r3.s64 = 2162688;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r11,r3,4432
	ctx.r11.u64 = ctx.r3.u64 | 4432;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222771c
	if (ctx.cr6.lt) goto loc_8222771C;
loc_82227828:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227834"))) PPC_WEAK_FUNC(sub_82227834);
PPC_FUNC_IMPL(__imp__sub_82227834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227838"))) PPC_WEAK_FUNC(sub_82227838);
PPC_FUNC_IMPL(__imp__sub_82227838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82227840;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82369df0
	ctx.lr = 0x82227874;
	sub_82369DF0(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16876
	ctx.r11.s64 = ctx.r11.s64 + 16876;
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// lbz r10,127(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822278EC:
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x822278ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822278EC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82369ec8
	ctx.lr = 0x82227914;
	sub_82369EC8(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r7,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r7.u8);
	// lwz r3,2484(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82227944
	if (!ctx.cr6.eq) goto loc_82227944;
loc_82227938:
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82227944:
	// lbz r5,2668(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2668);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82227938
	if (ctx.cr6.eq) goto loc_82227938;
	// bl 0x82589630
	ctx.lr = 0x82227954;
	sub_82589630(ctx, base);
	// rlwinm r4,r3,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82227964
	if (ctx.cr6.eq) goto loc_82227964;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82227964:
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227970"))) PPC_WEAK_FUNC(sub_82227970);
PPC_FUNC_IMPL(__imp__sub_82227970) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,2896
	ctx.r3.s64 = ctx.r10.s64 + 2896;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82367ab8
	ctx.lr = 0x822279A8;
	sub_82367AB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822279B8"))) PPC_WEAK_FUNC(sub_822279B8);
PPC_FUNC_IMPL(__imp__sub_822279B8) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,24
	ctx.r9.s64 = 24;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822279D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822279d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822279D4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821e9150
	ctx.lr = 0x822279FC;
	sub_821E9150(ctx, base);
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

__attribute__((alias("__imp__sub_82227A10"))) PPC_WEAK_FUNC(sub_82227A10);
PPC_FUNC_IMPL(__imp__sub_82227A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82227A18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
loc_82227A38:
	// slw r6,r24,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// and r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82227b24
	if (ctx.cr6.eq) goto loc_82227B24;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r5,r8,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82227b4c
	if (ctx.cr6.eq) goto loc_82227B4C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82227a38
	if (ctx.cr6.lt) goto loc_82227A38;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// ori r3,r4,36968
	ctx.r3.u64 = ctx.r4.u64 | 36968;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r11,r28,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
loc_82227A8C:
	// slw r10,r24,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r27.u8 & 0x3F));
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82227b08
	if (!ctx.cr6.gt) goto loc_82227B08;
loc_82227AA0:
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82227afc
	if (ctx.cr6.eq) goto loc_82227AFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8232da90
	ctx.lr = 0x82227AB4;
	sub_8232DA90(ctx, base);
	// lwz r9,15328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82227af0
	if (!ctx.cr6.eq) goto loc_82227AF0;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lbzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// and r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82227b78
	if (ctx.cr6.eq) goto loc_82227B78;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r8,r3,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82227b9c
	if (ctx.cr6.eq) goto loc_82227B9C;
loc_82227AF0:
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r5,r6,36968
	ctx.r5.u64 = ctx.r6.u64 | 36968;
	// lwzx r11,r28,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
loc_82227AFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82227aa0
	if (ctx.cr6.lt) goto loc_82227AA0;
loc_82227B08:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// blt cr6,0x82227a8c
	if (ctx.cr6.lt) goto loc_82227A8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r5,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r5.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82227B24:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// addi r9,r9,-24576
	ctx.r9.s64 = ctx.r9.s64 + -24576;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r11,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r11.u8);
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// stb r10,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82227B4C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r8,r25,24
	ctx.r8.u64 = ctx.r25.u32 & 0xFF;
	// addi r9,r11,-24576
	ctx.r9.s64 = ctx.r11.s64 + -24576;
	// ori r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 | 32;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r11.u8);
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stb r5,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r5.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82227B78:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r10,r10,-24576
	ctx.r10.s64 = ctx.r10.s64 + -24576;
	// stb r11,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r11.u8);
	// lbzx r3,r27,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stb r11,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82227B9C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// addi r10,r11,-24576
	ctx.r10.s64 = ctx.r11.s64 + -24576;
	// ori r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 | 32;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r11.u8);
	// lbzx r7,r27,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r6,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r6.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227BC8"))) PPC_WEAK_FUNC(sub_82227BC8);
PPC_FUNC_IMPL(__imp__sub_82227BC8) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// lwz r10,2896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2896);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82227BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82227c48
	if (ctx.cr6.lt) goto loc_82227C48;
	// beq cr6,0x82227c24
	if (ctx.cr6.eq) goto loc_82227C24;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82227c48
	if (!ctx.cr6.lt) goto loc_82227C48;
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
loc_82227C24:
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// beq cr6,0x82227c48
	if (ctx.cr6.eq) goto loc_82227C48;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227C48:
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

__attribute__((alias("__imp__sub_82227C60"))) PPC_WEAK_FUNC(sub_82227C60);
PPC_FUNC_IMPL(__imp__sub_82227C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82227C68;
	__savegprlr_29(ctx, base);
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
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369aa8
	ctx.lr = 0x82227C80;
	sub_82369AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227cac
	if (ctx.cr6.eq) goto loc_82227CAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227ca4
	if (ctx.cr6.eq) goto loc_82227CA4;
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82227cac
	if (!ctx.cr6.eq) goto loc_82227CAC;
loc_82227CA4:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82227cd4
	goto loc_82227CD4;
loc_82227CAC:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// beq cr6,0x82227cd4
	if (ctx.cr6.eq) goto loc_82227CD4;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227CD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82227CDC;
	sub_8221C328(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82227d0c
	if (ctx.cr6.eq) goto loc_82227D0C;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82368408
	ctx.lr = 0x82227CF0;
	sub_82368408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82227d00
	if (!ctx.cr6.eq) goto loc_82227D00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227D00:
	// clrldi r4,r11,56
	ctx.r4.u64 = ctx.r11.u64 & 0xFF;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823652c8
	ctx.lr = 0x82227D0C;
	sub_823652C8(ctx, base);
loc_82227D0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227D18"))) PPC_WEAK_FUNC(sub_82227D18);
PPC_FUNC_IMPL(__imp__sub_82227D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82227D20;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16876
	ctx.r11.s64 = ctx.r11.s64 + 16876;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// li r5,1284
	ctx.r5.s64 = 1284;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8259d300
	ctx.lr = 0x82227D50;
	sub_8259D300(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// bl 0x82369ec8
	ctx.lr = 0x82227D6C;
	sub_82369EC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r11,-6648
	ctx.r30.s64 = ctx.r11.s64 + -6648;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f31,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r25,r8,24
	ctx.r25.u64 = ctx.r8.u32 & 0xFF;
	// lfs f30,-1472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1472);
	ctx.f30.f64 = double(temp.f32);
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
loc_82227DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d6240
	ctx.lr = 0x82227DA8;
	sub_822D6240(ctx, base);
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2ba0
	ctx.lr = 0x82227DB8;
	sub_822D2BA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820fb4d0
	ctx.lr = 0x82227DC8;
	sub_820FB4D0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82227df4
	if (ctx.cr6.eq) goto loc_82227DF4;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82227e44
	if (ctx.cr6.eq) goto loc_82227E44;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,2928
	ctx.r4.s64 = ctx.r30.s64 + 2928;
	// lfsx f0,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82227e44
	if (!ctx.cr6.gt) goto loc_82227E44;
loc_82227DF4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,2928
	ctx.r7.s64 = ctx.r30.s64 + 2928;
	// lwz r10,1288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
	// lfsx f13,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f11.u32);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r28,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r3.u32);
loc_82227E44:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 26, ctx.xer);
	// blt cr6,0x82227da0
	if (ctx.cr6.lt) goto loc_82227DA0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82227E54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d62d8
	ctx.lr = 0x82227E5C;
	sub_822D62D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221228
	ctx.lr = 0x82227E68;
	sub_82221228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820fb4f0
	ctx.lr = 0x82227E78;
	sub_820FB4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82227ea4
	if (ctx.cr6.eq) goto loc_82227EA4;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82227ee8
	if (ctx.cr6.eq) goto loc_82227EE8;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,3448
	ctx.r8.s64 = ctx.r30.s64 + 3448;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x82227ee8
	if (!ctx.cr6.gt) goto loc_82227EE8;
loc_82227EA4:
	// lwz r6,1288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,3448
	ctx.r4.s64 = ctx.r30.s64 + 3448;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// lwzx r9,r5,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r28,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r6.u32);
loc_82227EE8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,50
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 50, ctx.xer);
	// blt cr6,0x82227e54
	if (ctx.cr6.lt) goto loc_82227E54;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r30,3188
	ctx.r28.s64 = ctx.r30.s64 + 3188;
loc_82227EFC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fb4e0
	ctx.lr = 0x82227F08;
	sub_820FB4E0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x82227f2c
	if (ctx.cr6.eq) goto loc_82227F2C;
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82227f68
	if (ctx.cr6.eq) goto loc_82227F68;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ble cr6,0x82227f68
	if (!ctx.cr6.gt) goto loc_82227F68;
loc_82227F2C:
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r29,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r4.u32);
loc_82227F68:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r3,r30,3292
	ctx.r3.s64 = ctx.r30.s64 + 3292;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82227efc
	if (ctx.cr6.lt) goto loc_82227EFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fb500
	ctx.lr = 0x82227F84;
	sub_820FB500(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227F98"))) PPC_WEAK_FUNC(sub_82227F98);
PPC_FUNC_IMPL(__imp__sub_82227F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82227ff0
	if (!ctx.cr6.eq) goto loc_82227FF0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82227FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82227FF0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-20752
	ctx.r11.s64 = ctx.r11.s64 + -20752;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82227d18
	ctx.lr = 0x82228004;
	sub_82227D18(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82370258
	ctx.lr = 0x82228018;
	sub_82370258(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228034"))) PPC_WEAK_FUNC(sub_82228034);
PPC_FUNC_IMPL(__imp__sub_82228034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228038"))) PPC_WEAK_FUNC(sub_82228038);
PPC_FUNC_IMPL(__imp__sub_82228038) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8222816c
	if (ctx.cr6.gt) goto loc_8222816C;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-32648
	ctx.r12.s64 = ctx.r12.s64 + -32648;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82228088;
	case 1:
		goto loc_82228094;
	case 2:
		goto loc_82228108;
	case 3:
		goto loc_82228148;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-32632(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32632);
	// lwz r17,-32620(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32620);
	// lwz r17,-32504(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32504);
	// lwz r17,-32440(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32440);
loc_82228088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822212d0
	ctx.lr = 0x82228090;
	sub_822212D0(ctx, base);
	// b 0x8222816c
	goto loc_8222816C;
loc_82228094:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// lwz r11,2896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2896);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822280B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222816c
	if (ctx.cr6.eq) goto loc_8222816C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822280d4
	if (ctx.cr6.eq) goto loc_822280D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82228158
	goto loc_82228158;
loc_822280D4:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82368410
	ctx.lr = 0x822280DC;
	sub_82368410(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822280fc
	if (!ctx.cr6.eq) goto loc_822280FC;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82228158
	goto loc_82228158;
loc_822280FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221350
	ctx.lr = 0x82228104;
	sub_82221350(ctx, base);
	// b 0x8222816c
	goto loc_8222816C;
loc_82228108:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x82228118;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82228134
	if (!ctx.cr6.eq) goto loc_82228134;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x82228128;
	sub_82367A40(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x8222816c
	goto loc_8222816C;
loc_82228134:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222816c
	if (ctx.cr6.eq) goto loc_8222816C;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x8222816c
	goto loc_8222816C;
loc_82228148:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82228158:
	// bctrl 
	ctx.lr = 0x8222815C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8222816C:
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

__attribute__((alias("__imp__sub_82228184"))) PPC_WEAK_FUNC(sub_82228184);
PPC_FUNC_IMPL(__imp__sub_82228184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228188"))) PPC_WEAK_FUNC(sub_82228188);
PPC_FUNC_IMPL(__imp__sub_82228188) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbz r10,7497(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7497);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822281d8
	if (ctx.cr6.eq) goto loc_822281D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x822212d0
	ctx.lr = 0x822281C4;
	sub_822212D0(ctx, base);
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
loc_822281D8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// addi r4,r10,-20740
	ctx.r4.s64 = ctx.r10.s64 + -20740;
	// bl 0x8236e908
	ctx.lr = 0x822281E8;
	sub_8236E908(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82228204"))) PPC_WEAK_FUNC(sub_82228204);
PPC_FUNC_IMPL(__imp__sub_82228204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228208"))) PPC_WEAK_FUNC(sub_82228208);
PPC_FUNC_IMPL(__imp__sub_82228208) {
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
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x8236ccc8
	ctx.lr = 0x82228228;
	sub_8236CCC8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,30212
	ctx.r9.u64 = ctx.r10.u64 | 30212;
	// ori r7,r8,30216
	ctx.r7.u64 = ctx.r8.u64 | 30216;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x823690b0
	ctx.lr = 0x8222824C;
	sub_823690B0(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r5,r6,26708
	ctx.r5.u64 = ctx.r6.u64 | 26708;
	// stbx r11,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821e90b0
	ctx.lr = 0x82228268;
	sub_821E90B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82366a60
	ctx.lr = 0x82228274;
	sub_82366A60(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8210d230
	ctx.lr = 0x82228288;
	sub_8210D230(ctx, base);
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

__attribute__((alias("__imp__sub_8222829C"))) PPC_WEAK_FUNC(sub_8222829C);
PPC_FUNC_IMPL(__imp__sub_8222829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822282A0"))) PPC_WEAK_FUNC(sub_822282A0);
PPC_FUNC_IMPL(__imp__sub_822282A0) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,5192
	ctx.r4.s64 = ctx.r10.s64 + 5192;
	// addi r3,r11,-13980
	ctx.r3.s64 = ctx.r11.s64 + -13980;
	// bl 0x82228188
	ctx.lr = 0x822282D4;
	sub_82228188(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822282F0"))) PPC_WEAK_FUNC(sub_822282F0);
PPC_FUNC_IMPL(__imp__sub_822282F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822282F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lwz r27,56(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82228374
	if (!ctx.cr6.gt) goto loc_82228374;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r29,r11,-29112
	ctx.r29.s64 = ctx.r11.s64 + -29112;
loc_82228328:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82228334;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228344
	if (ctx.cr6.eq) goto loc_82228344;
	// bl 0x823475c0
	ctx.lr = 0x82228340;
	sub_823475C0(ctx, base);
	// b 0x8222834c
	goto loc_8222834C;
loc_82228344:
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x8222834C;
	sub_823656E8(ctx, base);
loc_8222834C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
	// addi r29,r29,5956
	ctx.r29.s64 = ctx.r29.s64 + 5956;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// blt cr6,0x82228328
	if (ctx.cr6.lt) goto loc_82228328;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bge cr6,0x822283a0
	if (!ctx.cr6.lt) goto loc_822283A0;
loc_82228374:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r10,r31,6
	ctx.xer.ca = ctx.r31.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r31.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82228388:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82228388
	if (!ctx.cr6.eq) goto loc_82228388;
loc_822283A0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,5136
	ctx.r6.s64 = ctx.r11.s64 + 5136;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x822283B8;
	sub_8259CD88(ctx, base);
	// addi r28,r27,-1
	ctx.r28.s64 = ctx.r27.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82228408
	if (!ctx.cr6.gt) goto loc_82228408;
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
	// addi r30,r27,-2
	ctx.r30.s64 = ctx.r27.s64 + -2;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822283D0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r26,2896
	ctx.r3.s64 = ctx.r26.s64 + 2896;
	// bl 0x82361580
	ctx.lr = 0x822283E0;
	sub_82361580(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822283f4
	if (ctx.cr6.eq) goto loc_822283F4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_822283F4:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822283d0
	if (!ctx.cr6.eq) goto loc_822283D0;
loc_82228408:
	// addi r3,r26,2896
	ctx.r3.s64 = ctx.r26.s64 + 2896;
	// bl 0x82361648
	ctx.lr = 0x82228410;
	sub_82361648(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228418"))) PPC_WEAK_FUNC(sub_82228418);
PPC_FUNC_IMPL(__imp__sub_82228418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82228420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,14(r26)
	PPC_STORE_U8(ctx.r26.u32 + 14, ctx.r11.u8);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x820fc018
	ctx.lr = 0x82228440;
	sub_820FC018(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222847c
	if (ctx.cr6.eq) goto loc_8222847C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8222847c
	if (!ctx.cr6.gt) goto loc_8222847C;
loc_82228458:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82228464;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228470
	if (ctx.cr6.eq) goto loc_82228470;
	// bl 0x8221b010
	ctx.lr = 0x82228470;
	sub_8221B010(ctx, base);
loc_82228470:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82228458
	if (ctx.cr6.lt) goto loc_82228458;
loc_8222847C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c568
	ctx.lr = 0x82228484;
	sub_8221C568(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822284a0
	if (ctx.cr6.eq) goto loc_822284A0;
	// bl 0x820fc018
	ctx.lr = 0x82228494;
	sub_820FC018(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822284a8
	if (!ctx.cr6.eq) goto loc_822284A8;
loc_822284A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,14(r26)
	PPC_STORE_U8(ctx.r26.u32 + 14, ctx.r7.u8);
loc_822284A8:
	// lbz r6,14(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 14);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8222863c
	if (!ctx.cr6.eq) goto loc_8222863C;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x822284BC;
	sub_82368400(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822284dc
	if (ctx.cr6.eq) goto loc_822284DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c328
	ctx.lr = 0x822284D0;
	sub_8221C328(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82228518
	if (!ctx.cr6.eq) goto loc_82228518;
loc_822284DC:
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82369bd0
	ctx.lr = 0x822284E4;
	sub_82369BD0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222863c
	if (ctx.cr6.eq) goto loc_8222863C;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82369aa8
	ctx.lr = 0x822284F8;
	sub_82369AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222863c
	if (ctx.cr6.eq) goto loc_8222863C;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x8222850C;
	sub_82368400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222863c
	if (!ctx.cr6.eq) goto loc_8222863C;
loc_82228518:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222863c
	if (!ctx.cr6.gt) goto loc_8222863C;
loc_82228528:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82228534;
	sub_82365758(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822285b8
	if (ctx.cr6.eq) goto loc_822285B8;
	// lwz r9,1204(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1204);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x822285d0
	if (ctx.cr6.eq) goto loc_822285D0;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822285bc
	if (!ctx.cr6.gt) goto loc_822285BC;
loc_8222855C:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822285a8
	if (ctx.cr6.eq) goto loc_822285A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82228570;
	sub_82365758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82228588
	if (ctx.cr6.eq) goto loc_82228588;
	// lwz r8,1204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x822285e4
	if (ctx.cr6.eq) goto loc_822285E4;
loc_82228588:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82221500
	ctx.lr = 0x82228598;
	sub_82221500(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822285f8
	if (!ctx.cr6.eq) goto loc_822285F8;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
loc_822285A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222855c
	if (ctx.cr6.lt) goto loc_8222855C;
	// b 0x822285bc
	goto loc_822285BC;
loc_822285B8:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
loc_822285BC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82228528
	if (ctx.cr6.lt) goto loc_82228528;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822285D0:
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// b 0x8222862c
	goto loc_8222862C;
loc_822285E4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8222862c
	goto loc_8222862C;
loc_822285F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222861c
	if (ctx.cr6.eq) goto loc_8222861C;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8222861c
	if (ctx.cr6.gt) goto loc_8222861C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8222862c
	goto loc_8222862C;
loc_8222861C:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8222862C:
	// bctrl 
	ctx.lr = 0x82228630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82221608
	ctx.lr = 0x8222863C;
	sub_82221608(ctx, base);
loc_8222863C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228644"))) PPC_WEAK_FUNC(sub_82228644);
PPC_FUNC_IMPL(__imp__sub_82228644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228648"))) PPC_WEAK_FUNC(sub_82228648);
PPC_FUNC_IMPL(__imp__sub_82228648) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r4.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r5,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r5.u32);
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822286d8
	if (ctx.cr6.gt) goto loc_822286D8;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-31072
	ctx.r12.s64 = ctx.r12.s64 + -31072;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822286B8;
	case 1:
		goto loc_822286B8;
	case 2:
		goto loc_822286C4;
	case 3:
		goto loc_822286C4;
	case 4:
		goto loc_822286C4;
	case 5:
		goto loc_822286D0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-31048(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31048);
	// lwz r17,-31048(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31048);
	// lwz r17,-31036(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31036);
	// lwz r17,-31036(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31036);
	// lwz r17,-31036(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31036);
	// lwz r17,-31024(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -31024);
loc_822286B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x822286d8
	goto loc_822286D8;
loc_822286C4:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x822286d8
	goto loc_822286D8;
loc_822286D0:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_822286D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822218c8
	ctx.lr = 0x822286E4;
	sub_822218C8(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82228700"))) PPC_WEAK_FUNC(sub_82228700);
PPC_FUNC_IMPL(__imp__sub_82228700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82228708;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82228c58
	if (ctx.cr6.gt) goto loc_82228C58;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-30920
	ctx.r12.s64 = ctx.r12.s64 + -30920;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82228B74;
	case 1:
		goto loc_82228B98;
	case 2:
		goto loc_82228BBC;
	case 3:
		goto loc_82228C20;
	case 4:
		goto loc_82228794;
	case 5:
		goto loc_82228754;
	case 6:
		goto loc_82228754;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-29836(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29836);
	// lwz r17,-29800(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29800);
	// lwz r17,-29764(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29764);
	// lwz r17,-29664(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29664);
	// lwz r17,-30828(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -30828);
	// lwz r17,-30892(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -30892);
	// lwz r17,-30892(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -30892);
loc_82228754:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82228768
	if (ctx.cr6.eq) goto loc_82228768;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82228768:
	// lwz r11,3504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3504);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// lwz r3,3508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3508);
	// stw r24,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r24.u32);
	// stw r24,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222878C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822221a0
	ctx.lr = 0x8222879C;
	sub_822221A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r11,26752
	ctx.r27.s64 = ctx.r11.s64 + 26752;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,7472(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7472);
	// lwz r25,56(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// bl 0x824078c0
	ctx.lr = 0x822287CC;
	sub_824078C0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,7472(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7472);
	// bl 0x82407a10
	ctx.lr = 0x822287EC;
	sub_82407A10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d2a0
	ctx.lr = 0x82228800;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259d2a0
	ctx.lr = 0x82228810;
	sub_8259D2A0(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// bne cr6,0x8222884c
	if (!ctx.cr6.eq) goto loc_8222884C;
	// addi r4,r1,113
	ctx.r4.s64 = ctx.r1.s64 + 113;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82228830;
	sub_8210FCF8(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82361bd8
	ctx.lr = 0x82228848;
	sub_82361BD8(ctx, base);
	// b 0x82228868
	goto loc_82228868;
loc_8222884C:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x8259d2a0
	ctx.lr = 0x82228868;
	sub_8259D2A0(ctx, base);
loc_82228868:
	// lbz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bne cr6,0x8222889c
	if (!ctx.cr6.eq) goto loc_8222889C;
	// addi r4,r1,177
	ctx.r4.s64 = ctx.r1.s64 + 177;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82228880;
	sub_8210FCF8(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,680
	ctx.r4.s64 = ctx.r11.s64 + 680;
	// bl 0x82361bd8
	ctx.lr = 0x82228898;
	sub_82361BD8(ctx, base);
	// b 0x822288b8
	goto loc_822288B8;
loc_8222889C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,680
	ctx.r3.s64 = ctx.r11.s64 + 680;
	// bl 0x8259d2a0
	ctx.lr = 0x822288B8;
	sub_8259D2A0(ctx, base);
loc_822288B8:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// ble cr6,0x82228a0c
	if (!ctx.cr6.gt) goto loc_82228A0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,13884
	ctx.r26.s64 = ctx.r11.s64 + 13884;
loc_822288D0:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// bl 0x823676a8
	ctx.lr = 0x822288DC;
	sub_823676A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x822288F8;
	sub_82369240(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,16
	ctx.r7.s64 = 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r11,1320
	ctx.r6.s64 = ctx.r11.s64 + 1320;
	// bl 0x82369240
	ctx.lr = 0x82228938;
	sub_82369240(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,16
	ctx.r6.s64 = 16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,1336
	ctx.r5.s64 = ctx.r11.s64 + 1336;
	// bl 0x821e9e90
	ctx.lr = 0x82228970;
	sub_821E9E90(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x822289d8
	if (ctx.cr6.eq) goto loc_822289D8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8259cce0
	ctx.lr = 0x82228984;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822289d8
	if (ctx.cr6.eq) goto loc_822289D8;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x822289a4
	if (ctx.cr6.eq) goto loc_822289A4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x822289a4
	if (ctx.cr6.eq) goto loc_822289A4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x822289d8
	if (!ctx.cr6.eq) goto loc_822289D8;
loc_822289A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x822289AC;
	sub_8259DBD0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,1352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1352, ctx.r3.u32);
	// b 0x82228a00
	goto loc_82228A00;
loc_822289D8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r24,1352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1352, ctx.r24.u32);
loc_82228A00:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822288d0
	if (ctx.cr6.lt) goto loc_822288D0;
loc_82228A0C:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82228b20
	if (!ctx.cr6.gt) goto loc_82228B20;
loc_82228A18:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,1352(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1352);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82228b14
	if (!ctx.cr6.eq) goto loc_82228B14;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82228A4C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82228A58;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228a74
	if (ctx.cr6.eq) goto loc_82228A74;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82228A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82228a7c
	goto loc_82228A7C;
loc_82228A74:
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x82228A7C;
	sub_82361330(ctx, base);
loc_82228A7C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82228A84:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1320
	ctx.r4.s64 = ctx.r11.s64 + 1320;
	// bl 0x824065f0
	ctx.lr = 0x82228AB4;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228ac8
	if (ctx.cr6.eq) goto loc_82228AC8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82228a84
	if (ctx.cr6.lt) goto loc_82228A84;
loc_82228AC8:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82228ae0
	if (ctx.cr6.eq) goto loc_82228AE0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82228a4c
	if (ctx.cr6.lt) goto loc_82228A4C;
	// b 0x82228b14
	goto loc_82228B14;
loc_82228AE0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1320
	ctx.r3.s64 = ctx.r11.s64 + 1320;
	// bl 0x8259d2a0
	ctx.lr = 0x82228B14;
	sub_8259D2A0(ctx, base);
loc_82228B14:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82228a18
	if (ctx.cr6.lt) goto loc_82228A18;
loc_82228B20:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r7,r8,24896
	ctx.r7.u64 = ctx.r8.u64 | 24896;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82228b5c
	if (!ctx.cr6.lt) goto loc_82228B5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822218c8
	ctx.lr = 0x82228B54;
	sub_822218C8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228B5C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// stb r4,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r4.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228B74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822221a0
	ctx.lr = 0x82228B7C;
	sub_822221A0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822221a0
	ctx.lr = 0x82228BA0;
	sub_822221A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228BBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822221a0
	ctx.lr = 0x82228BC4;
	sub_822221A0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369180
	ctx.lr = 0x82228BE0;
	sub_82369180(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x823691b0
	ctx.lr = 0x82228BF4;
	sub_823691B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x823691e0
	ctx.lr = 0x82228C0C;
	sub_823691E0(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822221a0
	ctx.lr = 0x82228C28;
	sub_822221A0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x820fc018
	ctx.lr = 0x82228C44;
	sub_820FC018(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82228c58
	if (ctx.cr6.eq) goto loc_82228C58;
	// li r4,6
	ctx.r4.s64 = 6;
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
loc_82228C58:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228C60"))) PPC_WEAK_FUNC(sub_82228C60);
PPC_FUNC_IMPL(__imp__sub_82228C60) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82228c7c
	if (ctx.cr6.eq) goto loc_82228C7C;
	// stw r10,7360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7360, ctx.r10.u32);
	// stw r10,7364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7364, ctx.r10.u32);
loc_82228C7C:
	// stw r10,7368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7368, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,7372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7372, ctx.r10.u32);
	// stw r10,11060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11060, ctx.r10.u32);
	// stw r10,11064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11064, ctx.r10.u32);
	// stw r10,11068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11068, ctx.r10.u32);
	// stw r10,11072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11072, ctx.r10.u32);
	// stw r10,11076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11076, ctx.r10.u32);
	// stb r10,11080(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11080, ctx.r10.u8);
	// stb r10,11081(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11081, ctx.r10.u8);
	// stw r10,11472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11472, ctx.r10.u32);
	// stb r10,11082(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11082, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228CB0"))) PPC_WEAK_FUNC(sub_82228CB0);
PPC_FUNC_IMPL(__imp__sub_82228CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82228CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r31,7376
	ctx.r30.s64 = ctx.r31.s64 + 7376;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228cf8
	if (ctx.cr6.eq) goto loc_82228CF8;
	// lwz r6,11072(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11068);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,11068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11068, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82228CF8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d818
	ctx.lr = 0x82228D14;
	sub_8210D818(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82228d5c
	if (!ctx.cr6.eq) goto loc_82228D5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822222e0
	ctx.lr = 0x82228D30;
	sub_822222E0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82228d5c
	if (ctx.cr6.eq) goto loc_82228D5C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r7,53(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82370330
	ctx.lr = 0x82228D58;
	sub_82370330(ctx, base);
	// stb r28,11082(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11082, ctx.r28.u8);
loc_82228D5C:
	// stw r28,11076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11076, ctx.r28.u32);
	// stw r27,11472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11472, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228D6C"))) PPC_WEAK_FUNC(sub_82228D6C);
PPC_FUNC_IMPL(__imp__sub_82228D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228D70"))) PPC_WEAK_FUNC(sub_82228D70);
PPC_FUNC_IMPL(__imp__sub_82228D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82228D78;
	__savegprlr_24(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r25,r31,268
	ctx.r25.s64 = ctx.r31.s64 + 268;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82228D9C;
	sub_8259D2A0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stb r30,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r30.u8);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r28,r11,23504
	ctx.r28.s64 = ctx.r11.s64 + 23504;
	// stw r27,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r27.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stb r24,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r24.u8);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14715
	ctx.r10.u64 = ctx.r11.u64 | 14715;
	// lbzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// bl 0x8210b358
	ctx.lr = 0x82228DD8;
	sub_8210B358(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82228df8
	if (ctx.cr6.eq) goto loc_82228DF8;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x82228dfc
	if (ctx.cr6.eq) goto loc_82228DFC;
loc_82228DF8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82228DFC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822292b4
	if (!ctx.cr6.eq) goto loc_822292B4;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,14719
	ctx.r6.u64 = ctx.r7.u64 | 14719;
	// lbzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822292b4
	if (!ctx.cr6.eq) goto loc_822292B4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82228e68
	if (!ctx.cr6.eq) goto loc_82228E68;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r10,-27264
	ctx.r5.s64 = ctx.r10.s64 + -27264;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,9664
	ctx.r7.s64 = ctx.r11.s64 + 9664;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x821e6928
	ctx.lr = 0x82228E60;
	sub_821E6928(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228E68:
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82228f44
	if (ctx.cr6.eq) goto loc_82228F44;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825aeb40
	ctx.lr = 0x82228E80;
	sub_825AEB40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82228e9c
	if (!ctx.cr6.eq) goto loc_82228E9C;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361d08
	ctx.lr = 0x82228E98;
	sub_82361D08(ctx, base);
	// b 0x82228eb8
	goto loc_82228EB8;
loc_82228E9C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-18952
	ctx.r4.s64 = ctx.r11.s64 + -18952;
	// bl 0x8210fcf8
	ctx.lr = 0x82228EAC;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82361f50
	ctx.lr = 0x82228EB8;
	sub_82361F50(ctx, base);
loc_82228EB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-18976
	ctx.r4.s64 = ctx.r11.s64 + -18976;
	// bl 0x8210fcf8
	ctx.lr = 0x82228EC8;
	sub_8210FCF8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8236b2f8
	ctx.lr = 0x82228EF4;
	sub_8236B2F8(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82361bd8
	ctx.lr = 0x82228F04;
	sub_82361BD8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,9904
	ctx.r7.s64 = ctx.r11.s64 + 9904;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821e6928
	ctx.lr = 0x82228F3C;
	sub_821E6928(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82228F44:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r27,r11,-24936
	ctx.r27.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229000
	if (ctx.cr6.eq) goto loc_82229000;
	// lis r10,-6216
	ctx.r10.s64 = -407371776;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27105
	ctx.r8.s64 = -1776353280;
	// ori r9,r10,63999
	ctx.r9.u64 = ctx.r10.u64 | 63999;
	// ori r7,r8,28614
	ctx.r7.u64 = ctx.r8.u64 | 28614;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82229000
	if (!ctx.cr6.eq) goto loc_82229000;
	// lwz r11,8400(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82228fb0
	if (ctx.cr6.eq) goto loc_82228FB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82228fb0
	if (ctx.cr6.eq) goto loc_82228FB0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82228fb0
	if (ctx.cr6.eq) goto loc_82228FB0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82228fb0
	if (ctx.cr6.eq) goto loc_82228FB0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82228fb0
	if (ctx.cr6.eq) goto loc_82228FB0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82228fb4
	if (!ctx.cr6.eq) goto loc_82228FB4;
loc_82228FB0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82228FB4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82229000
	if (ctx.cr6.eq) goto loc_82229000;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r11,-27264
	ctx.r5.s64 = ctx.r11.s64 + -27264;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x82228FF8;
	sub_821E6928(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82229000:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x82229010;
	sub_82368400(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82229050
	if (ctx.cr6.eq) goto loc_82229050;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x82361650
	ctx.lr = 0x8222902C;
	sub_82361650(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259de50
	ctx.lr = 0x8222903C;
	sub_8259DE50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229050
	if (!ctx.cr6.eq) goto loc_82229050;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82229050:
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82229090
	if (ctx.cr6.eq) goto loc_82229090;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16244
	ctx.r8.u64 = ctx.r9.u64 | 16244;
	// lbzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82229090
	if (!ctx.cr6.eq) goto loc_82229090;
loc_82229080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222550
	ctx.lr = 0x82229088;
	sub_82222550(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82229090:
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r6,r11,24760
	ctx.r6.s64 = ctx.r11.s64 + 24760;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822290b4
	if (!ctx.cr6.eq) goto loc_822290B4;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r4,r5,24808
	ctx.r4.u64 = ctx.r5.u64 | 24808;
	// lwzx r11,r29,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82229080
	if (!ctx.cr6.eq) goto loc_82229080;
loc_822290B4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229148
	if (ctx.cr6.eq) goto loc_82229148;
	// lis r3,-8415
	ctx.r3.s64 = -551485440;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27114
	ctx.r8.s64 = -1776943104;
	// ori r9,r3,27832
	ctx.r9.u64 = ctx.r3.u64 | 27832;
	// ori r7,r8,2197
	ctx.r7.u64 = ctx.r8.u64 | 2197;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x822290f4
	if (!ctx.cr6.eq) goto loc_822290F4;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r5,r6,51970
	ctx.r5.u64 = ctx.r6.u64 | 51970;
	// lbzx r4,r28,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82229080
	if (!ctx.cr6.eq) goto loc_82229080;
loc_822290F4:
	// lis r3,14599
	ctx.r3.s64 = 956760064;
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// ori r9,r3,5152
	ctx.r9.u64 = ctx.r3.u64 | 5152;
	// ori r7,r8,16398
	ctx.r7.u64 = ctx.r8.u64 | 16398;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x82229080
	if (ctx.cr6.eq) goto loc_82229080;
	// lis r6,29312
	ctx.r6.s64 = 1920991232;
	// lis r4,-14074
	ctx.r4.s64 = -922353664;
	// ori r5,r6,34385
	ctx.r5.u64 = ctx.r6.u64 | 34385;
	// ori r3,r4,59998
	ctx.r3.u64 = ctx.r4.u64 | 59998;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x82229240
	if (ctx.cr6.eq) goto loc_82229240;
	// lis r9,28623
	ctx.r9.s64 = 1875836928;
	// lis r7,23485
	ctx.r7.s64 = 1539112960;
	// ori r8,r9,26567
	ctx.r8.u64 = ctx.r9.u64 | 26567;
	// ori r6,r7,31649
	ctx.r6.u64 = ctx.r7.u64 | 31649;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82229240
	if (ctx.cr6.eq) goto loc_82229240;
loc_82229148:
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r5,r11,24760
	ctx.r5.s64 = ctx.r11.s64 + 24760;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822291ec
	if (ctx.cr6.eq) goto loc_822291EC;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r9,12
	ctx.r9.s64 = 12;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lbzx r11,r28,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822291b4
	if (ctx.cr6.eq) goto loc_822291B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,-22996
	ctx.r11.s64 = ctx.r11.s64 + -22996;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r7,9944
	ctx.r7.s64 = ctx.r7.s64 + 9944;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821e6928
	ctx.lr = 0x822291AC;
	sub_821E6928(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_822291B4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r10,-22996
	ctx.r5.s64 = ctx.r10.s64 + -22996;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r11,9944
	ctx.r7.s64 = ctx.r11.s64 + 9944;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x822291E4;
	sub_821E6928(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_822291EC:
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x822291F4;
	sub_82368400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229214
	if (ctx.cr6.eq) goto loc_82229214;
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x8236de80
	ctx.lr = 0x82229208;
	sub_8236DE80(ctx, base);
	// stw r24,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r24.u32);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82229214:
	// lis r9,-31359
	ctx.r9.s64 = -2055143424;
	// lis r8,-27095
	ctx.r8.s64 = -1775697920;
	// ori r4,r9,22562
	ctx.r4.u64 = ctx.r9.u64 | 22562;
	// ori r7,r8,44691
	ctx.r7.u64 = ctx.r8.u64 | 44691;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82229238;
	sub_820A38E8(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82229240:
	// lis r6,7
	ctx.r6.s64 = 458752;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ori r5,r6,16294
	ctx.r5.u64 = ctx.r6.u64 | 16294;
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r11,r29,r5
	PPC_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u8);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82229278;
	sub_821F6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x82229280;
	sub_821F6898(ctx, base);
	// lis r9,-31359
	ctx.r9.s64 = -2055143424;
	// lis r8,-27095
	ctx.r8.s64 = -1775697920;
	// ori r4,r9,22562
	ctx.r4.u64 = ctx.r9.u64 | 22562;
	// ori r7,r8,44691
	ctx.r7.u64 = ctx.r8.u64 | 44691;
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82103ec8
	ctx.lr = 0x822292A4;
	sub_82103EC8(ctx, base);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,24760
	ctx.r4.s64 = ctx.r11.s64 + 24760;
	// bl 0x82104110
	ctx.lr = 0x822292B4;
	sub_82104110(ctx, base);
loc_822292B4:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822292BC"))) PPC_WEAK_FUNC(sub_822292BC);
PPC_FUNC_IMPL(__imp__sub_822292BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822292C0"))) PPC_WEAK_FUNC(sub_822292C0);
PPC_FUNC_IMPL(__imp__sub_822292C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822292C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822292f0
	if (ctx.cr6.gt) goto loc_822292F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822292F0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82229304
	if (ctx.cr6.eq) goto loc_82229304;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82229328
	goto loc_82229328;
loc_82229304:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82229314
	if (ctx.cr6.lt) goto loc_82229314;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82229314:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82229328
	if (!ctx.cr6.eq) goto loc_82229328;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82229328:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82229374
	if (ctx.cr6.lt) goto loc_82229374;
	// bne cr6,0x822293b8
	if (!ctx.cr6.eq) goto loc_822293B8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82229344
	if (ctx.cr6.gt) goto loc_82229344;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82229344:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82229394
	if (!ctx.cr6.eq) goto loc_82229394;
	// bl 0x82120980
	ctx.lr = 0x82229358;
	sub_82120980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x82229368
	if (ctx.cr6.eq) goto loc_82229368;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82229368:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223bf8
	ctx.lr = 0x82229370;
	sub_82223BF8(ctx, base);
	// b 0x822293b8
	goto loc_822293B8;
loc_82229374:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82229384
	if (ctx.cr6.lt) goto loc_82229384;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82229384:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222939c
	if (ctx.cr6.eq) goto loc_8222939C;
loc_82229394:
	// bl 0x82223cc8
	ctx.lr = 0x82229398;
	sub_82223CC8(ctx, base);
	// b 0x822293b8
	goto loc_822293B8;
loc_8222939C:
	// bl 0x82120980
	ctx.lr = 0x822293A0;
	sub_82120980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,3
	ctx.r29.s64 = 3;
	// beq cr6,0x822293b0
	if (ctx.cr6.eq) goto loc_822293B0;
	// li r29,4
	ctx.r29.s64 = 4;
loc_822293B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223c60
	ctx.lr = 0x822293B8;
	sub_82223C60(ctx, base);
loc_822293B8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822229f0
	ctx.lr = 0x822293CC;
	sub_822229F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822293D4"))) PPC_WEAK_FUNC(sub_822293D4);
PPC_FUNC_IMPL(__imp__sub_822293D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822293D8"))) PPC_WEAK_FUNC(sub_822293D8);
PPC_FUNC_IMPL(__imp__sub_822293D8) {
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
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,16996
	ctx.r8.u64 = ctx.r9.u64 | 16996;
	// ori r6,r7,17000
	ctx.r6.u64 = ctx.r7.u64 | 17000;
	// ori r4,r5,17008
	ctx.r4.u64 = ctx.r5.u64 | 17008;
	// addi r3,r11,4012
	ctx.r3.s64 = ctx.r11.s64 + 4012;
	// stw r10,4004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4004, ctx.r10.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// bl 0x82222e70
	ctx.lr = 0x8222941C;
	sub_82222E70(ctx, base);
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

__attribute__((alias("__imp__sub_82229430"))) PPC_WEAK_FUNC(sub_82229430);
PPC_FUNC_IMPL(__imp__sub_82229430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82229438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82229480
	if (!ctx.cr6.eq) goto loc_82229480;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,12992
	ctx.r10.s64 = ctx.r10.s64 + 12992;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82229480
	if (!ctx.cr6.eq) goto loc_82229480;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r3,4008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4008);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r11.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8259d3a0
	ctx.lr = 0x82229480;
	sub_8259D3A0(ctx, base);
loc_82229480:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,16996
	ctx.r10.s64 = ctx.r10.s64 + 16996;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822294bc
	if (ctx.cr6.eq) goto loc_822294BC;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// cntlzw r8,r29
	ctx.r8.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// addi r11,r11,17000
	ctx.r11.s64 = ctx.r11.s64 + 17000;
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822294BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822294BC:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r7,17008
	ctx.r6.u64 = ctx.r7.u64 | 17008;
	// ori r4,r5,17004
	ctx.r4.u64 = ctx.r5.u64 | 17004;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822294DC"))) PPC_WEAK_FUNC(sub_822294DC);
PPC_FUNC_IMPL(__imp__sub_822294DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822294E0"))) PPC_WEAK_FUNC(sub_822294E0);
PPC_FUNC_IMPL(__imp__sub_822294E0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8222952c
	if (ctx.cr6.lt) goto loc_8222952C;
	// beq cr6,0x82229518
	if (ctx.cr6.eq) goto loc_82229518;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x82229600
	if (!ctx.cr6.lt) goto loc_82229600;
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
loc_82229518:
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
loc_8222952C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,12592
	ctx.r9.u64 = ctx.r10.u64 | 12592;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82229554
	if (ctx.cr6.lt) goto loc_82229554;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82229554:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232da90
	ctx.lr = 0x82229564;
	sub_8232DA90(ctx, base);
	// lwz r7,15328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x822295bc
	if (!ctx.cr6.eq) goto loc_822295BC;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822295a8
	if (!ctx.cr6.eq) goto loc_822295A8;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822295A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822295BC:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822295ec
	if (!ctx.cr6.eq) goto loc_822295EC;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822295EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82229600:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229614"))) PPC_WEAK_FUNC(sub_82229614);
PPC_FUNC_IMPL(__imp__sub_82229614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229618"))) PPC_WEAK_FUNC(sub_82229618);
PPC_FUNC_IMPL(__imp__sub_82229618) {
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
	// lwz r11,23120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x822296e8
	if (ctx.cr6.gt) goto loc_822296E8;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-27048
	ctx.r12.s64 = ctx.r12.s64 + -27048;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222968C;
	case 1:
		goto loc_8222968C;
	case 2:
		goto loc_8222968C;
	case 3:
		goto loc_8222968C;
	case 4:
		goto loc_8222968C;
	case 5:
		goto loc_822296D0;
	case 6:
		goto loc_822296DC;
	case 7:
		goto loc_822296D0;
	case 8:
		goto loc_822296D0;
	case 9:
		goto loc_822296DC;
	case 10:
		goto loc_822296DC;
	case 11:
		goto loc_822296D0;
	case 12:
		goto loc_822296DC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26996(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26996);
	// lwz r17,-26996(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26996);
	// lwz r17,-26996(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26996);
	// lwz r17,-26996(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26996);
	// lwz r17,-26996(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26996);
	// lwz r17,-26928(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26928);
	// lwz r17,-26916(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26916);
	// lwz r17,-26928(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26928);
	// lwz r17,-26928(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26928);
	// lwz r17,-26916(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26916);
	// lwz r17,-26916(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26916);
	// lwz r17,-26928(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26928);
	// lwz r17,-26916(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26916);
loc_8222968C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82229690:
	// lwz r31,23104(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23104);
loc_82229694:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822294e0
	ctx.lr = 0x822296A4;
	sub_822294E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r3,12432
	ctx.r3.s64 = ctx.r3.s64 + 12432;
	// bl 0x821208f8
	ctx.lr = 0x822296B8;
	sub_821208F8(ctx, base);
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
loc_822296D0:
	// lwz r31,23100(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23100);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82229694
	goto loc_82229694;
loc_822296DC:
	// lwz r31,23100(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23100);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82229694
	goto loc_82229694;
loc_822296E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82229690
	if (ctx.cr6.eq) goto loc_82229690;
	// lwz r31,23100(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23100);
	// b 0x82229694
	goto loc_82229694;
}

__attribute__((alias("__imp__sub_822296FC"))) PPC_WEAK_FUNC(sub_822296FC);
PPC_FUNC_IMPL(__imp__sub_822296FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229700"))) PPC_WEAK_FUNC(sub_82229700);
PPC_FUNC_IMPL(__imp__sub_82229700) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822297dc
	if (ctx.cr6.gt) goto loc_822297DC;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-26820
	ctx.r12.s64 = ctx.r12.s64 + -26820;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822297BC;
	case 1:
		goto loc_822297DC;
	case 2:
		goto loc_822297CC;
	case 3:
		goto loc_82229788;
	case 4:
		goto loc_82229754;
	case 5:
		goto loc_822297CC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26692(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26692);
	// lwz r17,-26660(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26660);
	// lwz r17,-26676(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26676);
	// lwz r17,-26744(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26744);
	// lwz r17,-26796(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26796);
	// lwz r17,-26676(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26676);
loc_82229754:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8240c1c8
	ctx.lr = 0x82229768;
	sub_8240C1C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_82229788:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8240c3b0
	ctx.lr = 0x8222979C;
	sub_8240C3B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
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
loc_822297BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8240c5d0
	ctx.lr = 0x822297C4;
	sub_8240C5D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r9.u8);
loc_822297CC:
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r8.u8);
	// bl 0x82223468
	ctx.lr = 0x822297D8;
	sub_82223468(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_822297DC:
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

__attribute__((alias("__imp__sub_822297F0"))) PPC_WEAK_FUNC(sub_822297F0);
PPC_FUNC_IMPL(__imp__sub_822297F0) {
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
	// addi r5,r31,184
	ctx.r5.s64 = ctx.r31.s64 + 184;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x822232a8
	ctx.lr = 0x82229814;
	sub_822232A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bne cr6,0x8222983c
	if (!ctx.cr6.eq) goto loc_8222983C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// b 0x82229878
	goto loc_82229878;
loc_8222983C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223330
	ctx.lr = 0x82229848;
	sub_82223330(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r3.u32);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8222986c
	if (!ctx.cr6.gt) goto loc_8222986C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r7,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r7.u8);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// b 0x82229878
	goto loc_82229878;
loc_8222986C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8240c098
	ctx.lr = 0x82229878;
	sub_8240C098(ctx, base);
loc_82229878:
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

__attribute__((alias("__imp__sub_82229890"))) PPC_WEAK_FUNC(sub_82229890);
PPC_FUNC_IMPL(__imp__sub_82229890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82229898;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x822298E0;
	sub_8259D2A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r25,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r25.u8);
	// addi r4,r11,13468
	ctx.r4.s64 = ctx.r11.s64 + 13468;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x8259d2a0
	ctx.lr = 0x822298F8;
	sub_8259D2A0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x8259d2a0
	ctx.lr = 0x82229908;
	sub_8259D2A0(ctx, base);
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// beq cr6,0x82229928
	if (ctx.cr6.eq) goto loc_82229928;
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stw r5,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r5.u32);
loc_82229928:
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// bl 0x8259cce0
	ctx.lr = 0x82229948;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229978
	if (!ctx.cr6.eq) goto loc_82229978;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x8240c250
	ctx.lr = 0x82229970;
	sub_8240C250(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82229978:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82229988;
	sub_8259D2A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// bl 0x8240bfd8
	ctx.lr = 0x82229998;
	sub_8240BFD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822299A0"))) PPC_WEAK_FUNC(sub_822299A0);
PPC_FUNC_IMPL(__imp__sub_822299A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822299A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x822299D8;
	sub_8259D2A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// bl 0x8259cce0
	ctx.lr = 0x822299FC;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229a14
	if (!ctx.cr6.eq) goto loc_82229A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822233b0
	ctx.lr = 0x82229A0C;
	sub_822233B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82229A14:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82229A24;
	sub_8259D2A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// bl 0x8240bfd8
	ctx.lr = 0x82229A34;
	sub_8240BFD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229A3C"))) PPC_WEAK_FUNC(sub_82229A3C);
PPC_FUNC_IMPL(__imp__sub_82229A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A40"))) PPC_WEAK_FUNC(sub_82229A40);
PPC_FUNC_IMPL(__imp__sub_82229A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82229A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x82229A74;
	sub_8259D2A0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8259d2a0
	ctx.lr = 0x82229A84;
	sub_8259D2A0(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259cce0
	ctx.lr = 0x82229A94;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229aac
	if (!ctx.cr6.eq) goto loc_82229AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223680
	ctx.lr = 0x82229AA4;
	sub_82223680(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82229AAC:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82229ABC;
	sub_8259D2A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x8240bfd8
	ctx.lr = 0x82229AD0;
	sub_8240BFD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229AD8"))) PPC_WEAK_FUNC(sub_82229AD8);
PPC_FUNC_IMPL(__imp__sub_82229AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82229AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x82229AF4;
	sub_8212E9B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82229b30
	if (!ctx.cr6.lt) goto loc_82229B30;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// bl 0x8259dd00
	ctx.lr = 0x82229B30;
	sub_8259DD00(ctx, base);
loc_82229B30:
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 + ctx.r8.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82229B50:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82229b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229B50;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229B80"))) PPC_WEAK_FUNC(sub_82229B80);
PPC_FUNC_IMPL(__imp__sub_82229B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82229B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r7,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r7.u8);
	// bne cr6,0x82229c34
	if (!ctx.cr6.eq) goto loc_82229C34;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82229BC8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82229bc8
	if (!ctx.cr6.eq) goto loc_82229BC8;
	// bl 0x825892d0
	ctx.lr = 0x82229BE4;
	sub_825892D0(ctx, base);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82229c1c
	if (ctx.cr6.eq) goto loc_82229C1C;
	// lbz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82229c1c
	if (ctx.cr6.eq) goto loc_82229C1C;
	// bl 0x82589630
	ctx.lr = 0x82229C08;
	sub_82589630(ctx, base);
	// rlwinm r8,r3,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82229c18
	if (ctx.cr6.eq) goto loc_82229C18;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82229C18:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
loc_82229C1C:
	// lis r4,28783
	ctx.r4.s64 = 1886322688;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r30,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r30.u8);
	// ori r4,r4,29300
	ctx.r4.u64 = ctx.r4.u64 | 29300;
	// bl 0x82589708
	ctx.lr = 0x82229C34;
	sub_82589708(ctx, base);
loc_82229C34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229C40"))) PPC_WEAK_FUNC(sub_82229C40);
PPC_FUNC_IMPL(__imp__sub_82229C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82229C48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82229e6c
	if (!ctx.cr6.eq) goto loc_82229E6C;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229cfc
	if (ctx.cr6.eq) goto loc_82229CFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229e6c
	if (ctx.cr6.eq) goto loc_82229E6C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82229cc0
	if (!ctx.cr6.gt) goto loc_82229CC0;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_82229CA0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82229ce4
	if (ctx.cr6.eq) goto loc_82229CE4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82229ca0
	if (ctx.cr6.lt) goto loc_82229CA0;
loc_82229CC0:
	// lis r4,28783
	ctx.r4.s64 = 1886322688;
	// ori r4,r4,29300
	ctx.r4.u64 = ctx.r4.u64 | 29300;
	// bl 0x82589708
	ctx.lr = 0x82229CCC;
	sub_82589708(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// b 0x82229db0
	goto loc_82229DB0;
loc_82229CE4:
	// lis r4,28783
	ctx.r4.s64 = 1886322688;
	// ori r4,r4,29300
	ctx.r4.u64 = ctx.r4.u64 | 29300;
	// bl 0x82589708
	ctx.lr = 0x82229CF0;
	sub_82589708(ctx, base);
loc_82229CF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82229CFC:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82229d34
	if (!ctx.cr6.gt) goto loc_82229D34;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_82229D14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82229cf0
	if (ctx.cr6.eq) goto loc_82229CF0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82229d14
	if (ctx.cr6.lt) goto loc_82229D14;
loc_82229D34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229db0
	if (ctx.cr6.eq) goto loc_82229DB0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82229db0
	if (!ctx.cr6.gt) goto loc_82229DB0;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82229D50:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82229d8c
	if (ctx.cr6.eq) goto loc_82229D8C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r7,72
	ctx.r11.s64 = ctx.r7.s64 + 72;
loc_82229D60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x82229d84
	if (ctx.cr6.eq) goto loc_82229D84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82229d60
	if (ctx.cr6.eq) goto loc_82229D60;
loc_82229D84:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82229da0
	if (ctx.cr6.eq) goto loc_82229DA0;
loc_82229D8C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,176
	ctx.r7.s64 = ctx.r7.s64 + 176;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82229d50
	if (ctx.cr6.lt) goto loc_82229D50;
	// b 0x82229db0
	goto loc_82229DB0;
loc_82229DA0:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// lwz r10,168(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
loc_82229DB0:
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r29,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mulli r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 * 28;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82229DD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82229dd4
	if (!ctx.cr6.eq) goto loc_82229DD4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r26,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r26.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,45(r9)
	PPC_STORE_U8(ctx.r9.u32 + 45, ctx.r28.u8);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,46(r7)
	PPC_STORE_U8(ctx.r7.u32 + 46, ctx.r28.u8);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,47(r5)
	PPC_STORE_U8(ctx.r5.u32 + 47, ctx.r28.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// bl 0x821ee528
	ctx.lr = 0x82229E40;
	sub_821EE528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ee808
	ctx.lr = 0x82229E50;
	sub_823EE808(ctx, base);
	// lbz r3,197(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82229e68
	if (ctx.cr6.eq) goto loc_82229E68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82229E68:
	// bl 0x823ee808
	ctx.lr = 0x82229E6C;
	sub_823EE808(ctx, base);
loc_82229E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229E78"))) PPC_WEAK_FUNC(sub_82229E78);
PPC_FUNC_IMPL(__imp__sub_82229E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82229E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82229ecc
	if (!ctx.cr6.eq) goto loc_82229ECC;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82229ecc
	if (!ctx.cr6.gt) goto loc_82229ECC;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
loc_82229EAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82229ed8
	if (ctx.cr6.eq) goto loc_82229ED8;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82229eac
	if (ctx.cr6.lt) goto loc_82229EAC;
loc_82229ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82229ED8:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82229ef8
	if (!ctx.cr6.eq) goto loc_82229EF8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82589578
	ctx.lr = 0x82229EF8;
	sub_82589578(ctx, base);
loc_82229EF8:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// stb r28,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r28.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r28,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r28.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82229f5c
	if (!ctx.cr6.lt) goto loc_82229F5C;
loc_82229F20:
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82229F30:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82229f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229F30;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82229f20
	if (ctx.cr6.lt) goto loc_82229F20;
loc_82229F5C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bl 0x821ee528
	ctx.lr = 0x82229F70;
	sub_821EE528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ee808
	ctx.lr = 0x82229F80;
	sub_823EE808(ctx, base);
	// lbz r10,197(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 197);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229f98
	if (ctx.cr6.eq) goto loc_82229F98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82229F98:
	// bl 0x823ee808
	ctx.lr = 0x82229F9C;
	sub_823EE808(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229FA8"))) PPC_WEAK_FUNC(sub_82229FA8);
PPC_FUNC_IMPL(__imp__sub_82229FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82229FB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r30,2896
	ctx.r28.s64 = ctx.r30.s64 + 2896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82229ff4
	if (ctx.cr6.eq) goto loc_82229FF4;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82229FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82229FF4:
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_82229FF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236c228
	ctx.lr = 0x8222A000;
	sub_8236C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8212bb98
	ctx.lr = 0x8222A008;
	sub_8212BB98(ctx, base);
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82229ff8
	if (ctx.cr6.eq) goto loc_82229FF8;
	// addi r31,r30,8424
	ctx.r31.s64 = ctx.r30.s64 + 8424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8222A02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222A054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8222a070
	if (!ctx.cr6.eq) goto loc_8222A070;
	// addi r3,r30,2672
	ctx.r3.s64 = ctx.r30.s64 + 2672;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222A070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A070:
	// addi r29,r30,2472
	ctx.r29.s64 = ctx.r30.s64 + 2472;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x825892e0
	ctx.lr = 0x8222A084;
	sub_825892E0(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r3,r3,26472
	ctx.r3.s64 = ctx.r3.s64 + 26472;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8222A0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// bl 0x821e90b0
	ctx.lr = 0x8222A0AC;
	sub_821E90B0(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// ori r11,r3,26708
	ctx.r11.u64 = ctx.r3.u64 | 26708;
	// addi r29,r29,25864
	ctx.r29.s64 = ctx.r29.s64 + 25864;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a0d0
	if (ctx.cr6.eq) goto loc_8222A0D0;
	// bl 0x8240bf40
	ctx.lr = 0x8222A0D0;
	sub_8240BF40(ctx, base);
loc_8222A0D0:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// stw r31,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r31.u32);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// stw r31,12844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12844, ctx.r31.u32);
	// addi r10,r10,24760
	ctx.r10.s64 = ctx.r10.s64 + 24760;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222a11c
	if (!ctx.cr6.eq) goto loc_8222A11C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8210d230
	ctx.lr = 0x8222A11C;
	sub_8210D230(ctx, base);
loc_8222A11C:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222A134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222a158
	if (ctx.cr6.eq) goto loc_8222A158;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222A158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A158:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222A16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8222a184
	if (!ctx.cr6.eq) goto loc_8222A184;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r6,r7,15716
	ctx.r6.u64 = ctx.r7.u64 | 15716;
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
loc_8222A184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}


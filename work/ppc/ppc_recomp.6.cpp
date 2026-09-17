#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820FA120"))) PPC_WEAK_FUNC(sub_820FA120);
PPC_FUNC_IMPL(__imp__sub_820FA120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x823247b0
	sub_823247B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA134"))) PPC_WEAK_FUNC(sub_820FA134);
PPC_FUNC_IMPL(__imp__sub_820FA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA138"))) PPC_WEAK_FUNC(sub_820FA138);
PPC_FUNC_IMPL(__imp__sub_820FA138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x82336990
	sub_82336990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA14C"))) PPC_WEAK_FUNC(sub_820FA14C);
PPC_FUNC_IMPL(__imp__sub_820FA14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA150"))) PPC_WEAK_FUNC(sub_820FA150);
PPC_FUNC_IMPL(__imp__sub_820FA150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x823368a8
	sub_823368A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA174"))) PPC_WEAK_FUNC(sub_820FA174);
PPC_FUNC_IMPL(__imp__sub_820FA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA178"))) PPC_WEAK_FUNC(sub_820FA178);
PPC_FUNC_IMPL(__imp__sub_820FA178) {
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
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82347860
	ctx.lr = 0x820FA19C;
	sub_82347860(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x8210d230
	ctx.lr = 0x820FA1B0;
	sub_8210D230(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820FA1D0"))) PPC_WEAK_FUNC(sub_820FA1D0);
PPC_FUNC_IMPL(__imp__sub_820FA1D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x823478f0
	sub_823478F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA1D8"))) PPC_WEAK_FUNC(sub_820FA1D8);
PPC_FUNC_IMPL(__imp__sub_820FA1D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x823478e8
	sub_823478E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA1E0"))) PPC_WEAK_FUNC(sub_820FA1E0);
PPC_FUNC_IMPL(__imp__sub_820FA1E0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 * 584;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820fa240
	if (ctx.cr6.lt) goto loc_820FA240;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bgt cr6,0x820fa240
	if (ctx.cr6.gt) goto loc_820FA240;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820fa238
	if (!ctx.cr6.gt) goto loc_820FA238;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82103ed8
	ctx.lr = 0x820FA22C;
	sub_82103ED8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fa240
	if (ctx.cr6.eq) goto loc_820FA240;
loc_820FA238:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
loc_820FA240:
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

__attribute__((alias("__imp__sub_820FA254"))) PPC_WEAK_FUNC(sub_820FA254);
PPC_FUNC_IMPL(__imp__sub_820FA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA258"))) PPC_WEAK_FUNC(sub_820FA258);
PPC_FUNC_IMPL(__imp__sub_820FA258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820FA260;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 * 584;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820fa2cc
	if (!ctx.cr6.eq) goto loc_820FA2CC;
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
	// ble cr6,0x820fa368
	if (!ctx.cr6.gt) goto loc_820FA368;
	// li r28,1
	ctx.r28.s64 = 1;
loc_820FA29C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x820FA2A8;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fa2b4
	if (ctx.cr6.eq) goto loc_820FA2B4;
	// stb r28,23048(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23048, ctx.r28.u8);
loc_820FA2B4:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fa29c
	if (ctx.cr6.lt) goto loc_820FA29C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820FA2CC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bne cr6,0x820fa320
	if (!ctx.cr6.eq) goto loc_820FA320;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fa368
	if (!ctx.cr6.gt) goto loc_820FA368;
loc_820FA2F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x820FA2FC;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fa308
	if (ctx.cr6.eq) goto loc_820FA308;
	// stb r27,23048(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23048, ctx.r27.u8);
loc_820FA308:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fa2f0
	if (ctx.cr6.lt) goto loc_820FA2F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820FA320:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fa368
	if (!ctx.cr6.gt) goto loc_820FA368;
	// li r28,1
	ctx.r28.s64 = 1;
loc_820FA32C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x820FA338;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fa358
	if (ctx.cr6.eq) goto loc_820FA358;
	// lwz r10,304(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820fa354
	if (!ctx.cr6.eq) goto loc_820FA354;
	// stb r28,23048(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23048, ctx.r28.u8);
	// b 0x820fa358
	goto loc_820FA358;
loc_820FA354:
	// stb r27,23048(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23048, ctx.r27.u8);
loc_820FA358:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fa32c
	if (ctx.cr6.lt) goto loc_820FA32C;
loc_820FA368:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA370"))) PPC_WEAK_FUNC(sub_820FA370);
PPC_FUNC_IMPL(__imp__sub_820FA370) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r6,584
	ctx.r11.s64 = ctx.r6.s64 * 584;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// beq cr6,0x820fa390
	if (ctx.cr6.eq) goto loc_820FA390;
loc_820FA388:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FA390:
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// ori r8,r9,51969
	ctx.r8.u64 = ctx.r9.u64 | 51969;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fa3b4
	if (ctx.cr6.eq) goto loc_820FA3B4;
	// lwz r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// b 0x820fa3c8
	goto loc_820FA3C8;
loc_820FA3B4:
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r8,300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_820FA3C8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x820fa400
	if (!ctx.cr6.gt) goto loc_820FA400;
	// mulli r10,r6,328
	ctx.r10.s64 = ctx.r6.s64 * 328;
	// lwz r8,324(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r10,10664
	ctx.r11.s64 = ctx.r10.s64 + 10664;
loc_820FA3E4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x820fa388
	if (ctx.cr6.gt) goto loc_820FA388;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,5956
	ctx.r11.s64 = ctx.r11.s64 + 5956;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820fa3e4
	if (ctx.cr6.lt) goto loc_820FA3E4;
loc_820FA400:
	// mulli r11,r6,328
	ctx.r11.s64 = ctx.r6.s64 * 328;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,10668(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10668);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA420"))) PPC_WEAK_FUNC(sub_820FA420);
PPC_FUNC_IMPL(__imp__sub_820FA420) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 * 584;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r30,r11,577
	ctx.r30.s64 = ctx.r11.s64 + 577;
	// addi r5,r11,308
	ctx.r5.s64 = ctx.r11.s64 + 308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820b76c0
	ctx.lr = 0x820FA45C;
	sub_820B76C0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// addi r11,r11,-19272
	ctx.r11.s64 = ctx.r11.s64 + -19272;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r3,r10,15896
	ctx.r3.s64 = ctx.r10.s64 + 15896;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r6,r10,10
	ctx.r6.s64 = ctx.r10.s64 + 10;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bl 0x821e9900
	ctx.lr = 0x820FA494;
	sub_821E9900(ctx, base);
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

__attribute__((alias("__imp__sub_820FA4AC"))) PPC_WEAK_FUNC(sub_820FA4AC);
PPC_FUNC_IMPL(__imp__sub_820FA4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA4B0"))) PPC_WEAK_FUNC(sub_820FA4B0);
PPC_FUNC_IMPL(__imp__sub_820FA4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x820fa4c4
	if (!ctx.cr6.eq) goto loc_820FA4C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FA4C4:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x820fa4d8
	if (!ctx.cr6.gt) goto loc_820FA4D8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// b 0x820fa4ec
	goto loc_820FA4EC;
loc_820FA4D8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r9,r11,-31896
	ctx.r9.s64 = ctx.r11.s64 + -31896;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
loc_820FA4EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820fa4f8
	if (ctx.cr6.eq) goto loc_820FA4F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FA4F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA500"))) PPC_WEAK_FUNC(sub_820FA500);
PPC_FUNC_IMPL(__imp__sub_820FA500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x820fa558
	if (!ctx.cr6.gt) goto loc_820FA558;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x820fa530
	if (!ctx.cr6.eq) goto loc_820FA530;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
loc_820FA530:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820fa540
	if (ctx.cr6.eq) goto loc_820FA540;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FA540:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
loc_820FA558:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA560"))) PPC_WEAK_FUNC(sub_820FA560);
PPC_FUNC_IMPL(__imp__sub_820FA560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mulli r11,r4,328
	ctx.r11.s64 = ctx.r4.s64 * 328;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r10.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r10,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r10.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// stw r10,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// stw r9,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stb r9,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r9.u8);
	// stb r9,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r9.u8);
	// stb r9,113(r11)
	PPC_STORE_U8(ctx.r11.u32 + 113, ctx.r9.u8);
	// stb r9,114(r11)
	PPC_STORE_U8(ctx.r11.u32 + 114, ctx.r9.u8);
	// stb r9,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r9.u8);
	// addi r9,r11,332
	ctx.r9.s64 = ctx.r11.s64 + 332;
	// lwz r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r7,-44(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r6,-40(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r5,-36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// lwz r8,-20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r7,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r7.u32);
	// stw r6,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r6.u32);
	// stw r5,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r5.u32);
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r3,-28(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r5,-8(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r8.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
	// stw r3,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r3.u32);
	// stw r7,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r7.u32);
	// stw r6,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r6.u32);
	// stw r5,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r5.u32);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// stw r10,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stb r10,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
loc_820FA6A8:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,-48(r9)
	PPC_STORE_U32(ctx.r9.u32 + -48, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fa6a8
	if (!ctx.cr6.eq) goto loc_820FA6A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA6C4"))) PPC_WEAK_FUNC(sub_820FA6C4);
PPC_FUNC_IMPL(__imp__sub_820FA6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA6C8"))) PPC_WEAK_FUNC(sub_820FA6C8);
PPC_FUNC_IMPL(__imp__sub_820FA6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820FA6D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,140
	ctx.r28.s64 = ctx.r31.s64 + 140;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// sth r30,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r30.u16);
	// sth r30,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r30.u16);
loc_820FA718:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// bl 0x820fa560
	ctx.lr = 0x820FA72C;
	sub_820FA560(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,328
	ctx.r28.s64 = ctx.r28.s64 + 328;
	// cmpwi cr6,r29,18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 18, ctx.xer);
	// blt cr6,0x820fa718
	if (ctx.cr6.lt) goto loc_820FA718;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FA744"))) PPC_WEAK_FUNC(sub_820FA744);
PPC_FUNC_IMPL(__imp__sub_820FA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA748"))) PPC_WEAK_FUNC(sub_820FA748);
PPC_FUNC_IMPL(__imp__sub_820FA748) {
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
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x820fa560
	ctx.lr = 0x820FA768;
	sub_820FA560(ctx, base);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// sth r9,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
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

__attribute__((alias("__imp__sub_820FA788"))) PPC_WEAK_FUNC(sub_820FA788);
PPC_FUNC_IMPL(__imp__sub_820FA788) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r7,r11,7088
	ctx.r7.s64 = ctx.r11.s64 + 7088;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820fa7d4
	if (!ctx.cr6.eq) goto loc_820FA7D4;
	// lhz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,328
	ctx.r11.s64 = ctx.r5.s64 * 328;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_820FA7D4:
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
loc_820FA7F8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fa810
	if (ctx.cr6.eq) goto loc_820FA810;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
loc_820FA810:
	// lhz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,328
	ctx.r10.s64 = ctx.r10.s64 + 328;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x820fa7f8
	if (!ctx.cr6.gt) goto loc_820FA7F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA82C"))) PPC_WEAK_FUNC(sub_820FA82C);
PPC_FUNC_IMPL(__imp__sub_820FA82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA830"))) PPC_WEAK_FUNC(sub_820FA830);
PPC_FUNC_IMPL(__imp__sub_820FA830) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820fa788
	ctx.lr = 0x820FA848;
	sub_820FA788(ctx, base);
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820fa908
	if (!ctx.cr6.eq) goto loc_820FA908;
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820fa878
	if (ctx.cr6.eq) goto loc_820FA878;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
loc_820FA878:
	// lbz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fa890
	if (ctx.cr6.eq) goto loc_820FA890;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
loc_820FA890:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820fa8b0
	if (ctx.cr6.eq) goto loc_820FA8B0;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
loc_820FA8B0:
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820fa8c8
	if (ctx.cr6.eq) goto loc_820FA8C8;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
loc_820FA8C8:
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820fa8e0
	if (ctx.cr6.eq) goto loc_820FA8E0;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
loc_820FA8E0:
	// lbz r5,113(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// lhz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lhz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r9.u16);
	// lbz r7,114(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 114);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r6,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r6.u16);
loc_820FA908:
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

__attribute__((alias("__imp__sub_820FA91C"))) PPC_WEAK_FUNC(sub_820FA91C);
PPC_FUNC_IMPL(__imp__sub_820FA91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA920"))) PPC_WEAK_FUNC(sub_820FA920);
PPC_FUNC_IMPL(__imp__sub_820FA920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,46284
	ctx.r10.u64 = ctx.r11.u64 | 46284;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// ori r8,r9,46280
	ctx.r8.u64 = ctx.r9.u64 | 46280;
	// ori r5,r6,46288
	ctx.r5.u64 = ctx.r6.u64 | 46288;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stbx r4,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u8);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA958"))) PPC_WEAK_FUNC(sub_820FA958);
PPC_FUNC_IMPL(__imp__sub_820FA958) {
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
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x820FA970;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa994
	if (ctx.cr6.eq) goto loc_820FA994;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lbz r10,643(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 643);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fa998
	if (!ctx.cr6.eq) goto loc_820FA998;
loc_820FA994:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FA998:
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

__attribute__((alias("__imp__sub_820FA9AC"))) PPC_WEAK_FUNC(sub_820FA9AC);
PPC_FUNC_IMPL(__imp__sub_820FA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA9B0"))) PPC_WEAK_FUNC(sub_820FA9B0);
PPC_FUNC_IMPL(__imp__sub_820FA9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,46284
	ctx.r10.u64 = ctx.r11.u64 | 46284;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820fa9e0
	if (ctx.cr6.lt) goto loc_820FA9E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_820FA9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA9E8"))) PPC_WEAK_FUNC(sub_820FA9E8);
PPC_FUNC_IMPL(__imp__sub_820FA9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,46284
	ctx.r10.u64 = ctx.r11.u64 | 46284;
	// ori r8,r9,46280
	ctx.r8.u64 = ctx.r9.u64 | 46280;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820faa24
	if (!ctx.cr6.eq) goto loc_820FAA24;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820FAA24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAA2C"))) PPC_WEAK_FUNC(sub_820FAA2C);
PPC_FUNC_IMPL(__imp__sub_820FAA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FAA30"))) PPC_WEAK_FUNC(sub_820FAA30);
PPC_FUNC_IMPL(__imp__sub_820FAA30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,46284
	ctx.r9.u64 = ctx.r10.u64 | 46284;
	// mulli r10,r4,5956
	ctx.r10.s64 = ctx.r4.s64 * 5956;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r8,r11,10548
	ctx.r8.s64 = ctx.r11.s64 + 10548;
loc_820FAA5C:
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820faa84
	if (ctx.cr6.eq) goto loc_820FAA84;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,10548(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10548);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820faa80
	if (ctx.cr6.gt) goto loc_820FAA80;
	// bne cr6,0x820faa84
	if (!ctx.cr6.eq) goto loc_820FAA84;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x820faa84
	if (!ctx.cr6.lt) goto loc_820FAA84;
loc_820FAA80:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FAA84:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,5956
	ctx.r8.s64 = ctx.r8.s64 + 5956;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820faa5c
	if (ctx.cr6.lt) goto loc_820FAA5C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAA98"))) PPC_WEAK_FUNC(sub_820FAA98);
PPC_FUNC_IMPL(__imp__sub_820FAA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r10,r11,46280
	ctx.r10.u64 = ctx.r11.u64 | 46280;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,46284
	ctx.r8.u64 = ctx.r9.u64 | 46284;
	// ori r6,r7,46288
	ctx.r6.u64 = ctx.r7.u64 | 46288;
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// stbx r11,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAAC4"))) PPC_WEAK_FUNC(sub_820FAAC4);
PPC_FUNC_IMPL(__imp__sub_820FAAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FAAC8"))) PPC_WEAK_FUNC(sub_820FAAC8);
PPC_FUNC_IMPL(__imp__sub_820FAAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820FAAD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// addi r28,r28,-19256
	ctx.r28.s64 = ctx.r28.s64 + -19256;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r27,-19252
	ctx.r27.s64 = ctx.r27.s64 + -19252;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_820FAAF8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fab0c
	if (ctx.cr6.lt) goto loc_820FAB0C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820FAB0C:
	// addis r11,r29,33
	ctx.r11.s64 = ctx.r29.s64 + 2162688;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76c0
	ctx.lr = 0x820FAB20;
	sub_820B76C0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r11,r31,5956
	ctx.r11.s64 = ctx.r31.s64 * 5956;
	// mulli r10,r10,328
	ctx.r10.s64 = ctx.r10.s64 * 328;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,10641(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10641);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bge cr6,0x820fab58
	if (!ctx.cr6.lt) goto loc_820FAB58;
	// lwz r7,10636(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10636);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820fab5c
	if (ctx.cr6.lt) goto loc_820FAB5C;
loc_820FAB58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FAB5C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fab80
	if (ctx.cr6.eq) goto loc_820FAB80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820faaf8
	if (!ctx.cr6.eq) goto loc_820FAAF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820FAB80:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FAB90"))) PPC_WEAK_FUNC(sub_820FAB90);
PPC_FUNC_IMPL(__imp__sub_820FAB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820FAB98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// addi r27,r27,-19252
	ctx.r27.s64 = ctx.r27.s64 + -19252;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fac30
	if (!ctx.cr6.gt) goto loc_820FAC30;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
loc_820FABC4:
	// addis r11,r29,33
	ctx.r11.s64 = ctx.r29.s64 + 2162688;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76c0
	ctx.lr = 0x820FABD8;
	sub_820B76C0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r11,r10,328
	ctx.r11.s64 = ctx.r10.s64 * 328;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,10641(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10641);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bge cr6,0x820fac0c
	if (!ctx.cr6.lt) goto loc_820FAC0C;
	// lwz r7,10636(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10636);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820fac10
	if (ctx.cr6.lt) goto loc_820FAC10;
loc_820FAC0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FAC10:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fac3c
	if (ctx.cr6.eq) goto loc_820FAC3C;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,5956
	ctx.r31.s64 = ctx.r31.s64 + 5956;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820fabc4
	if (ctx.cr6.lt) goto loc_820FABC4;
loc_820FAC30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820FAC3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FAC48"))) PPC_WEAK_FUNC(sub_820FAC48);
PPC_FUNC_IMPL(__imp__sub_820FAC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,46288
	ctx.r10.u64 = ctx.r11.u64 | 46288;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fac74
	if (!ctx.cr6.eq) goto loc_820FAC74;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,46296
	ctx.r7.u64 = ctx.r8.u64 | 46296;
	// lbzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820fac78
	if (ctx.cr6.eq) goto loc_820FAC78;
loc_820FAC74:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FAC78:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAC80"))) PPC_WEAK_FUNC(sub_820FAC80);
PPC_FUNC_IMPL(__imp__sub_820FAC80) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820faac8
	ctx.lr = 0x820FAC9C;
	sub_820FAAC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820facc0
	if (!ctx.cr6.eq) goto loc_820FACC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820facc4
	if (ctx.cr6.eq) goto loc_820FACC4;
loc_820FACC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FACC4:
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

__attribute__((alias("__imp__sub_820FACD8"))) PPC_WEAK_FUNC(sub_820FACD8);
PPC_FUNC_IMPL(__imp__sub_820FACD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,46284
	ctx.r9.u64 = ctx.r10.u64 | 46284;
	// mulli r10,r4,5956
	ctx.r10.s64 = ctx.r4.s64 * 5956;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r8,r11,10576
	ctx.r8.s64 = ctx.r11.s64 + 10576;
loc_820FAD04:
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820fad34
	if (ctx.cr6.eq) goto loc_820FAD34;
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,10576(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10576);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820fad30
	if (ctx.cr6.lt) goto loc_820FAD30;
	// bne cr6,0x820fad34
	if (!ctx.cr6.eq) goto loc_820FAD34;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x820fad34
	if (!ctx.cr6.lt) goto loc_820FAD34;
loc_820FAD30:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FAD34:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,5956
	ctx.r8.s64 = ctx.r8.s64 + 5956;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820fad04
	if (ctx.cr6.lt) goto loc_820FAD04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAD48"))) PPC_WEAK_FUNC(sub_820FAD48);
PPC_FUNC_IMPL(__imp__sub_820FAD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// stb r10,1024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1024, ctx.r10.u8);
	// stb r10,1025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1025, ctx.r10.u8);
	// stb r10,1026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1026, ctx.r10.u8);
	// stb r10,1241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1241, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAD68"))) PPC_WEAK_FUNC(sub_820FAD68);
PPC_FUNC_IMPL(__imp__sub_820FAD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// stb r10,1024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1024, ctx.r10.u8);
	// stb r10,1025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1025, ctx.r10.u8);
	// stb r10,1026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1026, ctx.r10.u8);
	// stb r10,1241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1241, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAD88"))) PPC_WEAK_FUNC(sub_820FAD88);
PPC_FUNC_IMPL(__imp__sub_820FAD88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,99
	ctx.r11.s64 = ctx.r4.s64 + 99;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAD98"))) PPC_WEAK_FUNC(sub_820FAD98);
PPC_FUNC_IMPL(__imp__sub_820FAD98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,449
	ctx.r10.s64 = ctx.r11.s64 + 449;
	// li r9,55
	ctx.r9.s64 = 55;
loc_820FADA8:
	// lbz r11,-1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fadc8
	if (ctx.cr6.eq) goto loc_820FADC8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fadc8
	if (ctx.cr6.eq) goto loc_820FADC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820fadcc
	if (!ctx.cr6.eq) goto loc_820FADCC;
loc_820FADC8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FADCC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fadec
	if (ctx.cr6.eq) goto loc_820FADEC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fadec
	if (ctx.cr6.eq) goto loc_820FADEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820fadf0
	if (!ctx.cr6.eq) goto loc_820FADF0;
loc_820FADEC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FADF0:
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fae10
	if (ctx.cr6.eq) goto loc_820FAE10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fae10
	if (ctx.cr6.eq) goto loc_820FAE10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820fae14
	if (!ctx.cr6.eq) goto loc_820FAE14;
loc_820FAE10:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FAE14:
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fae34
	if (ctx.cr6.eq) goto loc_820FAE34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fae34
	if (ctx.cr6.eq) goto loc_820FAE34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820fae38
	if (!ctx.cr6.eq) goto loc_820FAE38;
loc_820FAE34:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FAE38:
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fae58
	if (ctx.cr6.eq) goto loc_820FAE58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fae58
	if (ctx.cr6.eq) goto loc_820FAE58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820fae5c
	if (!ctx.cr6.eq) goto loc_820FAE5C;
loc_820FAE58:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FAE5C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fada8
	if (!ctx.cr6.eq) goto loc_820FADA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAE70"))) PPC_WEAK_FUNC(sub_820FAE70);
PPC_FUNC_IMPL(__imp__sub_820FAE70) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,449
	ctx.r11.s64 = ctx.r3.s64 + 449;
	// li r9,55
	ctx.r9.s64 = 55;
loc_820FAE7C:
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x820fae8c
	if (!ctx.cr6.eq) goto loc_820FAE8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820FAE8C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x820fae9c
	if (!ctx.cr6.eq) goto loc_820FAE9C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820FAE9C:
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x820faeac
	if (!ctx.cr6.eq) goto loc_820FAEAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820FAEAC:
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x820faebc
	if (!ctx.cr6.eq) goto loc_820FAEBC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820FAEBC:
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x820faecc
	if (!ctx.cr6.eq) goto loc_820FAECC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820FAECC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fae7c
	if (!ctx.cr6.eq) goto loc_820FAE7C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAEE4"))) PPC_WEAK_FUNC(sub_820FAEE4);
PPC_FUNC_IMPL(__imp__sub_820FAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FAEE8"))) PPC_WEAK_FUNC(sub_820FAEE8);
PPC_FUNC_IMPL(__imp__sub_820FAEE8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x820faefc
	if (ctx.cr6.eq) goto loc_820FAEFC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820FAEFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAF04"))) PPC_WEAK_FUNC(sub_820FAF04);
PPC_FUNC_IMPL(__imp__sub_820FAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FAF08"))) PPC_WEAK_FUNC(sub_820FAF08);
PPC_FUNC_IMPL(__imp__sub_820FAF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820faf80
	if (ctx.cr6.eq) goto loc_820FAF80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_820FAF30:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820faf70
	if (ctx.cr6.eq) goto loc_820FAF70;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_820FAF44:
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820faf60
	if (!ctx.cr6.eq) goto loc_820FAF60;
	// ld r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// cmpld cr6,r6,r4
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r4.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820FAF60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820faf44
	if (ctx.cr6.lt) goto loc_820FAF44;
loc_820FAF70:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820faf30
	if (ctx.cr6.lt) goto loc_820FAF30;
loc_820FAF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAF88"))) PPC_WEAK_FUNC(sub_820FAF88);
PPC_FUNC_IMPL(__imp__sub_820FAF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820FAF90;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82347480
	ctx.lr = 0x820FAFA8;
	sub_82347480(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82347480
	ctx.lr = 0x820FAFB8;
	sub_82347480(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d2a0
	ctx.lr = 0x820FAFC8;
	sub_8259D2A0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lbz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// addi r23,r11,26080
	ctx.r23.s64 = ctx.r11.s64 + 26080;
	// lbz r8,123(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// ori r6,r7,12448
	ctx.r6.u64 = ctx.r7.u64 | 12448;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,95
	ctx.r26.s64 = 95;
	// stb r9,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r9.u8);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stb r8,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwzx r11,r23,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// stb r27,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r27.u8);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x820fb114
	if (!ctx.cr6.gt) goto loc_820FB114;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_820FB014:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x820fb100
	if (!ctx.cr6.gt) goto loc_820FB100;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_820FB030:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fb0e0
	if (!ctx.cr6.eq) goto loc_820FB0E0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820fb0e0
	if (!ctx.cr6.eq) goto loc_820FB0E0;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820fb0e0
	if (!ctx.cr6.eq) goto loc_820FB0E0;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x82347480
	ctx.lr = 0x820FB070;
	sub_82347480(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// bl 0x82347480
	ctx.lr = 0x820FB080;
	sub_82347480(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d2a0
	ctx.lr = 0x820FB090;
	sub_8259D2A0(ctx, base);
	// lbz r6,122(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r5,123(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r26.u8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r27,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r27.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// stb r5,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r5.u8);
loc_820FB0B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x820fb0d4
	if (ctx.cr6.eq) goto loc_820FB0D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820fb0b0
	if (ctx.cr6.eq) goto loc_820FB0B0;
loc_820FB0D4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820fb120
	if (ctx.cr6.eq) goto loc_820FB120;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_820FB0E0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x820fb030
	if (ctx.cr6.lt) goto loc_820FB030;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,12448
	ctx.r10.u64 = ctx.r11.u64 | 12448;
	// lwzx r11,r23,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
loc_820FB100:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fb014
	if (ctx.cr6.lt) goto loc_820FB014;
loc_820FB114:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_820FB120:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FB12C"))) PPC_WEAK_FUNC(sub_820FB12C);
PPC_FUNC_IMPL(__imp__sub_820FB12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB130"))) PPC_WEAK_FUNC(sub_820FB130);
PPC_FUNC_IMPL(__imp__sub_820FB130) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x820fb178
	if (ctx.cr6.lt) goto loc_820FB178;
	// bl 0x820f7920
	ctx.lr = 0x820FB158;
	sub_820F7920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fb178
	if (!ctx.cr6.eq) goto loc_820FB178;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f7978
	ctx.lr = 0x820FB170;
	sub_820F7978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820fb17c
	goto loc_820FB17C;
loc_820FB178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FB17C:
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

__attribute__((alias("__imp__sub_820FB194"))) PPC_WEAK_FUNC(sub_820FB194);
PPC_FUNC_IMPL(__imp__sub_820FB194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB198"))) PPC_WEAK_FUNC(sub_820FB198);
PPC_FUNC_IMPL(__imp__sub_820FB198) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1243(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1243, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB1A4"))) PPC_WEAK_FUNC(sub_820FB1A4);
PPC_FUNC_IMPL(__imp__sub_820FB1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB1A8"))) PPC_WEAK_FUNC(sub_820FB1A8);
PPC_FUNC_IMPL(__imp__sub_820FB1A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820fb1f4
	if (ctx.cr6.eq) goto loc_820FB1F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x820fb1c4
	if (!ctx.cr6.eq) goto loc_820FB1C4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// b 0x820fb1f0
	goto loc_820FB1F0;
loc_820FB1C4:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x820fb1d4
	if (!ctx.cr6.eq) goto loc_820FB1D4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// b 0x820fb1f0
	goto loc_820FB1F0;
loc_820FB1D4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x820fb1e4
	if (ctx.cr6.eq) goto loc_820FB1E4;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820FB1E4:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x820fb1f4
	if (ctx.cr6.eq) goto loc_820FB1F4;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
loc_820FB1F0:
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820FB1F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB1FC"))) PPC_WEAK_FUNC(sub_820FB1FC);
PPC_FUNC_IMPL(__imp__sub_820FB1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB200"))) PPC_WEAK_FUNC(sub_820FB200);
PPC_FUNC_IMPL(__imp__sub_820FB200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,28848
	ctx.r8.s64 = ctx.r11.s64 + 28848;
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
loc_820FB210:
	// lwz r9,1248(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4608(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4608);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fb22c
	if (!ctx.cr6.eq) goto loc_820FB22C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820FB22C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r6,r8,280
	ctx.r6.s64 = ctx.r8.s64 + 280;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820fb210
	if (ctx.cr6.lt) goto loc_820FB210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB248"))) PPC_WEAK_FUNC(sub_820FB248);
PPC_FUNC_IMPL(__imp__sub_820FB248) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,5116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5116);
	// lwz r11,5120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// lwz r9,5112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5108);
	// lwz r6,5104(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5104);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,5100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5100);
	// lwz r8,5096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,5092(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5092);
	// lwz r10,5088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5088);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB290"))) PPC_WEAK_FUNC(sub_820FB290);
PPC_FUNC_IMPL(__imp__sub_820FB290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,732
	ctx.r11.s64 = ctx.r4.s64 + 732;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820fb2b4
	if (ctx.cr6.lt) goto loc_820FB2B4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820FB2B4:
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,3136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3136, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB2C8"))) PPC_WEAK_FUNC(sub_820FB2C8);
PPC_FUNC_IMPL(__imp__sub_820FB2C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,797
	ctx.r11.s64 = ctx.r4.s64 + 797;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r10,403(r11)
	PPC_STORE_U8(ctx.r11.u32 + 403, ctx.r10.u8);
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stb r10,3396(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3396, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB2FC"))) PPC_WEAK_FUNC(sub_820FB2FC);
PPC_FUNC_IMPL(__imp__sub_820FB2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB300"))) PPC_WEAK_FUNC(sub_820FB300);
PPC_FUNC_IMPL(__imp__sub_820FB300) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,862
	ctx.r11.s64 = ctx.r4.s64 + 862;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r10,402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 402, ctx.r10.u8);
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stb r10,3880(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3880, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB334"))) PPC_WEAK_FUNC(sub_820FB334);
PPC_FUNC_IMPL(__imp__sub_820FB334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB338"))) PPC_WEAK_FUNC(sub_820FB338);
PPC_FUNC_IMPL(__imp__sub_820FB338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,997
	ctx.r11.s64 = ctx.r4.s64 + 997;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfsx f1,r11,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB354"))) PPC_WEAK_FUNC(sub_820FB354);
PPC_FUNC_IMPL(__imp__sub_820FB354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB358"))) PPC_WEAK_FUNC(sub_820FB358);
PPC_FUNC_IMPL(__imp__sub_820FB358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB368"))) PPC_WEAK_FUNC(sub_820FB368);
PPC_FUNC_IMPL(__imp__sub_820FB368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5092);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB378"))) PPC_WEAK_FUNC(sub_820FB378);
PPC_FUNC_IMPL(__imp__sub_820FB378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB388"))) PPC_WEAK_FUNC(sub_820FB388);
PPC_FUNC_IMPL(__imp__sub_820FB388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB398"))) PPC_WEAK_FUNC(sub_820FB398);
PPC_FUNC_IMPL(__imp__sub_820FB398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB3A8"))) PPC_WEAK_FUNC(sub_820FB3A8);
PPC_FUNC_IMPL(__imp__sub_820FB3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB3B8"))) PPC_WEAK_FUNC(sub_820FB3B8);
PPC_FUNC_IMPL(__imp__sub_820FB3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB3C8"))) PPC_WEAK_FUNC(sub_820FB3C8);
PPC_FUNC_IMPL(__imp__sub_820FB3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB3D8"))) PPC_WEAK_FUNC(sub_820FB3D8);
PPC_FUNC_IMPL(__imp__sub_820FB3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB3E8"))) PPC_WEAK_FUNC(sub_820FB3E8);
PPC_FUNC_IMPL(__imp__sub_820FB3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB3F8"))) PPC_WEAK_FUNC(sub_820FB3F8);
PPC_FUNC_IMPL(__imp__sub_820FB3F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB408"))) PPC_WEAK_FUNC(sub_820FB408);
PPC_FUNC_IMPL(__imp__sub_820FB408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB418"))) PPC_WEAK_FUNC(sub_820FB418);
PPC_FUNC_IMPL(__imp__sub_820FB418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB428"))) PPC_WEAK_FUNC(sub_820FB428);
PPC_FUNC_IMPL(__imp__sub_820FB428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB438"))) PPC_WEAK_FUNC(sub_820FB438);
PPC_FUNC_IMPL(__imp__sub_820FB438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB448"))) PPC_WEAK_FUNC(sub_820FB448);
PPC_FUNC_IMPL(__imp__sub_820FB448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB458"))) PPC_WEAK_FUNC(sub_820FB458);
PPC_FUNC_IMPL(__imp__sub_820FB458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB468"))) PPC_WEAK_FUNC(sub_820FB468);
PPC_FUNC_IMPL(__imp__sub_820FB468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5172);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,5172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB478"))) PPC_WEAK_FUNC(sub_820FB478);
PPC_FUNC_IMPL(__imp__sub_820FB478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,5176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB488"))) PPC_WEAK_FUNC(sub_820FB488);
PPC_FUNC_IMPL(__imp__sub_820FB488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,5180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB498"))) PPC_WEAK_FUNC(sub_820FB498);
PPC_FUNC_IMPL(__imp__sub_820FB498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,5184(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB4A8"))) PPC_WEAK_FUNC(sub_820FB4A8);
PPC_FUNC_IMPL(__imp__sub_820FB4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5188);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,5188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB4B8"))) PPC_WEAK_FUNC(sub_820FB4B8);
PPC_FUNC_IMPL(__imp__sub_820FB4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB4CC"))) PPC_WEAK_FUNC(sub_820FB4CC);
PPC_FUNC_IMPL(__imp__sub_820FB4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB4D0"))) PPC_WEAK_FUNC(sub_820FB4D0);
PPC_FUNC_IMPL(__imp__sub_820FB4D0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB4DC"))) PPC_WEAK_FUNC(sub_820FB4DC);
PPC_FUNC_IMPL(__imp__sub_820FB4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB4E0"))) PPC_WEAK_FUNC(sub_820FB4E0);
PPC_FUNC_IMPL(__imp__sub_820FB4E0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,3396(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3396);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB4EC"))) PPC_WEAK_FUNC(sub_820FB4EC);
PPC_FUNC_IMPL(__imp__sub_820FB4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB4F0"))) PPC_WEAK_FUNC(sub_820FB4F0);
PPC_FUNC_IMPL(__imp__sub_820FB4F0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,3880(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB4FC"))) PPC_WEAK_FUNC(sub_820FB4FC);
PPC_FUNC_IMPL(__imp__sub_820FB4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB500"))) PPC_WEAK_FUNC(sub_820FB500);
PPC_FUNC_IMPL(__imp__sub_820FB500) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,3396
	ctx.r11.s64 = ctx.r3.s64 + 3396;
	// li r10,52
	ctx.r10.s64 = 52;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820FB50C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r9,-260(r11)
	PPC_STORE_U8(ctx.r11.u32 + -260, ctx.r9.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fb50c
	if (!ctx.cr6.eq) goto loc_820FB50C;
	// addi r11,r3,3880
	ctx.r11.s64 = ctx.r3.s64 + 3880;
	// li r10,108
	ctx.r10.s64 = 108;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FB530:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x820fb530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB530;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB540"))) PPC_WEAK_FUNC(sub_820FB540);
PPC_FUNC_IMPL(__imp__sub_820FB540) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82360f10
	ctx.lr = 0x820FB55C;
	sub_82360F10(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x820FB568;
	sub_82364000(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,6924(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6924, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_820FB58C"))) PPC_WEAK_FUNC(sub_820FB58C);
PPC_FUNC_IMPL(__imp__sub_820FB58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB590"))) PPC_WEAK_FUNC(sub_820FB590);
PPC_FUNC_IMPL(__imp__sub_820FB590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB5A0"))) PPC_WEAK_FUNC(sub_820FB5A0);
PPC_FUNC_IMPL(__imp__sub_820FB5A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82361f88
	sub_82361F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FB5B0"))) PPC_WEAK_FUNC(sub_820FB5B0);
PPC_FUNC_IMPL(__imp__sub_820FB5B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820FB5B8;
	__savegprlr_27(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x820fb6c8
	if (!ctx.cr6.gt) goto loc_820FB6C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820FB5E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x820fb6b4
	if (!ctx.cr6.gt) goto loc_820FB6B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820FB604:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,64(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fb6a0
	if (!ctx.cr6.eq) goto loc_820FB6A0;
	// lwz r7,692(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fb670
	if (ctx.cr6.eq) goto loc_820FB670;
	// addi r10,r3,792
	ctx.r10.s64 = ctx.r3.s64 + 792;
loc_820FB634:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fb670
	if (!ctx.cr6.eq) goto loc_820FB670;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x820fb65c
	if (ctx.cr6.eq) goto loc_820FB65C;
	// ld r27,24(r6)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r6.u32 + 24);
	// cmpld cr6,r11,r27
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, ctx.xer);
	// bne cr6,0x820fb65c
	if (!ctx.cr6.eq) goto loc_820FB65C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_820FB65C:
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820fb634
	if (ctx.cr6.lt) goto loc_820FB634;
loc_820FB670:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fb6a0
	if (!ctx.cr6.eq) goto loc_820FB6A0;
	// cmplwi cr6,r7,275
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 275, ctx.xer);
	// bge cr6,0x820fb6a0
	if (!ctx.cr6.lt) goto loc_820FB6A0;
	// addi r9,r7,99
	ctx.r9.s64 = ctx.r7.s64 + 99;
	// ld r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 24);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r8,r7,r3
	PPC_STORE_U64(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u64);
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r6.u32);
loc_820FB6A0:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820fb604
	if (ctx.cr6.lt) goto loc_820FB604;
loc_820FB6B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820fb5e8
	if (ctx.cr6.lt) goto loc_820FB5E8;
loc_820FB6C8:
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FB6CC"))) PPC_WEAK_FUNC(sub_820FB6CC);
PPC_FUNC_IMPL(__imp__sub_820FB6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB6D0"))) PPC_WEAK_FUNC(sub_820FB6D0);
PPC_FUNC_IMPL(__imp__sub_820FB6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820fb6e8
	if (!ctx.cr6.lt) goto loc_820FB6E8;
loc_820FB6E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820FB6E8:
	// ble cr6,0x820fb6f4
	if (!ctx.cr6.gt) goto loc_820FB6F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FB6F4:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820fb6e0
	if (ctx.cr6.lt) goto loc_820FB6E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB714"))) PPC_WEAK_FUNC(sub_820FB714);
PPC_FUNC_IMPL(__imp__sub_820FB714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB718"))) PPC_WEAK_FUNC(sub_820FB718);
PPC_FUNC_IMPL(__imp__sub_820FB718) {
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fb7f4
	if (ctx.cr6.eq) goto loc_820FB7F4;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r30,r31,2896
	ctx.r30.s64 = ctx.r31.s64 + 2896;
	// li r8,36
	ctx.r8.s64 = 36;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x825aec58
	ctx.lr = 0x820FB778;
	sub_825AEC58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x820fb79c
	if (ctx.cr6.eq) goto loc_820FB79C;
	// li r5,1296
	ctx.r5.s64 = 1296;
	// addi r3,r31,1596
	ctx.r3.s64 = ctx.r31.s64 + 1596;
	// bl 0x8259d300
	ctx.lr = 0x820FB790;
	sub_8259D300(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r8.u32);
	// b 0x820fb7f4
	goto loc_820FB7F4;
loc_820FB79C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6092
	ctx.r6.s64 = ctx.r11.s64 + 6092;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825ae968
	ctx.lr = 0x820FB7B0;
	sub_825AE968(ctx, base);
	// addi r7,r31,2900
	ctx.r7.s64 = ctx.r31.s64 + 2900;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FB7C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820fb7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB7C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// stw r8,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r8.u32);
	// addi r4,r31,300
	ctx.r4.s64 = ctx.r31.s64 + 300;
	// bl 0x825ae950
	ctx.lr = 0x820FB7EC;
	sub_825AE950(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_820FB7F4:
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

__attribute__((alias("__imp__sub_820FB80C"))) PPC_WEAK_FUNC(sub_820FB80C);
PPC_FUNC_IMPL(__imp__sub_820FB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB810"))) PPC_WEAK_FUNC(sub_820FB810);
PPC_FUNC_IMPL(__imp__sub_820FB810) {
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
	// li r5,1296
	ctx.r5.s64 = 1296;
	// addi r31,r30,1596
	ctx.r31.s64 = ctx.r30.s64 + 1596;
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x820FB83C;
	sub_8259D3A0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r6,r11,-18736
	ctx.r6.s64 = ctx.r11.s64 + -18736;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cd88
	ctx.lr = 0x820FB854;
	sub_8259CD88(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,1624
	ctx.r11.s64 = ctx.r30.s64 + 1624;
loc_820FB85C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fb874
	if (!ctx.cr6.eq) goto loc_820FB874;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fb924
	if (ctx.cr6.eq) goto loc_820FB924;
loc_820FB874:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fb88c
	if (!ctx.cr6.eq) goto loc_820FB88C;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820fb900
	if (ctx.cr6.eq) goto loc_820FB900;
loc_820FB88C:
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820fb8a4
	if (!ctx.cr6.eq) goto loc_820FB8A4;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fb908
	if (ctx.cr6.eq) goto loc_820FB908;
loc_820FB8A4:
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fb8bc
	if (!ctx.cr6.eq) goto loc_820FB8BC;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fb910
	if (ctx.cr6.eq) goto loc_820FB910;
loc_820FB8BC:
	// lwz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fb8d4
	if (!ctx.cr6.eq) goto loc_820FB8D4;
	// lwz r7,144(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fb918
	if (ctx.cr6.eq) goto loc_820FB918;
loc_820FB8D4:
	// lwz r6,176(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fb8ec
	if (!ctx.cr6.eq) goto loc_820FB8EC;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fb920
	if (ctx.cr6.eq) goto loc_820FB920;
loc_820FB8EC:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// cmpwi cr6,r10,36
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 36, ctx.xer);
	// blt cr6,0x820fb85c
	if (ctx.cr6.lt) goto loc_820FB85C;
	// b 0x820fb924
	goto loc_820FB924;
loc_820FB900:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x820fb924
	goto loc_820FB924;
loc_820FB908:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x820fb924
	goto loc_820FB924;
loc_820FB910:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x820fb924
	goto loc_820FB924;
loc_820FB918:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x820fb924
	goto loc_820FB924;
loc_820FB920:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
loc_820FB924:
	// lwz r3,2896(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2896);
	// stw r10,2892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2892, ctx.r10.u32);
	// bl 0x825aed30
	ctx.lr = 0x820FB930;
	sub_825AED30(ctx, base);
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

__attribute__((alias("__imp__sub_820FB948"))) PPC_WEAK_FUNC(sub_820FB948);
PPC_FUNC_IMPL(__imp__sub_820FB948) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,6120
	ctx.r6.s64 = ctx.r11.s64 + 6120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825ae968
	ctx.lr = 0x820FB974;
	sub_825AE968(ctx, base);
	// addi r5,r31,2900
	ctx.r5.s64 = ctx.r31.s64 + 2900;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FB98C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820fb98c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB98C;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r8,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r8.u32);
	// bl 0x825aea08
	ctx.lr = 0x820FB9A8;
	sub_825AEA08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_820FB9CC"))) PPC_WEAK_FUNC(sub_820FB9CC);
PPC_FUNC_IMPL(__imp__sub_820FB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB9D0"))) PPC_WEAK_FUNC(sub_820FB9D0);
PPC_FUNC_IMPL(__imp__sub_820FB9D0) {
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
	// addi r3,r31,2900
	ctx.r3.s64 = ctx.r31.s64 + 2900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820fba50
	if (ctx.cr6.eq) goto loc_820FBA50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825aed68
	ctx.lr = 0x820FBA00;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fba30
	if (ctx.cr6.eq) goto loc_820FBA30;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x820fba50
	if (ctx.cr6.eq) goto loc_820FBA50;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_820FBA30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb718
	ctx.lr = 0x820FBA38;
	sub_820FB718(ctx, base);
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
loc_820FBA50:
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

__attribute__((alias("__imp__sub_820FBA68"))) PPC_WEAK_FUNC(sub_820FBA68);
PPC_FUNC_IMPL(__imp__sub_820FBA68) {
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
	// addi r3,r31,2900
	ctx.r3.s64 = ctx.r31.s64 + 2900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820fbaf0
	if (ctx.cr6.eq) goto loc_820FBAF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825aed68
	ctx.lr = 0x820FBA98;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fbac8
	if (ctx.cr6.eq) goto loc_820FBAC8;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x820fbaf0
	if (ctx.cr6.eq) goto loc_820FBAF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_820FBAC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb810
	ctx.lr = 0x820FBAD0;
	sub_820FB810(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_820FBAF0:
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

__attribute__((alias("__imp__sub_820FBB08"))) PPC_WEAK_FUNC(sub_820FBB08);
PPC_FUNC_IMPL(__imp__sub_820FBB08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,35
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 35, ctx.xer);
	// bgt cr6,0x820fbcd8
	if (ctx.cr6.gt) {
		sub_820FBCD8(ctx, base);
		return;
	}
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// addi r12,r12,-17624
	ctx.r12.s64 = ctx.r12.s64 + -17624;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x820FBBB8
		return;
	case 1:
		sub_820FBBC0(ctx, base);
		return;
	case 2:
		sub_820FBBC8(ctx, base);
		return;
	case 3:
		sub_820FBBD0(ctx, base);
		return;
	case 4:
		sub_820FBBD8(ctx, base);
		return;
	case 5:
		sub_820FBBE0(ctx, base);
		return;
	case 6:
		sub_820FBBE8(ctx, base);
		return;
	case 7:
		sub_820FBBF0(ctx, base);
		return;
	case 8:
		sub_820FBBF8(ctx, base);
		return;
	case 9:
		sub_820FBC00(ctx, base);
		return;
	case 10:
		sub_820FBC08(ctx, base);
		return;
	case 11:
		sub_820FBC10(ctx, base);
		return;
	case 12:
		sub_820FBC18(ctx, base);
		return;
	case 13:
		sub_820FBC20(ctx, base);
		return;
	case 14:
		sub_820FBC28(ctx, base);
		return;
	case 15:
		sub_820FBC30(ctx, base);
		return;
	case 16:
		sub_820FBC38(ctx, base);
		return;
	case 17:
		sub_820FBC40(ctx, base);
		return;
	case 18:
		sub_820FBC50(ctx, base);
		return;
	case 19:
		sub_820FBC48(ctx, base);
		return;
	case 20:
		sub_820FBC58(ctx, base);
		return;
	case 21:
		sub_820FBC60(ctx, base);
		return;
	case 22:
		sub_820FBC68(ctx, base);
		return;
	case 23:
		sub_820FBC78(ctx, base);
		return;
	case 24:
		sub_820FBC70(ctx, base);
		return;
	case 25:
		sub_820FBC80(ctx, base);
		return;
	case 26:
		sub_820FBC88(ctx, base);
		return;
	case 27:
		sub_820FBC90(ctx, base);
		return;
	case 28:
		sub_820FBC98(ctx, base);
		return;
	case 29:
		sub_820FBCA0(ctx, base);
		return;
	case 30:
		sub_820FBCA8(ctx, base);
		return;
	case 31:
		sub_820FBCB0(ctx, base);
		return;
	case 32:
		sub_820FBCB8(ctx, base);
		return;
	case 33:
		sub_820FBCC0(ctx, base);
		return;
	case 34:
		sub_820FBCC8(ctx, base);
		return;
	case 35:
		sub_820FBCD0(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_820FBB28"))) PPC_WEAK_FUNC(sub_820FBB28);
PPC_FUNC_IMPL(__imp__sub_820FBB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-17480(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17480);
	// lwz r16,-17472(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17472);
	// lwz r16,-17464(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17464);
	// lwz r16,-17456(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17456);
	// lwz r16,-17448(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17448);
	// lwz r16,-17440(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17440);
	// lwz r16,-17432(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17432);
	// lwz r16,-17424(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17424);
	// lwz r16,-17416(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17416);
	// lwz r16,-17408(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17408);
	// lwz r16,-17400(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17400);
	// lwz r16,-17392(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17392);
	// lwz r16,-17384(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17384);
	// lwz r16,-17376(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17376);
	// lwz r16,-17368(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17368);
	// lwz r16,-17360(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17360);
	// lwz r16,-17352(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17352);
	// lwz r16,-17344(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17344);
	// lwz r16,-17328(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17328);
	// lwz r16,-17336(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17336);
	// lwz r16,-17320(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17320);
	// lwz r16,-17312(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17312);
	// lwz r16,-17304(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17304);
	// lwz r16,-17288(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17288);
	// lwz r16,-17296(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17296);
	// lwz r16,-17280(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17280);
	// lwz r16,-17272(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17272);
	// lwz r16,-17264(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17264);
	// lwz r16,-17256(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17256);
	// lwz r16,-17248(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17248);
	// lwz r16,-17240(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17240);
	// lwz r16,-17232(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17232);
	// lwz r16,-17224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17224);
	// lwz r16,-17216(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17216);
	// lwz r16,-17208(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17208);
	// lwz r16,-17200(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -17200);
	// li r3,58
	ctx.r3.s64 = 58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBC0"))) PPC_WEAK_FUNC(sub_820FBBC0);
PPC_FUNC_IMPL(__imp__sub_820FBBC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,59
	ctx.r3.s64 = 59;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBC8"))) PPC_WEAK_FUNC(sub_820FBBC8);
PPC_FUNC_IMPL(__imp__sub_820FBBC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,62
	ctx.r3.s64 = 62;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBD0"))) PPC_WEAK_FUNC(sub_820FBBD0);
PPC_FUNC_IMPL(__imp__sub_820FBBD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBD8"))) PPC_WEAK_FUNC(sub_820FBBD8);
PPC_FUNC_IMPL(__imp__sub_820FBBD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBE0"))) PPC_WEAK_FUNC(sub_820FBBE0);
PPC_FUNC_IMPL(__imp__sub_820FBBE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,65
	ctx.r3.s64 = 65;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBE8"))) PPC_WEAK_FUNC(sub_820FBBE8);
PPC_FUNC_IMPL(__imp__sub_820FBBE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBF0"))) PPC_WEAK_FUNC(sub_820FBBF0);
PPC_FUNC_IMPL(__imp__sub_820FBBF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBBF8"))) PPC_WEAK_FUNC(sub_820FBBF8);
PPC_FUNC_IMPL(__imp__sub_820FBBF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC00"))) PPC_WEAK_FUNC(sub_820FBC00);
PPC_FUNC_IMPL(__imp__sub_820FBC00) {
	PPC_FUNC_PROLOGUE();
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC08"))) PPC_WEAK_FUNC(sub_820FBC08);
PPC_FUNC_IMPL(__imp__sub_820FBC08) {
	PPC_FUNC_PROLOGUE();
	// li r3,76
	ctx.r3.s64 = 76;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC10"))) PPC_WEAK_FUNC(sub_820FBC10);
PPC_FUNC_IMPL(__imp__sub_820FBC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,70
	ctx.r3.s64 = 70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC18"))) PPC_WEAK_FUNC(sub_820FBC18);
PPC_FUNC_IMPL(__imp__sub_820FBC18) {
	PPC_FUNC_PROLOGUE();
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC20"))) PPC_WEAK_FUNC(sub_820FBC20);
PPC_FUNC_IMPL(__imp__sub_820FBC20) {
	PPC_FUNC_PROLOGUE();
	// li r3,73
	ctx.r3.s64 = 73;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC28"))) PPC_WEAK_FUNC(sub_820FBC28);
PPC_FUNC_IMPL(__imp__sub_820FBC28) {
	PPC_FUNC_PROLOGUE();
	// li r3,74
	ctx.r3.s64 = 74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC30"))) PPC_WEAK_FUNC(sub_820FBC30);
PPC_FUNC_IMPL(__imp__sub_820FBC30) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC38"))) PPC_WEAK_FUNC(sub_820FBC38);
PPC_FUNC_IMPL(__imp__sub_820FBC38) {
	PPC_FUNC_PROLOGUE();
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC40"))) PPC_WEAK_FUNC(sub_820FBC40);
PPC_FUNC_IMPL(__imp__sub_820FBC40) {
	PPC_FUNC_PROLOGUE();
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC48"))) PPC_WEAK_FUNC(sub_820FBC48);
PPC_FUNC_IMPL(__imp__sub_820FBC48) {
	PPC_FUNC_PROLOGUE();
	// li r3,83
	ctx.r3.s64 = 83;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC50"))) PPC_WEAK_FUNC(sub_820FBC50);
PPC_FUNC_IMPL(__imp__sub_820FBC50) {
	PPC_FUNC_PROLOGUE();
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC58"))) PPC_WEAK_FUNC(sub_820FBC58);
PPC_FUNC_IMPL(__imp__sub_820FBC58) {
	PPC_FUNC_PROLOGUE();
	// li r3,85
	ctx.r3.s64 = 85;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC60"))) PPC_WEAK_FUNC(sub_820FBC60);
PPC_FUNC_IMPL(__imp__sub_820FBC60) {
	PPC_FUNC_PROLOGUE();
	// li r3,86
	ctx.r3.s64 = 86;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC68"))) PPC_WEAK_FUNC(sub_820FBC68);
PPC_FUNC_IMPL(__imp__sub_820FBC68) {
	PPC_FUNC_PROLOGUE();
	// li r3,87
	ctx.r3.s64 = 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC70"))) PPC_WEAK_FUNC(sub_820FBC70);
PPC_FUNC_IMPL(__imp__sub_820FBC70) {
	PPC_FUNC_PROLOGUE();
	// li r3,92
	ctx.r3.s64 = 92;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC78"))) PPC_WEAK_FUNC(sub_820FBC78);
PPC_FUNC_IMPL(__imp__sub_820FBC78) {
	PPC_FUNC_PROLOGUE();
	// li r3,89
	ctx.r3.s64 = 89;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC80"))) PPC_WEAK_FUNC(sub_820FBC80);
PPC_FUNC_IMPL(__imp__sub_820FBC80) {
	PPC_FUNC_PROLOGUE();
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC88"))) PPC_WEAK_FUNC(sub_820FBC88);
PPC_FUNC_IMPL(__imp__sub_820FBC88) {
	PPC_FUNC_PROLOGUE();
	// li r3,61
	ctx.r3.s64 = 61;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC90"))) PPC_WEAK_FUNC(sub_820FBC90);
PPC_FUNC_IMPL(__imp__sub_820FBC90) {
	PPC_FUNC_PROLOGUE();
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBC98"))) PPC_WEAK_FUNC(sub_820FBC98);
PPC_FUNC_IMPL(__imp__sub_820FBC98) {
	PPC_FUNC_PROLOGUE();
	// li r3,71
	ctx.r3.s64 = 71;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCA0"))) PPC_WEAK_FUNC(sub_820FBCA0);
PPC_FUNC_IMPL(__imp__sub_820FBCA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,75
	ctx.r3.s64 = 75;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCA8"))) PPC_WEAK_FUNC(sub_820FBCA8);
PPC_FUNC_IMPL(__imp__sub_820FBCA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCB0"))) PPC_WEAK_FUNC(sub_820FBCB0);
PPC_FUNC_IMPL(__imp__sub_820FBCB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,84
	ctx.r3.s64 = 84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCB8"))) PPC_WEAK_FUNC(sub_820FBCB8);
PPC_FUNC_IMPL(__imp__sub_820FBCB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,88
	ctx.r3.s64 = 88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCC0"))) PPC_WEAK_FUNC(sub_820FBCC0);
PPC_FUNC_IMPL(__imp__sub_820FBCC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCC8"))) PPC_WEAK_FUNC(sub_820FBCC8);
PPC_FUNC_IMPL(__imp__sub_820FBCC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,91
	ctx.r3.s64 = 91;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCD0"))) PPC_WEAK_FUNC(sub_820FBCD0);
PPC_FUNC_IMPL(__imp__sub_820FBCD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,93
	ctx.r3.s64 = 93;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCD8"))) PPC_WEAK_FUNC(sub_820FBCD8);
PPC_FUNC_IMPL(__imp__sub_820FBCD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCE0"))) PPC_WEAK_FUNC(sub_820FBCE0);
PPC_FUNC_IMPL(__imp__sub_820FBCE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fbcf4
	if (ctx.cr6.eq) goto loc_820FBCF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FBCF4:
	// lbzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBCFC"))) PPC_WEAK_FUNC(sub_820FBCFC);
PPC_FUNC_IMPL(__imp__sub_820FBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBD00"))) PPC_WEAK_FUNC(sub_820FBD00);
PPC_FUNC_IMPL(__imp__sub_820FBD00) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,368
	ctx.r10.s64 = ctx.r9.s64 + 368;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 320, ctx.r11.u32);
	// stw r11,324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 324, ctx.r11.u32);
	// stw r11,328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 328, ctx.r11.u32);
	// stw r11,332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 332, ctx.r11.u32);
loc_820FBD20:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,-32(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fbd20
	if (!ctx.cr6.eq) goto loc_820FBD20;
	// stb r11,404(r9)
	PPC_STORE_U8(ctx.r9.u32 + 404, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,400(r9)
	PPC_STORE_U8(ctx.r9.u32 + 400, ctx.r11.u8);
	// stb r11,401(r9)
	PPC_STORE_U8(ctx.r9.u32 + 401, ctx.r11.u8);
	// stb r11,402(r9)
	PPC_STORE_U8(ctx.r9.u32 + 402, ctx.r11.u8);
	// stb r11,403(r9)
	PPC_STORE_U8(ctx.r9.u32 + 403, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBD54"))) PPC_WEAK_FUNC(sub_820FBD54);
PPC_FUNC_IMPL(__imp__sub_820FBD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBD58"))) PPC_WEAK_FUNC(sub_820FBD58);
PPC_FUNC_IMPL(__imp__sub_820FBD58) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_820FBD7C:
	// li r10,16
	ctx.r10.s64 = 16;
loc_820FBD80:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -128, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fbd80
	if (!ctx.cr6.eq) goto loc_820FBD80;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fbd7c
	if (!ctx.cr6.eq) goto loc_820FBD7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBDAC"))) PPC_WEAK_FUNC(sub_820FBDAC);
PPC_FUNC_IMPL(__imp__sub_820FBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBDB0"))) PPC_WEAK_FUNC(sub_820FBDB0);
PPC_FUNC_IMPL(__imp__sub_820FBDB0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fbdc4
	if (!ctx.cr6.eq) goto loc_820FBDC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_820FBDC4:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820fbe38
	if (!ctx.cr6.gt) goto loc_820FBE38;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820FBDF4:
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fbe38
	if (!ctx.cr6.eq) goto loc_820FBE38;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x820fbe24
	if (!ctx.cr6.lt) goto loc_820FBE24;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820FBE24:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820fbdf4
	if (ctx.cr6.lt) goto loc_820FBDF4;
loc_820FBE38:
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fbe4c
	if (!ctx.cr6.eq) goto loc_820FBE4C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820FBE4C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBE60"))) PPC_WEAK_FUNC(sub_820FBE60);
PPC_FUNC_IMPL(__imp__sub_820FBE60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBE68"))) PPC_WEAK_FUNC(sub_820FBE68);
PPC_FUNC_IMPL(__imp__sub_820FBE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBE70"))) PPC_WEAK_FUNC(sub_820FBE70);
PPC_FUNC_IMPL(__imp__sub_820FBE70) {
	PPC_FUNC_PROLOGUE();
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r8,r9,12448
	ctx.r8.u64 = ctx.r9.u64 | 12448;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// subf r3,r7,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r7.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBEAC"))) PPC_WEAK_FUNC(sub_820FBEAC);
PPC_FUNC_IMPL(__imp__sub_820FBEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBEB0"))) PPC_WEAK_FUNC(sub_820FBEB0);
PPC_FUNC_IMPL(__imp__sub_820FBEB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r4,368
	ctx.r11.s64 = ctx.r4.s64 + 368;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
loc_820FBED0:
	// lbz r9,-24(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + -24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fbf0c
	if (ctx.cr6.eq) goto loc_820FBF0C;
	// lbz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fbf0c
	if (!ctx.cr6.eq) goto loc_820FBF0C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bge cr6,0x820fbf0c
	if (!ctx.cr6.lt) goto loc_820FBF0C;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stb r31,296(r9)
	PPC_STORE_U8(ctx.r9.u32 + 296, ctx.r31.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_820FBF0C:
	// lbz r9,-24(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + -24);
	// lbz r3,-16(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + -16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// beq cr6,0x820fbf50
	if (ctx.cr6.eq) goto loc_820FBF50;
	// lbz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fbf50
	if (!ctx.cr6.eq) goto loc_820FBF50;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bge cr6,0x820fbf50
	if (!ctx.cr6.lt) goto loc_820FBF50;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stb r5,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r5.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820FBF50:
	// lbz r3,-16(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + -16);
	// lbz r9,-8(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r3,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r3.u8);
	// beq cr6,0x820fbf94
	if (ctx.cr6.eq) goto loc_820FBF94;
	// lbz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fbf94
	if (!ctx.cr6.eq) goto loc_820FBF94;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bge cr6,0x820fbf94
	if (!ctx.cr6.lt) goto loc_820FBF94;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stb r6,296(r9)
	PPC_STORE_U8(ctx.r9.u32 + 296, ctx.r6.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_820FBF94:
	// lbz r9,-8(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + -8);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r9,16(r8)
	PPC_STORE_U8(ctx.r8.u32 + 16, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x820fbed0
	if (!ctx.cr6.eq) goto loc_820FBED0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBFBC"))) PPC_WEAK_FUNC(sub_820FBFBC);
PPC_FUNC_IMPL(__imp__sub_820FBFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBFC0"))) PPC_WEAK_FUNC(sub_820FBFC0);
PPC_FUNC_IMPL(__imp__sub_820FBFC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fbfd4
	if (ctx.cr6.eq) goto loc_820FBFD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FBFD4:
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBFE4"))) PPC_WEAK_FUNC(sub_820FBFE4);
PPC_FUNC_IMPL(__imp__sub_820FBFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBFE8"))) PPC_WEAK_FUNC(sub_820FBFE8);
PPC_FUNC_IMPL(__imp__sub_820FBFE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stbx r6,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC014"))) PPC_WEAK_FUNC(sub_820FC014);
PPC_FUNC_IMPL(__imp__sub_820FC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC018"))) PPC_WEAK_FUNC(sub_820FC018);
PPC_FUNC_IMPL(__imp__sub_820FC018) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC020"))) PPC_WEAK_FUNC(sub_820FC020);
PPC_FUNC_IMPL(__imp__sub_820FC020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,6144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6144);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x820fc068
	if (ctx.cr6.lt) goto loc_820FC068;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FC068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fc0a4
	if (ctx.cr6.eq) goto loc_820FC0A4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// blr 
	return;
loc_820FC0A4:
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lfs f11,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f10,f6
	ctx.f10.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f4,f13,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,188(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC100"))) PPC_WEAK_FUNC(sub_820FC100);
PPC_FUNC_IMPL(__imp__sub_820FC100) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stb r30,369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 369, ctx.r30.u8);
	// stb r30,370(r31)
	PPC_STORE_U8(ctx.r31.u32 + 370, ctx.r30.u8);
	// stb r30,371(r31)
	PPC_STORE_U8(ctx.r31.u32 + 371, ctx.r30.u8);
	// lfs f0,-1660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// stb r30,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r30.u8);
	// stb r30,374(r31)
	PPC_STORE_U8(ctx.r31.u32 + 374, ctx.r30.u8);
	// stb r30,375(r31)
	PPC_STORE_U8(ctx.r31.u32 + 375, ctx.r30.u8);
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
	// stb r11,382(r31)
	PPC_STORE_U8(ctx.r31.u32 + 382, ctx.r11.u8);
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// stb r30,378(r31)
	PPC_STORE_U8(ctx.r31.u32 + 378, ctx.r30.u8);
	// stb r30,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r30.u8);
	// stb r30,367(r31)
	PPC_STORE_U8(ctx.r31.u32 + 367, ctx.r30.u8);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FC1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r30,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r30.u8);
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// stb r30,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r30.u8);
	// lfs f0,5928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5928);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stb r11,257(r31)
	PPC_STORE_U8(ctx.r31.u32 + 257, ctx.r11.u8);
	// stb r11,258(r31)
	PPC_STORE_U8(ctx.r31.u32 + 258, ctx.r11.u8);
	// stb r11,259(r31)
	PPC_STORE_U8(ctx.r31.u32 + 259, ctx.r11.u8);
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f31,292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f31,296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f31,328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC214"))) PPC_WEAK_FUNC(sub_820FC214);
PPC_FUNC_IMPL(__imp__sub_820FC214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC218"))) PPC_WEAK_FUNC(sub_820FC218);
PPC_FUNC_IMPL(__imp__sub_820FC218) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820f7a88
	sub_820F7A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC228"))) PPC_WEAK_FUNC(sub_820FC228);
PPC_FUNC_IMPL(__imp__sub_820FC228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC22C"))) PPC_WEAK_FUNC(sub_820FC22C);
PPC_FUNC_IMPL(__imp__sub_820FC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC230"))) PPC_WEAK_FUNC(sub_820FC230);
PPC_FUNC_IMPL(__imp__sub_820FC230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x820FC238;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r25,r11,28544
	ctx.r25.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r10,r11,36832
	ctx.r10.u64 = ctx.r11.u64 | 36832;
	// lwzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fc2d4
	if (!ctx.cr6.gt) goto loc_820FC2D4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// addi r28,r25,1076
	ctx.r28.s64 = ctx.r25.s64 + 1076;
	// addi r29,r10,29472
	ctx.r29.s64 = ctx.r10.s64 + 29472;
	// lfs f31,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_820FC278:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820fc2c4
	if (!ctx.cr6.gt) goto loc_820FC2C4;
loc_820FC28C:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f91a8
	ctx.lr = 0x820FC2A8;
	sub_820F91A8(ctx, base);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820fc28c
	if (ctx.cr6.lt) goto loc_820FC28C;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,36832
	ctx.r6.u64 = ctx.r7.u64 | 36832;
	// lwzx r11,r25,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r6.u32);
loc_820FC2C4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,76
	ctx.r28.s64 = ctx.r28.s64 + 76;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fc278
	if (ctx.cr6.lt) goto loc_820FC278;
loc_820FC2D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC2E0"))) PPC_WEAK_FUNC(sub_820FC2E0);
PPC_FUNC_IMPL(__imp__sub_820FC2E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC2F0"))) PPC_WEAK_FUNC(sub_820FC2F0);
PPC_FUNC_IMPL(__imp__sub_820FC2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820FC2F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-21272
	ctx.r29.s64 = ctx.r11.s64 + -21272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x820FC31C;
	sub_8210CF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8210d3f0
	ctx.lr = 0x820FC330;
	sub_8210D3F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82347808
	ctx.lr = 0x820FC344;
	sub_82347808(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FC354:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820fc354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC354;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r10,-24112
	ctx.r10.s64 = ctx.r10.s64 + -24112;
	// addi r9,r11,-24104
	ctx.r9.s64 = ctx.r11.s64 + -24104;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC3A4"))) PPC_WEAK_FUNC(sub_820FC3A4);
PPC_FUNC_IMPL(__imp__sub_820FC3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC3A8"))) PPC_WEAK_FUNC(sub_820FC3A8);
PPC_FUNC_IMPL(__imp__sub_820FC3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820fc2f0
	ctx.lr = 0x820FC3C4;
	sub_820FC2F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r11,6156
	ctx.r5.s64 = ctx.r11.s64 + 6156;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82374fb8
	ctx.lr = 0x820FC3DC;
	sub_82374FB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x820fc410
	if (!ctx.cr6.lt) goto loc_820FC410;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82347860
	ctx.lr = 0x820FC3EC;
	sub_82347860(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x8210d230
	ctx.lr = 0x820FC400;
	sub_8210D230(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820fc44c
	goto loc_820FC44C;
loc_820FC410:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823736e0
	ctx.lr = 0x820FC41C;
	sub_823736E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x820fc42c
	if (!ctx.cr6.lt) goto loc_820FC42C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x820fc444
	goto loc_820FC444;
loc_820FC42C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373b00
	ctx.lr = 0x820FC434;
	sub_82373B00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// blt cr6,0x820fc444
	if (ctx.cr6.lt) goto loc_820FC444;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_820FC444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fa178
	ctx.lr = 0x820FC44C;
	sub_820FA178(ctx, base);
loc_820FC44C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC464"))) PPC_WEAK_FUNC(sub_820FC464);
PPC_FUNC_IMPL(__imp__sub_820FC464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC468"))) PPC_WEAK_FUNC(sub_820FC468);
PPC_FUNC_IMPL(__imp__sub_820FC468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820fc2f0
	ctx.lr = 0x820FC484;
	sub_820FC2F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r11,6156
	ctx.r4.s64 = ctx.r11.s64 + 6156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82376ca8
	ctx.lr = 0x820FC498;
	sub_82376CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x820fc4cc
	if (!ctx.cr6.lt) goto loc_820FC4CC;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82347860
	ctx.lr = 0x820FC4A8;
	sub_82347860(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x8210d230
	ctx.lr = 0x820FC4BC;
	sub_8210D230(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820fc508
	goto loc_820FC508;
loc_820FC4CC:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82376cc0
	ctx.lr = 0x820FC4D8;
	sub_82376CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x820fc4e8
	if (!ctx.cr6.lt) goto loc_820FC4E8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x820fc500
	goto loc_820FC500;
loc_820FC4E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82376aa0
	ctx.lr = 0x820FC4F0;
	sub_82376AA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// blt cr6,0x820fc500
	if (ctx.cr6.lt) goto loc_820FC500;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_820FC500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fa178
	ctx.lr = 0x820FC508;
	sub_820FA178(ctx, base);
loc_820FC508:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC520"))) PPC_WEAK_FUNC(sub_820FC520);
PPC_FUNC_IMPL(__imp__sub_820FC520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820FC528;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,10512
	ctx.r5.s64 = 10512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x820FC550;
	sub_8259D300(ctx, base);
	// addi r28,r31,10528
	ctx.r28.s64 = ctx.r31.s64 + 10528;
	// li r29,6
	ctx.r29.s64 = 6;
loc_820FC558:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fa6c8
	ctx.lr = 0x820FC560;
	sub_820FA6C8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,5956
	ctx.r28.s64 = ctx.r28.s64 + 5956;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820fc558
	if (!ctx.cr6.eq) goto loc_820FC558;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,46272
	ctx.r9.u64 = ctx.r10.u64 | 46272;
	// ori r10,r11,46268
	ctx.r10.u64 = ctx.r11.u64 | 46268;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// ori r7,r8,46273
	ctx.r7.u64 = ctx.r8.u64 | 46273;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r5,r6,46274
	ctx.r5.u64 = ctx.r6.u64 | 46274;
	// ori r3,r4,46264
	ctx.r3.u64 = ctx.r4.u64 | 46264;
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// addi r10,r11,368
	ctx.r10.s64 = ctx.r11.s64 + 368;
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// stw r9,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r9.u32);
	// stw r9,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r9.u32);
	// stw r9,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r9.u32);
	// stw r9,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r9.u32);
loc_820FC5CC:
	// stw r30,-32(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32, ctx.r30.u32);
	// addi r9,r11,400
	ctx.r9.s64 = ctx.r11.s64 + 400;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820fc5cc
	if (ctx.cr6.lt) goto loc_820FC5CC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,404(r11)
	PPC_STORE_U8(ctx.r11.u32 + 404, ctx.r10.u8);
	// stb r10,400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 400, ctx.r10.u8);
	// stb r10,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r10.u8);
	// stb r10,402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 402, ctx.r10.u8);
	// stb r30,403(r11)
	PPC_STORE_U8(ctx.r11.u32 + 403, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC608"))) PPC_WEAK_FUNC(sub_820FC608);
PPC_FUNC_IMPL(__imp__sub_820FC608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820FC610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r31,r10,26080
	ctx.r31.s64 = ctx.r10.s64 + 26080;
	// ori r8,r9,24908
	ctx.r8.u64 = ctx.r9.u64 | 24908;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mulli r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 * 584;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x820fc7ec
	if (ctx.cr6.gt) goto loc_820FC7EC;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// addi r12,r12,-14740
	ctx.r12.s64 = ctx.r12.s64 + -14740;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820FC6C8;
	case 1:
		goto loc_820FC6D4;
	case 2:
		goto loc_820FC6E4;
	case 3:
		goto loc_820FC6F4;
	case 4:
		goto loc_820FC704;
	case 5:
		goto loc_820FC714;
	case 6:
		goto loc_820FC734;
	case 7:
		goto loc_820FC724;
	case 8:
		goto loc_820FC744;
	case 9:
		goto loc_820FC760;
	case 10:
		goto loc_820FC770;
	case 11:
		goto loc_820FC7EC;
	case 12:
		goto loc_820FC780;
	case 13:
		goto loc_820FC790;
	case 14:
		goto loc_820FC7A0;
	case 15:
		goto loc_820FC7EC;
	case 16:
		goto loc_820FC7B0;
	case 17:
		goto loc_820FC7EC;
	case 18:
		goto loc_820FC7C0;
	case 19:
		goto loc_820FC7EC;
	case 20:
		goto loc_820FC7D0;
	case 21:
		goto loc_820FC7E0;
	case 22:
		goto loc_820FC754;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-14648(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14648);
	// lwz r16,-14636(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14636);
	// lwz r16,-14620(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14620);
	// lwz r16,-14604(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14604);
	// lwz r16,-14588(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14588);
	// lwz r16,-14572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14572);
	// lwz r16,-14540(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14540);
	// lwz r16,-14556(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14556);
	// lwz r16,-14524(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14524);
	// lwz r16,-14496(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14496);
	// lwz r16,-14480(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14480);
	// lwz r16,-14356(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14356);
	// lwz r16,-14464(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14464);
	// lwz r16,-14448(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14448);
	// lwz r16,-14432(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14432);
	// lwz r16,-14356(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14356);
	// lwz r16,-14416(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14416);
	// lwz r16,-14356(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14356);
	// lwz r16,-14400(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14400);
	// lwz r16,-14356(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14356);
	// lwz r16,-14384(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14384);
	// lwz r16,-14368(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14368);
	// lwz r16,-14508(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14508);
loc_820FC6C8:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r7,r11,24944
	ctx.r7.s64 = ctx.r11.s64 + 24944;
	// b 0x820fc7e8
	goto loc_820FC7E8;
loc_820FC6D4:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r6,r11,24944
	ctx.r6.s64 = ctx.r11.s64 + 24944;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC6E4:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r5,r11,-8288
	ctx.r5.s64 = ctx.r11.s64 + -8288;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC6F4:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r4,r11,-21792
	ctx.r4.s64 = ctx.r11.s64 + -21792;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC704:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC714:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,-31056
	ctx.r11.s64 = ctx.r11.s64 + -31056;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC724:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r10,r11,1344
	ctx.r10.s64 = ctx.r11.s64 + 1344;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC734:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r9,r11,-27920
	ctx.r9.s64 = ctx.r11.s64 + -27920;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC744:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r8,r11,31424
	ctx.r8.s64 = ctx.r11.s64 + 31424;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC754:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r7,r11,31424
	ctx.r7.s64 = ctx.r11.s64 + 31424;
	// b 0x820fc7e8
	goto loc_820FC7E8;
loc_820FC760:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r6,r11,-1728
	ctx.r6.s64 = ctx.r11.s64 + -1728;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC770:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r5,r11,27936
	ctx.r5.s64 = ctx.r11.s64 + 27936;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC780:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r4,r11,-18752
	ctx.r4.s64 = ctx.r11.s64 + -18752;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC790:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,-15264
	ctx.r3.s64 = ctx.r11.s64 + -15264;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC7A0:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,-11776
	ctx.r11.s64 = ctx.r11.s64 + -11776;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC7B0:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r10,r11,18064
	ctx.r10.s64 = ctx.r11.s64 + 18064;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC7C0:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r9,r11,7088
	ctx.r9.s64 = ctx.r11.s64 + 7088;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC7D0:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r8,r11,12704
	ctx.r8.s64 = ctx.r11.s64 + 12704;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x820fc7ec
	goto loc_820FC7EC;
loc_820FC7E0:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r7,r11,23424
	ctx.r7.s64 = ctx.r11.s64 + 23424;
loc_820FC7E8:
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
loc_820FC7EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fa1e0
	ctx.lr = 0x820FC7F4;
	sub_820FA1E0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8222a758
	ctx.lr = 0x820FC804;
	sub_8222A758(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fa258
	ctx.lr = 0x820FC80C;
	sub_820FA258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104110
	ctx.lr = 0x820FC818;
	sub_82104110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC820"))) PPC_WEAK_FUNC(sub_820FC820);
PPC_FUNC_IMPL(__imp__sub_820FC820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820FC828;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x820fc964
	if (!ctx.cr6.gt) goto loc_820FC964;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r31,10528
	ctx.r27.s64 = ctx.r31.s64 + 10528;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
loc_820FC850:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x820FC85C;
	sub_820FA830(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fc950
	if (ctx.cr6.eq) goto loc_820FC950;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x820FC87C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc88c
	if (ctx.cr6.eq) goto loc_820FC88C;
	// bl 0x823475c0
	ctx.lr = 0x820FC888;
	sub_823475C0(ctx, base);
	// b 0x820fc894
	goto loc_820FC894;
loc_820FC88C:
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x820FC894;
	sub_823656E8(ctx, base);
loc_820FC894:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r11,584
	ctx.r10.s64 = ctx.r11.s64 * 584;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mulli r9,r11,328
	ctx.r9.s64 = ctx.r11.s64 * 328;
	// lwz r11,316(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 316);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bgt cr6,0x820fc934
	if (ctx.cr6.gt) goto loc_820FC934;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// addi r12,r12,-14124
	ctx.r12.s64 = ctx.r12.s64 + -14124;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_820FC91C;
	case 1:
		goto loc_820FC934;
	case 2:
		goto loc_820FC90C;
	case 3:
		goto loc_820FC934;
	case 4:
		goto loc_820FC934;
	case 5:
		goto loc_820FC934;
	case 6:
		goto loc_820FC934;
	case 7:
		goto loc_820FC934;
	case 8:
		goto loc_820FC934;
	case 9:
		goto loc_820FC914;
	case 10:
		goto loc_820FC934;
	case 11:
		goto loc_820FC914;
	case 12:
		goto loc_820FC934;
	case 13:
		goto loc_820FC914;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-14052(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14052);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14068(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14068);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14060(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14060);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14060(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14060);
	// lwz r16,-14028(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14028);
	// lwz r16,-14060(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + -14060);
loc_820FC90C:
	// lwz r6,10652(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10652);
	// b 0x820fc938
	goto loc_820FC938;
loc_820FC914:
	// lwz r6,10636(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10636);
	// b 0x820fc938
	goto loc_820FC938;
loc_820FC91C:
	// lbz r7,10648(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10648);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fc938
	if (ctx.cr6.eq) goto loc_820FC938;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x820fc938
	goto loc_820FC938;
loc_820FC934:
	// li r6,0
	ctx.r6.s64 = 0;
loc_820FC938:
	// lfs f1,10588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10588);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,10660(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10660);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x8221f5a8
	ctx.lr = 0x820FC950;
	sub_8221F5A8(ctx, base);
loc_820FC950:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,5956
	ctx.r30.s64 = ctx.r30.s64 + 5956;
	// addi r27,r27,5956
	ctx.r27.s64 = ctx.r27.s64 + 5956;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x820fc850
	if (ctx.cr6.lt) goto loc_820FC850;
loc_820FC964:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC96C"))) PPC_WEAK_FUNC(sub_820FC96C);
PPC_FUNC_IMPL(__imp__sub_820FC96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC970"))) PPC_WEAK_FUNC(sub_820FC970);
PPC_FUNC_IMPL(__imp__sub_820FC970) {
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
	// bl 0x820fc520
	ctx.lr = 0x820FC980;
	sub_820FC520(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fc994
	if (ctx.cr6.eq) goto loc_820FC994;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820FC994:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FC9A4"))) PPC_WEAK_FUNC(sub_820FC9A4);
PPC_FUNC_IMPL(__imp__sub_820FC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC9A8"))) PPC_WEAK_FUNC(sub_820FC9A8);
PPC_FUNC_IMPL(__imp__sub_820FC9A8) {
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
	// bl 0x820fc520
	ctx.lr = 0x820FC9C0;
	sub_820FC520(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fc9e4
	if (!ctx.cr6.eq) goto loc_820FC9E4;
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
loc_820FC9E4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,46280
	ctx.r9.u64 = ctx.r10.u64 | 46280;
	// ori r7,r8,46288
	ctx.r7.u64 = ctx.r8.u64 | 46288;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_820FCA18"))) PPC_WEAK_FUNC(sub_820FCA18);
PPC_FUNC_IMPL(__imp__sub_820FCA18) {
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
	// bl 0x820fc9a8
	ctx.lr = 0x820FCA28;
	sub_820FC9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fca3c
	if (ctx.cr6.eq) goto loc_820FCA3C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820FCA3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCA4C"))) PPC_WEAK_FUNC(sub_820FCA4C);
PPC_FUNC_IMPL(__imp__sub_820FCA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCA50"))) PPC_WEAK_FUNC(sub_820FCA50);
PPC_FUNC_IMPL(__imp__sub_820FCA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,692(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fca80
	if (ctx.cr6.eq) goto loc_820FCA80;
	// addi r11,r3,792
	ctx.r11.s64 = ctx.r3.s64 + 792;
loc_820FCA64:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x820fca88
	if (ctx.cr6.eq) goto loc_820FCA88;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fca64
	if (ctx.cr6.lt) goto loc_820FCA64;
loc_820FCA80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820FCA88:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCA90"))) PPC_WEAK_FUNC(sub_820FCA90);
PPC_FUNC_IMPL(__imp__sub_820FCA90) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1026(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1026);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcaa4
	if (ctx.cr6.eq) goto loc_820FCAA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FCAA4:
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2992
	ctx.r11.s64 = ctx.r11.s64 + 2992;
loc_820FCAB0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x820fcafc
	if (ctx.cr6.eq) goto loc_820FCAFC;
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x820fcadc
	if (ctx.cr6.eq) goto loc_820FCADC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,150
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 150, ctx.xer);
	// blt cr6,0x820fcab0
	if (ctx.cr6.lt) goto loc_820FCAB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FCADC:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820fcafc
	if (ctx.cr6.eq) goto loc_820FCAFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,1039(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1039);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820FCAFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCB04"))) PPC_WEAK_FUNC(sub_820FCB04);
PPC_FUNC_IMPL(__imp__sub_820FCB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCB08"))) PPC_WEAK_FUNC(sub_820FCB08);
PPC_FUNC_IMPL(__imp__sub_820FCB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2992
	ctx.r10.s64 = ctx.r10.s64 + 2992;
loc_820FCB14:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x820fcb3c
	if (ctx.cr6.eq) goto loc_820FCB3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 150, ctx.xer);
	// blt cr6,0x820fcb14
	if (ctx.cr6.lt) goto loc_820FCB14;
	// blr 
	return;
loc_820FCB3C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1039(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1039);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,1039(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1039, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCB58"))) PPC_WEAK_FUNC(sub_820FCB58);
PPC_FUNC_IMPL(__imp__sub_820FCB58) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,1027(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1027);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,1027(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1027, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCB6C"))) PPC_WEAK_FUNC(sub_820FCB6C);
PPC_FUNC_IMPL(__imp__sub_820FCB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCB70"))) PPC_WEAK_FUNC(sub_820FCB70);
PPC_FUNC_IMPL(__imp__sub_820FCB70) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcb84
	if (ctx.cr6.eq) goto loc_820FCB84;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FCB84:
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4192
	ctx.r11.s64 = ctx.r11.s64 + 4192;
loc_820FCB90:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x820fcbb4
	if (ctx.cr6.eq) goto loc_820FCBB4;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x820fcbbc
	if (ctx.cr6.eq) goto loc_820FCBBC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,52
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 52, ctx.xer);
	// blt cr6,0x820fcb90
	if (ctx.cr6.lt) goto loc_820FCB90;
loc_820FCBB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FCBBC:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820fcbb4
	if (ctx.cr6.eq) goto loc_820FCBB4;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r3,1189(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1189);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCBD0"))) PPC_WEAK_FUNC(sub_820FCBD0);
PPC_FUNC_IMPL(__imp__sub_820FCBD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fcc04
	if (ctx.cr6.eq) goto loc_820FCC04;
	// addi r10,r10,792
	ctx.r10.s64 = ctx.r10.s64 + 792;
loc_820FCBE8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x820fcc0c
	if (ctx.cr6.eq) goto loc_820FCC0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fcbe8
	if (ctx.cr6.lt) goto loc_820FCBE8;
loc_820FCC04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FCC0C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fcc04
	if (ctx.cr6.eq) goto loc_820FCC04;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r6,448(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 448);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x820fcc30
	if (!ctx.cr6.lt) goto loc_820FCC30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FCC30:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCC38"))) PPC_WEAK_FUNC(sub_820FCC38);
PPC_FUNC_IMPL(__imp__sub_820FCC38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820FCC40;
	__savegprlr_26(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r5,1252
	ctx.r10.s64 = ctx.r5.s64 + 1252;
	// addi r11,r5,6180
	ctx.r11.s64 = ctx.r5.s64 + 6180;
	// li r28,11
	ctx.r28.s64 = 11;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_820FCC58:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r29,8
	ctx.r29.s64 = 8;
loc_820FCC64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fccf4
	if (!ctx.cr6.gt) goto loc_820FCCF4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_820FCC78:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fcce4
	if (ctx.cr6.eq) goto loc_820FCCE4;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820fcce4
	if (!ctx.cr6.eq) goto loc_820FCCE4;
	// lwz r11,1248(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fccc8
	if (ctx.cr6.eq) goto loc_820FCCC8;
	// ld r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FCCAC:
	// ld r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r26,r8
	ctx.cr6.compare<uint64_t>(ctx.r26.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fcccc
	if (ctx.cr6.eq) goto loc_820FCCCC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fccac
	if (ctx.cr6.lt) goto loc_820FCCAC;
loc_820FCCC8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_820FCCCC:
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r9,448(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 448);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x820fcce4
	if (ctx.cr6.lt) goto loc_820FCCE4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FCCE4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fcc78
	if (!ctx.cr6.eq) goto loc_820FCC78;
loc_820FCCF4:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820fcc64
	if (!ctx.cr6.eq) goto loc_820FCC64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820fcc58
	if (!ctx.cr6.eq) goto loc_820FCC58;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FCD20"))) PPC_WEAK_FUNC(sub_820FCD20);
PPC_FUNC_IMPL(__imp__sub_820FCD20) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcd34
	if (ctx.cr6.eq) goto loc_820FCD34;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FCD34:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x820fcddc
	if (ctx.cr6.gt) goto loc_820FCDDC;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820fcd60
	if (ctx.cr6.eq) goto loc_820FCD60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820fcd64
	if (!ctx.cr6.eq) goto loc_820FCD64;
loc_820FCD60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FCD64:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fcd74
	if (ctx.cr6.eq) goto loc_820FCD74;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820FCD74:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r6,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// blt cr6,0x820fcdcc
	if (ctx.cr6.lt) goto loc_820FCDCC;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r9,r9,26080
	ctx.r9.s64 = ctx.r9.s64 + 26080;
	// ori r4,r5,12448
	ctx.r4.u64 = ctx.r5.u64 | 12448;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820fcdd0
	goto loc_820FCDD0;
loc_820FCDCC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820FCDD0:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_820FCDDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCDE4"))) PPC_WEAK_FUNC(sub_820FCDE4);
PPC_FUNC_IMPL(__imp__sub_820FCDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCDE8"))) PPC_WEAK_FUNC(sub_820FCDE8);
PPC_FUNC_IMPL(__imp__sub_820FCDE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcdfc
	if (ctx.cr6.eq) goto loc_820FCDFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FCDFC:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x820fcea4
	if (ctx.cr6.gt) goto loc_820FCEA4;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820fce28
	if (ctx.cr6.eq) goto loc_820FCE28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820fce2c
	if (!ctx.cr6.eq) goto loc_820FCE2C;
loc_820FCE28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FCE2C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fce3c
	if (ctx.cr6.eq) goto loc_820FCE3C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820FCE3C:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r9,36
	ctx.r7.s64 = ctx.r9.s64 + 36;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r6,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// blt cr6,0x820fce94
	if (ctx.cr6.lt) goto loc_820FCE94;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r9,r9,26080
	ctx.r9.s64 = ctx.r9.s64 + 26080;
	// ori r4,r5,12448
	ctx.r4.u64 = ctx.r5.u64 | 12448;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820fce98
	goto loc_820FCE98;
loc_820FCE94:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820FCE98:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_820FCEA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCEAC"))) PPC_WEAK_FUNC(sub_820FCEAC);
PPC_FUNC_IMPL(__imp__sub_820FCEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCEB0"))) PPC_WEAK_FUNC(sub_820FCEB0);
PPC_FUNC_IMPL(__imp__sub_820FCEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fcee8
	if (ctx.cr6.eq) goto loc_820FCEE8;
	// ld r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FCECC:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820fcecc
	if (ctx.cr6.lt) goto loc_820FCECC;
loc_820FCEE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FCEF0"))) PPC_WEAK_FUNC(sub_820FCEF0);
PPC_FUNC_IMPL(__imp__sub_820FCEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x820FCEF8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820fd03c
	if (ctx.cr6.eq) goto loc_820FD03C;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r21,-1
	ctx.r21.s64 = -1;
loc_820FCF34:
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fd02c
	if (ctx.cr6.eq) goto loc_820FD02C;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_820FCF48:
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820fd01c
	if (!ctx.cr6.eq) goto loc_820FD01C;
	// lwz r11,1248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fcf90
	if (ctx.cr6.eq) goto loc_820FCF90;
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FCF74:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fd048
	if (ctx.cr6.eq) goto loc_820FD048;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fcf74
	if (ctx.cr6.lt) goto loc_820FCF74;
loc_820FCF90:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_820FCF94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fcd20
	ctx.lr = 0x820FCFA0;
	sub_820FCD20(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fd01c
	if (ctx.cr6.eq) goto loc_820FD01C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fcfec
	if (ctx.cr6.eq) goto loc_820FCFEC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x820fcfec
	if (ctx.cr6.eq) goto loc_820FCFEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820fcfec
	if (ctx.cr6.eq) goto loc_820FCFEC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820fcfec
	if (ctx.cr6.eq) goto loc_820FCFEC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820fcfec
	if (ctx.cr6.eq) goto loc_820FCFEC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x820fcfec
	if (ctx.cr6.eq) goto loc_820FCFEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820fcff0
	if (!ctx.cr6.eq) goto loc_820FCFF0;
loc_820FCFEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FCFF0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fd014
	if (ctx.cr6.eq) goto loc_820FD014;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820fd014
	if (!ctx.cr6.gt) goto loc_820FD014;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_820FD014:
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x820fd050
	if (!ctx.cr6.lt) goto loc_820FD050;
loc_820FD01C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x820fcf48
	if (ctx.cr6.lt) goto loc_820FCF48;
loc_820FD02C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x820fcf34
	if (ctx.cr6.lt) goto loc_820FCF34;
loc_820FD03C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_820FD048:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x820fcf94
	goto loc_820FCF94;
loc_820FD050:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD05C"))) PPC_WEAK_FUNC(sub_820FD05C);
PPC_FUNC_IMPL(__imp__sub_820FD05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD060"))) PPC_WEAK_FUNC(sub_820FD060);
PPC_FUNC_IMPL(__imp__sub_820FD060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x820FD068;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820fd16c
	if (ctx.cr6.eq) goto loc_820FD16C;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r20,-1
	ctx.r20.s64 = -1;
loc_820FD0A8:
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fd15c
	if (ctx.cr6.eq) goto loc_820FD15C;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_820FD0BC:
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820fd14c
	if (!ctx.cr6.eq) goto loc_820FD14C;
	// lwz r11,1248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd104
	if (ctx.cr6.eq) goto loc_820FD104;
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FD0E8:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fd178
	if (ctx.cr6.eq) goto loc_820FD178;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fd0e8
	if (ctx.cr6.lt) goto loc_820FD0E8;
loc_820FD104:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820FD108:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fcd20
	ctx.lr = 0x820FD114;
	sub_820FCD20(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fd14c
	if (ctx.cr6.eq) goto loc_820FD14C;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r22,r4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820fd144
	if (!ctx.cr6.eq) goto loc_820FD144;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820fd144
	if (!ctx.cr6.gt) goto loc_820FD144;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_820FD144:
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x820fd180
	if (!ctx.cr6.lt) goto loc_820FD180;
loc_820FD14C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x820fd0bc
	if (ctx.cr6.lt) goto loc_820FD0BC;
loc_820FD15C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x820fd0a8
	if (ctx.cr6.lt) goto loc_820FD0A8;
loc_820FD16C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
loc_820FD178:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x820fd108
	goto loc_820FD108;
loc_820FD180:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD18C"))) PPC_WEAK_FUNC(sub_820FD18C);
PPC_FUNC_IMPL(__imp__sub_820FD18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD190"))) PPC_WEAK_FUNC(sub_820FD190);
PPC_FUNC_IMPL(__imp__sub_820FD190) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820FD198;
	__savegprlr_28(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd274
	if (ctx.cr6.eq) goto loc_820FD274;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_820FD1C8:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820fd264
	if (ctx.cr6.eq) goto loc_820FD264;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_820FD1DC:
	// lwz r8,64(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fd24c
	if (!ctx.cr6.eq) goto loc_820FD24C;
	// lwz r11,1248(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd24c
	if (ctx.cr6.eq) goto loc_820FD24C;
	// ld r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FD208:
	// ld r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r28,r8
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fd228
	if (ctx.cr6.eq) goto loc_820FD228;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fd208
	if (ctx.cr6.lt) goto loc_820FD208;
	// b 0x820fd24c
	goto loc_820FD24C;
loc_820FD228:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fd24c
	if (ctx.cr6.lt) goto loc_820FD24C;
	// lwz r9,32(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820fd24c
	if (!ctx.cr6.eq) goto loc_820FD24C;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r11,723(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 723);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820fd260
	if (!ctx.cr6.eq) goto loc_820FD260;
loc_820FD24C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 + 72;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x820fd1dc
	if (ctx.cr6.lt) goto loc_820FD1DC;
	// b 0x820fd264
	goto loc_820FD264;
loc_820FD260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FD264:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820fd1c8
	if (!ctx.cr6.eq) goto loc_820FD1C8;
loc_820FD274:
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD278"))) PPC_WEAK_FUNC(sub_820FD278);
PPC_FUNC_IMPL(__imp__sub_820FD278) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820FD280;
	__savegprlr_28(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd35c
	if (ctx.cr6.eq) goto loc_820FD35C;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_820FD2B0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820fd34c
	if (ctx.cr6.eq) goto loc_820FD34C;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_820FD2C4:
	// lwz r8,64(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fd334
	if (!ctx.cr6.eq) goto loc_820FD334;
	// lwz r11,1248(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd334
	if (ctx.cr6.eq) goto loc_820FD334;
	// ld r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FD2F0:
	// ld r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r28,r8
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fd310
	if (ctx.cr6.eq) goto loc_820FD310;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fd2f0
	if (ctx.cr6.lt) goto loc_820FD2F0;
	// b 0x820fd334
	goto loc_820FD334;
loc_820FD310:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fd334
	if (ctx.cr6.lt) goto loc_820FD334;
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820fd334
	if (!ctx.cr6.eq) goto loc_820FD334;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r11,723(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 723);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820fd348
	if (!ctx.cr6.eq) goto loc_820FD348;
loc_820FD334:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 + 72;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x820fd2c4
	if (ctx.cr6.lt) goto loc_820FD2C4;
	// b 0x820fd34c
	goto loc_820FD34C;
loc_820FD348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FD34C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820fd2b0
	if (!ctx.cr6.eq) goto loc_820FD2B0;
loc_820FD35C:
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD360"))) PPC_WEAK_FUNC(sub_820FD360);
PPC_FUNC_IMPL(__imp__sub_820FD360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad0
	ctx.lr = 0x820FD368;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r21,r11,26080
	ctx.r21.s64 = ctx.r11.s64 + 26080;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r8,r30,6180
	ctx.r8.s64 = ctx.r30.s64 + 6180;
	// ori r10,r11,12448
	ctx.r10.u64 = ctx.r11.u64 | 12448;
	// addi r9,r30,6532
	ctx.r9.s64 = ctx.r30.s64 + 6532;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwzx r22,r21,r10
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
loc_820FD394:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r19,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FD3A8:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820fd3a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD3A8;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fd394
	if (!ctx.cr6.eq) goto loc_820FD394;
	// lwz r9,16(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820fd6e0
	if (!ctx.cr6.gt) goto loc_820FD6E0;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_820FD3DC:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r23,-1
	ctx.r23.s64 = -1;
	// add r8,r20,r11
	ctx.r8.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// ble cr6,0x820fd554
	if (!ctx.cr6.gt) goto loc_820FD554;
loc_820FD3F4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x820fd410
	if (ctx.cr6.lt) goto loc_820FD410;
	// add r6,r20,r11
	ctx.r6.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r11,r23,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r23.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x820fd414
	goto loc_820FD414;
loc_820FD410:
	// li r24,-1
	ctx.r24.s64 = -1;
loc_820FD414:
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x820fd53c
	if (!ctx.cr6.gt) goto loc_820FD53C;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_820FD428:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// add r29,r26,r11
	ctx.r29.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ble cr6,0x820fd528
	if (!ctx.cr6.gt) goto loc_820FD528;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_820FD444:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fd514
	if (!ctx.cr6.eq) goto loc_820FD514;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x820fd514
	if (!ctx.cr6.eq) goto loc_820FD514;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820fd514
	if (!ctx.cr6.eq) goto loc_820FD514;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fcd20
	ctx.lr = 0x820FD480;
	sub_820FCD20(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fd514
	if (ctx.cr6.eq) goto loc_820FD514;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x820fd514
	if (!ctx.cr6.gt) goto loc_820FD514;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addis r10,r21,3
	ctx.r10.s64 = ctx.r21.s64 + 196608;
	// addi r3,r10,20656
	ctx.r3.s64 = ctx.r10.s64 + 20656;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x822d2c68
	ctx.lr = 0x820FD4AC;
	sub_822D2C68(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x820fd4fc
	if (ctx.cr6.eq) goto loc_820FD4FC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r10,1545
	ctx.r4.s64 = ctx.r10.s64 + 1545;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// bge cr6,0x820fd514
	if (!ctx.cr6.lt) goto loc_820FD514;
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,313
	ctx.r3.s64 = ctx.r10.s64 + 313;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x820fd514
	goto loc_820FD514;
loc_820FD4FC:
	// addi r8,r11,1633
	ctx.r8.s64 = ctx.r11.s64 + 1633;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fd514
	if (!ctx.cr6.eq) goto loc_820FD514;
	// stwx r31,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
loc_820FD514:
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820fd444
	if (ctx.cr6.lt) goto loc_820FD444;
loc_820FD528:
	// lwz r5,8(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820fd428
	if (ctx.cr6.lt) goto loc_820FD428;
loc_820FD53C:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r4,r20,r11
	ctx.r4.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820fd3f4
	if (ctx.cr6.lt) goto loc_820FD3F4;
loc_820FD554:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r23,-1
	ctx.r23.s64 = -1;
	// add r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// ble cr6,0x820fd6cc
	if (!ctx.cr6.gt) goto loc_820FD6CC;
loc_820FD56C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x820fd588
	if (ctx.cr6.lt) goto loc_820FD588;
	// add r8,r20,r11
	ctx.r8.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r11,r23,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r23.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// b 0x820fd58c
	goto loc_820FD58C;
loc_820FD588:
	// li r24,-1
	ctx.r24.s64 = -1;
loc_820FD58C:
	// lwz r6,8(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x820fd6b4
	if (!ctx.cr6.gt) goto loc_820FD6B4;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_820FD5A0:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// add r29,r26,r11
	ctx.r29.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x820fd6a0
	if (!ctx.cr6.gt) goto loc_820FD6A0;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_820FD5BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r3,r4,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fd68c
	if (!ctx.cr6.eq) goto loc_820FD68C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x820fd68c
	if (!ctx.cr6.eq) goto loc_820FD68C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820fd68c
	if (!ctx.cr6.eq) goto loc_820FD68C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fcd20
	ctx.lr = 0x820FD5F8;
	sub_820FCD20(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fd68c
	if (!ctx.cr6.eq) goto loc_820FD68C;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x820fd68c
	if (!ctx.cr6.gt) goto loc_820FD68C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addis r10,r21,3
	ctx.r10.s64 = ctx.r21.s64 + 196608;
	// addi r3,r10,20656
	ctx.r3.s64 = ctx.r10.s64 + 20656;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x822d2c68
	ctx.lr = 0x820FD624;
	sub_822D2C68(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// beq cr6,0x820fd674
	if (ctx.cr6.eq) goto loc_820FD674;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r10,1545
	ctx.r6.s64 = ctx.r10.s64 + 1545;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// bge cr6,0x820fd68c
	if (!ctx.cr6.lt) goto loc_820FD68C;
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r10,313
	ctx.r5.s64 = ctx.r10.s64 + 313;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r31.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x820fd68c
	goto loc_820FD68C;
loc_820FD674:
	// addi r11,r11,1633
	ctx.r11.s64 = ctx.r11.s64 + 1633;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fd68c
	if (!ctx.cr6.eq) goto loc_820FD68C;
	// stwx r31,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
loc_820FD68C:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fd5bc
	if (ctx.cr6.lt) goto loc_820FD5BC;
loc_820FD6A0:
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820fd5a0
	if (ctx.cr6.lt) goto loc_820FD5A0;
loc_820FD6B4:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r7,r20,r11
	ctx.r7.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r23,r6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820fd56c
	if (ctx.cr6.lt) goto loc_820FD56C;
loc_820FD6CC:
	// lwz r5,16(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r20,r20,24
	ctx.r20.s64 = ctx.r20.s64 + 24;
	// cmpw cr6,r18,r5
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820fd3dc
	if (ctx.cr6.lt) goto loc_820FD3DC;
loc_820FD6E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD6E8"))) PPC_WEAK_FUNC(sub_820FD6E8);
PPC_FUNC_IMPL(__imp__sub_820FD6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x820FD6F0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mulli r11,r20,56
	ctx.r11.s64 = ctx.r20.s64 * 56;
	// addi r10,r20,1545
	ctx.r10.s64 = ctx.r20.s64 + 1545;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r26,6532
	ctx.r24.s64 = ctx.r26.s64 + 6532;
	// addi r23,r11,1252
	ctx.r23.s64 = ctx.r11.s64 + 1252;
	// add r22,r10,r26
	ctx.r22.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r19,-1
	ctx.r19.s64 = -1;
loc_820FD720:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x820fd7a8
	if (!ctx.cr6.gt) goto loc_820FD7A8;
	// lwz r28,1248(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1248);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r30,692(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
loc_820FD73C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820fd770
	if (ctx.cr6.eq) goto loc_820FD770;
	// ld r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// addi r11,r28,792
	ctx.r11.s64 = ctx.r28.s64 + 792;
loc_820FD754:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x820fd834
	if (ctx.cr6.eq) goto loc_820FD834;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820fd754
	if (ctx.cr6.lt) goto loc_820FD754;
loc_820FD770:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_820FD774:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fcd20
	ctx.lr = 0x820FD77C;
	sub_820FCD20(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fd798
	if (ctx.cr6.eq) goto loc_820FD798;
	// add r6,r31,r26
	ctx.r6.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r5,448(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 448);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// bne cr6,0x820fd83c
	if (!ctx.cr6.eq) goto loc_820FD83C;
loc_820FD798:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x820fd73c
	if (ctx.cr6.lt) goto loc_820FD73C;
loc_820FD7A8:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fd810
	if (ctx.cr6.eq) goto loc_820FD810;
	// bl 0x822d4430
	ctx.lr = 0x820FD7B8;
	sub_822D4430(ctx, base);
	// cmpw cr6,r3,r20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x820fd810
	if (!ctx.cr6.eq) goto loc_820FD810;
	// lwz r11,1248(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd7fc
	if (ctx.cr6.eq) goto loc_820FD7FC;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
	// ld r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
loc_820FD7E0:
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r3,r8
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fd800
	if (ctx.cr6.eq) goto loc_820FD800;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fd7e0
	if (ctx.cr6.lt) goto loc_820FD7E0;
loc_820FD7FC:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_820FD800:
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x820fd83c
	if (!ctx.cr6.eq) goto loc_820FD83C;
loc_820FD810:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// addi r23,r23,448
	ctx.r23.s64 = ctx.r23.s64 + 448;
	// cmpwi cr6,r21,11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 11, ctx.xer);
	// blt cr6,0x820fd720
	if (ctx.cr6.lt) goto loc_820FD720;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820FD834:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x820fd774
	goto loc_820FD774;
loc_820FD83C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FD848"))) PPC_WEAK_FUNC(sub_820FD848);
PPC_FUNC_IMPL(__imp__sub_820FD848) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x820FD850;
	__savegprlr_21(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r23,r11,26080
	ctx.r23.s64 = ctx.r11.s64 + 26080;
	// blt cr6,0x820fdac0
	if (ctx.cr6.lt) goto loc_820FDAC0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r3,16
	ctx.r24.s64 = ctx.r3.s64 + 16;
loc_820FD874:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r5,-2
	ctx.r5.s64 = -2;
	// ori r10,r11,12448
	ctx.r10.u64 = ctx.r11.u64 | 12448;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r6,r23,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// lwz r27,8(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fd9ac
	if (ctx.cr6.eq) goto loc_820FD9AC;
	// lwz r25,4(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_820FD8A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd994
	if (ctx.cr6.eq) goto loc_820FD994;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_820FD8B4:
	// lwz r9,64(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820fd984
	if (!ctx.cr6.eq) goto loc_820FD984;
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820fd984
	if (!ctx.cr6.eq) goto loc_820FD984;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820fd8e8
	if (ctx.cr6.eq) goto loc_820FD8E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820fd8ec
	if (!ctx.cr6.eq) goto loc_820FD8EC;
loc_820FD8E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FD8EC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fd984
	if (!ctx.cr6.eq) goto loc_820FD984;
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd984
	if (ctx.cr6.eq) goto loc_820FD984;
	// ld r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FD910:
	// ld r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r21,r8
	ctx.cr6.compare<uint64_t>(ctx.r21.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fd930
	if (ctx.cr6.eq) goto loc_820FD930;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fd910
	if (ctx.cr6.lt) goto loc_820FD910;
	// b 0x820fd984
	goto loc_820FD984;
loc_820FD930:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fd984
	if (ctx.cr6.lt) goto loc_820FD984;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r8,448(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 448);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fd984
	if (!ctx.cr6.gt) goto loc_820FD984;
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fd970
	if (ctx.cr6.lt) goto loc_820FD970;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820fd974
	goto loc_820FD974;
loc_820FD970:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820FD974:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x820fd984
	if (!ctx.cr6.gt) goto loc_820FD984;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_820FD984:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 + 72;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fd8b4
	if (!ctx.cr6.eq) goto loc_820FD8B4;
loc_820FD994:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820fd8a0
	if (!ctx.cr6.eq) goto loc_820FD8A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820fd9bc
	if (!ctx.cr6.eq) goto loc_820FD9BC;
loc_820FD9AC:
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// stw r7,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r7.u32);
	// b 0x820fdaa8
	goto loc_820FDAA8;
loc_820FD9BC:
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820fda9c
	if (!ctx.cr6.lt) goto loc_820FDA9C;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
loc_820FD9E0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fda9c
	if (!ctx.cr6.eq) goto loc_820FDA9C;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fda94
	if (ctx.cr6.eq) goto loc_820FDA94;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_820FDA04:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fda84
	if (ctx.cr6.eq) goto loc_820FDA84;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_820FDA1C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fda6c
	if (!ctx.cr6.eq) goto loc_820FDA6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x820fda44
	if (ctx.cr6.eq) goto loc_820FDA44;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x820fda48
	if (!ctx.cr6.eq) goto loc_820FDA48;
loc_820FDA44:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820FDA48:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fda6c
	if (!ctx.cr6.eq) goto loc_820FDA6C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820fda6c
	if (!ctx.cr6.eq) goto loc_820FDA6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x820fda80
	if (ctx.cr6.eq) goto loc_820FDA80;
loc_820FDA6C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820fda1c
	if (ctx.cr6.lt) goto loc_820FDA1C;
	// b 0x820fda84
	goto loc_820FDA84;
loc_820FDA80:
	// li r30,1
	ctx.r30.s64 = 1;
loc_820FDA84:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fda04
	if (!ctx.cr6.eq) goto loc_820FDA04;
loc_820FDA94:
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x820fd9e0
	if (ctx.cr6.lt) goto loc_820FD9E0;
loc_820FDA9C:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r4,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r4.u32);
	// stw r9,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r9.u32);
loc_820FDAA8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820fd874
	if (!ctx.cr6.gt) goto loc_820FD874;
loc_820FDAC0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820fdd28
	if (ctx.cr6.lt) goto loc_820FDD28;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r3,80
	ctx.r24.s64 = ctx.r3.s64 + 80;
loc_820FDAD8:
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r5,-2
	ctx.r5.s64 = -2;
	// ori r7,r8,12448
	ctx.r7.u64 = ctx.r8.u64 | 12448;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r6,r23,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r7.u32);
	// lwz r27,8(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fdc14
	if (ctx.cr6.eq) goto loc_820FDC14;
	// lwz r25,4(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_820FDB04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fdbfc
	if (ctx.cr6.eq) goto loc_820FDBFC;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_820FDB18:
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fdbec
	if (!ctx.cr6.eq) goto loc_820FDBEC;
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820fdbec
	if (!ctx.cr6.eq) goto loc_820FDBEC;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820fdb4c
	if (ctx.cr6.eq) goto loc_820FDB4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820fdb50
	if (!ctx.cr6.eq) goto loc_820FDB50;
loc_820FDB4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FDB50:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fdbec
	if (ctx.cr6.eq) goto loc_820FDBEC;
	// lwz r11,1248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fdbec
	if (ctx.cr6.eq) goto loc_820FDBEC;
	// ld r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
loc_820FDB78:
	// ld r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r21,r8
	ctx.cr6.compare<uint64_t>(ctx.r21.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fdb98
	if (ctx.cr6.eq) goto loc_820FDB98;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fdb78
	if (ctx.cr6.lt) goto loc_820FDB78;
	// b 0x820fdbec
	goto loc_820FDBEC;
loc_820FDB98:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fdbec
	if (ctx.cr6.lt) goto loc_820FDBEC;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820fdbec
	if (!ctx.cr6.gt) goto loc_820FDBEC;
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fdbd8
	if (ctx.cr6.lt) goto loc_820FDBD8;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820fdbdc
	goto loc_820FDBDC;
loc_820FDBD8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820FDBDC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x820fdbec
	if (!ctx.cr6.gt) goto loc_820FDBEC;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_820FDBEC:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 + 72;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fdb18
	if (!ctx.cr6.eq) goto loc_820FDB18;
loc_820FDBFC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820fdb04
	if (!ctx.cr6.eq) goto loc_820FDB04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820fdc24
	if (!ctx.cr6.eq) goto loc_820FDC24;
loc_820FDC14:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// stw r10,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r10.u32);
	// b 0x820fdd10
	goto loc_820FDD10;
loc_820FDC24:
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820fdd04
	if (!ctx.cr6.lt) goto loc_820FDD04;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
loc_820FDC48:
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fdd04
	if (!ctx.cr6.eq) goto loc_820FDD04;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fdcfc
	if (ctx.cr6.eq) goto loc_820FDCFC;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_820FDC6C:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fdcec
	if (ctx.cr6.eq) goto loc_820FDCEC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_820FDC84:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fdcd4
	if (!ctx.cr6.eq) goto loc_820FDCD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x820fdcac
	if (ctx.cr6.eq) goto loc_820FDCAC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x820fdcb0
	if (!ctx.cr6.eq) goto loc_820FDCB0;
loc_820FDCAC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820FDCB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdcd4
	if (ctx.cr6.eq) goto loc_820FDCD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820fdcd4
	if (!ctx.cr6.eq) goto loc_820FDCD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x820fdce8
	if (ctx.cr6.eq) goto loc_820FDCE8;
loc_820FDCD4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820fdc84
	if (ctx.cr6.lt) goto loc_820FDC84;
	// b 0x820fdcec
	goto loc_820FDCEC;
loc_820FDCE8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_820FDCEC:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fdc6c
	if (!ctx.cr6.eq) goto loc_820FDC6C;
loc_820FDCFC:
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x820fdc48
	if (ctx.cr6.lt) goto loc_820FDC48;
loc_820FDD04:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r4,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r4.u32);
	// stw r9,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r9.u32);
loc_820FDD10:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820fdad8
	if (!ctx.cr6.gt) goto loc_820FDAD8;
loc_820FDD28:
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FDD2C"))) PPC_WEAK_FUNC(sub_820FDD2C);
PPC_FUNC_IMPL(__imp__sub_820FDD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FDD30"))) PPC_WEAK_FUNC(sub_820FDD30);
PPC_FUNC_IMPL(__imp__sub_820FDD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r8,r4,5112
	ctx.r8.s64 = ctx.r4.s64 + 5112;
	// addi r9,r3,3396
	ctx.r9.s64 = ctx.r3.s64 + 3396;
	// addi r10,r4,4904
	ctx.r10.s64 = ctx.r4.s64 + 4904;
	// addi r11,r3,3188
	ctx.r11.s64 = ctx.r3.s64 + 3188;
	// li r7,13
	ctx.r7.s64 = 13;
loc_820FDD44:
	// lfs f0,-260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -260);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stfs f0,-260(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -260, temp.u32);
	// lbz r6,-260(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -260);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r6,-260(r8)
	PPC_STORE_U8(ctx.r8.u32 + -260, ctx.r6.u8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lfs f13,-256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -256);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-256(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -256, temp.u32);
	// lbz r5,-259(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + -259);
	// stb r5,-259(r8)
	PPC_STORE_U8(ctx.r8.u32 + -259, ctx.r5.u8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lfs f12,-252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-252(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -252, temp.u32);
	// lbz r6,-258(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -258);
	// stb r6,-258(r8)
	PPC_STORE_U8(ctx.r8.u32 + -258, ctx.r6.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r6,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r6.u8);
	// lfs f11,-248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-248(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -248, temp.u32);
	// lbz r5,-257(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + -257);
	// stb r5,-257(r8)
	PPC_STORE_U8(ctx.r8.u32 + -257, ctx.r5.u8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r5,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r5.u8);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne cr6,0x820fdd44
	if (!ctx.cr6.eq) goto loc_820FDD44;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,5164
	ctx.r9.s64 = ctx.r4.s64 + 5164;
	// addi r10,r3,3448
	ctx.r10.s64 = ctx.r3.s64 + 3448;
	// addi r8,r3,3880
	ctx.r8.s64 = ctx.r3.s64 + 3880;
	// addi r7,r4,5596
	ctx.r7.s64 = ctx.r4.s64 + 5596;
loc_820FDDF4:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// blt cr6,0x820fddf4
	if (ctx.cr6.lt) goto loc_820FDDF4;
	// addi r10,r4,5708
	ctx.r10.s64 = ctx.r4.s64 + 5708;
	// addi r11,r3,3992
	ctx.r11.s64 = ctx.r3.s64 + 3992;
	// li r9,55
	ctx.r9.s64 = 55;
loc_820FDE24:
	// lfs f10,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f10,-4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne cr6,0x820fde24
	if (!ctx.cr6.eq) goto loc_820FDE24;
	// lwz r11,5088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5088);
	// stw r11,6804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6804, ctx.r11.u32);
	// lwz r10,5092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5092);
	// stw r10,6808(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6808, ctx.r10.u32);
	// lwz r9,5096(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5096);
	// stw r9,6812(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6812, ctx.r9.u32);
	// lwz r8,5100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5100);
	// stw r8,6816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6816, ctx.r8.u32);
	// lwz r7,5104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5104);
	// stw r7,6820(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6820, ctx.r7.u32);
	// lwz r6,5108(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5108);
	// stw r6,6824(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6824, ctx.r6.u32);
	// lwz r5,5112(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	// stw r5,6828(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6828, ctx.r5.u32);
	// lwz r11,5116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5116);
	// stw r11,6832(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6832, ctx.r11.u32);
	// lwz r10,5120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	// stw r10,6836(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6836, ctx.r10.u32);
	// lwz r9,5124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5124);
	// stw r9,6840(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6840, ctx.r9.u32);
	// lwz r8,5128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	// stw r8,6844(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6844, ctx.r8.u32);
	// lwz r7,5132(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5132);
	// stw r7,6848(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6848, ctx.r7.u32);
	// lwz r6,5136(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5136);
	// stw r6,6852(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6852, ctx.r6.u32);
	// lwz r5,5140(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5140);
	// stw r5,6856(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6856, ctx.r5.u32);
	// lwz r11,5144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5144);
	// stw r11,6860(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6860, ctx.r11.u32);
	// lwz r10,5148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5148);
	// stw r10,6864(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6864, ctx.r10.u32);
	// lwz r9,5152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5152);
	// stw r9,6868(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6868, ctx.r9.u32);
	// lwz r8,5156(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5156);
	// stw r8,6872(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6872, ctx.r8.u32);
	// lwz r7,5160(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
	// stw r7,6876(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6876, ctx.r7.u32);
	// lwz r6,5164(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5164);
	// stw r6,6880(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6880, ctx.r6.u32);
	// lwz r5,5168(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5168);
	// stw r5,6884(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6884, ctx.r5.u32);
	// lfs f5,5172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5172);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,6888(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 6888, temp.u32);
	// lfs f4,5176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5176);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,6892(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 6892, temp.u32);
	// lfs f3,5180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5180);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,6896(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 6896, temp.u32);
	// lfs f2,5184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5184);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,6900(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 6900, temp.u32);
	// lwz r11,5188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5188);
	// stw r11,6904(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6904, ctx.r11.u32);
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// stw r10,6908(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6908, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FDF3C"))) PPC_WEAK_FUNC(sub_820FDF3C);
PPC_FUNC_IMPL(__imp__sub_820FDF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FDF40"))) PPC_WEAK_FUNC(sub_820FDF40);
PPC_FUNC_IMPL(__imp__sub_820FDF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,-1416
	ctx.r9.s64 = ctx.r11.s64 + -1416;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r8,393(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 393);
loc_820FDF54:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fdf64
	if (ctx.cr6.eq) goto loc_820FDF64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820fdf6c
	goto loc_820FDF6C;
loc_820FDF64:
	// addi r11,r9,345
	ctx.r11.s64 = ctx.r9.s64 + 345;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
loc_820FDF6C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fdf7c
	if (ctx.cr6.eq) goto loc_820FDF7C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FDF7C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fdf8c
	if (ctx.cr6.eq) goto loc_820FDF8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820fdf94
	goto loc_820FDF94;
loc_820FDF8C:
	// addi r6,r9,353
	ctx.r6.s64 = ctx.r9.s64 + 353;
	// lbzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
loc_820FDF94:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fdfa4
	if (ctx.cr6.eq) goto loc_820FDFA4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FDFA4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fdfb4
	if (ctx.cr6.eq) goto loc_820FDFB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820fdfbc
	goto loc_820FDFBC;
loc_820FDFB4:
	// addi r4,r9,361
	ctx.r4.s64 = ctx.r9.s64 + 361;
	// lbzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
loc_820FDFBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fdfcc
	if (ctx.cr6.eq) goto loc_820FDFCC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FDFCC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x820fdf54
	if (ctx.cr6.lt) goto loc_820FDF54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FDFDC"))) PPC_WEAK_FUNC(sub_820FDFDC);
PPC_FUNC_IMPL(__imp__sub_820FDFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FDFE0"))) PPC_WEAK_FUNC(sub_820FDFE0);
PPC_FUNC_IMPL(__imp__sub_820FDFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820FDFE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r11,12468
	ctx.r10.u64 = ctx.r11.u64 | 12468;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fe098
	if (!ctx.cr6.gt) goto loc_820FE098;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r29,r11,13672
	ctx.r29.s64 = ctx.r11.s64 + 13672;
loc_820FE018:
	// ld r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d2710
	ctx.lr = 0x820FE02C;
	sub_822D2710(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fe07c
	if (ctx.cr6.eq) goto loc_820FE07C;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x820fe07c
	if (ctx.cr6.eq) goto loc_820FE07C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r27,2992
	ctx.r11.s64 = ctx.r27.s64 + 2992;
loc_820FE048:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x820fe070
	if (ctx.cr6.eq) goto loc_820FE070;
	// cmpld cr6,r10,r31
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, ctx.xer);
	// beq cr6,0x820fe07c
	if (ctx.cr6.eq) goto loc_820FE07C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,150
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 150, ctx.xer);
	// blt cr6,0x820fe048
	if (ctx.cr6.lt) goto loc_820FE048;
	// b 0x820fe07c
	goto loc_820FE07C;
loc_820FE070:
	// addi r8,r9,374
	ctx.r8.s64 = ctx.r9.s64 + 374;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r31,r7,r27
	PPC_STORE_U64(ctx.r7.u32 + ctx.r27.u32, ctx.r31.u64);
loc_820FE07C:
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// ori r5,r6,12468
	ctx.r5.u64 = ctx.r6.u64 | 12468;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fe018
	if (ctx.cr6.lt) goto loc_820FE018;
loc_820FE098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FE0A0"))) PPC_WEAK_FUNC(sub_820FE0A0);
PPC_FUNC_IMPL(__imp__sub_820FE0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,26080
	ctx.r6.s64 = ctx.r11.s64 + 26080;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,20660
	ctx.r10.u64 = ctx.r11.u64 | 20660;
	// lwzx r7,r6,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addis r11,r6,3
	ctx.r11.s64 = ctx.r6.s64 + 196608;
	// addi r5,r11,21288
	ctx.r5.s64 = ctx.r11.s64 + 21288;
loc_820FE0C8:
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x820fe11c
	if (ctx.cr6.eq) goto loc_820FE11C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,4192
	ctx.r10.s64 = ctx.r3.s64 + 4192;
loc_820FE0DC:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x820fe104
	if (ctx.cr6.eq) goto loc_820FE104;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x820fe11c
	if (ctx.cr6.eq) goto loc_820FE11C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// blt cr6,0x820fe0dc
	if (ctx.cr6.lt) goto loc_820FE0DC;
	// b 0x820fe11c
	goto loc_820FE11C;
loc_820FE104:
	// addi r9,r11,524
	ctx.r9.s64 = ctx.r11.s64 + 524;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,20660
	ctx.r10.u64 = ctx.r11.u64 | 20660;
	// stdx r8,r7,r3
	PPC_STORE_U64(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u64);
	// lwzx r7,r6,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_820FE11C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820fe0c8
	if (ctx.cr6.lt) goto loc_820FE0C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE130"))) PPC_WEAK_FUNC(sub_820FE130);
PPC_FUNC_IMPL(__imp__sub_820FE130) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,49147
	ctx.r8.u64 = ctx.r9.u64 | 49147;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fe21c
	if (!ctx.cr6.eq) goto loc_820FE21C;
	// bl 0x820fbb08
	ctx.lr = 0x820FE160;
	sub_820FBB08(ctx, base);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x820fe1a0
	if (ctx.cr6.eq) goto loc_820FE1A0;
	// lwz r5,2892(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2892);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820fe1a0
	if (!ctx.cr6.gt) goto loc_820FE1A0;
	// addi r11,r10,1596
	ctx.r11.s64 = ctx.r10.s64 + 1596;
loc_820FE180:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820fe21c
	if (ctx.cr6.eq) goto loc_820FE21C;
	// lwz r8,2892(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2892);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820fe180
	if (ctx.cr6.lt) goto loc_820FE180;
loc_820FE1A0:
	// lwz r8,296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820fe1d4
	if (!ctx.cr6.gt) goto loc_820FE1D4;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_820FE1B4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820fe21c
	if (ctx.cr6.eq) goto loc_820FE21C;
	// lwz r6,296(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820fe1b4
	if (ctx.cr6.lt) goto loc_820FE1B4;
loc_820FE1D4:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r4,14715
	ctx.r9.u64 = ctx.r4.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// stwx r8,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,296(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r3.u32);
loc_820FE21C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE22C"))) PPC_WEAK_FUNC(sub_820FE22C);
PPC_FUNC_IMPL(__imp__sub_820FE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE230"))) PPC_WEAK_FUNC(sub_820FE230);
PPC_FUNC_IMPL(__imp__sub_820FE230) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_820FE244:
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// li r11,8
	ctx.r11.s64 = 8;
loc_820FE24C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// bne cr6,0x820fe24c
	if (!ctx.cr6.eq) goto loc_820FE24C;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fe244
	if (!ctx.cr6.eq) goto loc_820FE244;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r7,72(r4)
	PPC_STORE_U8(ctx.r4.u32 + 72, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE284"))) PPC_WEAK_FUNC(sub_820FE284);
PPC_FUNC_IMPL(__imp__sub_820FE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE288"))) PPC_WEAK_FUNC(sub_820FE288);
PPC_FUNC_IMPL(__imp__sub_820FE288) {
	PPC_FUNC_PROLOGUE();
	// li r6,232
	ctx.r6.s64 = 232;
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// addi r9,r4,336
	ctx.r9.s64 = ctx.r4.s64 + 336;
loc_820FE294:
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_820FE29C:
	// lbz r10,-8(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + -8);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe2b4
	if (!ctx.cr6.eq) goto loc_820FE2B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE2B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe304
	if (ctx.cr6.eq) goto loc_820FE304;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe2d4
	if (!ctx.cr6.eq) goto loc_820FE2D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE2D4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe304
	if (!ctx.cr6.eq) goto loc_820FE304;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x820fe304
	if (!ctx.cr6.lt) goto loc_820FE304;
	// addi r3,r8,-2
	ctx.r3.s64 = ctx.r8.s64 + -2;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r3,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
loc_820FE304:
	// lbz r11,-8(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + -8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe31c
	if (!ctx.cr6.eq) goto loc_820FE31C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE31C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe338
	if (ctx.cr6.eq) goto loc_820FE338;
	// lbz r11,-8(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + -8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,-8(r7)
	PPC_STORE_U8(ctx.r7.u32 + -8, ctx.r10.u8);
	// b 0x820fe344
	goto loc_820FE344;
loc_820FE338:
	// lbz r3,-8(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + -8);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,-8(r7)
	PPC_STORE_U8(ctx.r7.u32 + -8, ctx.r11.u8);
loc_820FE344:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r3,r10,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fe35c
	if (!ctx.cr6.eq) goto loc_820FE35C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE35C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe3ac
	if (ctx.cr6.eq) goto loc_820FE3AC;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe37c
	if (!ctx.cr6.eq) goto loc_820FE37C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE37C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fe3ac
	if (!ctx.cr6.eq) goto loc_820FE3AC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x820fe3ac
	if (!ctx.cr6.lt) goto loc_820FE3AC;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r10,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820FE3AC:
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe3c4
	if (!ctx.cr6.eq) goto loc_820FE3C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE3C4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe3e0
	if (ctx.cr6.eq) goto loc_820FE3E0;
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// b 0x820fe3ec
	goto loc_820FE3EC;
loc_820FE3E0:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r3.u8);
loc_820FE3EC:
	// lbz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe404
	if (!ctx.cr6.eq) goto loc_820FE404;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE404:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe450
	if (ctx.cr6.eq) goto loc_820FE450;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe424
	if (!ctx.cr6.eq) goto loc_820FE424;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE424:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe450
	if (!ctx.cr6.eq) goto loc_820FE450;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x820fe450
	if (!ctx.cr6.lt) goto loc_820FE450;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820FE450:
	// lbz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe468
	if (!ctx.cr6.eq) goto loc_820FE468;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE468:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe484
	if (ctx.cr6.eq) goto loc_820FE484;
	// lbz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stb r11,8(r7)
	PPC_STORE_U8(ctx.r7.u32 + 8, ctx.r11.u8);
	// b 0x820fe490
	goto loc_820FE490;
loc_820FE484:
	// lbz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// rlwinm r3,r10,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,8(r7)
	PPC_STORE_U8(ctx.r7.u32 + 8, ctx.r3.u8);
loc_820FE490:
	// lbz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe4a8
	if (!ctx.cr6.eq) goto loc_820FE4A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE4A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe4f8
	if (ctx.cr6.eq) goto loc_820FE4F8;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe4c8
	if (!ctx.cr6.eq) goto loc_820FE4C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE4C8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe4f8
	if (!ctx.cr6.eq) goto loc_820FE4F8;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x820fe4f8
	if (!ctx.cr6.lt) goto loc_820FE4F8;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r3,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
loc_820FE4F8:
	// lbz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe510
	if (!ctx.cr6.eq) goto loc_820FE510;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE510:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe52c
	if (ctx.cr6.eq) goto loc_820FE52C;
	// lbz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r10.u8);
	// b 0x820fe538
	goto loc_820FE538;
loc_820FE52C:
	// lbz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r11.u8);
loc_820FE538:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x820fe29c
	if (ctx.cr6.lt) goto loc_820FE29C;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r6,296
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 296, ctx.xer);
	// blt cr6,0x820fe294
	if (ctx.cr6.lt) goto loc_820FE294;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE564"))) PPC_WEAK_FUNC(sub_820FE564);
PPC_FUNC_IMPL(__imp__sub_820FE564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE568"))) PPC_WEAK_FUNC(sub_820FE568);
PPC_FUNC_IMPL(__imp__sub_820FE568) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe57c
	if (ctx.cr6.eq) goto loc_820FE57C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FE57C:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE5A4"))) PPC_WEAK_FUNC(sub_820FE5A4);
PPC_FUNC_IMPL(__imp__sub_820FE5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE5A8"))) PPC_WEAK_FUNC(sub_820FE5A8);
PPC_FUNC_IMPL(__imp__sub_820FE5A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x820fe5d0
	if (ctx.cr6.eq) goto loc_820FE5D0;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x820fe5dc
	goto loc_820FE5DC;
loc_820FE5D0:
	// lbzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// andi. r5,r6,253
	ctx.r5.u64 = ctx.r6.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stbx r5,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u8);
loc_820FE5DC:
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe600
	if (ctx.cr6.eq) goto loc_820FE600;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x820fe60c
	goto loc_820FE60C;
loc_820FE600:
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
loc_820FE60C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe624
	if (ctx.cr6.eq) goto loc_820FE624;
	// lbzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r4,r5,4
	ctx.r4.u64 = ctx.r5.u64 | 4;
	// stbx r4,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u8);
	// blr 
	return;
loc_820FE624:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// andi. r9,r10,251
	ctx.r9.u64 = ctx.r10.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE634"))) PPC_WEAK_FUNC(sub_820FE634);
PPC_FUNC_IMPL(__imp__sub_820FE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE638"))) PPC_WEAK_FUNC(sub_820FE638);
PPC_FUNC_IMPL(__imp__sub_820FE638) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// li r8,8
	ctx.r8.s64 = 8;
loc_820FE648:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_820FE650:
	// lbz r11,-1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fe668
	if (!ctx.cr6.eq) goto loc_820FE668;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE668:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820fe678
	if (ctx.cr6.eq) goto loc_820FE678;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE678:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fe690
	if (!ctx.cr6.eq) goto loc_820FE690;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe6a0
	if (ctx.cr6.eq) goto loc_820FE6A0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE6A0:
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fe6b8
	if (!ctx.cr6.eq) goto loc_820FE6B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE6B8:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fe6c8
	if (ctx.cr6.eq) goto loc_820FE6C8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE6C8:
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820fe6e0
	if (!ctx.cr6.eq) goto loc_820FE6E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE6E0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fe6f0
	if (ctx.cr6.eq) goto loc_820FE6F0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE6F0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fe650
	if (!ctx.cr6.eq) goto loc_820FE650;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fe648
	if (!ctx.cr6.eq) goto loc_820FE648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE714"))) PPC_WEAK_FUNC(sub_820FE714);
PPC_FUNC_IMPL(__imp__sub_820FE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE718"))) PPC_WEAK_FUNC(sub_820FE718);
PPC_FUNC_IMPL(__imp__sub_820FE718) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// li r9,2
	ctx.r9.s64 = 2;
loc_820FE728:
	// lbz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -8);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fe740
	if (!ctx.cr6.eq) goto loc_820FE740;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE740:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fe750
	if (ctx.cr6.eq) goto loc_820FE750;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE750:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820fe768
	if (!ctx.cr6.eq) goto loc_820FE768;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE768:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fe778
	if (ctx.cr6.eq) goto loc_820FE778;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE778:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fe790
	if (!ctx.cr6.eq) goto loc_820FE790;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE790:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fe7a0
	if (ctx.cr6.eq) goto loc_820FE7A0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE7A0:
	// lbz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820fe7b8
	if (!ctx.cr6.eq) goto loc_820FE7B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE7B8:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fe7c8
	if (ctx.cr6.eq) goto loc_820FE7C8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FE7C8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fe728
	if (!ctx.cr6.eq) goto loc_820FE728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE7DC"))) PPC_WEAK_FUNC(sub_820FE7DC);
PPC_FUNC_IMPL(__imp__sub_820FE7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE7E0"))) PPC_WEAK_FUNC(sub_820FE7E0);
PPC_FUNC_IMPL(__imp__sub_820FE7E0) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r11,20464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe854
	if (ctx.cr6.eq) goto loc_820FE854;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe818
	if (ctx.cr6.eq) goto loc_820FE818;
	// bl 0x820fc230
	ctx.lr = 0x820FE818;
	sub_820FC230(ctx, base);
loc_820FE818:
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe82c
	if (ctx.cr6.eq) goto loc_820FE82C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8fd8
	ctx.lr = 0x820FE82C;
	sub_820F8FD8(ctx, base);
loc_820FE82C:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fe840
	if (ctx.cr6.eq) goto loc_820FE840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7f10
	ctx.lr = 0x820FE840;
	sub_820F7F10(ctx, base);
loc_820FE840:
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fe854
	if (ctx.cr6.eq) goto loc_820FE854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f86e8
	ctx.lr = 0x820FE854;
	sub_820F86E8(ctx, base);
loc_820FE854:
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

__attribute__((alias("__imp__sub_820FE868"))) PPC_WEAK_FUNC(sub_820FE868);
PPC_FUNC_IMPL(__imp__sub_820FE868) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blt cr6,0x820fe8b4
	if (ctx.cr6.lt) goto loc_820FE8B4;
	// bne cr6,0x820fe8bc
	if (!ctx.cr6.eq) goto loc_820FE8BC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-15256
	ctx.r5.s64 = ctx.r11.s64 + -15256;
	// b 0x820fe8bc
	goto loc_820FE8BC;
loc_820FE8B4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r11,-15448
	ctx.r5.s64 = ctx.r11.s64 + -15448;
loc_820FE8BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825af158
	ctx.lr = 0x820FE8D4;
	sub_825AF158(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bl 0x825af010
	ctx.lr = 0x820FE8E0;
	sub_825AF010(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825aee00
	ctx.lr = 0x820FE8E8;
	sub_825AEE00(ctx, base);
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

__attribute__((alias("__imp__sub_820FE8FC"))) PPC_WEAK_FUNC(sub_820FE8FC);
PPC_FUNC_IMPL(__imp__sub_820FE8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE900"))) PPC_WEAK_FUNC(sub_820FE900);
PPC_FUNC_IMPL(__imp__sub_820FE900) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820fc608
	ctx.lr = 0x820FE91C;
	sub_820FC608(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FE930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// ori r8,r9,51970
	ctx.r8.u64 = ctx.r9.u64 | 51970;
	// lbzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fe950
	if (ctx.cr6.eq) goto loc_820FE950;
	// bl 0x8221cc78
	ctx.lr = 0x820FE950;
	sub_8221CC78(ctx, base);
loc_820FE950:
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

__attribute__((alias("__imp__sub_820FE964"))) PPC_WEAK_FUNC(sub_820FE964);
PPC_FUNC_IMPL(__imp__sub_820FE964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE968"))) PPC_WEAK_FUNC(sub_820FE968);
PPC_FUNC_IMPL(__imp__sub_820FE968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820FE970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FE988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r8,r9,46272
	ctx.r8.u64 = ctx.r9.u64 | 46272;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r29,r6,46273
	ctx.r29.u64 = ctx.r6.u64 | 46273;
	// ori r30,r5,46274
	ctx.r30.u64 = ctx.r5.u64 | 46274;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820fea80
	if (!ctx.cr6.eq) goto loc_820FEA80;
	// lbzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fea80
	if (!ctx.cr6.eq) goto loc_820FEA80;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fea80
	if (!ctx.cr6.eq) goto loc_820FEA80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820fe9e0
	if (ctx.cr6.eq) goto loc_820FE9E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE9E0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fe9f8
	if (ctx.cr6.eq) goto loc_820FE9F8;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fea80
	if (!ctx.cr6.eq) goto loc_820FEA80;
loc_820FE9F8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r4,r5,51959
	ctx.r4.u64 = ctx.r5.u64 | 51959;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fea80
	if (!ctx.cr6.eq) goto loc_820FEA80;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fea34
	if (ctx.cr6.eq) goto loc_820FEA34;
	// mulli r11,r10,584
	ctx.r11.s64 = ctx.r10.s64 * 584;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 324, ctx.r7.u32);
loc_820FEA34:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r11,16448
	ctx.r10.s64 = ctx.r11.s64 + 16448;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bgt cr6,0x820fea4c
	if (ctx.cr6.gt) goto loc_820FEA4C;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_820FEA4C:
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r4,r6,46268
	ctx.r4.u64 = ctx.r6.u64 | 46268;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x820fc608
	ctx.lr = 0x820FEA78;
	sub_820FC608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820FEA80:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// addis r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 196608;
	// addi r4,r11,24760
	ctx.r4.s64 = ctx.r11.s64 + 24760;
	// bl 0x82104110
	ctx.lr = 0x820FEA94;
	sub_82104110(ctx, base);
	// lbzx r8,r31,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820feab8
	if (ctx.cr6.eq) goto loc_820FEAB8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// bl 0x82204210
	ctx.lr = 0x820FEAB0;
	sub_82204210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820FEAB8:
	// lbzx r7,r31,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fead4
	if (ctx.cr6.eq) goto loc_820FEAD4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// bl 0x82204200
	ctx.lr = 0x820FEAD4;
	sub_82204200(ctx, base);
loc_820FEAD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEADC"))) PPC_WEAK_FUNC(sub_820FEADC);
PPC_FUNC_IMPL(__imp__sub_820FEADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEAE0"))) PPC_WEAK_FUNC(sub_820FEAE0);
PPC_FUNC_IMPL(__imp__sub_820FEAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x820fc608
	sub_820FC608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEAFC"))) PPC_WEAK_FUNC(sub_820FEAFC);
PPC_FUNC_IMPL(__imp__sub_820FEAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEB00"))) PPC_WEAK_FUNC(sub_820FEB00);
PPC_FUNC_IMPL(__imp__sub_820FEB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820FEB08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r29,r31,10528
	ctx.r29.s64 = ctx.r31.s64 + 10528;
loc_820FEB18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fa6c8
	ctx.lr = 0x820FEB20;
	sub_820FA6C8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,5956
	ctx.r29.s64 = ctx.r29.s64 + 5956;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820feb18
	if (!ctx.cr6.eq) goto loc_820FEB18;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,46268
	ctx.r10.u64 = ctx.r11.u64 | 46268;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// ori r8,r6,16284
	ctx.r8.u64 = ctx.r6.u64 | 16284;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,37
	ctx.r7.s64 = 2424832;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,49146
	ctx.r6.u64 = ctx.r7.u64 | 49146;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// bl 0x820fc608
	ctx.lr = 0x820FEB8C;
	sub_820FC608(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEB94"))) PPC_WEAK_FUNC(sub_820FEB94);
PPC_FUNC_IMPL(__imp__sub_820FEB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEB98"))) PPC_WEAK_FUNC(sub_820FEB98);
PPC_FUNC_IMPL(__imp__sub_820FEB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820FEBA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r28,-19252
	ctx.r28.s64 = ctx.r28.s64 + -19252;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820febe8
	if (!ctx.cr6.gt) goto loc_820FEBE8;
	// addi r29,r31,10528
	ctx.r29.s64 = ctx.r31.s64 + 10528;
loc_820FEBC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa560
	ctx.lr = 0x820FEBD4;
	sub_820FA560(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,5956
	ctx.r29.s64 = ctx.r29.s64 + 5956;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820febc8
	if (ctx.cr6.lt) goto loc_820FEBC8;
loc_820FEBE8:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r8,r9,46280
	ctx.r8.u64 = ctx.r9.u64 | 46280;
	// ori r5,r6,46288
	ctx.r5.u64 = ctx.r6.u64 | 46288;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stwx r27,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u32);
	// stbx r27,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r27.u8);
	// ble cr6,0x820fec2c
	if (!ctx.cr6.gt) goto loc_820FEC2C;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc608
	ctx.lr = 0x820FEC2C;
	sub_820FC608(ctx, base);
loc_820FEC2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEC34"))) PPC_WEAK_FUNC(sub_820FEC34);
PPC_FUNC_IMPL(__imp__sub_820FEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEC38"))) PPC_WEAK_FUNC(sub_820FEC38);
PPC_FUNC_IMPL(__imp__sub_820FEC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,46280
	ctx.r10.u64 = ctx.r11.u64 | 46280;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,46288
	ctx.r8.u64 = ctx.r9.u64 | 46288;
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// stbx r11,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x820feb00
	sub_820FEB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEC58"))) PPC_WEAK_FUNC(sub_820FEC58);
PPC_FUNC_IMPL(__imp__sub_820FEC58) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x820fec78
	if (!ctx.cr6.lt) goto loc_820FEC78;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820FEC78:
	// b 0x820fe968
	sub_820FE968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FEC7C"))) PPC_WEAK_FUNC(sub_820FEC7C);
PPC_FUNC_IMPL(__imp__sub_820FEC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEC80"))) PPC_WEAK_FUNC(sub_820FEC80);
PPC_FUNC_IMPL(__imp__sub_820FEC80) {
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
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-19256
	ctx.r30.s64 = ctx.r30.s64 + -19256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820faac8
	ctx.lr = 0x820FECA8;
	sub_820FAAC8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,0
	ctx.r11.s64 = 0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// ori r10,r11,46296
	ctx.r10.u64 = ctx.r11.u64 | 46296;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// beq cr6,0x820fecd4
	if (ctx.cr6.eq) goto loc_820FECD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
loc_820FECD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe968
	ctx.lr = 0x820FECDC;
	sub_820FE968(ctx, base);
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

__attribute__((alias("__imp__sub_820FECF4"))) PPC_WEAK_FUNC(sub_820FECF4);
PPC_FUNC_IMPL(__imp__sub_820FECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FECF8"))) PPC_WEAK_FUNC(sub_820FECF8);
PPC_FUNC_IMPL(__imp__sub_820FECF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,46296
	ctx.r10.u64 = ctx.r11.u64 | 46296;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x820feb98
	sub_820FEB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FED0C"))) PPC_WEAK_FUNC(sub_820FED0C);
PPC_FUNC_IMPL(__imp__sub_820FED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FED10"))) PPC_WEAK_FUNC(sub_820FED10);
PPC_FUNC_IMPL(__imp__sub_820FED10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r10,r11,46296
	ctx.r10.u64 = ctx.r11.u64 | 46296;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,46280
	ctx.r8.u64 = ctx.r9.u64 | 46280;
	// ori r6,r7,46288
	ctx.r6.u64 = ctx.r7.u64 | 46288;
	// stbx r11,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u8);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// stbx r11,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x820feb00
	sub_820FEB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FED3C"))) PPC_WEAK_FUNC(sub_820FED3C);
PPC_FUNC_IMPL(__imp__sub_820FED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


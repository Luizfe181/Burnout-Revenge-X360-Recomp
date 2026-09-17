#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82090000"))) PPC_WEAK_FUNC(sub_82090000);
PPC_FUNC_IMPL(__imp__sub_82090000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82090008;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r30,r11,3828
	ctx.r30.s64 = ctx.r11.s64 + 3828;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820900f4
	if (!ctx.cr6.eq) goto loc_820900F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82090078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820900ec
	if (ctx.cr6.eq) goto loc_820900EC;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820900BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820900d8
	if (ctx.cr6.eq) goto loc_820900D8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82091348
	ctx.lr = 0x820900D4;
	sub_82091348(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820900D8:
	// stw r26,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_820900EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
loc_820900F4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820900FC"))) PPC_WEAK_FUNC(sub_820900FC);
PPC_FUNC_IMPL(__imp__sub_820900FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090100"))) PPC_WEAK_FUNC(sub_82090100);
PPC_FUNC_IMPL(__imp__sub_82090100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82090108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,3828
	ctx.r31.s64 = ctx.r11.s64 + 3828;
	// lwz r29,-4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8209016c
	if (ctx.cr6.eq) goto loc_8209016C;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82090150
	if (ctx.cr6.eq) goto loc_82090150;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82091838
	ctx.lr = 0x82090134;
	sub_82091838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82090150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82090150:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209016C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209016C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209017C"))) PPC_WEAK_FUNC(sub_8209017C);
PPC_FUNC_IMPL(__imp__sub_8209017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090180"))) PPC_WEAK_FUNC(sub_82090180);
PPC_FUNC_IMPL(__imp__sub_82090180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82090188;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// bl 0x820987c0
	ctx.lr = 0x820901B4;
	sub_820987C0(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82090244
	if (ctx.cr6.eq) goto loc_82090244;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820901FC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820901fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820901FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// addi r4,r11,-16712
	ctx.r4.s64 = ctx.r11.s64 + -16712;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stb r10,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r10.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x8209022C;
	sub_8259D2A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82097268
	ctx.lr = 0x82090244;
	sub_82097268(ctx, base);
loc_82090244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097540
	ctx.lr = 0x8209024C;
	sub_82097540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090254"))) PPC_WEAK_FUNC(sub_82090254);
PPC_FUNC_IMPL(__imp__sub_82090254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090258"))) PPC_WEAK_FUNC(sub_82090258);
PPC_FUNC_IMPL(__imp__sub_82090258) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82090268
	if (ctx.cr6.eq) goto loc_82090268;
	// b 0x82094f98
	sub_82094F98(ctx, base);
	return;
loc_82090268:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82094f98
	sub_82094F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090270"))) PPC_WEAK_FUNC(sub_82090270);
PPC_FUNC_IMPL(__imp__sub_82090270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82090280
	if (ctx.cr6.eq) goto loc_82090280;
	// b 0x82095028
	sub_82095028(ctx, base);
	return;
loc_82090280:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82095028
	sub_82095028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090288"))) PPC_WEAK_FUNC(sub_82090288);
PPC_FUNC_IMPL(__imp__sub_82090288) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820902b8
	if (ctx.cr6.eq) goto loc_820902B8;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820902a4
	if (!ctx.cr6.eq) goto loc_820902A4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82094eb8
	sub_82094EB8(ctx, base);
	return;
loc_820902A4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820902b8
	if (!ctx.cr6.eq) goto loc_820902B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82094eb8
	sub_82094EB8(ctx, base);
	return;
loc_820902B8:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82094eb8
	sub_82094EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820902C4"))) PPC_WEAK_FUNC(sub_820902C4);
PPC_FUNC_IMPL(__imp__sub_820902C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820902C8"))) PPC_WEAK_FUNC(sub_820902C8);
PPC_FUNC_IMPL(__imp__sub_820902C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820902f8
	if (ctx.cr6.eq) goto loc_820902F8;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820902e4
	if (!ctx.cr6.eq) goto loc_820902E4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82094e30
	sub_82094E30(ctx, base);
	return;
loc_820902E4:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820902f8
	if (!ctx.cr6.eq) goto loc_820902F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82094e30
	sub_82094E30(ctx, base);
	return;
loc_820902F8:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82094e30
	sub_82094E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090300"))) PPC_WEAK_FUNC(sub_82090300);
PPC_FUNC_IMPL(__imp__sub_82090300) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stw r11,144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 144, ctx.r11.u32);
	// bgt cr6,0x82090360
	if (ctx.cr6.gt) {
		// ERROR 82090360
		return;
	}
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,820
	ctx.r12.s64 = ctx.r12.s64 + 820;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82090344
		return;
	case 1:
		// ERROR: 0x8209034C
		return;
	case 2:
		// ERROR: 0x82090354
		return;
	case 3:
		// ERROR: 0x8209035C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82090334"))) PPC_WEAK_FUNC(sub_82090334);
PPC_FUNC_IMPL(__imp__sub_82090334) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,836(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 836);
	// lwz r16,844(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 844);
	// lwz r16,852(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 852);
	// lwz r16,860(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 860);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82090360
	// ERROR 82090360
	return;
}

__attribute__((alias("__imp__sub_8209034C"))) PPC_WEAK_FUNC(sub_8209034C);
PPC_FUNC_IMPL(__imp__sub_8209034C) {
	PPC_FUNC_PROLOGUE();
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82090360
	// ERROR 82090360
	return;
}

__attribute__((alias("__imp__sub_82090354"))) PPC_WEAK_FUNC(sub_82090354);
PPC_FUNC_IMPL(__imp__sub_82090354) {
	PPC_FUNC_PROLOGUE();
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82090360
	// ERROR 82090360
	return;
}

__attribute__((alias("__imp__sub_8209035C"))) PPC_WEAK_FUNC(sub_8209035C);
PPC_FUNC_IMPL(__imp__sub_8209035C) {
	PPC_FUNC_PROLOGUE();
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82090378"))) PPC_WEAK_FUNC(sub_82090378);
PPC_FUNC_IMPL(__imp__sub_82090378) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820903c8
	if (!ctx.cr6.eq) goto loc_820903C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820987c0
	ctx.lr = 0x820903AC;
	sub_820987C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82097540
	ctx.lr = 0x820903C4;
	sub_82097540(ctx, base);
	// b 0x820903e8
	goto loc_820903E8;
loc_820903C8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820903E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820903E8:
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

__attribute__((alias("__imp__sub_82090400"))) PPC_WEAK_FUNC(sub_82090400);
PPC_FUNC_IMPL(__imp__sub_82090400) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// beq cr6,0x82090444
	if (ctx.cr6.eq) goto loc_82090444;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// b 0x82090448
	goto loc_82090448;
loc_82090444:
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_82090448:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82090464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8209047C"))) PPC_WEAK_FUNC(sub_8209047C);
PPC_FUNC_IMPL(__imp__sub_8209047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090480"))) PPC_WEAK_FUNC(sub_82090480);
PPC_FUNC_IMPL(__imp__sub_82090480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82090490"))) PPC_WEAK_FUNC(sub_82090490);
PPC_FUNC_IMPL(__imp__sub_82090490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82090498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820904fc
	if (!ctx.cr6.eq) goto loc_820904FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820987c0
	ctx.lr = 0x820904CC;
	sub_820987C0(ctx, base);
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// bl 0x82097540
	ctx.lr = 0x820904F4;
	sub_82097540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820904FC:
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,136(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82090534
	if (!ctx.cr6.eq) goto loc_82090534;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
loc_82090534:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209053C"))) PPC_WEAK_FUNC(sub_8209053C);
PPC_FUNC_IMPL(__imp__sub_8209053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090540"))) PPC_WEAK_FUNC(sub_82090540);
PPC_FUNC_IMPL(__imp__sub_82090540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r4.u32);
	// b 0x82097468
	sub_82097468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090550"))) PPC_WEAK_FUNC(sub_82090550);
PPC_FUNC_IMPL(__imp__sub_82090550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82090578
	if (!ctx.cr6.eq) goto loc_82090578;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// or r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 | ctx.r5.u64;
	// andc r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// stw r8,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r8.u32);
	// stw r7,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r7.u32);
	// blr 
	return;
loc_82090578:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8209059c
	if (!ctx.cr6.eq) goto loc_8209059C;
	// lwz r6,156(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r4,152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// andc r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r5.u64;
	// stw r3,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r3.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// blr 
	return;
loc_8209059C:
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// not r10,r5
	ctx.r10.u64 = ~ctx.r5.u64;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r7.u32);
	// stw r6,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820905BC"))) PPC_WEAK_FUNC(sub_820905BC);
PPC_FUNC_IMPL(__imp__sub_820905BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820905C0"))) PPC_WEAK_FUNC(sub_820905C0);
PPC_FUNC_IMPL(__imp__sub_820905C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x820948b8
	sub_820948B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820905C8"))) PPC_WEAK_FUNC(sub_820905C8);
PPC_FUNC_IMPL(__imp__sub_820905C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820905D4"))) PPC_WEAK_FUNC(sub_820905D4);
PPC_FUNC_IMPL(__imp__sub_820905D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820905D8"))) PPC_WEAK_FUNC(sub_820905D8);
PPC_FUNC_IMPL(__imp__sub_820905D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820905F4"))) PPC_WEAK_FUNC(sub_820905F4);
PPC_FUNC_IMPL(__imp__sub_820905F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820905F8"))) PPC_WEAK_FUNC(sub_820905F8);
PPC_FUNC_IMPL(__imp__sub_820905F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82090650"))) PPC_WEAK_FUNC(sub_82090650);
PPC_FUNC_IMPL(__imp__sub_82090650) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209069C"))) PPC_WEAK_FUNC(sub_8209069C);
PPC_FUNC_IMPL(__imp__sub_8209069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820906A0"))) PPC_WEAK_FUNC(sub_820906A0);
PPC_FUNC_IMPL(__imp__sub_820906A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820906A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820906CC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820906cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820906CC;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209070c
	if (ctx.cr6.eq) goto loc_8209070C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209070c
	if (ctx.cr6.eq) goto loc_8209070C;
loc_820906F8:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820906f8
	if (!ctx.cr6.eq) goto loc_820906F8;
loc_8209070C:
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82090718;
	sub_8259D3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// stb r28,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090730"))) PPC_WEAK_FUNC(sub_82090730);
PPC_FUNC_IMPL(__imp__sub_82090730) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82090814"))) PPC_WEAK_FUNC(sub_82090814);
PPC_FUNC_IMPL(__imp__sub_82090814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090818"))) PPC_WEAK_FUNC(sub_82090818);
PPC_FUNC_IMPL(__imp__sub_82090818) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209082C"))) PPC_WEAK_FUNC(sub_8209082C);
PPC_FUNC_IMPL(__imp__sub_8209082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090830"))) PPC_WEAK_FUNC(sub_82090830);
PPC_FUNC_IMPL(__imp__sub_82090830) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209084C"))) PPC_WEAK_FUNC(sub_8209084C);
PPC_FUNC_IMPL(__imp__sub_8209084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090850"))) PPC_WEAK_FUNC(sub_82090850);
PPC_FUNC_IMPL(__imp__sub_82090850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82090858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820908d8
	if (ctx.cr6.eq) goto loc_820908D8;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r29,r10,-16704
	ctx.r29.s64 = ctx.r10.s64 + -16704;
loc_8209087C:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bge cr6,0x820908a4
	if (!ctx.cr6.lt) goto loc_820908A4;
	// cmplwi cr6,r5,92
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 92, ctx.xer);
	// bne cr6,0x82090898
	if (!ctx.cr6.eq) goto loc_82090898;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x820908a4
	if (ctx.cr6.eq) goto loc_820908A4;
loc_82090898:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x820908b4
	goto loc_820908B4;
loc_820908A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x820908B0;
	sub_8259D1B0(ctx, base);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
loc_820908B4:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8209087c
	if (!ctx.cr6.eq) goto loc_8209087C;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820908D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820908E8"))) PPC_WEAK_FUNC(sub_820908E8);
PPC_FUNC_IMPL(__imp__sub_820908E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820909d0
	if (ctx.cr6.eq) goto loc_820909D0;
	// subfic r7,r4,-2
	ctx.xer.ca = ctx.r4.u32 <= 4294967294;
	ctx.r7.s64 = -2 - ctx.r4.s64;
loc_820908FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x82090984
	if (!ctx.cr6.eq) goto loc_82090984;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x82090984
	if (!ctx.cr6.eq) goto loc_82090984;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
loc_82090920:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82090984
	if (ctx.cr6.eq) goto loc_82090984;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8209094c
	if (ctx.cr6.lt) goto loc_8209094C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8209094c
	if (ctx.cr6.gt) goto loc_8209094C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82090964
	goto loc_82090964;
loc_8209094C:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82090980
	if (ctx.cr6.lt) goto loc_82090980;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x82090980
	if (ctx.cr6.gt) goto loc_82090980;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
loc_82090964:
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82090920
	if (ctx.cr6.lt) goto loc_82090920;
	// b 0x82090984
	goto loc_82090984;
loc_82090980:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82090984:
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820909a0
	if (ctx.cr6.eq) goto loc_820909A0;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// addi r7,r7,-6
	ctx.r7.s64 = ctx.r7.s64 + -6;
	// b 0x820909b0
	goto loc_820909B0;
loc_820909A0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_820909B0:
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820908fc
	if (!ctx.cr6.eq) goto loc_820908FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
loc_820909D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820909DC"))) PPC_WEAK_FUNC(sub_820909DC);
PPC_FUNC_IMPL(__imp__sub_820909DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820909E0"))) PPC_WEAK_FUNC(sub_820909E0);
PPC_FUNC_IMPL(__imp__sub_820909E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820909E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,-16696
	ctx.r28.s64 = ctx.r11.s64 + -16696;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82090A04:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8259e9d0
	ctx.lr = 0x82090A14;
	sub_8259E9D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82090a20
	if (!ctx.cr6.gt) goto loc_82090A20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82090A20:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82090a04
	if (!ctx.cr6.eq) goto loc_82090A04;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82090b68
	if (ctx.cr6.eq) goto loc_82090B68;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bne cr6,0x82090a8c
	if (!ctx.cr6.eq) goto loc_82090A8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090A58;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82090a78
	if (ctx.cr6.eq) goto loc_82090A78;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090A6C;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82090a7c
	if (!ctx.cr6.eq) goto loc_82090A7C;
loc_82090A78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82090A7C:
	// li r8,38
	ctx.r8.s64 = 38;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090A8C:
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// bne cr6,0x82090ad8
	if (!ctx.cr6.eq) goto loc_82090AD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090AA4;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82090ac4
	if (!ctx.cr6.eq) goto loc_82090AC4;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090AB8;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82090ac8
	if (ctx.cr6.eq) goto loc_82090AC8;
loc_82090AC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82090AC8:
	// li r7,124
	ctx.r7.s64 = 124;
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090AD8:
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82090b24
	if (ctx.cr6.eq) goto loc_82090B24;
	// cmpwi cr6,r11,126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 126, ctx.xer);
	// beq cr6,0x82090b24
	if (ctx.cr6.eq) goto loc_82090B24;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// bne cr6,0x82090b68
	if (!ctx.cr6.eq) goto loc_82090B68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090B00;
	sub_820909E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090B10;
	sub_820909E0(ctx, base);
	// li r6,94
	ctx.r6.s64 = 94;
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090B24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090B34;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82090b54
	if (!ctx.cr6.eq) goto loc_82090B54;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090B48;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82090b58
	if (ctx.cr6.eq) goto loc_82090B58;
loc_82090B54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82090B58:
	// li r5,33
	ctx.r5.s64 = 33;
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090B68:
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpwi cr6,r3,42
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 42, ctx.xer);
	// beq cr6,0x82090c08
	if (ctx.cr6.eq) goto loc_82090C08;
loc_82090B78:
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// bne cr6,0x82090b9c
	if (!ctx.cr6.eq) goto loc_82090B9C;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82090bf4
	if (!ctx.cr6.eq) goto loc_82090BF4;
loc_82090B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090B9C:
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// bne cr6,0x82090bc0
	if (!ctx.cr6.eq) goto loc_82090BC0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8259f430
	ctx.lr = 0x82090BB4;
	sub_8259F430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82090b90
	if (ctx.cr6.eq) goto loc_82090B90;
	// b 0x82090bf4
	goto loc_82090BF4;
loc_82090BC0:
	// cmpwi cr6,r3,126
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 126, ctx.xer);
	// beq cr6,0x82090c44
	if (ctx.cr6.eq) goto loc_82090C44;
	// bl 0x825a1070
	ctx.lr = 0x82090BCC;
	sub_825A1070(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x825a1070
	ctx.lr = 0x82090BDC;
	sub_825A1070(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82090b90
	if (!ctx.cr6.eq) goto loc_82090B90;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82090c38
	if (ctx.cr6.eq) goto loc_82090C38;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82090BF4:
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// cmpwi cr6,r3,42
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 42, ctx.xer);
	// bne cr6,0x82090b78
	if (!ctx.cr6.eq) goto loc_82090B78;
loc_82090C08:
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
loc_82090C0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090C18;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82090c38
	if (!ctx.cr6.eq) goto loc_82090C38;
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82090c0c
	if (!ctx.cr6.eq) goto loc_82090C0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090C38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090C44:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820909e0
	ctx.lr = 0x82090C50;
	sub_820909E0(ctx, base);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090C60"))) PPC_WEAK_FUNC(sub_82090C60);
PPC_FUNC_IMPL(__imp__sub_82090C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82090C68;
	__savegprlr_27(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82090cbc
	if (ctx.cr6.eq) goto loc_82090CBC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82090C9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82090c9c
	if (!ctx.cr6.eq) goto loc_82090C9C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x82090cc0
	goto loc_82090CC0;
loc_82090CBC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82090CC0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// ble cr6,0x82090dc0
	if (!ctx.cr6.gt) goto loc_82090DC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82090CE0:
	// lbzx r4,r8,r27
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// addi r9,r9,-99
	ctx.r9.s64 = ctx.r9.s64 + -99;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82090db0
	if (ctx.cr6.gt) goto loc_82090DB0;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,3340
	ctx.r12.s64 = ctx.r12.s64 + 3340;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82090D50;
	case 1:
		goto loc_82090D6C;
	case 2:
		goto loc_82090DB0;
	case 3:
		goto loc_82090DB0;
	case 4:
		goto loc_82090DB0;
	case 5:
		goto loc_82090DB0;
	case 6:
		goto loc_82090DB0;
	case 7:
		goto loc_82090DB0;
	case 8:
		goto loc_82090DB0;
	case 9:
		goto loc_82090DB0;
	case 10:
		goto loc_82090DB0;
	case 11:
		goto loc_82090DB0;
	case 12:
		goto loc_82090DB0;
	case 13:
		goto loc_82090D84;
	case 14:
		goto loc_82090DB0;
	case 15:
		goto loc_82090DB0;
	case 16:
		goto loc_82090D9C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,3408(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3408);
	// lwz r16,3436(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3436);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3460(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3460);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3504);
	// lwz r16,3484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3484);
loc_82090D50:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82090db0
	goto loc_82090DB0;
loc_82090D6C:
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r5,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// b 0x82090db0
	goto loc_82090DB0;
loc_82090D84:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82090db0
	goto loc_82090DB0;
loc_82090D9C:
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r6,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_82090DB0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82090ce0
	if (ctx.cr6.lt) goto loc_82090CE0;
loc_82090DC0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-6416
	ctx.r31.s64 = ctx.r11.s64 + -6416;
	// addi r4,r31,10252
	ctx.r4.s64 = ctx.r31.s64 + 10252;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82090DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82090de8
	if (!ctx.cr6.eq) goto loc_82090DE8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82090DE8:
	// lwz r4,10248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10248);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r30,r4,11,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// li r29,45
	ctx.r29.s64 = 45;
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ori r6,r10,26215
	ctx.r6.u64 = ctx.r10.u64 | 26215;
loc_82090E04:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82090f2c
	if (ctx.cr6.eq) goto loc_82090F2C;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// beq cr6,0x82090e6c
	if (ctx.cr6.eq) goto loc_82090E6C;
	// cmpwi cr6,r10,115
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 115, ctx.xer);
	// bne cr6,0x82090f24
	if (!ctx.cr6.eq) goto loc_82090F24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82090f24
	if (ctx.cr6.eq) goto loc_82090F24;
loc_82090E4C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82090e4c
	if (!ctx.cr6.eq) goto loc_82090E4C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82090f54
	goto loc_82090F54;
loc_82090E6C:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82090e8c
	if (!ctx.cr6.lt) goto loc_82090E8C;
	// sth r29,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r29.u16);
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_82090E8C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82090E94:
	// mulhw r10,r10,r6
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82090e94
	if (!ctx.cr6.eq) goto loc_82090E94;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r28,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r28.u8);
loc_82090EBC:
	// mulhw r7,r8,r6
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r7,48
	ctx.r10.s64 = ctx.r7.s64 + 48;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// bne cr6,0x82090ebc
	if (!ctx.cr6.eq) goto loc_82090EBC;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82090f24
	if (ctx.cr6.eq) goto loc_82090F24;
loc_82090F08:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// sth r8,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82090f08
	if (!ctx.cr6.eq) goto loc_82090F08;
loc_82090F24:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82090f54
	goto loc_82090F54;
loc_82090F2C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// bne cr6,0x82090f44
	if (!ctx.cr6.eq) goto loc_82090F44;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82090f54
	goto loc_82090F54;
loc_82090F44:
	// cmpwi cr6,r10,34
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 34, ctx.xer);
	// beq cr6,0x82090f54
	if (ctx.cr6.eq) goto loc_82090F54;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_82090F54:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82090e04
	if (!ctx.cr6.eq) goto loc_82090E04;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// sth r28,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r28.u16);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mulhw r10,r11,r6
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,10248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10248, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090F98"))) PPC_WEAK_FUNC(sub_82090F98);
PPC_FUNC_IMPL(__imp__sub_82090F98) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82090FC4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82090fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82090FC4;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82090c60
	ctx.lr = 0x82090FEC;
	sub_82090C60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x820910a0
	ctx.lr = 0x82091000;
	sub_820910A0(ctx, base);
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

__attribute__((alias("__imp__sub_82091018"))) PPC_WEAK_FUNC(sub_82091018);
PPC_FUNC_IMPL(__imp__sub_82091018) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091048:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091048;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-16480
	ctx.r4.s64 = ctx.r11.s64 + -16480;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82090c60
	ctx.lr = 0x82091070;
	sub_82090C60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x820910a0
	ctx.lr = 0x82091084;
	sub_820910A0(ctx, base);
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

__attribute__((alias("__imp__sub_8209109C"))) PPC_WEAK_FUNC(sub_8209109C);
PPC_FUNC_IMPL(__imp__sub_8209109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820910A0"))) PPC_WEAK_FUNC(sub_820910A0);
PPC_FUNC_IMPL(__imp__sub_820910A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820910A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82091100
	if (ctx.cr6.eq) goto loc_82091100;
loc_820910C4:
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r3,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r3.u32);
	// bl 0x82090c60
	ctx.lr = 0x820910E8;
	sub_82090C60(ctx, base);
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r3,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r3.u32);
	// bne cr6,0x820910c4
	if (!ctx.cr6.eq) goto loc_820910C4;
loc_82091100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82091108"))) PPC_WEAK_FUNC(sub_82091108);
PPC_FUNC_IMPL(__imp__sub_82091108) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16476
	ctx.r11.s64 = ctx.r11.s64 + -16476;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8209113c
	if (ctx.cr6.eq) goto loc_8209113C;
	// bl 0x8259e7c0
	ctx.lr = 0x82091138;
	sub_8259E7C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8209113C:
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

__attribute__((alias("__imp__sub_82091150"))) PPC_WEAK_FUNC(sub_82091150);
PPC_FUNC_IMPL(__imp__sub_82091150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825b0060
	ctx.lr = 0x8209116C;
	sub_825B0060(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825affd0
	ctx.lr = 0x82091178;
	sub_825AFFD0(ctx, base);
	// li r10,151
	ctx.r10.s64 = 151;
	// li r3,120
	ctx.r3.s64 = 120;
	// lhz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r7,31
	ctx.r7.s64 = 31;
	// li r6,59
	ctx.r6.s64 = 59;
	// sth r10,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r10.u16);
	// li r10,334
	ctx.r10.s64 = 334;
	// sth r3,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r3.u16);
	// li r5,90
	ctx.r5.s64 = 90;
	// li r3,304
	ctx.r3.s64 = 304;
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// sth r7,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r7.u16);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// li r8,181
	ctx.r8.s64 = 181;
	// sth r10,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r10.u16);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// sth r5,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r5.u16);
	// li r7,212
	ctx.r7.s64 = 212;
	// sth r3,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r3.u16);
	// li r6,243
	ctx.r6.s64 = 243;
	// li r5,273
	ctx.r5.s64 = 273;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r8,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r8.u16);
	// addi r11,r11,-2000
	ctx.r11.s64 = ctx.r11.s64 + -2000;
	// lhz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r7,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r7.u16);
	// sth r6,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r6.u16);
	// mulli r4,r11,365
	ctx.r4.s64 = ctx.r11.s64 * 365;
	// sth r5,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r5.u16);
	// lhz r10,-2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + -2);
	// lhz r5,102(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r7,106(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mulli r10,r7,60
	ctx.r10.s64 = ctx.r7.s64 * 60;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne cr6,0x8209124c
	if (!ctx.cr6.eq) goto loc_8209124C;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x8209124c
	if (ctx.cr6.gt) goto loc_8209124C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8209124C:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r5,r6,20864
	ctx.r5.u64 = ctx.r6.u64 | 20864;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82091270"))) PPC_WEAK_FUNC(sub_82091270);
PPC_FUNC_IMPL(__imp__sub_82091270) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8209129C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209129c
	if (!ctx.cr6.eq) goto loc_8209129C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_820912C0:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820912c0
	if (!ctx.cr6.eq) goto loc_820912C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
loc_820912DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82091318
	if (ctx.cr6.eq) goto loc_82091318;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x82091304
	if (ctx.cr6.eq) goto loc_82091304;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x8209130c
	if (!ctx.cr6.eq) goto loc_8209130C;
loc_82091304:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_8209130C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820912dc
	if (ctx.cr6.eq) goto loc_820912DC;
loc_82091318:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820908e8
	ctx.lr = 0x82091320;
	sub_820908E8(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82091330;
	sub_8259D2A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82091348"))) PPC_WEAK_FUNC(sub_82091348);
PPC_FUNC_IMPL(__imp__sub_82091348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82091350;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82091370:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82091370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091370;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r9,19
	ctx.r9.s64 = 19;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82091398:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82091398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091398;
	// addi r7,r3,192
	ctx.r7.s64 = ctx.r3.s64 + 192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r3,272
	ctx.r6.s64 = ctx.r3.s64 + 272;
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r3.u32);
	// addi r3,r10,344
	ctx.r3.s64 = ctx.r10.s64 + 344;
	// stb r8,132(r10)
	PPC_STORE_U8(ctx.r10.u32 + 132, ctx.r8.u8);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r7,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r7.u32);
	// stw r6,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r6.u32);
	// stw r5,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r5.u32);
	// stb r11,148(r10)
	PPC_STORE_U8(ctx.r10.u32 + 148, ctx.r11.u8);
	// stw r11,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
	// stw r11,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r11.u32);
	// stb r4,160(r10)
	PPC_STORE_U8(ctx.r10.u32 + 160, ctx.r4.u8);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// stw r9,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r9.u32);
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// stw r11,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r11.u32);
	// stb r11,188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// stb r11,189(r10)
	PPC_STORE_U8(ctx.r10.u32 + 189, ctx.r11.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r7,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r7.u32);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r3,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// stb r11,29(r9)
	PPC_STORE_U8(ctx.r9.u32 + 29, ctx.r11.u8);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// li r4,324
	ctx.r4.s64 = 324;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r10,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r10.u8);
	// stb r31,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, ctx.r31.u8);
	// stb r31,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r31.u8);
	// stb r31,31(r9)
	PPC_STORE_U8(ctx.r9.u32 + 31, ctx.r31.u8);
	// stb r31,30(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30, ctx.r31.u8);
	// stw r29,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r29.u32);
	// stb r31,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r31.u8);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r31,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r31.u32);
	// stw r31,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r31.u32);
	// stw r31,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// stw r31,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r31.u32);
	// stb r31,336(r30)
	PPC_STORE_U8(ctx.r30.u32 + 336, ctx.r31.u8);
	// stw r31,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// lwz r3,3828(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3828);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r31.u32);
	// stw r31,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r31.u32);
	// stb r31,380(r30)
	PPC_STORE_U8(ctx.r30.u32 + 380, ctx.r31.u8);
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// stw r31,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r31.u32);
	// stw r31,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r31.u32);
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
	// stw r31,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r31.u32);
	// stw r31,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r31.u32);
	// stw r31,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r31.u32);
	// stw r31,492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 492, ctx.r31.u32);
	// stw r31,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r31.u32);
	// stw r31,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r31.u32);
	// stw r31,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r31.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82091604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82091690
	if (ctx.cr6.eq) goto loc_82091690;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r31,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r31.u32);
	// stw r31,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r31.u32);
	// stw r31,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r31.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stb r31,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r31.u8);
	// stb r31,285(r3)
	PPC_STORE_U8(ctx.r3.u32 + 285, ctx.r31.u8);
	// stw r31,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r31.u32);
	// stb r31,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r31.u8);
	// stw r29,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r29.u32);
	// stw r29,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r29.u32);
	// stw r31,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r31.u32);
	// stw r31,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r31.u32);
	// stw r31,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r31.u32);
	// stb r31,316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 316, ctx.r31.u8);
	// stb r31,317(r3)
	PPC_STORE_U8(ctx.r3.u32 + 317, ctx.r31.u8);
	// stb r31,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r31.u8);
	// stw r29,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r29.u32);
	// stw r29,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r29.u32);
	// stw r31,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r31.u32);
	// stw r31,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r31.u32);
	// stw r31,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r31.u32);
	// stb r31,316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 316, ctx.r31.u8);
	// stb r31,317(r3)
	PPC_STORE_U8(ctx.r3.u32 + 317, ctx.r31.u8);
loc_82091678:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82091678
	if (!ctx.cr6.eq) goto loc_82091678;
	// b 0x82091694
	goto loc_82091694;
loc_82091690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82091694:
	// addi r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 + 236;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820916A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820916a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820916A8;
	// addi r11,r30,408
	ctx.r11.s64 = ctx.r30.s64 + 408;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820916C4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820916c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820916C4;
	// stw r31,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r31.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// stw r31,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r31.u32);
	// stw r31,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r31.u32);
	// stw r31,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r31.u32);
	// stw r31,492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 492, ctx.r31.u32);
	// stw r31,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091700:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091700;
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stw r31,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r31.u32);
	// stw r31,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r31.u32);
	// stw r31,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r31.u32);
	// stw r31,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,3872(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3872);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,3828(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3828, ctx.r10.u32);
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r4,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// bne cr6,0x820917b8
	if (!ctx.cr6.eq) goto loc_820917B8;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82091794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820917ac
	if (ctx.cr6.eq) goto loc_820917AC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82095480
	ctx.lr = 0x820917A4;
	sub_82095480(ctx, base);
	// stw r3,3872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3872, ctx.r3.u32);
	// b 0x820917cc
	goto loc_820917CC;
loc_820917AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r3,3872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3872, ctx.r3.u32);
	// b 0x820917cc
	goto loc_820917CC;
loc_820917B8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820917C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3872(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3872);
loc_820917CC:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82091808
	if (ctx.cr6.eq) goto loc_82091808;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// stw r8,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r8.u32);
	// b 0x82091810
	goto loc_82091810;
loc_82091808:
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
loc_82091810:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82091820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r5.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82091834"))) PPC_WEAK_FUNC(sub_82091834);
PPC_FUNC_IMPL(__imp__sub_82091834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091838"))) PPC_WEAK_FUNC(sub_82091838);
PPC_FUNC_IMPL(__imp__sub_82091838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82091840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209185C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// beq cr6,0x820918b8
	if (ctx.cr6.eq) goto loc_820918B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stb r30,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r30.u8);
	// stb r30,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r30.u8);
	// bl 0x820987c0
	ctx.lr = 0x82091898;
	sub_820987C0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,324
	ctx.r5.s64 = 324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820918B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820918B8:
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,19
	ctx.r10.s64 = 19;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820918CC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820918cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820918CC;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// bl 0x8259e7c0
	ctx.lr = 0x820918E0;
	sub_8259E7C0(ctx, base);
	// lwz r3,476(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	// stw r30,472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 472, ctx.r30.u32);
	// bl 0x8259e7c0
	ctx.lr = 0x820918EC;
	sub_8259E7C0(ctx, base);
	// lwz r3,480(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// stw r30,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r30.u32);
	// bl 0x8259e7c0
	ctx.lr = 0x820918F8;
	sub_8259E7C0(ctx, base);
	// stw r30,480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 480, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82091904"))) PPC_WEAK_FUNC(sub_82091904);
PPC_FUNC_IMPL(__imp__sub_82091904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091908"))) PPC_WEAK_FUNC(sub_82091908);
PPC_FUNC_IMPL(__imp__sub_82091908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82091910;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82091948
	if (!ctx.cr6.gt) goto loc_82091948;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82091948:
	// bl 0x8259f370
	ctx.lr = 0x8209194C;
	sub_8259F370(ctx, base);
	// stw r3,472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 472, ctx.r3.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82091964
	if (!ctx.cr6.gt) goto loc_82091964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82091964:
	// bl 0x8259f370
	ctx.lr = 0x82091968;
	sub_8259F370(ctx, base);
	// stw r3,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r3.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82091980
	if (!ctx.cr6.gt) goto loc_82091980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82091980:
	// bl 0x8259f370
	ctx.lr = 0x82091984;
	sub_8259F370(ctx, base);
	// stw r3,480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 480, ctx.r3.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x820919e8
	if (!ctx.cr6.gt) goto loc_820919E8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8209199C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8259f370
	ctx.lr = 0x820919A4;
	sub_8259F370(ctx, base);
	// lwz r9,472(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r8,472(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// stb r28,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// stb r28,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r28.u8);
	// lwz r7,476(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	// stwx r28,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// lwz r6,480(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// stwx r28,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8209199c
	if (ctx.cr6.lt) goto loc_8209199C;
loc_820919E8:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x82091bd0
	if (!ctx.cr6.gt) goto loc_82091BD0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_820919FC:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r11,r3,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82091b94
	if (ctx.cr0.eq) goto loc_82091B94;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82091ae0
	if (ctx.cr6.eq) goto loc_82091AE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82091ac8
	if (!ctx.cr6.eq) goto loc_82091AC8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,100(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82091A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82091A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82091A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82091AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82091AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82091AC8:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r11,r4,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r10,r3
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x82091b94
	goto loc_82091B94;
loc_82091AE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82091b80
	if (!ctx.cr6.eq) goto loc_82091B80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82091B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82091B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82091B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82091B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82091B80:
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r4,r5,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82091B94:
	// lwz r10,472(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwzx r3,r26,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x82091BA8;
	sub_8259D2A0(ctx, base);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r8,476(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stwx r6,r26,r8
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820919fc
	if (ctx.cr6.lt) goto loc_820919FC;
loc_82091BD0:
	// addi r3,r29,236
	ctx.r3.s64 = ctx.r29.s64 + 236;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091BE4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091BE4;
	// addi r31,r29,408
	ctx.r31.s64 = ctx.r29.s64 + 408;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091C04:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091C04;
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8259d2a0
	ctx.lr = 0x82091C1C;
	sub_8259D2A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x820908e8
	ctx.lr = 0x82091C28;
	sub_820908E8(ctx, base);
	// stw r24,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r24.u32);
	// stw r23,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r23.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r29,192
	ctx.r4.s64 = ctx.r29.s64 + 192;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stb r28,380(r29)
	PPC_STORE_U8(ctx.r29.u32 + 380, ctx.r28.u8);
	// stw r11,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// stw r10,508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 508, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82091C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82091C64"))) PPC_WEAK_FUNC(sub_82091C64);
PPC_FUNC_IMPL(__imp__sub_82091C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091C68"))) PPC_WEAK_FUNC(sub_82091C68);
PPC_FUNC_IMPL(__imp__sub_82091C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82091C70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r31,236
	ctx.r26.s64 = ctx.r31.s64 + 236;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091C9C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091C9C;
	// addi r27,r31,408
	ctx.r27.s64 = ctx.r31.s64 + 408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091CBC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091CBC;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82091CD8;
	sub_8259D2A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820908e8
	ctx.lr = 0x82091CE4;
	sub_820908E8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// beq cr6,0x82091d30
	if (ctx.cr6.eq) goto loc_82091D30;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82091CF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820947f0
	ctx.lr = 0x82091D08;
	sub_820947F0(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r11,r8,r3
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r7.u32);
	// bne cr6,0x82091cf4
	if (!ctx.cr6.eq) goto loc_82091CF4;
loc_82091D30:
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r31,488
	ctx.r11.s64 = ctx.r31.s64 + 488;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r9,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r9.u32);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stb r7,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r7.u8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,392(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82091DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82091DD4"))) PPC_WEAK_FUNC(sub_82091DD4);
PPC_FUNC_IMPL(__imp__sub_82091DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091DD8"))) PPC_WEAK_FUNC(sub_82091DD8);
PPC_FUNC_IMPL(__imp__sub_82091DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82091DE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r31,236
	ctx.r24.s64 = ctx.r31.s64 + 236;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091E10;
	// addi r25,r31,408
	ctx.r25.s64 = ctx.r31.s64 + 408;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82091E30:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82091e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82091E30;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82091E4C;
	sub_8259D2A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820908e8
	ctx.lr = 0x82091E58;
	sub_820908E8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r27.u32);
	// stw r26,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r26.u32);
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x82094760
	ctx.lr = 0x82091E70;
	sub_82094760(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094760
	ctx.lr = 0x82091E84;
	sub_82094760(ctx, base);
	// lis r8,19779
	ctx.r8.s64 = 1296236544;
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r11,r31,344
	ctx.r11.s64 = ctx.r31.s64 + 344;
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// ori r6,r8,12338
	ctx.r6.u64 = ctx.r8.u64 | 12338;
	// li r7,20
	ctx.r7.s64 = 20;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r5,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 24);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r3,r4,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
loc_82091F04:
	// rlwinm r4,r10,10,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// bne cr6,0x82091f04
	if (!ctx.cr6.eq) goto loc_82091F04;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// addi r11,r31,488
	ctx.r11.s64 = ctx.r31.s64 + 488;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stw r29,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r29,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r29.u32);
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r24,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r24.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82091FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82091FCC"))) PPC_WEAK_FUNC(sub_82091FCC);
PPC_FUNC_IMPL(__imp__sub_82091FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091FD0"))) PPC_WEAK_FUNC(sub_82091FD0);
PPC_FUNC_IMPL(__imp__sub_82091FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82091FD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,236
	ctx.r28.s64 = ctx.r31.s64 + 236;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82092010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82092010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092010;
	// addi r29,r31,408
	ctx.r29.s64 = ctx.r31.s64 + 408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82092030:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82092030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092030;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8209204C;
	sub_8259D2A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820908e8
	ctx.lr = 0x82092058;
	sub_820908E8(ctx, base);
	// addi r11,r31,344
	ctx.r11.s64 = ctx.r31.s64 + 344;
	// stw r26,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r26.u32);
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// stw r25,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r25.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
	// stw r24,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r24.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820920DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820920EC"))) PPC_WEAK_FUNC(sub_820920EC);
PPC_FUNC_IMPL(__imp__sub_820920EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820920F0"))) PPC_WEAK_FUNC(sub_820920F0);
PPC_FUNC_IMPL(__imp__sub_820920F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820920F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82092160
	if (ctx.cr6.eq) goto loc_82092160;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// b 0x82092168
	goto loc_82092168;
loc_82092160:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_82092168:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,96(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82092180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r27,r31,236
	ctx.r27.s64 = ctx.r31.s64 + 236;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r4,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r4.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820921A0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820921a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820921A0;
	// addi r28,r31,408
	ctx.r28.s64 = ctx.r31.s64 + 408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820921C0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820921c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820921C0;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820921f8
	if (!ctx.cr6.eq) goto loc_820921F8;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x820921E8;
	sub_8259D2A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820908e8
	ctx.lr = 0x820921F4;
	sub_820908E8(ctx, base);
	// b 0x82092208
	goto loc_82092208;
loc_820921F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091270
	ctx.lr = 0x82092208;
	sub_82091270(ctx, base);
loc_82092208:
	// addi r11,r31,344
	ctx.r11.s64 = ctx.r31.s64 + 344;
	// stw r24,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r24.u32);
	// stw r23,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r23.u32);
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
	// stw r22,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r22.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209228C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209229C"))) PPC_WEAK_FUNC(sub_8209229C);
PPC_FUNC_IMPL(__imp__sub_8209229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820922A0"))) PPC_WEAK_FUNC(sub_820922A0);
PPC_FUNC_IMPL(__imp__sub_820922A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820922A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820922D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820922d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820922D0;
	// addi r29,r31,408
	ctx.r29.s64 = ctx.r31.s64 + 408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820922F0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820922f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820922F0;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82092308;
	sub_8259D2A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820908e8
	ctx.lr = 0x82092314;
	sub_820908E8(ctx, base);
	// addi r11,r31,488
	ctx.r11.s64 = ctx.r31.s64 + 488;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-16716
	ctx.r10.s64 = ctx.r10.s64 + -16716;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82092374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209238C"))) PPC_WEAK_FUNC(sub_8209238C);
PPC_FUNC_IMPL(__imp__sub_8209238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092390"))) PPC_WEAK_FUNC(sub_82092390);
PPC_FUNC_IMPL(__imp__sub_82092390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82092398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r4,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r4.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r30,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r5,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r5.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820923CC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820923cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820923CC;
	// addi r29,r31,408
	ctx.r29.s64 = ctx.r31.s64 + 408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820923EC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820923ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820923EC;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x82092410;
	sub_8259D2A0(ctx, base);
	// lwz r8,404(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,396(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x820908e8
	ctx.lr = 0x82092428;
	sub_820908E8(ctx, base);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r11,r31,488
	ctx.r11.s64 = ctx.r31.s64 + 488;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-16716
	ctx.r10.s64 = ctx.r10.s64 + -16716;
	// stw r4,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r4.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// oris r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 262144;
	// rlwinm r11,r7,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r9,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r9.u8);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r28,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r28.u32);
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820924AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,26
	ctx.r7.s64 = 26;
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820924C4"))) PPC_WEAK_FUNC(sub_820924C4);
PPC_FUNC_IMPL(__imp__sub_820924C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820924C8"))) PPC_WEAK_FUNC(sub_820924C8);
PPC_FUNC_IMPL(__imp__sub_820924C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820924D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,236
	ctx.r29.s64 = ctx.r30.s64 + 236;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820924FC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820924fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820924FC;
	// addi r3,r30,408
	ctx.r3.s64 = ctx.r30.s64 + 408;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209251C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209251c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209251C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820908e8
	ctx.lr = 0x82092530;
	sub_820908E8(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82092540;
	sub_8259D2A0(ctx, base);
	// stw r31,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r31.u32);
	// stw r31,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r31.u32);
	// addi r11,r30,272
	ctx.r11.s64 = ctx.r30.s64 + 272;
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r31,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r31.u32);
	// stw r31,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r31.u32);
	// stw r29,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r29.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stb r31,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r31.u8);
	// stb r31,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r31.u8);
	// stb r31,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r31.u8);
	// stb r31,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r31.u8);
	// stb r31,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r31.u8);
	// stb r31,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r31.u8);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stb r31,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r31.u8);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stb r31,380(r30)
	PPC_STORE_U8(ctx.r30.u32 + 380, ctx.r31.u8);
	// lwz r8,276(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// bne cr6,0x820925c8
	if (!ctx.cr6.eq) goto loc_820925C8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820925C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820925C8:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r5.u32);
	// beq cr6,0x8209260c
	if (ctx.cr6.eq) goto loc_8209260C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8209260C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82092624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209262C"))) PPC_WEAK_FUNC(sub_8209262C);
PPC_FUNC_IMPL(__imp__sub_8209262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092630"))) PPC_WEAK_FUNC(sub_82092630);
PPC_FUNC_IMPL(__imp__sub_82092630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82092638;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82092694
	if (ctx.cr6.eq) goto loc_82092694;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// b 0x8209269c
	goto loc_8209269C;
loc_82092694:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_8209269C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,96(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820926B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r27,r31,236
	ctx.r27.s64 = ctx.r31.s64 + 236;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r4,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r4.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820926D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820926d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820926D4;
	// addi r26,r31,408
	ctx.r26.s64 = ctx.r31.s64 + 408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820926F4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820926f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820926F4;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209272c
	if (!ctx.cr6.eq) goto loc_8209272C;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8209271C;
	sub_8259D2A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820908e8
	ctx.lr = 0x82092728;
	sub_820908E8(ctx, base);
	// b 0x8209273c
	goto loc_8209273C;
loc_8209272C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091270
	ctx.lr = 0x8209273C;
	sub_82091270(ctx, base);
loc_8209273C:
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stb r30,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r30.u8);
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// stb r30,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r30.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// stb r30,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r30.u8);
	// stb r30,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r30.u8);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stb r30,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r30.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r30,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r30.u8);
	// lwz r8,276(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// bne cr6,0x820927c4
	if (!ctx.cr6.eq) goto loc_820927C4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820927C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820927C4:
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820927E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820927F0"))) PPC_WEAK_FUNC(sub_820927F0);
PPC_FUNC_IMPL(__imp__sub_820927F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bne cr6,0x82092864
	if (!ctx.cr6.eq) goto loc_82092864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
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
loc_82092864:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82092884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_820928A0"))) PPC_WEAK_FUNC(sub_820928A0);
PPC_FUNC_IMPL(__imp__sub_820928A0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// beq cr6,0x820928e4
	if (ctx.cr6.eq) goto loc_820928E4;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// b 0x820928e8
	goto loc_820928E8;
loc_820928E4:
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_820928E8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82092904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8209291C"))) PPC_WEAK_FUNC(sub_8209291C);
PPC_FUNC_IMPL(__imp__sub_8209291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092920"))) PPC_WEAK_FUNC(sub_82092920);
PPC_FUNC_IMPL(__imp__sub_82092920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82092928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// bne cr6,0x82092964
	if (!ctx.cr6.eq) goto loc_82092964;
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82092974
	goto loc_82092974;
loc_82092964:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82092974:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82092a14
	if (!ctx.cr6.eq) goto loc_82092A14;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r9.u8);
	// beq cr6,0x820929b4
	if (ctx.cr6.eq) goto loc_820929B4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820929A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_820929B4:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,112(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r28,116(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x820929ec
	if (ctx.cr6.eq) goto loc_820929EC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x820929f4
	goto loc_820929F4;
loc_820929EC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-16708
	ctx.r4.s64 = ctx.r11.s64 + -16708;
loc_820929F4:
	// bl 0x82091c68
	ctx.lr = 0x820929F8;
	sub_82091C68(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82092A14:
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r9,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097ae8
	ctx.lr = 0x82092A2C;
	sub_82097AE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82092A34"))) PPC_WEAK_FUNC(sub_82092A34);
PPC_FUNC_IMPL(__imp__sub_82092A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092A38"))) PPC_WEAK_FUNC(sub_82092A38);
PPC_FUNC_IMPL(__imp__sub_82092A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82092A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x82092dc8
	if (ctx.cr6.gt) goto loc_82092DC8;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,10860
	ctx.r12.s64 = ctx.r12.s64 + 10860;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82092D28;
	case 1:
		goto loc_82092C64;
	case 2:
		goto loc_82092DC8;
	case 3:
		goto loc_82092DC8;
	case 4:
		goto loc_82092DC8;
	case 5:
		goto loc_82092DC8;
	case 6:
		goto loc_82092DC8;
	case 7:
		goto loc_82092DC8;
	case 8:
		goto loc_82092DC8;
	case 9:
		goto loc_82092DC8;
	case 10:
		goto loc_82092DC8;
	case 11:
		goto loc_82092DC8;
	case 12:
		goto loc_82092DC8;
	case 13:
		goto loc_82092DC8;
	case 14:
		goto loc_82092C38;
	case 15:
		goto loc_82092DC8;
	case 16:
		goto loc_82092DC8;
	case 17:
		goto loc_82092DC8;
	case 18:
		goto loc_82092DC8;
	case 19:
		goto loc_82092DC8;
	case 20:
		goto loc_82092DC8;
	case 21:
		goto loc_82092DC8;
	case 22:
		goto loc_82092DC8;
	case 23:
		goto loc_82092DC8;
	case 24:
		goto loc_82092DC8;
	case 25:
		goto loc_82092B08;
	case 26:
		goto loc_82092DC8;
	case 27:
		goto loc_82092AF8;
	case 28:
		goto loc_82092DC8;
	case 29:
		goto loc_82092DC8;
	case 30:
		goto loc_82092DC8;
	case 31:
		goto loc_82092DC8;
	case 32:
		goto loc_82092DC8;
	case 33:
		goto loc_82092DC8;
	case 34:
		goto loc_82092BCC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,11560(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11560);
	// lwz r16,11364(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11364);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11320(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11320);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11016(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11016);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11000(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11000);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11720);
	// lwz r16,11212(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11212);
loc_82092AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094508
	ctx.lr = 0x82092B00;
	sub_82094508(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092B08:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// ble cr6,0x82092dc8
	if (!ctx.cr6.gt) goto loc_82092DC8;
loc_82092B20:
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,472(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x820909e0
	ctx.lr = 0x82092B38;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82092b64
	if (!ctx.cr6.eq) goto loc_82092B64;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r6.u32);
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82092b20
	if (ctx.cr6.lt) goto loc_82092B20;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092B64:
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwz r9,476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82092bb0
	if (!ctx.cr6.lt) goto loc_82092BB0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r6,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r6.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092BB0:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82092BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092BCC:
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82092dc8
	if (ctx.cr6.eq) goto loc_82092DC8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,19
	ctx.r9.s64 = 19;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82092BEC:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82092bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092BEC;
	// li r5,773
	ctx.r5.s64 = 773;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82090f98
	ctx.lr = 0x82092C0C;
	sub_82090F98(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x82094508
	ctx.lr = 0x82092C1C;
	sub_82094508(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r11,3860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3860, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092C38:
	// lwz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82092dc8
	if (ctx.cr6.eq) goto loc_82092DC8;
	// lwz r5,484(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092C64:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82092cd0
	if (ctx.cr6.eq) goto loc_82092CD0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,19
	ctx.r9.s64 = 19;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82092C84:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82092c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092C84;
	// li r5,773
	ctx.r5.s64 = 773;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82090f98
	ctx.lr = 0x82092CA4;
	sub_82090F98(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x82094508
	ctx.lr = 0x82092CB4;
	sub_82094508(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r11,3860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3860, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092CD0:
	// lbz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r10,r11,864
	ctx.r10.s64 = ctx.r11.s64 + 864;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4624, ctx.r11.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// bl 0x82094c58
	ctx.lr = 0x82092D20;
	sub_82094C58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82092db8
	goto loc_82092DB8;
loc_82092D28:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82092d54
	if (!ctx.cr6.eq) goto loc_82092D54;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,3860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3860, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092D54:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne cr6,0x82092d90
	if (!ctx.cr6.eq) goto loc_82092D90;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092D90:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r11,4624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4624, ctx.r11.u32);
	// bl 0x82094c58
	ctx.lr = 0x82092DB4;
	sub_82094C58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82092DB8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,4624(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4624);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x82092DC8;
	sub_82097AE8(ctx, base);
loc_82092DC8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82092DD0"))) PPC_WEAK_FUNC(sub_82092DD0);
PPC_FUNC_IMPL(__imp__sub_82092DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82092DD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82092e04
	if (ctx.cr6.eq) goto loc_82092E04;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82092f00
	if (!ctx.cr6.eq) goto loc_82092F00;
	// bl 0x82094508
	ctx.lr = 0x82092DFC;
	sub_82094508(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82092E04:
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r28.u8);
	// stb r28,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r28.u8);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bgt cr6,0x82092e40
	if (ctx.cr6.gt) goto loc_82092E40;
	// bl 0x82094d08
	ctx.lr = 0x82092E3C;
	sub_82094D08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82092E40:
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lbz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// lbz r7,77(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 77);
	// stb r7,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r7.u8);
	// lbz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 76);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stb r6,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r6.u8);
	// beq cr6,0x82092e94
	if (ctx.cr6.eq) goto loc_82092E94;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82092E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r28,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r28.u8);
loc_82092E94:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x82092EA8;
	sub_82097AE8(ctx, base);
	// lbz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092f00
	if (ctx.cr6.eq) goto loc_82092F00;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82092ed0
	if (ctx.cr6.eq) goto loc_82092ED0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82092ed0
	if (ctx.cr6.eq) goto loc_82092ED0;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82092f00
	if (!ctx.cr6.eq) goto loc_82092F00;
loc_82092ED0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r9,r11,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r28,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r28.u8);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82092F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82092F00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82092F08"))) PPC_WEAK_FUNC(sub_82092F08);
PPC_FUNC_IMPL(__imp__sub_82092F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82092F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgt cr6,0x820932b8
	if (ctx.cr6.gt) goto loc_820932B8;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,12100
	ctx.r12.s64 = ctx.r12.s64 + 12100;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820931D0;
	case 1:
		goto loc_820931D0;
	case 2:
		goto loc_820932B8;
	case 3:
		goto loc_820932B8;
	case 4:
		goto loc_820932B8;
	case 5:
		goto loc_820932B8;
	case 6:
		goto loc_820932B8;
	case 7:
		goto loc_820932B8;
	case 8:
		goto loc_820932B8;
	case 9:
		goto loc_820932B8;
	case 10:
		goto loc_82092FF8;
	case 11:
		goto loc_820932B8;
	case 12:
		goto loc_820932B8;
	case 13:
		goto loc_820932B8;
	case 14:
		goto loc_820932B8;
	case 15:
		goto loc_820932B8;
	case 16:
		goto loc_82093094;
	case 17:
		goto loc_820932B8;
	case 18:
		goto loc_820932B8;
	case 19:
		goto loc_820932B8;
	case 20:
		goto loc_820932B8;
	case 21:
		goto loc_820932B8;
	case 22:
		goto loc_82092FAC;
	case 23:
		goto loc_820932B8;
	case 24:
		goto loc_820932B8;
	case 25:
		goto loc_82093030;
	default:
		__builtin_unreachable();
	}
	// lwz r16,12752(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12752);
	// lwz r16,12752(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12752);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12280(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12280);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12436(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12436);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12204(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12204);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12984);
	// lwz r16,12336(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12336);
loc_82092FAC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82092fd4
	if (!ctx.cr6.eq) goto loc_82092FD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// bl 0x82094508
	ctx.lr = 0x82092FCC;
	sub_82094508(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092FD4:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r9.u8);
	// bl 0x82094c58
	ctx.lr = 0x82092FE4;
	sub_82094C58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094508
	ctx.lr = 0x82092FF0;
	sub_82094508(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82092FF8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r6,r31,108
	ctx.r6.s64 = ctx.r31.s64 + 108;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// addi r7,r11,864
	ctx.r7.s64 = ctx.r11.s64 + 864;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093030:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209306c
	if (!ctx.cr6.eq) goto loc_8209306C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r5,r31,344
	ctx.r5.s64 = ctx.r31.s64 + 344;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82093064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209306C:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209308C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093094:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82093120
	if (ctx.cr6.eq) goto loc_82093120;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820930e0
	if (ctx.cr6.eq) goto loc_820930E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820932b8
	if (!ctx.cr6.eq) goto loc_820932B8;
loc_820930B0:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820930D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820930E0:
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820930b0
	if (ctx.cr6.eq) goto loc_820930B0;
	// lwz r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820930b0
	if (ctx.cr6.eq) goto loc_820930B0;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093120:
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82093160
	if (ctx.cr6.eq) goto loc_82093160;
	// lwz r5,372(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82093160
	if (ctx.cr6.eq) goto loc_82093160;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093160:
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820931a0
	if (ctx.cr6.eq) goto loc_820931A0;
	// lwz r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820931a0
	if (ctx.cr6.eq) goto loc_820931A0;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82093198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820931A0:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820931C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820931D0:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// bl 0x82094c58
	ctx.lr = 0x820931E8;
	sub_82094C58(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8209321c
	if (!ctx.cr6.eq) goto loc_8209321C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r7,r31,108
	ctx.r7.s64 = ctx.r31.s64 + 108;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r8,r11,864
	ctx.r8.s64 = ctx.r11.s64 + 864;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
loc_8209321C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bgt cr6,0x82093234
	if (ctx.cr6.gt) goto loc_82093234;
	// bl 0x82094d08
	ctx.lr = 0x8209322C;
	sub_82094D08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82093238
	goto loc_82093238;
loc_82093234:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82093238:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82093250
	if (ctx.cr6.gt) goto loc_82093250;
	// bl 0x82094ca8
	ctx.lr = 0x82093248;
	sub_82094CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82093254
	goto loc_82093254;
loc_82093250:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82093254:
	// addi r6,r31,236
	ctx.r6.s64 = ctx.r31.s64 + 236;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x82093260;
	sub_82097AE8(ctx, base);
	// lbz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820932b8
	if (ctx.cr6.eq) goto loc_820932B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82093288
	if (ctx.cr6.eq) goto loc_82093288;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82093288
	if (ctx.cr6.eq) goto loc_82093288;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x820932b8
	if (!ctx.cr6.eq) goto loc_820932B8;
loc_82093288:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r9,r11,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r29,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r29.u8);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820932B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820932B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820932C0"))) PPC_WEAK_FUNC(sub_820932C0);
PPC_FUNC_IMPL(__imp__sub_820932C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820932C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82093aec
	if (ctx.cr6.gt) goto loc_82093AEC;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,13052
	ctx.r12.s64 = ctx.r12.s64 + 13052;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82093A24;
	case 1:
		goto loc_82093AEC;
	case 2:
		goto loc_82093AEC;
	case 3:
		goto loc_82093AEC;
	case 4:
		goto loc_82093AEC;
	case 5:
		goto loc_82093AEC;
	case 6:
		goto loc_82093AEC;
	case 7:
		goto loc_82093AEC;
	case 8:
		goto loc_82093AEC;
	case 9:
		goto loc_82093AEC;
	case 10:
		goto loc_82093390;
	case 11:
		goto loc_820933B4;
	case 12:
		goto loc_82093AEC;
	case 13:
		goto loc_82093AEC;
	case 14:
		goto loc_82093AEC;
	case 15:
		goto loc_820933C4;
	case 16:
		goto loc_820934C4;
	case 17:
		goto loc_82093AEC;
	case 18:
		goto loc_82093AEC;
	case 19:
		goto loc_82093AEC;
	case 20:
		goto loc_82093AEC;
	case 21:
		goto loc_82093AEC;
	case 22:
		goto loc_82093AEC;
	case 23:
		goto loc_8209336C;
	case 24:
		goto loc_82093380;
	case 25:
		goto loc_820933EC;
	case 26:
		goto loc_82093AEC;
	case 27:
		goto loc_82093794;
	default:
		__builtin_unreachable();
	}
	// lwz r16,14884(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14884);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,13200(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13200);
	// lwz r16,13236(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13236);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,13252(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13252);
	// lwz r16,13508(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13508);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,13164(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13164);
	// lwz r16,13184(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13184);
	// lwz r16,13292(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13292);
	// lwz r16,15084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15084);
	// lwz r16,14228(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14228);
loc_8209336C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094508
	ctx.lr = 0x82093378;
	sub_82094508(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093380:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093390:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820933AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820933B4:
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820933C4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820933E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820933EC:
	// lwz r10,384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82093428
	if (!ctx.cr6.eq) goto loc_82093428;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r5,r31,344
	ctx.r5.s64 = ctx.r31.s64 + 344;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82093420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093428:
	// addi r30,r31,376
	ctx.r30.s64 = ctx.r31.s64 + 376;
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8209349c
	if (!ctx.cr6.eq) goto loc_8209349C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r31,372
	ctx.r7.s64 = ctx.r31.s64 + 372;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bne cr6,0x82093738
	if (!ctx.cr6.eq) goto loc_82093738;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82093494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209349C:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820934BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820934C4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82093580
	if (ctx.cr6.eq) goto loc_82093580;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82093510
	if (ctx.cr6.eq) goto loc_82093510;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82093aec
	if (!ctx.cr6.eq) goto loc_82093AEC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82093504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093510:
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82093550
	if (ctx.cr6.eq) goto loc_82093550;
	// lwz r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82093550
	if (ctx.cr6.eq) goto loc_82093550;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82093548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093550:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82093574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093580:
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r5,268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82093764
	if (!ctx.cr6.eq) goto loc_82093764;
	// addi r11,r31,344
	ctx.r11.s64 = ctx.r31.s64 + 344;
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// ori r3,r4,12338
	ctx.r3.u64 = ctx.r4.u64 | 12338;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82093764
	if (!ctx.cr6.eq) goto loc_82093764;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// rotlwi r9,r9,24
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 | ctx.r9.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lis r8,-32149
	ctx.r8.s64 = -2106916864;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r8,r8,704
	ctx.r8.s64 = ctx.r8.s64 + 704;
loc_820935F0:
	// rlwinm r7,r11,10,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FC;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// bne cr6,0x820935f0
	if (!ctx.cr6.eq) goto loc_820935F0;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// addi r10,r31,368
	ctx.r10.s64 = ctx.r31.s64 + 368;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8209362C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8209364c
	if (!ctx.cr0.eq) goto loc_8209364C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8209362c
	if (!ctx.cr6.eq) goto loc_8209362C;
loc_8209364C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82093734
	if (!ctx.cr6.eq) goto loc_82093734;
	// addi r30,r31,372
	ctx.r30.s64 = ctx.r31.s64 + 372;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8209369c
	if (!ctx.cr6.eq) goto loc_8209369C;
	// addi r8,r31,376
	ctx.r8.s64 = ctx.r31.s64 + 376;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8209369c
	if (!ctx.cr6.eq) goto loc_8209369C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
loc_8209369C:
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82093550
	if (ctx.cr6.eq) goto loc_82093550;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820936f0
	if (ctx.cr6.eq) goto loc_820936F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820936f0
	if (ctx.cr6.eq) goto loc_820936F0;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820936E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820936F0:
	// lwz r7,356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82093550
	if (ctx.cr6.eq) goto loc_82093550;
	// lwz r6,376(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82093550
	if (ctx.cr6.eq) goto loc_82093550;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209372C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093734:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82093738:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82093758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093764:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82093788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093794:
	// lwz r8,388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82093a00
	if (!ctx.cr6.eq) goto loc_82093A00;
	// lwz r7,384(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820939a0
	if (!ctx.cr6.eq) goto loc_820939A0;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r5,268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8209397c
	if (!ctx.cr6.eq) goto loc_8209397C;
	// addi r11,r31,344
	ctx.r11.s64 = ctx.r31.s64 + 344;
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// ori r3,r4,12338
	ctx.r3.u64 = ctx.r4.u64 | 12338;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8209397c
	if (!ctx.cr6.eq) goto loc_8209397C;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// rotlwi r9,r9,24
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 | ctx.r9.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lis r8,-32149
	ctx.r8.s64 = -2106916864;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r8,r8,704
	ctx.r8.s64 = ctx.r8.s64 + 704;
loc_8209381C:
	// rlwinm r7,r11,10,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FC;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// bne cr6,0x8209381c
	if (!ctx.cr6.eq) goto loc_8209381C;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// addi r10,r31,368
	ctx.r10.s64 = ctx.r31.s64 + 368;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82093858:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82093878
	if (!ctx.cr0.eq) goto loc_82093878;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82093858
	if (!ctx.cr6.eq) goto loc_82093858;
loc_82093878:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82093a00
	if (!ctx.cr6.eq) goto loc_82093A00;
	// lwz r4,372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820938dc
	if (ctx.cr6.eq) goto loc_820938DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x82094760
	ctx.lr = 0x820938A0;
	sub_82094760(ctx, base);
	// addi r11,r31,360
	ctx.r11.s64 = ctx.r31.s64 + 360;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_820938B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820938d0
	if (!ctx.cr0.eq) goto loc_820938D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820938b0
	if (!ctx.cr6.eq) goto loc_820938B0;
loc_820938D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820938dc
	if (ctx.cr6.eq) goto loc_820938DC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820938DC:
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82093930
	if (ctx.cr6.eq) goto loc_82093930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x82094760
	ctx.lr = 0x820938F4;
	sub_82094760(ctx, base);
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82093904:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82093924
	if (!ctx.cr0.eq) goto loc_82093924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82093904
	if (!ctx.cr6.eq) goto loc_82093904;
loc_82093924:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82093930
	if (ctx.cr6.eq) goto loc_82093930;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82093930:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82093960
	if (ctx.cr6.eq) goto loc_82093960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093960:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82093974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209397C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82093998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820939A0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820939B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x820939e4
	if (!ctx.cr6.eq) goto loc_820939E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820939DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820939E4:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820939F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093A00:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82093A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82093A24:
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82093a44
	if (ctx.cr6.eq) goto loc_82093A44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// bl 0x820928a0
	ctx.lr = 0x82093A44;
	sub_820928A0(ctx, base);
loc_82093A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// bl 0x82094c58
	ctx.lr = 0x82093A50;
	sub_82094C58(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bgt cr6,0x82093a68
	if (ctx.cr6.gt) goto loc_82093A68;
	// bl 0x82094d08
	ctx.lr = 0x82093A60;
	sub_82094D08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82093a6c
	goto loc_82093A6C;
loc_82093A68:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82093A6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82093a84
	if (ctx.cr6.gt) goto loc_82093A84;
	// bl 0x82094ca8
	ctx.lr = 0x82093A7C;
	sub_82094CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82093a88
	goto loc_82093A88;
loc_82093A84:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82093A88:
	// addi r6,r31,236
	ctx.r6.s64 = ctx.r31.s64 + 236;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x82093A94;
	sub_82097AE8(ctx, base);
	// lbz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82093aec
	if (ctx.cr6.eq) goto loc_82093AEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82093abc
	if (ctx.cr6.eq) goto loc_82093ABC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82093abc
	if (ctx.cr6.eq) goto loc_82093ABC;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82093aec
	if (!ctx.cr6.eq) goto loc_82093AEC;
loc_82093ABC:
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r6,r8,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r7,0,24,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r29,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r29.u8);
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82093AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82093AEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82093AF4"))) PPC_WEAK_FUNC(sub_82093AF4);
PPC_FUNC_IMPL(__imp__sub_82093AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093AF8"))) PPC_WEAK_FUNC(sub_82093AF8);
PPC_FUNC_IMPL(__imp__sub_82093AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82093B00;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82093e3c
	if (ctx.cr6.eq) goto loc_82093E3C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82093ba4
	if (ctx.cr6.eq) goto loc_82093BA4;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82093ecc
	if (!ctx.cr6.eq) goto loc_82093ECC;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82093b40
	if (!ctx.cr6.eq) goto loc_82093B40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// b 0x82093b48
	goto loc_82093B48;
loc_82093B40:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r9.u8);
loc_82093B48:
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// bne cr6,0x82093b90
	if (!ctx.cr6.eq) goto loc_82093B90;
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r7,26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 26, ctx.xer);
	// bne cr6,0x82093b90
	if (!ctx.cr6.eq) goto loc_82093B90;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// bne cr6,0x82093b90
	if (!ctx.cr6.eq) goto loc_82093B90;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82093B90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094508
	ctx.lr = 0x82093B9C;
	sub_82094508(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82093BA4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// bne cr6,0x82093be0
	if (!ctx.cr6.eq) goto loc_82093BE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// bl 0x82094c58
	ctx.lr = 0x82093BC8;
	sub_82094C58(ctx, base);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bgt cr6,0x82093c44
	if (ctx.cr6.gt) goto loc_82093C44;
	// bl 0x82094d08
	ctx.lr = 0x82093BD8;
	sub_82094D08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82093c48
	goto loc_82093C48;
loc_82093BE0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82093c88
	if (ctx.cr6.eq) goto loc_82093C88;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x82093c80
	if (ctx.cr6.eq) goto loc_82093C80;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// bl 0x82094c58
	ctx.lr = 0x82093C0C;
	sub_82094C58(ctx, base);
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r4,r6,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r5,r5,0,16,12
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// rlwinm r4,r4,0,16,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bgt cr6,0x82093c44
	if (ctx.cr6.gt) goto loc_82093C44;
	// bl 0x82094d08
	ctx.lr = 0x82093C3C;
	sub_82094D08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82093c48
	goto loc_82093C48;
loc_82093C44:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82093C48:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82093c6c
	if (ctx.cr6.gt) goto loc_82093C6C;
	// bl 0x82094ca8
	ctx.lr = 0x82093C58;
	sub_82094CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r31,236
	ctx.r6.s64 = ctx.r31.s64 + 236;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x82093C68;
	sub_82097AE8(ctx, base);
	// b 0x82093ddc
	goto loc_82093DDC;
loc_82093C6C:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r31,236
	ctx.r6.s64 = ctx.r31.s64 + 236;
	// bl 0x82097ae8
	ctx.lr = 0x82093C7C;
	sub_82097AE8(ctx, base);
	// b 0x82093ddc
	goto loc_82093DDC;
loc_82093C80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82093c8c
	if (!ctx.cr6.eq) goto loc_82093C8C;
loc_82093C88:
	// stb r10,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r10.u8);
loc_82093C8C:
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r5,r5,0,16,12
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// bge cr6,0x82093d60
	if (!ctx.cr6.lt) goto loc_82093D60;
	// oris r6,r8,7
	ctx.r6.u64 = ctx.r8.u64 | 458752;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82093CD4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82093cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82093CD4;
	// addi r30,r31,408
	ctx.r30.s64 = ctx.r31.s64 + 408;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82093CF4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82093cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82093CF4;
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x82093D18;
	sub_8259D2A0(ctx, base);
	// lwz r9,404(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,396(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x820908e8
	ctx.lr = 0x82093D30;
	sub_820908E8(ctx, base);
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r6,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r6.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82093ddc
	goto loc_82093DDC;
loc_82093D60:
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lbz r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// rlwinm r6,r6,0,16,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// beq cr6,0x82093d80
	if (ctx.cr6.eq) goto loc_82093D80;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// b 0x82093dc4
	goto loc_82093DC4;
loc_82093D80:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,19
	ctx.r9.s64 = 19;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82093D90:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82093d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82093D90;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82091018
	ctx.lr = 0x82093DB4;
	sub_82091018(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// bl 0x82094508
	ctx.lr = 0x82093DC4;
	sub_82094508(ctx, base);
loc_82093DC4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,3860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3860, ctx.r11.u32);
loc_82093DDC:
	// lbz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82093ecc
	if (ctx.cr6.eq) goto loc_82093ECC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82093e04
	if (ctx.cr6.eq) goto loc_82093E04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82093e04
	if (ctx.cr6.eq) goto loc_82093E04;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82093ecc
	if (!ctx.cr6.eq) goto loc_82093ECC;
loc_82093E04:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r9,r11,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r29,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r29.u8);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82093E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82093E3C:
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82093e68
	if (!ctx.cr6.eq) goto loc_82093E68;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,3860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3860, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82093E68:
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// beq cr6,0x82093e98
	if (ctx.cr6.eq) goto loc_82093E98;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r29.u8);
loc_82093E98:
	// lbz r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// addi r6,r31,236
	ctx.r6.s64 = ctx.r31.s64 + 236;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82093ec0
	if (ctx.cr6.eq) goto loc_82093EC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097ae8
	ctx.lr = 0x82093EB8;
	sub_82097AE8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82093EC0:
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82097ae8
	ctx.lr = 0x82093ECC;
	sub_82097AE8(ctx, base);
loc_82093ECC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82093ED4"))) PPC_WEAK_FUNC(sub_82093ED4);
PPC_FUNC_IMPL(__imp__sub_82093ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093ED8"))) PPC_WEAK_FUNC(sub_82093ED8);
PPC_FUNC_IMPL(__imp__sub_82093ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82093EE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x8209437c
	if (ctx.cr6.gt) goto loc_8209437C;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,16148
	ctx.r12.s64 = ctx.r12.s64 + 16148;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820942B0;
	case 1:
		goto loc_8209437C;
	case 2:
		goto loc_8209437C;
	case 3:
		goto loc_8209437C;
	case 4:
		goto loc_8209437C;
	case 5:
		goto loc_8209437C;
	case 6:
		goto loc_8209437C;
	case 7:
		goto loc_8209437C;
	case 8:
		goto loc_8209437C;
	case 9:
		goto loc_8209437C;
	case 10:
		goto loc_8209437C;
	case 11:
		goto loc_8209437C;
	case 12:
		goto loc_8209437C;
	case 13:
		goto loc_8209437C;
	case 14:
		goto loc_8209437C;
	case 15:
		goto loc_8209437C;
	case 16:
		goto loc_8209437C;
	case 17:
		goto loc_8209437C;
	case 18:
		goto loc_8209437C;
	case 19:
		goto loc_82093F80;
	case 20:
		goto loc_820940FC;
	case 21:
		goto loc_8209437C;
	case 22:
		goto loc_8209437C;
	case 23:
		goto loc_8209437C;
	case 24:
		goto loc_8209437C;
	case 25:
		goto loc_8209437C;
	case 26:
		goto loc_82093F94;
	default:
		__builtin_unreachable();
	}
	// lwz r16,17072(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17072);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,16256(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16256);
	// lwz r16,16636(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16636);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,17276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17276);
	// lwz r16,16276(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16276);
loc_82093F80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094508
	ctx.lr = 0x82093F8C;
	sub_82094508(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82093F94:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82093fac
	if (ctx.cr6.gt) goto loc_82093FAC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82094ca8
	ctx.lr = 0x82093FA8;
	sub_82094CA8(ctx, base);
	// b 0x82093fb0
	goto loc_82093FB0;
loc_82093FAC:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82093FB0:
	// lis r29,-32149
	ctx.r29.s64 = -2106916864;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// stw r3,4448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4448, ctx.r3.u32);
	// bgt cr6,0x82093fd0
	if (ctx.cr6.gt) goto loc_82093FD0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82094d08
	ctx.lr = 0x82093FCC;
	sub_82094D08(ctx, base);
	// b 0x82093fd4
	goto loc_82093FD4;
loc_82093FD0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82093FD4:
	// lis r30,-32149
	ctx.r30.s64 = -2106916864;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,4452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4452, ctx.r3.u32);
	// bne cr6,0x82094030
	if (!ctx.cr6.eq) goto loc_82094030;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82094028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82094030:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// bl 0x82094c58
	ctx.lr = 0x82094040;
	sub_82094C58(ctx, base);
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209405c
	if (ctx.cr6.eq) goto loc_8209405C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r27,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r27.u32);
	// bl 0x820928a0
	ctx.lr = 0x8209405C;
	sub_820928A0(ctx, base);
loc_8209405C:
	// lwz r4,4448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8209408c
	if (!ctx.cr6.eq) goto loc_8209408C;
	// lbz r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82094080
	if (ctx.cr6.eq) goto loc_82094080;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r5,4452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4452, ctx.r5.u32);
	// b 0x82094090
	goto loc_82094090;
loc_82094080:
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r5,4452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4452, ctx.r5.u32);
	// b 0x82094090
	goto loc_82094090;
loc_8209408C:
	// lwz r5,4452(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4452);
loc_82094090:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x8209409C;
	sub_82097AE8(ctx, base);
	// lbz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209437c
	if (ctx.cr6.eq) goto loc_8209437C;
	// lwz r11,4452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4452);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820940c4
	if (ctx.cr6.eq) goto loc_820940C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820940c4
	if (ctx.cr6.eq) goto loc_820940C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8209437c
	if (!ctx.cr6.eq) goto loc_8209437C;
loc_820940C4:
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r5,r7,0,24,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r6,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r27,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r27.u8);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820940F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820940FC:
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stb r26,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r26.u8);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82094200
	if (!ctx.cr6.gt) goto loc_82094200;
	// lwz r8,384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82094128
	if (!ctx.cr6.eq) goto loc_82094128;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82094128:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bge cr6,0x8209413c
	if (!ctx.cr6.lt) goto loc_8209413C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_8209413C:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r10,56
	ctx.r10.s64 = 56;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r11,4095
	ctx.r6.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r6,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFFFF;
	// cmplwi cr6,r11,168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 168, ctx.xer);
	// ble cr6,0x82094180
	if (!ctx.cr6.gt) goto loc_82094180;
	// rlwinm r10,r11,2,10,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lis r5,-16192
	ctx.r5.s64 = -1061158912;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// ori r4,r5,49345
	ctx.r4.u64 = ctx.r5.u64 | 49345;
	// mulhwu r10,r3,r4
	ctx.r10.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r4.u32)) >> 32;
	// rlwinm r10,r10,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_82094180:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// addi r6,r11,4095
	ctx.r6.s64 = ctx.r11.s64 + 4095;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-15904(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15904);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// ld r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 88);
	// bl 0x82091150
	ctx.lr = 0x820941D0;
	sub_82091150(ctx, base);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// ld r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// bl 0x82091150
	ctx.lr = 0x820941DC;
	sub_82091150(ctx, base);
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// ld r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// bl 0x82091150
	ctx.lr = 0x820941E8;
	sub_82091150(ctx, base);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// lbz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// stb r9,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r9.u8);
	// b 0x8209420c
	goto loc_8209420C;
loc_82094200:
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r8,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r8.u32);
loc_8209420C:
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82094220
	if (!ctx.cr6.eq) goto loc_82094220;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82094220:
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// addi r28,r31,272
	ctx.r28.s64 = ctx.r31.s64 + 272;
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// lwz r5,276(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82094290
	if (!ctx.cr6.eq) goto loc_82094290;
	// lwz r4,188(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x8209437c
	if (!ctx.cr6.gt) goto loc_8209437C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82094250:
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825a1518
	ctx.lr = 0x82094268;
	sub_825A1518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82094274
	if (!ctx.cr6.eq) goto loc_82094274;
	// stb r26,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r26.u8);
loc_82094274:
	// lwz r3,188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82094250
	if (ctx.cr6.lt) goto loc_82094250;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82094290:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820942A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820942B0:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// bl 0x82094c58
	ctx.lr = 0x820942C0;
	sub_82094C58(ctx, base);
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820942dc
	if (ctx.cr6.eq) goto loc_820942DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r27,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r27.u32);
	// bl 0x820928a0
	ctx.lr = 0x820942DC;
	sub_820928A0(ctx, base);
loc_820942DC:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r30,-32149
	ctx.r30.s64 = -2106916864;
	// lwz r4,4448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82094314
	if (!ctx.cr6.eq) goto loc_82094314;
	// lbz r8,380(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82094308
	if (ctx.cr6.eq) goto loc_82094308;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r5,4452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4452, ctx.r5.u32);
	// b 0x82094318
	goto loc_82094318;
loc_82094308:
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r5,4452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4452, ctx.r5.u32);
	// b 0x82094318
	goto loc_82094318;
loc_82094314:
	// lwz r5,4452(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4452);
loc_82094318:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82097ae8
	ctx.lr = 0x82094324;
	sub_82097AE8(ctx, base);
	// lbz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8209437c
	if (ctx.cr6.eq) goto loc_8209437C;
	// lwz r11,4452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4452);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209434c
	if (ctx.cr6.eq) goto loc_8209434C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209434c
	if (ctx.cr6.eq) goto loc_8209434C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8209437c
	if (!ctx.cr6.eq) goto loc_8209437C;
loc_8209434C:
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r4,r6,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r5,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r27,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r27.u8);
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209437C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209437C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094384"))) PPC_WEAK_FUNC(sub_82094384);
PPC_FUNC_IMPL(__imp__sub_82094384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094388"))) PPC_WEAK_FUNC(sub_82094388);
PPC_FUNC_IMPL(__imp__sub_82094388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82094390;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209446c
	if (ctx.cr6.eq) goto loc_8209446C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820943c4
	if (ctx.cr6.eq) goto loc_820943C4;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x820944fc
	if (!ctx.cr6.eq) goto loc_820944FC;
	// bl 0x82094508
	ctx.lr = 0x820943BC;
	sub_82094508(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820943C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// beq cr6,0x820943f0
	if (ctx.cr6.eq) goto loc_820943F0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820943EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
loc_820943F0:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8209443c
	if (!ctx.cr6.eq) goto loc_8209443C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r6,r31,120
	ctx.r6.s64 = ctx.r31.s64 + 120;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r7,r11,864
	ctx.r7.s64 = ctx.r11.s64 + 864;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
loc_8209443C:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820944c8
	if (!ctx.cr6.eq) goto loc_820944C8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82097ae8
	ctx.lr = 0x82094464;
	sub_82097AE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209446C:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// beq cr6,0x82094498
	if (ctx.cr6.eq) goto loc_82094498;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82094494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
loc_82094498:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820944c8
	if (!ctx.cr6.eq) goto loc_820944C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82097ae8
	ctx.lr = 0x820944C0;
	sub_82097AE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820944C8:
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bgt cr6,0x820944e8
	if (ctx.cr6.gt) goto loc_820944E8;
	// bl 0x82094d08
	ctx.lr = 0x820944E0;
	sub_82094D08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820944ec
	goto loc_820944EC;
loc_820944E8:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_820944EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82097ae8
	ctx.lr = 0x820944FC;
	sub_82097AE8(ctx, base);
loc_820944FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094504"))) PPC_WEAK_FUNC(sub_82094504);
PPC_FUNC_IMPL(__imp__sub_82094504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094508"))) PPC_WEAK_FUNC(sub_82094508);
PPC_FUNC_IMPL(__imp__sub_82094508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82094510;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82094548
	if (ctx.cr6.eq) goto loc_82094548;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82094548
	if (!ctx.cr6.eq) goto loc_82094548;
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
loc_82094548:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r6,276(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82094598
	if (!ctx.cr6.eq) goto loc_82094598;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x82094574
	if (!ctx.cr6.eq) goto loc_82094574;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_82094574:
	// lbz r3,285(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 285);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094588
	if (ctx.cr6.eq) goto loc_82094588;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// b 0x82094598
	goto loc_82094598;
loc_82094588:
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// bne cr6,0x82094598
	if (!ctx.cr6.eq) goto loc_82094598;
	// stb r28,285(r10)
	PPC_STORE_U8(ctx.r10.u32 + 285, ctx.r28.u8);
loc_82094598:
	// addi r30,r9,12
	ctx.r30.s64 = ctx.r9.s64 + 12;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r6,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r6.u32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820945b8
	if (ctx.cr6.eq) goto loc_820945B8;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
loc_820945B8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82094684
	if (ctx.cr6.gt) goto loc_82094684;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,17888
	ctx.r12.s64 = ctx.r12.s64 + 17888;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8209463C;
	case 1:
		goto loc_82094648;
	case 2:
		goto loc_82094648;
	case 3:
		goto loc_82094610;
	case 4:
		goto loc_82094610;
	case 5:
		goto loc_82094620;
	case 6:
		goto loc_8209462C;
	case 7:
		goto loc_8209462C;
	case 8:
		goto loc_82094658;
	case 9:
		goto loc_82094668;
	case 10:
		goto loc_82094674;
	case 11:
		goto loc_82094674;
	default:
		__builtin_unreachable();
	}
	// lwz r16,17980(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17980);
	// lwz r16,17992(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17992);
	// lwz r16,17992(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17992);
	// lwz r16,17936(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17936);
	// lwz r16,17936(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17936);
	// lwz r16,17952(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17952);
	// lwz r16,17964(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17964);
	// lwz r16,17964(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17964);
	// lwz r16,18008(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18008);
	// lwz r16,18024(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18024);
	// lwz r16,18036(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18036);
	// lwz r16,18036(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18036);
loc_82094610:
	// not r5,r11
	ctx.r5.u64 = ~ctx.r11.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r11,r5,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_82094620:
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// rlwinm r11,r3,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_8209462C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_8209463C:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_82094648:
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwinm r11,r9,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_82094658:
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r11,r8,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_82094668:
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// rlwinm r11,r7,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_82094674:
	// not r6,r11
	ctx.r6.u64 = ~ctx.r11.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwinm r11,r6,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// b 0x82094688
	goto loc_82094688;
loc_82094684:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82094688:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82094718
	if (ctx.cr6.eq) goto loc_82094718;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820946c8
	if (ctx.cr6.eq) goto loc_820946C8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
loc_820946AC:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x820946ac
	if (!ctx.cr6.eq) goto loc_820946AC;
loc_820946C8:
	// lbz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820946ec
	if (ctx.cr6.eq) goto loc_820946EC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820946E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r29.u8);
loc_820946EC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209470C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r28,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82094718:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82094740
	if (ctx.cr6.eq) goto loc_82094740;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82094738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82094740:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82094754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209475C"))) PPC_WEAK_FUNC(sub_8209475C);
PPC_FUNC_IMPL(__imp__sub_8209475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094760"))) PPC_WEAK_FUNC(sub_82094760);
PPC_FUNC_IMPL(__imp__sub_82094760) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bge cr6,0x82094770
	if (!ctx.cr6.lt) goto loc_82094770;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82094770:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// rotlwi r10,r10,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 | ctx.r10.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// ble cr6,0x820947e8
	if (!ctx.cr6.gt) goto loc_820947E8;
	// lis r8,-32149
	ctx.r8.s64 = -2106916864;
	// addi r8,r8,704
	ctx.r8.s64 = ctx.r8.s64 + 704;
loc_820947C0:
	// rlwinm r7,r11,10,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FC;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// bne cr6,0x820947c0
	if (!ctx.cr6.eq) goto loc_820947C0;
loc_820947E8:
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820947F0"))) PPC_WEAK_FUNC(sub_820947F0);
PPC_FUNC_IMPL(__imp__sub_820947F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820947F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820948ac
	if (!ctx.cr6.eq) goto loc_820948AC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82094844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82094858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82094874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82094898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820948AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820948AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820948B4"))) PPC_WEAK_FUNC(sub_820948B4);
PPC_FUNC_IMPL(__imp__sub_820948B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820948B8"))) PPC_WEAK_FUNC(sub_820948B8);
PPC_FUNC_IMPL(__imp__sub_820948B8) {
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
	// lbz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209496c
	if (ctx.cr6.eq) goto loc_8209496C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// bl 0x825c6b9c
	ctx.lr = 0x820948FC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209496c
	if (ctx.cr6.eq) goto loc_8209496C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x8209496c
	if (!ctx.cr6.eq) goto loc_8209496C;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209496c
	if (ctx.cr6.eq) goto loc_8209496C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094938
	if (ctx.cr6.eq) goto loc_82094938;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x82094930;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209496c
	if (ctx.cr6.eq) goto loc_8209496C;
loc_82094938:
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r5,r7,0,24,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r6,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stb r8,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r8.u8);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209496C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209496C:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82094980
	if (!ctx.cr6.eq) goto loc_82094980;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82094c3c
	goto loc_82094C3C;
loc_82094980:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82094998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82094c1c
	if (ctx.cr6.eq) goto loc_82094C1C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x82094c1c
	if (ctx.cr6.gt) goto loc_82094C1C;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,18892
	ctx.r12.s64 = ctx.r12.s64 + 18892;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82094BCC;
	case 1:
		goto loc_82094C08;
	case 2:
		goto loc_82094C1C;
	case 3:
		goto loc_82094BD8;
	case 4:
		goto loc_82094C1C;
	case 5:
		goto loc_82094C1C;
	case 6:
		goto loc_82094C1C;
	case 7:
		goto loc_82094BD8;
	case 8:
		goto loc_82094C1C;
	case 9:
		goto loc_82094C1C;
	case 10:
		goto loc_82094C1C;
	case 11:
		goto loc_82094C1C;
	case 12:
		goto loc_82094C1C;
	case 13:
		goto loc_82094C1C;
	case 14:
		goto loc_82094C1C;
	case 15:
		goto loc_82094BE4;
	case 16:
		goto loc_82094C1C;
	case 17:
		goto loc_82094C1C;
	case 18:
		goto loc_82094C1C;
	case 19:
		goto loc_82094C1C;
	case 20:
		goto loc_82094C1C;
	case 21:
		goto loc_82094C1C;
	case 22:
		goto loc_82094C1C;
	case 23:
		goto loc_82094C1C;
	case 24:
		goto loc_82094C1C;
	case 25:
		goto loc_82094C1C;
	case 26:
		goto loc_82094C1C;
	case 27:
		goto loc_82094C1C;
	case 28:
		goto loc_82094C1C;
	case 29:
		goto loc_82094C1C;
	case 30:
		goto loc_82094C1C;
	case 31:
		goto loc_82094BF0;
	case 32:
		goto loc_82094C1C;
	case 33:
		goto loc_82094C1C;
	case 34:
		goto loc_82094C1C;
	case 35:
		goto loc_82094C1C;
	case 36:
		goto loc_82094C1C;
	case 37:
		goto loc_82094C1C;
	case 38:
		goto loc_82094C1C;
	case 39:
		goto loc_82094C1C;
	case 40:
		goto loc_82094C1C;
	case 41:
		goto loc_82094C1C;
	case 42:
		goto loc_82094C1C;
	case 43:
		goto loc_82094C1C;
	case 44:
		goto loc_82094C1C;
	case 45:
		goto loc_82094C1C;
	case 46:
		goto loc_82094C1C;
	case 47:
		goto loc_82094C1C;
	case 48:
		goto loc_82094C1C;
	case 49:
		goto loc_82094C1C;
	case 50:
		goto loc_82094C1C;
	case 51:
		goto loc_82094C1C;
	case 52:
		goto loc_82094C1C;
	case 53:
		goto loc_82094C1C;
	case 54:
		goto loc_82094C1C;
	case 55:
		goto loc_82094C1C;
	case 56:
		goto loc_82094C1C;
	case 57:
		goto loc_82094C1C;
	case 58:
		goto loc_82094C1C;
	case 59:
		goto loc_82094C1C;
	case 60:
		goto loc_82094C1C;
	case 61:
		goto loc_82094C1C;
	case 62:
		goto loc_82094C1C;
	case 63:
		goto loc_82094BFC;
	case 64:
		goto loc_82094C1C;
	case 65:
		goto loc_82094C1C;
	case 66:
		goto loc_82094C1C;
	case 67:
		goto loc_82094C1C;
	case 68:
		goto loc_82094C1C;
	case 69:
		goto loc_82094C1C;
	case 70:
		goto loc_82094C1C;
	case 71:
		goto loc_82094C1C;
	case 72:
		goto loc_82094C1C;
	case 73:
		goto loc_82094C1C;
	case 74:
		goto loc_82094C1C;
	case 75:
		goto loc_82094C1C;
	case 76:
		goto loc_82094C1C;
	case 77:
		goto loc_82094C1C;
	case 78:
		goto loc_82094C1C;
	case 79:
		goto loc_82094C1C;
	case 80:
		goto loc_82094C1C;
	case 81:
		goto loc_82094C1C;
	case 82:
		goto loc_82094C1C;
	case 83:
		goto loc_82094C1C;
	case 84:
		goto loc_82094C1C;
	case 85:
		goto loc_82094C1C;
	case 86:
		goto loc_82094C1C;
	case 87:
		goto loc_82094C1C;
	case 88:
		goto loc_82094C1C;
	case 89:
		goto loc_82094C1C;
	case 90:
		goto loc_82094C1C;
	case 91:
		goto loc_82094C1C;
	case 92:
		goto loc_82094C1C;
	case 93:
		goto loc_82094C1C;
	case 94:
		goto loc_82094C1C;
	case 95:
		goto loc_82094C1C;
	case 96:
		goto loc_82094C1C;
	case 97:
		goto loc_82094C1C;
	case 98:
		goto loc_82094C1C;
	case 99:
		goto loc_82094C1C;
	case 100:
		goto loc_82094C1C;
	case 101:
		goto loc_82094C1C;
	case 102:
		goto loc_82094C1C;
	case 103:
		goto loc_82094C1C;
	case 104:
		goto loc_82094C1C;
	case 105:
		goto loc_82094C1C;
	case 106:
		goto loc_82094C1C;
	case 107:
		goto loc_82094C1C;
	case 108:
		goto loc_82094C1C;
	case 109:
		goto loc_82094C1C;
	case 110:
		goto loc_82094C1C;
	case 111:
		goto loc_82094C1C;
	case 112:
		goto loc_82094C1C;
	case 113:
		goto loc_82094C1C;
	case 114:
		goto loc_82094C1C;
	case 115:
		goto loc_82094C1C;
	case 116:
		goto loc_82094C1C;
	case 117:
		goto loc_82094C1C;
	case 118:
		goto loc_82094C1C;
	case 119:
		goto loc_82094C1C;
	case 120:
		goto loc_82094C1C;
	case 121:
		goto loc_82094C1C;
	case 122:
		goto loc_82094C1C;
	case 123:
		goto loc_82094C1C;
	case 124:
		goto loc_82094C1C;
	case 125:
		goto loc_82094C1C;
	case 126:
		goto loc_82094C1C;
	case 127:
		goto loc_82094C14;
	default:
		__builtin_unreachable();
	}
	// lwz r16,19404(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19404);
	// lwz r16,19464(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19464);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19416(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19416);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19416(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19416);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19428(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19428);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19440(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19440);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19452);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19484(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19484);
	// lwz r16,19476(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19476);
loc_82094BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82092dd0
	ctx.lr = 0x82094BD4;
	sub_82092DD0(ctx, base);
	// b 0x82094c1c
	goto loc_82094C1C;
loc_82094BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82092f08
	ctx.lr = 0x82094BE0;
	sub_82092F08(ctx, base);
	// b 0x82094c1c
	goto loc_82094C1C;
loc_82094BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820932c0
	ctx.lr = 0x82094BEC;
	sub_820932C0(ctx, base);
	// b 0x82094c1c
	goto loc_82094C1C;
loc_82094BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82093af8
	ctx.lr = 0x82094BF8;
	sub_82093AF8(ctx, base);
	// b 0x82094c1c
	goto loc_82094C1C;
loc_82094BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82093ed8
	ctx.lr = 0x82094C04;
	sub_82093ED8(ctx, base);
	// b 0x82094c1c
	goto loc_82094C1C;
loc_82094C08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82092a38
	ctx.lr = 0x82094C10;
	sub_82092A38(ctx, base);
	// b 0x82094c1c
	goto loc_82094C1C;
loc_82094C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094388
	ctx.lr = 0x82094C1C;
	sub_82094388(ctx, base);
loc_82094C1C:
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82094c38
	if (!ctx.cr6.eq) goto loc_82094C38;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r3,256
	ctx.r3.s64 = 256;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82094c3c
	if (ctx.cr6.eq) goto loc_82094C3C;
loc_82094C38:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
loc_82094C3C:
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

__attribute__((alias("__imp__sub_82094C54"))) PPC_WEAK_FUNC(sub_82094C54);
PPC_FUNC_IMPL(__imp__sub_82094C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094C58"))) PPC_WEAK_FUNC(sub_82094C58);
PPC_FUNC_IMPL(__imp__sub_82094C58) {
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
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82094c94
	if (ctx.cr6.eq) goto loc_82094C94;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82094C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r8.u8);
loc_82094C94:
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

__attribute__((alias("__imp__sub_82094CA8"))) PPC_WEAK_FUNC(sub_82094CA8);
PPC_FUNC_IMPL(__imp__sub_82094CA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,19652
	ctx.r12.s64 = ctx.r12.s64 + 19652;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82094CC4"))) PPC_WEAK_FUNC(sub_82094CC4);
PPC_FUNC_IMPL(__imp__sub_82094CC4) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,19668(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19668);
	// lwz r16,19680(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19680);
	// lwz r16,19692(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19692);
	// lwz r16,19704(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19704);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094CE0"))) PPC_WEAK_FUNC(sub_82094CE0);
PPC_FUNC_IMPL(__imp__sub_82094CE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094CEC"))) PPC_WEAK_FUNC(sub_82094CEC);
PPC_FUNC_IMPL(__imp__sub_82094CEC) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094CF8"))) PPC_WEAK_FUNC(sub_82094CF8);
PPC_FUNC_IMPL(__imp__sub_82094CF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094D04"))) PPC_WEAK_FUNC(sub_82094D04);
PPC_FUNC_IMPL(__imp__sub_82094D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D08"))) PPC_WEAK_FUNC(sub_82094D08);
PPC_FUNC_IMPL(__imp__sub_82094D08) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,19748
	ctx.r12.s64 = ctx.r12.s64 + 19748;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82094D24"))) PPC_WEAK_FUNC(sub_82094D24);
PPC_FUNC_IMPL(__imp__sub_82094D24) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,19848(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19848);
	// lwz r16,19872(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19872);
	// lwz r16,19884(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	// lwz r16,19908(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19908);
	// lwz r16,19920(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19920);
	// lwz r16,19932(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19932);
	// lwz r16,19944(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19944);
	// lwz r16,19932(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19932);
	// lwz r16,19944(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19944);
	// lwz r16,19956(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19956);
	// lwz r16,19956(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19956);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// lwz r16,19968(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19968);
	// lwz r16,19956(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19956);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// lwz r16,19992(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19992);
	// lwz r16,19860(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19860);
	// lwz r16,19968(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19968);
	// lwz r16,19896(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19896);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// lwz r16,19980(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19980);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// lwz r16,20004(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20004);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094D94"))) PPC_WEAK_FUNC(sub_82094D94);
PPC_FUNC_IMPL(__imp__sub_82094D94) {
	PPC_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DA0"))) PPC_WEAK_FUNC(sub_82094DA0);
PPC_FUNC_IMPL(__imp__sub_82094DA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DAC"))) PPC_WEAK_FUNC(sub_82094DAC);
PPC_FUNC_IMPL(__imp__sub_82094DAC) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DB8"))) PPC_WEAK_FUNC(sub_82094DB8);
PPC_FUNC_IMPL(__imp__sub_82094DB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DC4"))) PPC_WEAK_FUNC(sub_82094DC4);
PPC_FUNC_IMPL(__imp__sub_82094DC4) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DD0"))) PPC_WEAK_FUNC(sub_82094DD0);
PPC_FUNC_IMPL(__imp__sub_82094DD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DDC"))) PPC_WEAK_FUNC(sub_82094DDC);
PPC_FUNC_IMPL(__imp__sub_82094DDC) {
	PPC_FUNC_PROLOGUE();
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DE8"))) PPC_WEAK_FUNC(sub_82094DE8);
PPC_FUNC_IMPL(__imp__sub_82094DE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DF4"))) PPC_WEAK_FUNC(sub_82094DF4);
PPC_FUNC_IMPL(__imp__sub_82094DF4) {
	PPC_FUNC_PROLOGUE();
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094E00"))) PPC_WEAK_FUNC(sub_82094E00);
PPC_FUNC_IMPL(__imp__sub_82094E00) {
	PPC_FUNC_PROLOGUE();
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094E0C"))) PPC_WEAK_FUNC(sub_82094E0C);
PPC_FUNC_IMPL(__imp__sub_82094E0C) {
	PPC_FUNC_PROLOGUE();
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094E18"))) PPC_WEAK_FUNC(sub_82094E18);
PPC_FUNC_IMPL(__imp__sub_82094E18) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094E24"))) PPC_WEAK_FUNC(sub_82094E24);
PPC_FUNC_IMPL(__imp__sub_82094E24) {
	PPC_FUNC_PROLOGUE();
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094E30"))) PPC_WEAK_FUNC(sub_82094E30);
PPC_FUNC_IMPL(__imp__sub_82094E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82094E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82094e84
	if (!ctx.cr6.eq) goto loc_82094E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820987c0
	ctx.lr = 0x82094E5C;
	sub_820987C0(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// bl 0x820973c0
	ctx.lr = 0x82094E74;
	sub_820973C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097540
	ctx.lr = 0x82094E7C;
	sub_82097540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82094E84:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820973c0
	ctx.lr = 0x82094E94;
	sub_820973C0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82094eb0
	if (!ctx.cr6.eq) goto loc_82094EB0;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
loc_82094EB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094EB8"))) PPC_WEAK_FUNC(sub_82094EB8);
PPC_FUNC_IMPL(__imp__sub_82094EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82094EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82094f3c
	if (!ctx.cr6.eq) goto loc_82094F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820987c0
	ctx.lr = 0x82094EF0;
	sub_820987C0(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// bl 0x82097268
	ctx.lr = 0x82094F10;
	sub_82097268(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r30.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,72(r7)
	PPC_STORE_U32(ctx.r7.u32 + 72, ctx.r29.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r9,96(r6)
	PPC_STORE_U8(ctx.r6.u32 + 96, ctx.r9.u8);
	// bl 0x82097540
	ctx.lr = 0x82094F34;
	sub_82097540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82094F3C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82097268
	ctx.lr = 0x82094F54;
	sub_82097268(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r30.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r29,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r29.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stb r5,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r5.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82094f8c
	if (!ctx.cr6.eq) goto loc_82094F8C;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_82094F8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094F94"))) PPC_WEAK_FUNC(sub_82094F94);
PPC_FUNC_IMPL(__imp__sub_82094F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094F98"))) PPC_WEAK_FUNC(sub_82094F98);
PPC_FUNC_IMPL(__imp__sub_82094F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82094FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82094ff0
	if (!ctx.cr6.eq) goto loc_82094FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820987c0
	ctx.lr = 0x82094FC8;
	sub_820987C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x82097540
	ctx.lr = 0x82094FE8;
	sub_82097540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82094FF0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82095020
	if (!ctx.cr6.eq) goto loc_82095020;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
loc_82095020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82095028"))) PPC_WEAK_FUNC(sub_82095028);
PPC_FUNC_IMPL(__imp__sub_82095028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82095030;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82095090
	if (!ctx.cr6.eq) goto loc_82095090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820987c0
	ctx.lr = 0x82095060;
	sub_820987C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// bl 0x82097540
	ctx.lr = 0x82095088;
	sub_82097540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82095090:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820950c8
	if (!ctx.cr6.eq) goto loc_820950C8;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
loc_820950C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820950D0"))) PPC_WEAK_FUNC(sub_820950D0);
PPC_FUNC_IMPL(__imp__sub_820950D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82095100
	if (ctx.cr6.eq) goto loc_82095100;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82095100
	if (!ctx.cr6.lt) goto loc_82095100;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_82095100:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82095130
	if (!ctx.cr6.gt) goto loc_82095130;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8209512c
	if (!ctx.cr6.gt) goto loc_8209512C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82095130
	if (!ctx.cr6.eq) goto loc_82095130;
loc_8209512C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82095130:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209514C"))) PPC_WEAK_FUNC(sub_8209514C);
PPC_FUNC_IMPL(__imp__sub_8209514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095150"))) PPC_WEAK_FUNC(sub_82095150);
PPC_FUNC_IMPL(__imp__sub_82095150) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82095178
	if (!ctx.cr6.gt) goto loc_82095178;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x82095180
	goto loc_82095180;
loc_82095178:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_82095180:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820951ac
	if (ctx.cr6.eq) goto loc_820951AC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820951ac
	if (!ctx.cr6.gt) goto loc_820951AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x820951a4
	if (!ctx.cr6.gt) goto loc_820951A4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x820951ac
	if (!ctx.cr6.eq) goto loc_820951AC;
loc_820951A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820951b0
	goto loc_820951B0;
loc_820951AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820951B0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820951CC"))) PPC_WEAK_FUNC(sub_820951CC);
PPC_FUNC_IMPL(__imp__sub_820951CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820951D0"))) PPC_WEAK_FUNC(sub_820951D0);
PPC_FUNC_IMPL(__imp__sub_820951D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820951F4"))) PPC_WEAK_FUNC(sub_820951F4);
PPC_FUNC_IMPL(__imp__sub_820951F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820951F8"))) PPC_WEAK_FUNC(sub_820951F8);
PPC_FUNC_IMPL(__imp__sub_820951F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095208"))) PPC_WEAK_FUNC(sub_82095208);
PPC_FUNC_IMPL(__imp__sub_82095208) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8209526C"))) PPC_WEAK_FUNC(sub_8209526C);
PPC_FUNC_IMPL(__imp__sub_8209526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095270"))) PPC_WEAK_FUNC(sub_82095270);
PPC_FUNC_IMPL(__imp__sub_82095270) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stb r9,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r9.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82095288:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82095288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095288;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209529C"))) PPC_WEAK_FUNC(sub_8209529C);
PPC_FUNC_IMPL(__imp__sub_8209529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820952A0"))) PPC_WEAK_FUNC(sub_820952A0);
PPC_FUNC_IMPL(__imp__sub_820952A0) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stb r9,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r9.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820952B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820952b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820952B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820952C8"))) PPC_WEAK_FUNC(sub_820952C8);
PPC_FUNC_IMPL(__imp__sub_820952C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820952F0"))) PPC_WEAK_FUNC(sub_820952F0);
PPC_FUNC_IMPL(__imp__sub_820952F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095328"))) PPC_WEAK_FUNC(sub_82095328);
PPC_FUNC_IMPL(__imp__sub_82095328) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095350"))) PPC_WEAK_FUNC(sub_82095350);
PPC_FUNC_IMPL(__imp__sub_82095350) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095380"))) PPC_WEAK_FUNC(sub_82095380);
PPC_FUNC_IMPL(__imp__sub_82095380) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820953B0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820953b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820953B0;
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r11.u8);
	// stb r11,237(r3)
	PPC_STORE_U8(ctx.r3.u32 + 237, ctx.r11.u8);
	// stb r8,238(r3)
	PPC_STORE_U8(ctx.r3.u32 + 238, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820953E8"))) PPC_WEAK_FUNC(sub_820953E8);
PPC_FUNC_IMPL(__imp__sub_820953E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820953F0"))) PPC_WEAK_FUNC(sub_820953F0);
PPC_FUNC_IMPL(__imp__sub_820953F0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16472
	ctx.r11.s64 = ctx.r11.s64 + -16472;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82095424
	if (ctx.cr6.eq) goto loc_82095424;
	// bl 0x8259e7c0
	ctx.lr = 0x82095420;
	sub_8259E7C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82095424:
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

__attribute__((alias("__imp__sub_82095438"))) PPC_WEAK_FUNC(sub_82095438);
PPC_FUNC_IMPL(__imp__sub_82095438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095448"))) PPC_WEAK_FUNC(sub_82095448);
PPC_FUNC_IMPL(__imp__sub_82095448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,2180
	ctx.r11.s64 = ctx.r11.s64 + 2180;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82095464
	if (!ctx.cr6.eq) goto loc_82095464;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82095464:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209546C"))) PPC_WEAK_FUNC(sub_8209546C);
PPC_FUNC_IMPL(__imp__sub_8209546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095470"))) PPC_WEAK_FUNC(sub_82095470);
PPC_FUNC_IMPL(__imp__sub_82095470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209547C"))) PPC_WEAK_FUNC(sub_8209547C);
PPC_FUNC_IMPL(__imp__sub_8209547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095480"))) PPC_WEAK_FUNC(sub_82095480);
PPC_FUNC_IMPL(__imp__sub_82095480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82095488;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8209f5e8
	ctx.lr = 0x82095498;
	sub_8209F5E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-16352
	ctx.r11.s64 = ctx.r11.s64 + -16352;
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// lis r6,-32044
	ctx.r6.s64 = -2100035584;
	// lis r7,-32044
	ctx.r7.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r9,3864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3864, ctx.r9.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,3892
	ctx.r10.s64 = ctx.r10.s64 + 3892;
	// addi r9,r9,3876
	ctx.r9.s64 = ctx.r9.s64 + 3876;
	// stw r30,3844(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3844, ctx.r30.u32);
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// stb r30,3849(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3849, ctx.r30.u8);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,3868(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3868, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r11,39
	ctx.r11.s64 = 39;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820954F8:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820954f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820954F8;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// li r5,416
	ctx.r5.s64 = 416;
	// addi r28,r11,1728
	ctx.r28.s64 = ctx.r11.s64 + 1728;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d300
	ctx.lr = 0x8209551C;
	sub_8259D300(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,39
	ctx.r11.s64 = 39;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82095528:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bdnz 0x82095528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095528;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,876
	ctx.r4.s64 = 876;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82095578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095598
	if (ctx.cr6.eq) goto loc_82095598;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82096118
	ctx.lr = 0x82095588;
	sub_82096118(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r28,r11,3840
	ctx.r28.s64 = ctx.r11.s64 + 3840;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// b 0x820955a4
	goto loc_820955A4;
loc_82095598:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r28,r11,3840
	ctx.r28.s64 = ctx.r11.s64 + 3840;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_820955A4:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820955B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,3856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3856, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820955D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,3852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3852, ctx.r3.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820955F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3852);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209560C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3852);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,22496
	ctx.r4.s64 = ctx.r11.s64 + 22496;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82095628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209563C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82095650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r30,3856(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// addi r31,r11,2144
	ctx.r31.s64 = ctx.r11.s64 + 2144;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82095674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82095690"))) PPC_WEAK_FUNC(sub_82095690);
PPC_FUNC_IMPL(__imp__sub_82095690) {
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
	// bl 0x820956f8
	ctx.lr = 0x820956B0;
	sub_820956F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820956dc
	if (ctx.cr6.eq) goto loc_820956DC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820956DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820956DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820956F8"))) PPC_WEAK_FUNC(sub_820956F8);
PPC_FUNC_IMPL(__imp__sub_820956F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82095700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-16352
	ctx.r11.s64 = ctx.r11.s64 + -16352;
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209572C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,3852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3852);
	// stb r8,3849(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3849, ctx.r8.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82095754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82095768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3852);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3852);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82095794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820957A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820957cc
	if (ctx.cr6.eq) goto loc_820957CC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820957CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820957CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209f728
	ctx.lr = 0x820957D4;
	sub_8209F728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820957DC"))) PPC_WEAK_FUNC(sub_820957DC);
PPC_FUNC_IMPL(__imp__sub_820957DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820957E0"))) PPC_WEAK_FUNC(sub_820957E0);
PPC_FUNC_IMPL(__imp__sub_820957E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x820957E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32044
	ctx.r23.s64 = -2100035584;
	// lbz r11,3849(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 3849);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82095b10
	if (!ctx.cr6.eq) goto loc_82095B10;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// addi r30,r11,4092
	ctx.r30.s64 = ctx.r11.s64 + 4092;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// addi r29,r11,4044
	ctx.r29.s64 = ctx.r11.s64 + 4044;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// addi r31,r11,3892
	ctx.r31.s64 = ctx.r11.s64 + 3892;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// addi r27,r11,2180
	ctx.r27.s64 = ctx.r11.s64 + 2180;
loc_8209582C:
	// lwz r11,3860(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82095aec
	if (!ctx.cr6.eq) goto loc_82095AEC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82095aec
	if (ctx.cr6.eq) goto loc_82095AEC;
	// lwz r3,3856(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3856);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82095858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82095ad8
	if (ctx.cr6.eq) goto loc_82095AD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82095874:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82095874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095874;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// stw r10,3860(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3860, ctx.r10.u32);
	// bgt cr6,0x82095ac8
	if (ctx.cr6.gt) goto loc_82095AC8;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,22704
	ctx.r12.s64 = ctx.r12.s64 + 22704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82095938;
	case 1:
		goto loc_82095940;
	case 2:
		goto loc_82095948;
	case 3:
		goto loc_82095950;
	case 4:
		goto loc_82095958;
	case 5:
		goto loc_82095960;
	case 6:
		goto loc_82095968;
	case 7:
		goto loc_82095AC8;
	case 8:
		goto loc_82095AC8;
	case 9:
		goto loc_82095970;
	case 10:
		goto loc_82095AC8;
	case 11:
		goto loc_82095AC8;
	case 12:
		goto loc_82095AC8;
	case 13:
		goto loc_82095980;
	case 14:
		goto loc_82095988;
	case 15:
		goto loc_82095AC8;
	case 16:
		goto loc_82095AC8;
	case 17:
		goto loc_82095998;
	case 18:
		goto loc_820959A0;
	case 19:
		goto loc_820959A8;
	case 20:
		goto loc_820959B0;
	case 21:
		goto loc_82095A34;
	case 22:
		goto loc_82095A3C;
	case 23:
		goto loc_82095A44;
	case 24:
		goto loc_82095A4C;
	case 25:
		goto loc_82095A54;
	case 26:
		goto loc_82095AC4;
	case 27:
		goto loc_82095AC8;
	case 28:
		goto loc_82095ABC;
	case 29:
		goto loc_82095990;
	case 30:
		goto loc_82095AC8;
	case 31:
		goto loc_82095AC8;
	case 32:
		goto loc_82095AC8;
	case 33:
		goto loc_82095978;
	default:
		__builtin_unreachable();
	}
	// lwz r16,22840(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22840);
	// lwz r16,22848(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22848);
	// lwz r16,22856(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22856);
	// lwz r16,22864(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22864);
	// lwz r16,22872(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22872);
	// lwz r16,22880(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22880);
	// lwz r16,22888(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22888);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,22896(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22896);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,22912(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22912);
	// lwz r16,22920(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22920);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,22936(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22936);
	// lwz r16,22944(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22944);
	// lwz r16,22952(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22952);
	// lwz r16,22960(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22960);
	// lwz r16,23092(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23092);
	// lwz r16,23100(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23100);
	// lwz r16,23108(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23108);
	// lwz r16,23116(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23116);
	// lwz r16,23124(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23124);
	// lwz r16,23236(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23236);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23228(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23228);
	// lwz r16,22928(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22928);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,23240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23240);
	// lwz r16,22904(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22904);
loc_82095938:
	// bl 0x8209a4a0
	ctx.lr = 0x8209593C;
	sub_8209A4A0(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095940:
	// bl 0x8209a9e0
	ctx.lr = 0x82095944;
	sub_8209A9E0(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095948:
	// bl 0x8209aab0
	ctx.lr = 0x8209594C;
	sub_8209AAB0(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095950:
	// bl 0x8209ac20
	ctx.lr = 0x82095954;
	sub_8209AC20(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095958:
	// bl 0x8209b4a8
	ctx.lr = 0x8209595C;
	sub_8209B4A8(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095960:
	// bl 0x8209bc40
	ctx.lr = 0x82095964;
	sub_8209BC40(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095968:
	// bl 0x8209c798
	ctx.lr = 0x8209596C;
	sub_8209C798(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095970:
	// bl 0x8209da98
	ctx.lr = 0x82095974;
	sub_8209DA98(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095978:
	// bl 0x8209cf08
	ctx.lr = 0x8209597C;
	sub_8209CF08(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095980:
	// bl 0x820988a0
	ctx.lr = 0x82095984;
	sub_820988A0(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095988:
	// bl 0x82098988
	ctx.lr = 0x8209598C;
	sub_82098988(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095990:
	// bl 0x82098b08
	ctx.lr = 0x82095994;
	sub_82098B08(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095998:
	// bl 0x82099e08
	ctx.lr = 0x8209599C;
	sub_82099E08(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_820959A0:
	// bl 0x82099f18
	ctx.lr = 0x820959A4;
	sub_82099F18(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_820959A8:
	// bl 0x82099fe8
	ctx.lr = 0x820959AC;
	sub_82099FE8(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_820959B0:
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r3,3840(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3840);
	// bl 0x82096788
	ctx.lr = 0x820959BC;
	sub_82096788(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820959d0
	if (!ctx.cr6.eq) goto loc_820959D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820959d8
	goto loc_820959D8;
loc_820959D0:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,23
	ctx.r8.s64 = 23;
loc_820959D8:
	// stw r9,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r9.u32);
	// stw r8,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r8.u32);
	// lbz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82095a18
	if (ctx.cr6.eq) goto loc_82095A18;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820959FC:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820959fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820959FC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_82095A18:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82095A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095A34:
	// bl 0x8209a260
	ctx.lr = 0x82095A38;
	sub_8209A260(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095A3C:
	// bl 0x82099308
	ctx.lr = 0x82095A40;
	sub_82099308(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095A44:
	// bl 0x82099158
	ctx.lr = 0x82095A48;
	sub_82099158(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095A4C:
	// bl 0x82098fc0
	ctx.lr = 0x82095A50;
	sub_82098FC0(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095A54:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82095ac8
	if (ctx.cr6.eq) goto loc_82095AC8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82095A94:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82095a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095A94;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82095ad4
	goto loc_82095AD4;
loc_82095ABC:
	// bl 0x82099418
	ctx.lr = 0x82095AC0;
	sub_82099418(ctx, base);
	// b 0x82095ac8
	goto loc_82095AC8;
loc_82095AC4:
	// bl 0x8209a0e8
	ctx.lr = 0x82095AC8;
	sub_8209A0E8(ctx, base);
loc_82095AC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82095ad8
	if (ctx.cr6.eq) goto loc_82095AD8;
loc_82095AD4:
	// stw r31,3860(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3860, ctx.r31.u32);
loc_82095AD8:
	// lwz r3,3856(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3856);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82095AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82095AEC:
	// lwz r3,3852(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3852);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82095B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,3849(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 3849);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209582c
	if (ctx.cr6.eq) goto loc_8209582C;
loc_82095B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82095B1C"))) PPC_WEAK_FUNC(sub_82095B1C);
PPC_FUNC_IMPL(__imp__sub_82095B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095B20"))) PPC_WEAK_FUNC(sub_82095B20);
PPC_FUNC_IMPL(__imp__sub_82095B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82095B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,3876
	ctx.r11.s64 = ctx.r11.s64 + 3876;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82095b4c
	if (ctx.cr6.eq) goto loc_82095B4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82095B4C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,4620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4620);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,4464
	ctx.r31.s64 = ctx.r9.s64 + 4464;
	// bne cr6,0x82095b98
	if (!ctx.cr6.eq) goto loc_82095B98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4620, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82095B80:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82095b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095B80;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,26416
	ctx.r3.s64 = ctx.r11.s64 + 26416;
	// bl 0x8259e020
	ctx.lr = 0x82095B98;
	sub_8259E020(ctx, base);
loc_82095B98:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82095BA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82095ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095BA8;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r11,3860(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82095c38
	if (ctx.cr6.eq) goto loc_82095C38;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82095BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3860(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82095bf0
	if (!ctx.cr6.eq) goto loc_82095BF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82095BF0:
	// li r9,38
	ctx.r9.s64 = 38;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82095BFC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82095bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095BFC;
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,3860(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3860, ctx.r11.u32);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82095C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82095C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82095C44"))) PPC_WEAK_FUNC(sub_82095C44);
PPC_FUNC_IMPL(__imp__sub_82095C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095C48"))) PPC_WEAK_FUNC(sub_82095C48);
PPC_FUNC_IMPL(__imp__sub_82095C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82095C50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,3856(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3856);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r31,3844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3844, ctx.r31.u32);
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82095ca4
	if (ctx.cr6.eq) goto loc_82095CA4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82095cb0
	if (!ctx.cr6.eq) goto loc_82095CB0;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r11,3848(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3848, ctx.r11.u8);
	// b 0x82095cb0
	goto loc_82095CB0;
loc_82095CA4:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3876(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3876, ctx.r11.u8);
loc_82095CB0:
	// lwz r3,3856(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3856);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82095CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82095CCC"))) PPC_WEAK_FUNC(sub_82095CCC);
PPC_FUNC_IMPL(__imp__sub_82095CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095CD0"))) PPC_WEAK_FUNC(sub_82095CD0);
PPC_FUNC_IMPL(__imp__sub_82095CD0) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,3856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3856);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3856);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82095D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
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

__attribute__((alias("__imp__sub_82095D24"))) PPC_WEAK_FUNC(sub_82095D24);
PPC_FUNC_IMPL(__imp__sub_82095D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095D28"))) PPC_WEAK_FUNC(sub_82095D28);
PPC_FUNC_IMPL(__imp__sub_82095D28) {
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
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// stw r10,3860(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3860, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82095D74:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82095d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82095D74;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2180
	ctx.r31.s64 = ctx.r11.s64 + 2180;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82095db4
	if (ctx.cr6.eq) goto loc_82095DB4;
loc_82095D94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82095DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82095d94
	if (!ctx.cr6.eq) goto loc_82095D94;
loc_82095DB4:
	// lwz r3,3856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3856);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82095DC8;
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

__attribute__((alias("__imp__sub_82095DE0"))) PPC_WEAK_FUNC(sub_82095DE0);
PPC_FUNC_IMPL(__imp__sub_82095DE0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stw r4,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095DF4"))) PPC_WEAK_FUNC(sub_82095DF4);
PPC_FUNC_IMPL(__imp__sub_82095DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095DF8"))) PPC_WEAK_FUNC(sub_82095DF8);
PPC_FUNC_IMPL(__imp__sub_82095DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82095E00;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,3856(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3856);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82095E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// sth r26,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r26.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095f50
	if (ctx.cr6.eq) goto loc_82095F50;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825af1c0
	ctx.lr = 0x82095E44;
	sub_825AF1C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82095f50
	if (!ctx.cr6.eq) goto loc_82095F50;
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82095e74
	if (ctx.cr6.eq) goto loc_82095E74;
loc_82095E60:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82095e60
	if (!ctx.cr6.eq) goto loc_82095E60;
loc_82095E74:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r27,692(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82095f50
	if (!ctx.cr6.gt) goto loc_82095F50;
	// li r11,46
	ctx.r11.s64 = 46;
	// sth r26,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82095EA0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82095ea0
	if (!ctx.cr6.eq) goto loc_82095EA0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,258
	ctx.r5.s64 = 258;
	// addi r31,r11,4048
	ctx.r31.s64 = ctx.r11.s64 + 4048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x82095ECC;
	sub_8259D300(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259de20
	ctx.lr = 0x82095ED4;
	sub_8259DE20(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bgt cr6,0x82095f10
	if (ctx.cr6.gt) goto loc_82095F10;
	// rlwinm r29,r27,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82095EF0;
	sub_8259D3A0(ctx, base);
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82095F00;
	sub_8259D3A0(ctx, base);
	// add r6,r27,r30
	ctx.r6.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r5,r31
	PPC_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r26.u16);
loc_82095F10:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82095f40
	if (ctx.cr6.eq) goto loc_82095F40;
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095f40
	if (ctx.cr6.eq) goto loc_82095F40;
loc_82095F2C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82095f2c
	if (!ctx.cr6.eq) goto loc_82095F2C;
loc_82095F40:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8259d3a0
	ctx.lr = 0x82095F50;
	sub_8259D3A0(ctx, base);
loc_82095F50:
	// lwz r3,3856(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3856);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82095F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82095F70"))) PPC_WEAK_FUNC(sub_82095F70);
PPC_FUNC_IMPL(__imp__sub_82095F70) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// bl 0x825c6b9c
	ctx.lr = 0x82095FA0;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82095fe8
	if (ctx.cr6.eq) goto loc_82095FE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82095fe8
	if (!ctx.cr6.eq) goto loc_82095FE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095fd0
	if (ctx.cr6.eq) goto loc_82095FD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x82095FC8;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095fe8
	if (ctx.cr6.eq) goto loc_82095FE8;
loc_82095FD0:
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
loc_82095FE8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82096000"))) PPC_WEAK_FUNC(sub_82096000);
PPC_FUNC_IMPL(__imp__sub_82096000) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16204
	ctx.r11.s64 = ctx.r11.s64 + -16204;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8209604c
	if (ctx.cr6.eq) goto loc_8209604C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209604C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209604C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82096064"))) PPC_WEAK_FUNC(sub_82096064);
PPC_FUNC_IMPL(__imp__sub_82096064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096068"))) PPC_WEAK_FUNC(sub_82096068);
PPC_FUNC_IMPL(__imp__sub_82096068) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82096094"))) PPC_WEAK_FUNC(sub_82096094);
PPC_FUNC_IMPL(__imp__sub_82096094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096098"))) PPC_WEAK_FUNC(sub_82096098);
PPC_FUNC_IMPL(__imp__sub_82096098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820960A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820960C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820960F0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820960f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820960F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stb r3,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096118"))) PPC_WEAK_FUNC(sub_82096118);
PPC_FUNC_IMPL(__imp__sub_82096118) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r6,r7,-16200
	ctx.r6.s64 = ctx.r7.s64 + -16200;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,21069
	ctx.r7.s64 = 1380777984;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// ori r7,r7,17158
	ctx.r7.u64 = ctx.r7.u64 | 17158;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82096168:
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,52
	ctx.r9.s64 = ctx.r9.s64 + 52;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// bge cr6,0x82096168
	if (!ctx.cr6.lt) goto loc_82096168;
	// stb r10,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r4.u32);
	// stw r4,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r4.u32);
	// stw r4,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r4.u32);
	// stw r4,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r4.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// bl 0x825af9f8
	ctx.lr = 0x8209620C;
	sub_825AF9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r6.u32);
	// bl 0x825af9f8
	ctx.lr = 0x8209621C;
	sub_825AF9F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8209623C"))) PPC_WEAK_FUNC(sub_8209623C);
PPC_FUNC_IMPL(__imp__sub_8209623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096240"))) PPC_WEAK_FUNC(sub_82096240);
PPC_FUNC_IMPL(__imp__sub_82096240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82096248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-16192
	ctx.r11.s64 = ctx.r11.s64 + -16192;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82096278
	if (ctx.cr6.eq) goto loc_82096278;
	// bl 0x825aed30
	ctx.lr = 0x82096274;
	sub_825AED30(ctx, base);
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
loc_82096278:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209628c
	if (ctx.cr6.eq) goto loc_8209628C;
	// bl 0x825aed30
	ctx.lr = 0x82096288;
	sub_825AED30(ctx, base);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
loc_8209628C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// addi r11,r11,-16204
	ctx.r11.s64 = ctx.r11.s64 + -16204;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x820962c4
	if (ctx.cr6.eq) goto loc_820962C4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,876
	ctx.r5.s64 = 876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820962C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820962C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820962D0"))) PPC_WEAK_FUNC(sub_820962D0);
PPC_FUNC_IMPL(__imp__sub_820962D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x820962D8;
	__savegprlr_21(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r28,3840(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82096310
	if (ctx.cr6.gt) goto loc_82096310;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82096310:
	// addi r23,r28,12
	ctx.r23.s64 = ctx.r28.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82096318:
	// lbz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82096340
	if (ctx.cr6.eq) goto loc_82096340;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r23,r23,52
	ctx.r23.s64 = ctx.r23.s64 + 52;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82096318
	if (ctx.cr6.lt) goto loc_82096318;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82096340:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82096354
	if (!ctx.cr6.eq) goto loc_82096354;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82096354:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209677c
	if (ctx.cr6.eq) goto loc_8209677C;
	// bl 0x825aeb48
	ctx.lr = 0x82096364;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209677c
	if (ctx.cr6.eq) goto loc_8209677C;
	// rlwinm r9,r30,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// li r31,3
	ctx.r31.s64 = 3;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r24,128
	ctx.r24.s64 = 128;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820963e0
	if (ctx.cr6.eq) goto loc_820963E0;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r28,496
	ctx.r3.s64 = ctx.r28.s64 + 496;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8259dbb0
	ctx.lr = 0x82096398;
	sub_8259DBB0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r28,752
	ctx.r10.s64 = ctx.r28.s64 + 752;
loc_820963A0:
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
	// bne cr6,0x820963a0
	if (!ctx.cr6.eq) goto loc_820963A0;
	// stw r22,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r22.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r11.u32);
	// bne cr6,0x820963d4
	if (!ctx.cr6.eq) goto loc_820963D4;
	// lwz r6,796(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 796);
	// stw r6,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r6.u32);
loc_820963D4:
	// li r31,2
	ctx.r31.s64 = 2;
	// li r25,2
	ctx.r25.s64 = 2;
	// b 0x820963fc
	goto loc_820963FC;
loc_820963E0:
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820963f0
	if (ctx.cr6.eq) goto loc_820963F0;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
loc_820963F0:
	// rlwinm r4,r30,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82096400
	if (ctx.cr6.eq) goto loc_82096400;
loc_820963FC:
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
loc_82096400:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82096420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r30,r10,-16832
	ctx.r30.s64 = ctx.r10.s64 + -16832;
	// beq cr6,0x820964b4
	if (ctx.cr6.eq) goto loc_820964B4;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82096448
	if (ctx.cr6.gt) goto loc_82096448;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82096544
	goto loc_82096544;
loc_82096448:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r28,488
	ctx.r5.s64 = ctx.r28.s64 + 488;
	// addi r7,r28,864
	ctx.r7.s64 = ctx.r28.s64 + 864;
	// addi r11,r30,-28
	ctx.r11.s64 = ctx.r30.s64 + -28;
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82096480:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82096480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82096480;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x825af168
	ctx.lr = 0x820964B0;
	sub_825AF168(ctx, base);
	// b 0x82096544
	goto loc_82096544;
loc_820964B4:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820964C4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x820964c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820964C4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,32
	ctx.r8.s64 = 32;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820964E4:
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820964e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820964E4;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82090850
	ctx.lr = 0x82096500;
	sub_82090850(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r28,860
	ctx.r5.s64 = ctx.r28.s64 + 860;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259d1b0
	ctx.lr = 0x82096514;
	sub_8259D1B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825b3e30
	ctx.lr = 0x82096520;
	sub_825B3E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096530
	if (ctx.cr6.eq) goto loc_82096530;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82096544
	goto loc_82096544;
loc_82096530:
	// bl 0x825af6c0
	ctx.lr = 0x82096534;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,183
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 183, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82096544
	if (ctx.cr6.eq) goto loc_82096544;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82096544:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// bgt cr6,0x8209671c
	if (ctx.cr6.gt) goto loc_8209671C;
	// beq cr6,0x8209674c
	if (ctx.cr6.eq) goto loc_8209674C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096584
	if (ctx.cr6.eq) goto loc_82096584;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x8209656c
	if (ctx.cr6.eq) goto loc_8209656C;
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// b 0x82096730
	goto loc_82096730;
loc_8209656C:
	// li r31,9
	ctx.r31.s64 = 9;
loc_82096570:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82096584:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82096704
	if (ctx.cr6.eq) goto loc_82096704;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82096704
	if (ctx.cr6.eq) goto loc_82096704;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82096614
	if (ctx.cr6.eq) goto loc_82096614;
	// addi r4,r10,-2
	ctx.r4.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x820965c0
	if (ctx.cr6.gt) goto loc_820965C0;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// li r25,3
	ctx.r25.s64 = 3;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_820965C0:
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_820965C8:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820965c8
	if (!ctx.cr6.eq) goto loc_820965C8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_820965F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x820965f0
	if (!ctx.cr6.eq) goto loc_820965F0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// b 0x82096664
	goto loc_82096664;
loc_82096614:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82096624:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82096624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82096624;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82090850
	ctx.lr = 0x82096640;
	sub_82090850(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r28,860
	ctx.r5.s64 = ctx.r28.s64 + 860;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259d1b0
	ctx.lr = 0x82096658;
	sub_8259D1B0(ctx, base);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_82096664:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825af2f0
	ctx.lr = 0x82096678;
	sub_825AF2F0(ctx, base);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x820966e8
	if (!ctx.cr6.eq) goto loc_820966E8;
	// bl 0x825af6c0
	ctx.lr = 0x8209668C;
	sub_825AF6C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8209669c
	if (ctx.cr6.eq) goto loc_8209669C;
	// cmpwi cr6,r3,123
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 123, ctx.xer);
	// bne cr6,0x820966ac
	if (!ctx.cr6.eq) goto loc_820966AC;
loc_8209669C:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x820966ac
	if (!ctx.cr6.eq) goto loc_820966AC;
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x820966c0
	goto loc_820966C0;
loc_820966AC:
	// cmpwi cr6,r3,1110
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1110, ctx.xer);
	// beq cr6,0x820966bc
	if (ctx.cr6.eq) goto loc_820966BC;
	// cmpwi cr6,r3,80
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 80, ctx.xer);
	// bne cr6,0x820966c0
	if (!ctx.cr6.eq) goto loc_820966C0;
loc_820966BC:
	// li r31,2
	ctx.r31.s64 = 2;
loc_820966C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825af190
	ctx.lr = 0x820966CC;
	sub_825AF190(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82096570
	if (!ctx.cr6.eq) goto loc_82096570;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_820966E8:
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stb r22,44(r23)
	PPC_STORE_U8(ctx.r23.u32 + 44, ctx.r22.u8);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82096704:
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_8209671C:
	// cmplwi cr6,r3,1392
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1392, ctx.xer);
	// beq cr6,0x82096764
	if (ctx.cr6.eq) goto loc_82096764;
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// beq cr6,0x8209674c
	if (ctx.cr6.eq) goto loc_8209674C;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
loc_82096730:
	// beq cr6,0x8209674c
	if (ctx.cr6.eq) goto loc_8209674C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_8209674C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82096764:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,8
	ctx.r31.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_8209677C:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096788"))) PPC_WEAK_FUNC(sub_82096788);
PPC_FUNC_IMPL(__imp__sub_82096788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82096790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r4,-4
	ctx.r31.s64 = ctx.r4.s64 + -4;
	// lwz r30,3840(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bne cr6,0x820967b0
	if (!ctx.cr6.eq) goto loc_820967B0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820967B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82096854
	if (ctx.cr6.eq) goto loc_82096854;
	// bl 0x825aed30
	ctx.lr = 0x820967C8;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096860
	if (ctx.cr6.eq) goto loc_82096860;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16824
	ctx.r3.s64 = ctx.r11.s64 + -16824;
	// bl 0x825af190
	ctx.lr = 0x820967E0;
	sub_825AF190(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82096848
	if (ctx.cr6.eq) goto loc_82096848;
	// bl 0x825aeb48
	ctx.lr = 0x820967F4;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096848
	if (ctx.cr6.eq) goto loc_82096848;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82096860
	if (ctx.cr6.eq) goto loc_82096860;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r30,488
	ctx.r4.s64 = ctx.r30.s64 + 488;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825af198
	ctx.lr = 0x82096828;
	sub_825AF198(ctx, base);
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// bne cr6,0x82096838
	if (!ctx.cr6.eq) goto loc_82096838;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82096860
	goto loc_82096860;
loc_82096838:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096860
	if (ctx.cr6.eq) goto loc_82096860;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82096860
	goto loc_82096860;
loc_82096848:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82096854:
	// bl 0x825aed30
	ctx.lr = 0x82096858;
	sub_825AED30(ctx, base);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82096860:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82096874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096880"))) PPC_WEAK_FUNC(sub_82096880);
PPC_FUNC_IMPL(__imp__sub_82096880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82096888;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r31,3840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82096a78
	if (ctx.cr6.eq) goto loc_82096A78;
	// bl 0x825aeb48
	ctx.lr = 0x820968B4;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096a78
	if (ctx.cr6.eq) goto loc_82096A78;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820969ec
	if (ctx.cr6.eq) goto loc_820969EC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-16788
	ctx.r29.s64 = ctx.r11.s64 + -16788;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820968E4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x820968e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820968E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r31,488
	ctx.r5.s64 = ctx.r31.s64 + 488;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x825af168
	ctx.lr = 0x82096920;
	sub_825AF168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82096990
	if (!ctx.cr6.eq) goto loc_82096990;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82096934:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82096934
	if (!ctx.cr6.eq) goto loc_82096934;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
loc_82096960:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82096960
	if (!ctx.cr6.eq) goto loc_82096960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b40e0
	ctx.lr = 0x8209697C;
	sub_825B40E0(ctx, base);
	// bl 0x825af6c0
	ctx.lr = 0x82096980;
	sub_825AF6C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825af190
	ctx.lr = 0x82096990;
	sub_825AF190(ctx, base);
loc_82096990:
	// cmplwi cr6,r31,1110
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1110, ctx.xer);
	// bgt cr6,0x820969b4
	if (ctx.cr6.gt) goto loc_820969B4;
	// beq cr6,0x820969dc
	if (ctx.cr6.eq) goto loc_820969DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82096a44
	if (ctx.cr6.eq) goto loc_82096A44;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x82096a68
	if (ctx.cr6.eq) goto loc_82096A68;
	// cmplwi cr6,r31,80
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 80, ctx.xer);
	// b 0x820969c8
	goto loc_820969C8;
loc_820969B4:
	// cmplwi cr6,r31,1167
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1167, ctx.xer);
	// beq cr6,0x820969dc
	if (ctx.cr6.eq) goto loc_820969DC;
	// cmplwi cr6,r31,1617
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1617, ctx.xer);
	// beq cr6,0x820969dc
	if (ctx.cr6.eq) goto loc_820969DC;
	// cmplwi cr6,r31,1627
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1627, ctx.xer);
loc_820969C8:
	// beq cr6,0x820969dc
	if (ctx.cr6.eq) goto loc_820969DC;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820969DC:
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820969EC:
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820969FC:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x820969fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820969FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82090850
	ctx.lr = 0x82096A14;
	sub_82090850(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,-16788
	ctx.r11.s64 = ctx.r11.s64 + -16788;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// addi r5,r31,860
	ctx.r5.s64 = ctx.r31.s64 + 860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82096A34;
	sub_8259D1B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b40e0
	ctx.lr = 0x82096A3C;
	sub_825B40E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096a54
	if (ctx.cr6.eq) goto loc_82096A54;
loc_82096A44:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82096A54:
	// bl 0x825af6c0
	ctx.lr = 0x82096A58;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82096a68
	if (ctx.cr6.eq) goto loc_82096A68;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82096a6c
	if (!ctx.cr6.eq) goto loc_82096A6C;
loc_82096A68:
	// li r27,9
	ctx.r27.s64 = 9;
loc_82096A6C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82096A78:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096A84"))) PPC_WEAK_FUNC(sub_82096A84);
PPC_FUNC_IMPL(__imp__sub_82096A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096A88"))) PPC_WEAK_FUNC(sub_82096A88);
PPC_FUNC_IMPL(__imp__sub_82096A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82096A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,3840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82096b64
	if (ctx.cr6.eq) goto loc_82096B64;
	// bl 0x825aeb48
	ctx.lr = 0x82096AB8;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096b64
	if (ctx.cr6.eq) goto loc_82096B64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82096af8
	if (ctx.cr6.eq) goto loc_82096AF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,488
	ctx.r4.s64 = ctx.r31.s64 + 488;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bl 0x825af188
	ctx.lr = 0x82096AE4;
	sub_825AF188(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82096b48
	if (!ctx.cr6.eq) goto loc_82096B48;
loc_82096AEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82096AF8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82096B08:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82096b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82096B08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82090850
	ctx.lr = 0x82096B20;
	sub_82090850(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16780
	ctx.r4.s64 = ctx.r11.s64 + -16780;
	// addi r5,r31,860
	ctx.r5.s64 = ctx.r31.s64 + 860;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259d1b0
	ctx.lr = 0x82096B38;
	sub_8259D1B0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825b3f50
	ctx.lr = 0x82096B40;
	sub_825B3F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82096aec
	if (!ctx.cr6.eq) goto loc_82096AEC;
loc_82096B48:
	// bl 0x825af6c0
	ctx.lr = 0x82096B4C;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82096b68
	if (!ctx.cr6.eq) goto loc_82096B68;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82096B64:
	// li r3,13
	ctx.r3.s64 = 13;
loc_82096B68:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096B70"))) PPC_WEAK_FUNC(sub_82096B70);
PPC_FUNC_IMPL(__imp__sub_82096B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82096B78;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825aeb48
	ctx.lr = 0x82096B90;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82096ba4
	if (!ctx.cr6.eq) goto loc_82096BA4;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82096BA4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 820, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r27,r11,-16752
	ctx.r27.s64 = ctx.r11.s64 + -16752;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r27,-20
	ctx.r11.s64 = ctx.r27.s64 + -20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82096BC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82096bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82096BC0;
	// addi r26,r29,488
	ctx.r26.s64 = ctx.r29.s64 + 488;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x825af168
	ctx.lr = 0x82096BF8;
	sub_825AF168(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
	// bne cr6,0x82096d28
	if (!ctx.cr6.eq) goto loc_82096D28;
	// li r28,11
	ctx.r28.s64 = 11;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82096cdc
	if (ctx.cr6.eq) goto loc_82096CDC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82096C1C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82096c1c
	if (!ctx.cr6.eq) goto loc_82096C1C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82096C48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82096c48
	if (!ctx.cr6.eq) goto loc_82096C48;
	// addi r31,r29,168
	ctx.r31.s64 = ctx.r29.s64 + 168;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b3ec0
	ctx.lr = 0x82096C6C;
	sub_825B3EC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r3.u32);
	// beq cr6,0x82096cc0
	if (ctx.cr6.eq) goto loc_82096CC0;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r6.u32);
	// b 0x82096cdc
	goto loc_82096CDC;
loc_82096CC0:
	// bl 0x825aed30
	ctx.lr = 0x82096CC4;
	sub_825AED30(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r5.u32);
	// bl 0x825af190
	ctx.lr = 0x82096CD8;
	sub_825AF190(ctx, base);
	// li r28,12
	ctx.r28.s64 = 12;
loc_82096CDC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r31.u8);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x825af1a0
	ctx.lr = 0x82096D00;
	sub_825AF1A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82096d74
	if (!ctx.cr6.eq) goto loc_82096D74;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82096d18
	if (!ctx.cr6.eq) goto loc_82096D18;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82096D18:
	// stb r31,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r31.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82096D28:
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// beq cr6,0x82096d70
	if (ctx.cr6.eq) goto loc_82096D70;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x82096d70
	if (ctx.cr6.eq) goto loc_82096D70;
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// beq cr6,0x82096d70
	if (ctx.cr6.eq) goto loc_82096D70;
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// beq cr6,0x82096d70
	if (ctx.cr6.eq) goto loc_82096D70;
	// cmplwi cr6,r3,1392
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1392, ctx.xer);
	// bne cr6,0x82096d60
	if (!ctx.cr6.eq) goto loc_82096D60;
	// li r28,8
	ctx.r28.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82096D60:
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82096D70:
	// li r28,2
	ctx.r28.s64 = 2;
loc_82096D74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096D80"))) PPC_WEAK_FUNC(sub_82096D80);
PPC_FUNC_IMPL(__imp__sub_82096D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82096D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,12
	ctx.r28.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,3840(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 820, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82096DB8:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82096db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82096DB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82090850
	ctx.lr = 0x82096DCC;
	sub_82090850(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-16744
	ctx.r4.s64 = ctx.r11.s64 + -16744;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r29,860
	ctx.r5.s64 = ctx.r29.s64 + 860;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259d1b0
	ctx.lr = 0x82096DE8;
	sub_8259D1B0(ctx, base);
	// addi r31,r29,168
	ctx.r31.s64 = ctx.r29.s64 + 168;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b3ec0
	ctx.lr = 0x82096DF8;
	sub_825B3EC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r3.u32);
	// beq cr6,0x82096e58
	if (ctx.cr6.eq) goto loc_82096E58;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// lwz r11,488(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82096E58:
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r10.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096E6C"))) PPC_WEAK_FUNC(sub_82096E6C);
PPC_FUNC_IMPL(__imp__sub_82096E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096E70"))) PPC_WEAK_FUNC(sub_82096E70);
PPC_FUNC_IMPL(__imp__sub_82096E70) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r30,3840(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r31,r30,168
	ctx.r31.s64 = ctx.r30.s64 + 168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// bl 0x825b4088
	ctx.lr = 0x82096EA0;
	sub_825B4088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82096f00
	if (ctx.cr6.eq) goto loc_82096F00;
	// lwz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,820(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// lwz r8,488(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// b 0x82096f34
	goto loc_82096F34;
loc_82096F00:
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// li r31,12
	ctx.r31.s64 = 12;
	// bl 0x825aed30
	ctx.lr = 0x82096F0C;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82096f18
	if (!ctx.cr6.eq) goto loc_82096F18;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82096F18:
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// stw r7,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r7.u32);
	// bl 0x825af190
	ctx.lr = 0x82096F30;
	sub_825AF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82096F34:
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

__attribute__((alias("__imp__sub_82096F4C"))) PPC_WEAK_FUNC(sub_82096F4C);
PPC_FUNC_IMPL(__imp__sub_82096F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096F50"))) PPC_WEAK_FUNC(sub_82096F50);
PPC_FUNC_IMPL(__imp__sub_82096F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82096F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,3840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82097038
	if (ctx.cr6.eq) goto loc_82097038;
	// bl 0x825aeb48
	ctx.lr = 0x82096F7C;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097038
	if (ctx.cr6.eq) goto loc_82097038;
	// addi r30,r31,812
	ctx.r30.s64 = ctx.r31.s64 + 812;
	// lwz r4,864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r28,12
	ctx.r28.s64 = 12;
	// bl 0x825af1a8
	ctx.lr = 0x82096FB0;
	sub_825AF1A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82097028
	if (!ctx.cr6.eq) goto loc_82097028;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r31,488
	ctx.r4.s64 = ctx.r31.s64 + 488;
	// bl 0x825ae950
	ctx.lr = 0x82096FD0;
	sub_825AE950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82097000
	if (!ctx.cr6.eq) goto loc_82097000;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82097000
	if (ctx.cr6.eq) goto loc_82097000;
	// lwz r10,824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// addi r9,r31,496
	ctx.r9.s64 = ctx.r31.s64 + 496;
	// li r28,11
	ctx.r28.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82097000:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825aed30
	ctx.lr = 0x82097008;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82097014
	if (!ctx.cr6.eq) goto loc_82097014;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82097014:
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82097028:
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82097038:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82097044"))) PPC_WEAK_FUNC(sub_82097044);
PPC_FUNC_IMPL(__imp__sub_82097044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097048"))) PPC_WEAK_FUNC(sub_82097048);
PPC_FUNC_IMPL(__imp__sub_82097048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82097050;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,12
	ctx.r29.s64 = 12;
	// lwz r31,3840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x82097078;
	sub_8259D300(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r31,488
	ctx.r4.s64 = ctx.r31.s64 + 488;
	// bl 0x825ae950
	ctx.lr = 0x82097090;
	sub_825AE950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820970ac
	if (!ctx.cr6.eq) goto loc_820970AC;
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820970AC:
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// bl 0x825aed30
	ctx.lr = 0x820970B4;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820970c0
	if (!ctx.cr6.eq) goto loc_820970C0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820970C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820970D4"))) PPC_WEAK_FUNC(sub_820970D4);
PPC_FUNC_IMPL(__imp__sub_820970D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820970D8"))) PPC_WEAK_FUNC(sub_820970D8);
PPC_FUNC_IMPL(__imp__sub_820970D8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,3840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82097118
	if (ctx.cr6.eq) goto loc_82097118;
	// bl 0x825aed30
	ctx.lr = 0x8209710C;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097118
	if (ctx.cr6.eq) goto loc_82097118;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82097118:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8209713C"))) PPC_WEAK_FUNC(sub_8209713C);
PPC_FUNC_IMPL(__imp__sub_8209713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097140"))) PPC_WEAK_FUNC(sub_82097140);
PPC_FUNC_IMPL(__imp__sub_82097140) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,3840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x825c6b9c
	ctx.lr = 0x82097174;
	__imp__XNotifyGetNext(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820971a4
	if (ctx.cr6.eq) goto loc_820971A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x820971a4
	if (!ctx.cr6.eq) goto loc_820971A4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820971a0
	if (!ctx.cr6.eq) goto loc_820971A0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820971A0:
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
loc_820971A4:
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,997
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 997, ctx.xer);
	// beq cr6,0x82097200
	if (ctx.cr6.eq) goto loc_82097200;
	// lbz r7,808(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 808);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82097200
	if (!ctx.cr6.eq) goto loc_82097200;
	// bl 0x825af7b8
	ctx.lr = 0x820971C4;
	sub_825AF7B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820971f0
	if (ctx.cr6.eq) goto loc_820971F0;
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// beq cr6,0x820971e8
	if (ctx.cr6.eq) goto loc_820971E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82097204
	goto loc_82097204;
loc_820971E8:
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x82097204
	goto loc_82097204;
loc_820971F0:
	// lwz r6,796(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r6.u32);
	// b 0x82097204
	goto loc_82097204;
loc_82097200:
	// li r3,15
	ctx.r3.s64 = 15;
loc_82097204:
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

__attribute__((alias("__imp__sub_8209721C"))) PPC_WEAK_FUNC(sub_8209721C);
PPC_FUNC_IMPL(__imp__sub_8209721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097220"))) PPC_WEAK_FUNC(sub_82097220);
PPC_FUNC_IMPL(__imp__sub_82097220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82097228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82097260
	if (ctx.cr6.lt) goto loc_82097260;
loc_82097244:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82097250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82097244
	if (!ctx.cr6.lt) goto loc_82097244;
loc_82097260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82097268"))) PPC_WEAK_FUNC(sub_82097268);
PPC_FUNC_IMPL(__imp__sub_82097268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82097270;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,655
	ctx.r11.s64 = 42926080;
	// li r9,16
	ctx.r9.s64 = 16;
	// ori r10,r11,23592
	ctx.r10.u64 = ctx.r11.u64 | 23592;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r31,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// mulli r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 * 100;
	// ble cr6,0x820972b8
	if (!ctx.cr6.gt) goto loc_820972B8;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_820972B8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820972F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r3,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r3.u32);
	// beq cr6,0x820973b4
	if (ctx.cr6.eq) goto loc_820973B4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_8209730C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82097328:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82097328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82097328;
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stb r31,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r31.u8);
	// stb r31,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r31.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x82097368;
	sub_8259D2A0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r23,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r23.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// beq cr6,0x8209739c
	if (ctx.cr6.eq) goto loc_8209739C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82097388:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bdnz 0x82097388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82097388;
loc_8209739C:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// stb r31,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r31.u8);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,100
	ctx.r27.s64 = ctx.r27.s64 + 100;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8209730c
	if (!ctx.cr6.eq) goto loc_8209730C;
loc_820973B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820973BC"))) PPC_WEAK_FUNC(sub_820973BC);
PPC_FUNC_IMPL(__imp__sub_820973BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820973C0"))) PPC_WEAK_FUNC(sub_820973C0);
PPC_FUNC_IMPL(__imp__sub_820973C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820973F8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820973f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820973F8;
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x82097424;
	sub_8259D2A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209744c
	if (ctx.cr6.eq) goto loc_8209744C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82097438:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x82097438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82097438;
loc_8209744C:
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

__attribute__((alias("__imp__sub_82097464"))) PPC_WEAK_FUNC(sub_82097464);
PPC_FUNC_IMPL(__imp__sub_82097464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097468"))) PPC_WEAK_FUNC(sub_82097468);
PPC_FUNC_IMPL(__imp__sub_82097468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82097470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r5,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820974d4
	if (!ctx.cr6.eq) goto loc_820974D4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8209751c
	if (ctx.cr6.eq) goto loc_8209751C;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r30.u8);
	// stb r30,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r30.u8);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// bl 0x820987c0
	ctx.lr = 0x820974A8;
	sub_820987C0(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x82097540
	ctx.lr = 0x820974CC;
	sub_82097540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820974D4:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x82097534
	if (!ctx.cr6.eq) goto loc_82097534;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82097518
	if (!ctx.cr6.eq) goto loc_82097518;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,144(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 144);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820974FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r30.u32);
	// stw r30,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stb r30,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r30.u8);
	// stb r30,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r30.u8);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
loc_82097518:
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
loc_8209751C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82097534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82097534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209753C"))) PPC_WEAK_FUNC(sub_8209753C);
PPC_FUNC_IMPL(__imp__sub_8209753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097540"))) PPC_WEAK_FUNC(sub_82097540);
PPC_FUNC_IMPL(__imp__sub_82097540) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x82097ad4
	if (ctx.cr6.gt) goto loc_82097AD4;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,30092
	ctx.r12.s64 = ctx.r12.s64 + 30092;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82097A14;
	case 1:
		goto loc_8209778C;
	case 2:
		goto loc_82097AD4;
	case 3:
		goto loc_82097878;
	case 4:
		goto loc_82097AD4;
	case 5:
		goto loc_82097AD4;
	case 6:
		goto loc_82097AD4;
	case 7:
		goto loc_820978E8;
	case 8:
		goto loc_82097AD4;
	case 9:
		goto loc_82097AD4;
	case 10:
		goto loc_82097AD4;
	case 11:
		goto loc_82097AD4;
	case 12:
		goto loc_82097AD4;
	case 13:
		goto loc_82097AD4;
	case 14:
		goto loc_82097AD4;
	case 15:
		goto loc_820977BC;
	case 16:
		goto loc_82097AD4;
	case 17:
		goto loc_82097AD4;
	case 18:
		goto loc_82097AD4;
	case 19:
		goto loc_82097AD4;
	case 20:
		goto loc_82097AD4;
	case 21:
		goto loc_82097AD4;
	case 22:
		goto loc_82097AD4;
	case 23:
		goto loc_82097AD4;
	case 24:
		goto loc_82097AD4;
	case 25:
		goto loc_82097AD4;
	case 26:
		goto loc_82097AD4;
	case 27:
		goto loc_82097AD4;
	case 28:
		goto loc_82097AD4;
	case 29:
		goto loc_82097AD4;
	case 30:
		goto loc_82097AD4;
	case 31:
		goto loc_8209793C;
	case 32:
		goto loc_82097AD4;
	case 33:
		goto loc_82097AD4;
	case 34:
		goto loc_82097AD4;
	case 35:
		goto loc_82097AD4;
	case 36:
		goto loc_82097AD4;
	case 37:
		goto loc_82097AD4;
	case 38:
		goto loc_82097AD4;
	case 39:
		goto loc_82097AD4;
	case 40:
		goto loc_82097AD4;
	case 41:
		goto loc_82097AD4;
	case 42:
		goto loc_82097AD4;
	case 43:
		goto loc_82097AD4;
	case 44:
		goto loc_82097AD4;
	case 45:
		goto loc_82097AD4;
	case 46:
		goto loc_82097AD4;
	case 47:
		goto loc_82097AD4;
	case 48:
		goto loc_82097AD4;
	case 49:
		goto loc_82097AD4;
	case 50:
		goto loc_82097AD4;
	case 51:
		goto loc_82097AD4;
	case 52:
		goto loc_82097AD4;
	case 53:
		goto loc_82097AD4;
	case 54:
		goto loc_82097AD4;
	case 55:
		goto loc_82097AD4;
	case 56:
		goto loc_82097AD4;
	case 57:
		goto loc_82097AD4;
	case 58:
		goto loc_82097AD4;
	case 59:
		goto loc_82097AD4;
	case 60:
		goto loc_82097AD4;
	case 61:
		goto loc_82097AD4;
	case 62:
		goto loc_82097AD4;
	case 63:
		goto loc_8209799C;
	case 64:
		goto loc_82097AD4;
	case 65:
		goto loc_82097AD4;
	case 66:
		goto loc_82097AD4;
	case 67:
		goto loc_82097AD4;
	case 68:
		goto loc_82097AD4;
	case 69:
		goto loc_82097AD4;
	case 70:
		goto loc_82097AD4;
	case 71:
		goto loc_82097AD4;
	case 72:
		goto loc_82097AD4;
	case 73:
		goto loc_82097AD4;
	case 74:
		goto loc_82097AD4;
	case 75:
		goto loc_82097AD4;
	case 76:
		goto loc_82097AD4;
	case 77:
		goto loc_82097AD4;
	case 78:
		goto loc_82097AD4;
	case 79:
		goto loc_82097AD4;
	case 80:
		goto loc_82097AD4;
	case 81:
		goto loc_82097AD4;
	case 82:
		goto loc_82097AD4;
	case 83:
		goto loc_82097AD4;
	case 84:
		goto loc_82097AD4;
	case 85:
		goto loc_82097AD4;
	case 86:
		goto loc_82097AD4;
	case 87:
		goto loc_82097AD4;
	case 88:
		goto loc_82097AD4;
	case 89:
		goto loc_82097AD4;
	case 90:
		goto loc_82097AD4;
	case 91:
		goto loc_82097AD4;
	case 92:
		goto loc_82097AD4;
	case 93:
		goto loc_82097AD4;
	case 94:
		goto loc_82097AD4;
	case 95:
		goto loc_82097AD4;
	case 96:
		goto loc_82097AD4;
	case 97:
		goto loc_82097AD4;
	case 98:
		goto loc_82097AD4;
	case 99:
		goto loc_82097AD4;
	case 100:
		goto loc_82097AD4;
	case 101:
		goto loc_82097AD4;
	case 102:
		goto loc_82097AD4;
	case 103:
		goto loc_82097AD4;
	case 104:
		goto loc_82097AD4;
	case 105:
		goto loc_82097AD4;
	case 106:
		goto loc_82097AD4;
	case 107:
		goto loc_82097AD4;
	case 108:
		goto loc_82097AD4;
	case 109:
		goto loc_82097AD4;
	case 110:
		goto loc_82097AD4;
	case 111:
		goto loc_82097AD4;
	case 112:
		goto loc_82097AD4;
	case 113:
		goto loc_82097AD4;
	case 114:
		goto loc_82097AD4;
	case 115:
		goto loc_82097AD4;
	case 116:
		goto loc_82097AD4;
	case 117:
		goto loc_82097AD4;
	case 118:
		goto loc_82097AD4;
	case 119:
		goto loc_82097AD4;
	case 120:
		goto loc_82097AD4;
	case 121:
		goto loc_82097AD4;
	case 122:
		goto loc_82097AD4;
	case 123:
		goto loc_82097AD4;
	case 124:
		goto loc_82097AD4;
	case 125:
		goto loc_82097AD4;
	case 126:
		goto loc_82097AD4;
	case 127:
		goto loc_82097AA8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,31252(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31252);
	// lwz r16,30604(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30604);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,30840(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30840);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,30952(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30952);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,30652(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30652);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31036(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31036);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31132(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31132);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31444(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31444);
	// lwz r16,31400(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31400);
loc_8209778C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82091908
	ctx.lr = 0x820977A8;
	sub_82091908(ctx, base);
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
loc_820977BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lbz r7,96(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82097850
	if (ctx.cr6.eq) goto loc_82097850;
	// lwz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// addi r8,r4,76
	ctx.r8.s64 = ctx.r4.s64 + 76;
	// lwz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// bne cr6,0x82097828
	if (!ctx.cr6.eq) goto loc_82097828;
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
loc_82097810:
	// bl 0x820920f0
	ctx.lr = 0x82097814;
	sub_820920F0(ctx, base);
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
loc_82097828:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// bne cr6,0x82097810
	if (!ctx.cr6.eq) goto loc_82097810;
	// bl 0x82091fd0
	ctx.lr = 0x8209783C;
	sub_82091FD0(ctx, base);
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
loc_82097850:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82097ae8
	ctx.lr = 0x82097864;
	sub_82097AE8(ctx, base);
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
loc_82097878:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820978c0
	if (ctx.cr6.eq) goto loc_820978C0;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82097ad4
	if (!ctx.cr6.eq) goto loc_82097AD4;
loc_820978C0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82091c68
	ctx.lr = 0x820978D4;
	sub_82091C68(ctx, base);
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
loc_820978E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82097910
	if (ctx.cr6.eq) goto loc_82097910;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82097ad4
	if (!ctx.cr6.eq) goto loc_82097AD4;
loc_82097910:
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82091dd8
	ctx.lr = 0x82097928;
	sub_82091DD8(ctx, base);
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
loc_8209793C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8209797c
	if (!ctx.cr6.eq) goto loc_8209797C;
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x820922a0
	ctx.lr = 0x82097968;
	sub_820922A0(ctx, base);
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
loc_8209797C:
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x82092390
	ctx.lr = 0x82097988;
	sub_82092390(ctx, base);
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
loc_8209799C:
	// lwz r6,276(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x820979b8
	if (ctx.cr6.eq) goto loc_820979B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
loc_820979B8:
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r5,r4,64
	ctx.r5.s64 = ctx.r4.s64 + 64;
	// bne cr6,0x820979e8
	if (!ctx.cr6.eq) goto loc_820979E8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_820979D0:
	// bl 0x82092630
	ctx.lr = 0x820979D4;
	sub_82092630(ctx, base);
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
loc_820979E8:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x820979d0
	if (!ctx.cr6.eq) goto loc_820979D0;
	// lbz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// bl 0x820924c8
	ctx.lr = 0x82097A00;
	sub_820924C8(ctx, base);
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
loc_82097A14:
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82097a50
	if (!ctx.cr6.eq) goto loc_82097A50;
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x820927f0
	ctx.lr = 0x82097A3C;
	sub_820927F0(ctx, base);
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
loc_82097A50:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stb r10,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r10.u8);
	// stb r10,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r10.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82097A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
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
loc_82097AA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r10.u8);
	// stb r10,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r10.u8);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82092920
	ctx.lr = 0x82097AD4;
	sub_82092920(ctx, base);
loc_82097AD4:
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

__attribute__((alias("__imp__sub_82097AE8"))) PPC_WEAK_FUNC(sub_82097AE8);
PPC_FUNC_IMPL(__imp__sub_82097AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82097AF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x820986f8
	if (ctx.cr6.gt) goto loc_820986F8;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,31552
	ctx.r12.s64 = ctx.r12.s64 + 31552;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82098480;
	case 1:
		goto loc_82097D40;
	case 2:
		goto loc_820986F8;
	case 3:
		goto loc_82098098;
	case 4:
		goto loc_820986F8;
	case 5:
		goto loc_820986F8;
	case 6:
		goto loc_820986F8;
	case 7:
		goto loc_82098148;
	case 8:
		goto loc_820986F8;
	case 9:
		goto loc_820986F8;
	case 10:
		goto loc_820986F8;
	case 11:
		goto loc_820986F8;
	case 12:
		goto loc_820986F8;
	case 13:
		goto loc_820986F8;
	case 14:
		goto loc_820986F8;
	case 15:
		goto loc_82097DCC;
	case 16:
		goto loc_820986F8;
	case 17:
		goto loc_820986F8;
	case 18:
		goto loc_820986F8;
	case 19:
		goto loc_820986F8;
	case 20:
		goto loc_820986F8;
	case 21:
		goto loc_820986F8;
	case 22:
		goto loc_820986F8;
	case 23:
		goto loc_820986F8;
	case 24:
		goto loc_820986F8;
	case 25:
		goto loc_820986F8;
	case 26:
		goto loc_820986F8;
	case 27:
		goto loc_820986F8;
	case 28:
		goto loc_820986F8;
	case 29:
		goto loc_820986F8;
	case 30:
		goto loc_820986F8;
	case 31:
		goto loc_8209823C;
	case 32:
		goto loc_820986F8;
	case 33:
		goto loc_820986F8;
	case 34:
		goto loc_820986F8;
	case 35:
		goto loc_820986F8;
	case 36:
		goto loc_820986F8;
	case 37:
		goto loc_820986F8;
	case 38:
		goto loc_820986F8;
	case 39:
		goto loc_820986F8;
	case 40:
		goto loc_820986F8;
	case 41:
		goto loc_820986F8;
	case 42:
		goto loc_820986F8;
	case 43:
		goto loc_820986F8;
	case 44:
		goto loc_820986F8;
	case 45:
		goto loc_820986F8;
	case 46:
		goto loc_820986F8;
	case 47:
		goto loc_820986F8;
	case 48:
		goto loc_820986F8;
	case 49:
		goto loc_820986F8;
	case 50:
		goto loc_820986F8;
	case 51:
		goto loc_820986F8;
	case 52:
		goto loc_820986F8;
	case 53:
		goto loc_820986F8;
	case 54:
		goto loc_820986F8;
	case 55:
		goto loc_820986F8;
	case 56:
		goto loc_820986F8;
	case 57:
		goto loc_820986F8;
	case 58:
		goto loc_820986F8;
	case 59:
		goto loc_820986F8;
	case 60:
		goto loc_820986F8;
	case 61:
		goto loc_820986F8;
	case 62:
		goto loc_820986F8;
	case 63:
		goto loc_8209830C;
	case 64:
		goto loc_820986F8;
	case 65:
		goto loc_820986F8;
	case 66:
		goto loc_820986F8;
	case 67:
		goto loc_820986F8;
	case 68:
		goto loc_820986F8;
	case 69:
		goto loc_820986F8;
	case 70:
		goto loc_820986F8;
	case 71:
		goto loc_820986F8;
	case 72:
		goto loc_820986F8;
	case 73:
		goto loc_820986F8;
	case 74:
		goto loc_820986F8;
	case 75:
		goto loc_820986F8;
	case 76:
		goto loc_820986F8;
	case 77:
		goto loc_820986F8;
	case 78:
		goto loc_820986F8;
	case 79:
		goto loc_820986F8;
	case 80:
		goto loc_820986F8;
	case 81:
		goto loc_820986F8;
	case 82:
		goto loc_820986F8;
	case 83:
		goto loc_820986F8;
	case 84:
		goto loc_820986F8;
	case 85:
		goto loc_820986F8;
	case 86:
		goto loc_820986F8;
	case 87:
		goto loc_820986F8;
	case 88:
		goto loc_820986F8;
	case 89:
		goto loc_820986F8;
	case 90:
		goto loc_820986F8;
	case 91:
		goto loc_820986F8;
	case 92:
		goto loc_820986F8;
	case 93:
		goto loc_820986F8;
	case 94:
		goto loc_820986F8;
	case 95:
		goto loc_820986F8;
	case 96:
		goto loc_820986F8;
	case 97:
		goto loc_820986F8;
	case 98:
		goto loc_820986F8;
	case 99:
		goto loc_820986F8;
	case 100:
		goto loc_820986F8;
	case 101:
		goto loc_820986F8;
	case 102:
		goto loc_820986F8;
	case 103:
		goto loc_820986F8;
	case 104:
		goto loc_820986F8;
	case 105:
		goto loc_820986F8;
	case 106:
		goto loc_820986F8;
	case 107:
		goto loc_820986F8;
	case 108:
		goto loc_820986F8;
	case 109:
		goto loc_820986F8;
	case 110:
		goto loc_820986F8;
	case 111:
		goto loc_820986F8;
	case 112:
		goto loc_820986F8;
	case 113:
		goto loc_820986F8;
	case 114:
		goto loc_820986F8;
	case 115:
		goto loc_820986F8;
	case 116:
		goto loc_820986F8;
	case 117:
		goto loc_820986F8;
	case 118:
		goto loc_820986F8;
	case 119:
		goto loc_820986F8;
	case 120:
		goto loc_820986F8;
	case 121:
		goto loc_820986F8;
	case 122:
		goto loc_820986F8;
	case 123:
		goto loc_820986F8;
	case 124:
		goto loc_820986F8;
	case 125:
		goto loc_820986F8;
	case 126:
		goto loc_820986F8;
	case 127:
		goto loc_82098644;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-31616(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31616);
	// lwz r16,32064(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32064);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-32616(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32616);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-32440(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32440);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,32204(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32204);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-32196(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32196);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-31988(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31988);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-30984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30984);
	// lwz r16,-31164(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31164);
loc_82097D40:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820928a0
	ctx.lr = 0x82097D68;
	sub_820928A0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82097dbc
	if (ctx.cr6.eq) goto loc_82097DBC;
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// beq cr6,0x82097dbc
	if (ctx.cr6.eq) goto loc_82097DBC;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82097dbc
	if (ctx.cr6.eq) goto loc_82097DBC;
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82097dbc
	if (ctx.cr6.eq) goto loc_82097DBC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82097DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// bl 0x820987c0
	ctx.lr = 0x82097DBC;
	sub_820987C0(ctx, base);
loc_82097DBC:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// b 0x820986f8
	goto loc_820986F8;
loc_82097DCC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82097e60
	if (!ctx.cr6.eq) goto loc_82097E60;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82097df0
	if (ctx.cr6.gt) goto loc_82097DF0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82097dfc
	if (!ctx.cr6.gt) goto loc_82097DFC;
loc_82097DF0:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82097e2c
	if (ctx.cr6.gt) goto loc_82097E2C;
loc_82097DFC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82097E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
loc_82097E2C:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x82097e44
	if (ctx.cr6.eq) goto loc_82097E44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82097e44
	if (ctx.cr6.eq) goto loc_82097E44;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82097E44:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82097E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82098038
	goto loc_82098038;
loc_82097E60:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x82097eb0
	if (!ctx.cr6.eq) goto loc_82097EB0;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82097e84
	if (!ctx.cr6.eq) goto loc_82097E84;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
loc_82097E84:
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82097EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x82098038
	goto loc_82098038;
loc_82097EB0:
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82097fd4
	if (!ctx.cr6.eq) goto loc_82097FD4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82097f9c
	if (ctx.cr6.eq) goto loc_82097F9C;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82097f9c
	if (ctx.cr6.eq) goto loc_82097F9C;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82097f9c
	if (ctx.cr6.eq) goto loc_82097F9C;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// beq cr6,0x82097f9c
	if (ctx.cr6.eq) goto loc_82097F9C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// bne cr6,0x82097f3c
	if (!ctx.cr6.eq) goto loc_82097F3C;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r4,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r4.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ble cr6,0x82097fcc
	if (!ctx.cr6.gt) goto loc_82097FCC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82097F14:
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// stb r27,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, ctx.r27.u8);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82097f14
	if (ctx.cr6.lt) goto loc_82097F14;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// b 0x82098004
	goto loc_82098004;
loc_82097F3C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82097f58
	if (ctx.cr6.gt) goto loc_82097F58;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82097f64
	if (!ctx.cr6.gt) goto loc_82097F64;
loc_82097F58:
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82097fcc
	if (ctx.cr6.gt) goto loc_82097FCC;
loc_82097F64:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82097F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// b 0x82098004
	goto loc_82098004;
loc_82097F9C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82097FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
loc_82097FCC:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// b 0x82098004
	goto loc_82098004;
loc_82097FD4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,3828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3828);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82097FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
loc_82098004:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8209801c
	if (ctx.cr6.eq) goto loc_8209801C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209801c
	if (ctx.cr6.eq) goto loc_8209801C;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_8209801C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82098038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098038:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// beq cr6,0x82098050
	if (ctx.cr6.eq) goto loc_82098050;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82098050
	if (ctx.cr6.eq) goto loc_82098050;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// bne cr6,0x82098054
	if (!ctx.cr6.eq) goto loc_82098054;
loc_82098050:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82098054:
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// bne cr6,0x820986f8
	if (!ctx.cr6.eq) goto loc_820986F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098838
	ctx.lr = 0x8209806C;
	sub_82098838(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820986f8
	if (ctx.cr6.eq) goto loc_820986F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x820986f4
	goto loc_820986F4;
loc_82098098:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x820980c8
	if (!ctx.cr6.eq) goto loc_820980C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820980B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x82098104
	goto loc_82098104;
loc_820980C8:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
	// beq cr6,0x820980e8
	if (ctx.cr6.eq) goto loc_820980E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820980e8
	if (ctx.cr6.eq) goto loc_820980E8;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_820980E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82098104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098104:
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x820986f8
	if (!ctx.cr6.eq) goto loc_820986F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098838
	ctx.lr = 0x8209811C;
	sub_82098838(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820986f8
	if (ctx.cr6.eq) goto loc_820986F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x820986f4
	goto loc_820986F4;
loc_82098148:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8209818c
	if (!ctx.cr6.eq) goto loc_8209818C;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// beq cr6,0x82098170
	if (ctx.cr6.eq) goto loc_82098170;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82098170
	if (ctx.cr6.eq) goto loc_82098170;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82098170:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82098188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820981f8
	goto loc_820981F8;
loc_8209818C:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x820981bc
	if (!ctx.cr6.eq) goto loc_820981BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820981AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x820981f8
	goto loc_820981F8;
loc_820981BC:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// beq cr6,0x820981dc
	if (ctx.cr6.eq) goto loc_820981DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820981dc
	if (ctx.cr6.eq) goto loc_820981DC;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_820981DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820981F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820981F8:
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// bne cr6,0x820986f8
	if (!ctx.cr6.eq) goto loc_820986F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098838
	ctx.lr = 0x82098210;
	sub_82098838(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820986f8
	if (ctx.cr6.eq) goto loc_820986F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x820986f4
	goto loc_820986F4;
loc_8209823C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82098280
	if (!ctx.cr6.eq) goto loc_82098280;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// beq cr6,0x82098264
	if (ctx.cr6.eq) goto loc_82098264;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82098264
	if (ctx.cr6.eq) goto loc_82098264;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82098264:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209827C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820982fc
	goto loc_820982FC;
loc_82098280:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x820982b0
	if (!ctx.cr6.eq) goto loc_820982B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820982A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x820982fc
	goto loc_820982FC;
loc_820982B0:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x820982c0
	if (!ctx.cr6.eq) goto loc_820982C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r4.u8);
loc_820982C0:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// beq cr6,0x820982e0
	if (ctx.cr6.eq) goto loc_820982E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820982e0
	if (ctx.cr6.eq) goto loc_820982E0;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_820982E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820982FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820982FC:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x820986b4
	if (!ctx.cr6.eq) goto loc_820986B4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x820986b4
	goto loc_820986B4;
loc_8209830C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82098394
	if (!ctx.cr6.eq) goto loc_82098394;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
	// bne cr6,0x8209836c
	if (!ctx.cr6.eq) goto loc_8209836C;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x82098430
	if (!ctx.cr6.gt) goto loc_82098430;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
loc_82098340:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098354
	if (ctx.cr6.eq) goto loc_82098354;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
loc_82098354:
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82098340
	if (ctx.cr6.gt) goto loc_82098340;
	// b 0x82098430
	goto loc_82098430;
loc_8209836C:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x82098378
	if (ctx.cr6.eq) goto loc_82098378;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82098378:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82098390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82098430
	goto loc_82098430;
loc_82098394:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x820983c4
	if (!ctx.cr6.eq) goto loc_820983C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820983B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x82098430
	goto loc_82098430;
loc_820983C4:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x820983f4
	if (ctx.cr6.eq) goto loc_820983F4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x820983e4
	if (!ctx.cr6.eq) goto loc_820983E4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// beq cr6,0x820983f4
	if (ctx.cr6.eq) goto loc_820983F4;
loc_820983E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82098424
	if (!ctx.cr6.eq) goto loc_82098424;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// b 0x82098424
	goto loc_82098424;
loc_820983F4:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x82098408
	if (ctx.cr6.eq) goto loc_82098408;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82098408
	if (ctx.cr6.eq) goto loc_82098408;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82098408:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82098424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098424:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
loc_82098430:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x8209843c
	if (!ctx.cr6.eq) goto loc_8209843C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8209843C:
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x820986f8
	if (!ctx.cr6.eq) goto loc_820986F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098838
	ctx.lr = 0x82098454;
	sub_82098838(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820986f8
	if (ctx.cr6.eq) goto loc_820986F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x820986f4
	goto loc_820986F4;
loc_82098480:
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82098494:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82098494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098494;
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82098504
	if (!ctx.cr6.eq) goto loc_82098504;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x820984e4
	if (!ctx.cr6.eq) goto loc_820984E4;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820984D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x820986f8
	goto loc_820986F8;
loc_820984E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82098500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820986f8
	goto loc_820986F8;
loc_82098504:
	// lbz r8,292(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209859c
	if (ctx.cr6.eq) goto loc_8209859C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098838
	ctx.lr = 0x82098520;
	sub_82098838(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82098554
	if (ctx.cr6.eq) goto loc_82098554;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209854C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r27.u8);
	// b 0x82098588
	goto loc_82098588;
loc_82098554:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x82098588
	if (!ctx.cr6.eq) goto loc_82098588;
	// lbz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82098588
	if (!ctx.cr6.eq) goto loc_82098588;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82098584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r29.u8);
loc_82098588:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x820985fc
	if (ctx.cr6.eq) goto loc_820985FC;
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x820985fc
	goto loc_820985FC;
loc_8209859C:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x820985fc
	if (ctx.cr6.eq) goto loc_820985FC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x820985b0
	if (!ctx.cr6.eq) goto loc_820985B0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_820985B0:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bne cr6,0x820985c4
	if (!ctx.cr6.eq) goto loc_820985C4;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
loc_820985C4:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x820985dc
	if (ctx.cr6.eq) goto loc_820985DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820985dc
	if (ctx.cr6.eq) goto loc_820985DC;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_820985DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820985F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r29.u8);
loc_820985FC:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8209862c
	if (!ctx.cr6.eq) goto loc_8209862C;
	// stb r29,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r29.u8);
loc_82098608:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820986f8
	if (ctx.cr6.eq) goto loc_820986F8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// b 0x820986f8
	goto loc_820986F8;
loc_8209862C:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x82098608
	if (!ctx.cr6.eq) goto loc_82098608;
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x820986f8
	goto loc_820986F8;
loc_82098644:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x82098674
	if (!ctx.cr6.eq) goto loc_82098674;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82098664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r27.u8);
	// stb r27,285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 285, ctx.r27.u8);
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// b 0x820986b4
	goto loc_820986B4;
loc_82098674:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
	// beq cr6,0x82098694
	if (ctx.cr6.eq) goto loc_82098694;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82098694
	if (ctx.cr6.eq) goto loc_82098694;
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
loc_82098694:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820986B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820986B4:
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bne cr6,0x820986f8
	if (!ctx.cr6.eq) goto loc_820986F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098838
	ctx.lr = 0x820986CC;
	sub_82098838(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820986f8
	if (ctx.cr6.eq) goto loc_820986F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_820986F4:
	// bctrl 
	ctx.lr = 0x820986F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820986F8:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82098738
	if (!ctx.cr6.lt) goto loc_82098738;
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82098738
	if (ctx.cr6.eq) goto loc_82098738;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820987b8
	if (!ctx.cr6.eq) goto loc_820987B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097540
	ctx.lr = 0x82098730;
	sub_82097540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82098738:
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x82098784
	if (!ctx.cr6.eq) goto loc_82098784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82098774
	if (ctx.cr6.eq) goto loc_82098774;
loc_8209874C:
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r27.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// bgt cr6,0x8209874c
	if (ctx.cr6.gt) goto loc_8209874C;
loc_82098774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097540
	ctx.lr = 0x8209877C;
	sub_82097540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82098784:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r27,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r27.u32);
	// bne cr6,0x820987b8
	if (!ctx.cr6.eq) goto loc_820987B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820987B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820987B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820987C0"))) PPC_WEAK_FUNC(sub_820987C0);
PPC_FUNC_IMPL(__imp__sub_820987C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820987C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820987E0:
	// addi r28,r31,-16
	ctx.r28.s64 = ctx.r31.s64 + -16;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82098818
	if (!ctx.cr6.eq) goto loc_82098818;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82098818
	if (ctx.cr6.eq) goto loc_82098818;
	// lwz r3,3828(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3828);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82098814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82098818:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820987e0
	if (!ctx.cr6.eq) goto loc_820987E0;
	// stw r30,272(r26)
	PPC_STORE_U32(ctx.r26.u32 + 272, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82098838"))) PPC_WEAK_FUNC(sub_82098838);
PPC_FUNC_IMPL(__imp__sub_82098838) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82098880
	if (ctx.cr6.eq) goto loc_82098880;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8209886c
	if (ctx.cr6.eq) goto loc_8209886C;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82098864
	if (!ctx.cr6.eq) goto loc_82098864;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82098864:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8209886C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82098894
	if (!ctx.cr6.eq) goto loc_82098894;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82098880:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82098894
	if (!ctx.cr6.eq) goto loc_82098894;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_82098894:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209889C"))) PPC_WEAK_FUNC(sub_8209889C);
PPC_FUNC_IMPL(__imp__sub_8209889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820988A0"))) PPC_WEAK_FUNC(sub_820988A0);
PPC_FUNC_IMPL(__imp__sub_820988A0) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3244
	ctx.r31.s64 = ctx.r11.s64 + 3244;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820988e4
	if (ctx.cr6.eq) goto loc_820988E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x820988DC;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820988ec
	if (ctx.cr6.eq) goto loc_820988EC;
loc_820988E4:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x820988f0
	goto loc_820988F0;
loc_820988EC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_820988F0:
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82098958
	if (ctx.cr6.eq) goto loc_82098958;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82098918:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82098918
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098918;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// addi r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 + 60;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
loc_82098958:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82098970;
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

__attribute__((alias("__imp__sub_82098984"))) PPC_WEAK_FUNC(sub_82098984);
PPC_FUNC_IMPL(__imp__sub_82098984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098988"))) PPC_WEAK_FUNC(sub_82098988);
PPC_FUNC_IMPL(__imp__sub_82098988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,3288
	ctx.r31.s64 = ctx.r11.s64 + 3288;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// bl 0x825af1b8
	ctx.lr = 0x820989D0;
	sub_825AF1B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82098a28
	if (!ctx.cr6.eq) goto loc_82098A28;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,50000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50000, ctx.xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// ble cr6,0x82098a14
	if (!ctx.cr6.gt) goto loc_82098A14;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// ori r10,r10,50000
	ctx.r10.u64 = ctx.r10.u64 | 50000;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_82098A14:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82098a44
	if (!ctx.cr6.eq) goto loc_82098A44;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// b 0x82098a5c
	goto loc_82098A5C;
loc_82098A28:
	// bl 0x825af6c0
	ctx.lr = 0x82098A2C;
	sub_825AF6C0(ctx, base);
	// li r7,21
	ctx.r7.s64 = 21;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// b 0x82098a5c
	goto loc_82098A5C;
loc_82098A44:
	// cmplwi cr6,r9,50000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50000, ctx.xer);
	// ble cr6,0x82098a5c
	if (!ctx.cr6.gt) goto loc_82098A5C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// ori r9,r9,50000
	ctx.r9.u64 = ctx.r9.u64 | 50000;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_82098A5C:
	// lbz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82098ad8
	if (ctx.cr6.eq) goto loc_82098AD8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82098A80:
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82098a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098A80;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lbz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// stb r9,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
loc_82098AD8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82098AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098B04"))) PPC_WEAK_FUNC(sub_82098B04);
PPC_FUNC_IMPL(__imp__sub_82098B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098B08"))) PPC_WEAK_FUNC(sub_82098B08);
PPC_FUNC_IMPL(__imp__sub_82098B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82098B10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3680
	ctx.r31.s64 = ctx.r11.s64 + 3680;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x82098fb4
	if (ctx.cr6.gt) goto loc_82098FB4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-29888
	ctx.r12.s64 = ctx.r12.s64 + -29888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82098D3C;
	case 1:
		goto loc_82098FB4;
	case 2:
		goto loc_82098FB4;
	case 3:
		goto loc_82098F34;
	case 4:
		goto loc_82098FB4;
	case 5:
		goto loc_82098FB4;
	case 6:
		goto loc_82098FB4;
	case 7:
		goto loc_82098FB4;
	case 8:
		goto loc_82098FB4;
	case 9:
		goto loc_82098FB4;
	case 10:
		goto loc_82098FB4;
	case 11:
		goto loc_82098FB4;
	case 12:
		goto loc_82098FB4;
	case 13:
		goto loc_82098FB4;
	case 14:
		goto loc_82098FB4;
	case 15:
		goto loc_82098FB4;
	case 16:
		goto loc_82098FB4;
	case 17:
		goto loc_82098FB4;
	case 18:
		goto loc_82098FB4;
	case 19:
		goto loc_82098FB4;
	case 20:
		goto loc_82098FB4;
	case 21:
		goto loc_82098FB4;
	case 22:
		goto loc_82098FB4;
	case 23:
		goto loc_82098FB4;
	case 24:
		goto loc_82098FB4;
	case 25:
		goto loc_82098FB4;
	case 26:
		goto loc_82098FB4;
	case 27:
		goto loc_82098FB4;
	case 28:
		goto loc_82098FB4;
	case 29:
		goto loc_82098FB4;
	case 30:
		goto loc_82098FB4;
	case 31:
		goto loc_82098FB4;
	case 32:
		goto loc_82098FB4;
	case 33:
		goto loc_82098FB4;
	case 34:
		goto loc_82098FB4;
	case 35:
		goto loc_82098FB4;
	case 36:
		goto loc_82098FB4;
	case 37:
		goto loc_82098FB4;
	case 38:
		goto loc_82098FB4;
	case 39:
		goto loc_82098FB4;
	case 40:
		goto loc_82098FB4;
	case 41:
		goto loc_82098FB4;
	case 42:
		goto loc_82098FB4;
	case 43:
		goto loc_82098FB4;
	case 44:
		goto loc_82098FB4;
	case 45:
		goto loc_82098FB4;
	case 46:
		goto loc_82098FB4;
	case 47:
		goto loc_82098FB4;
	case 48:
		goto loc_82098FB4;
	case 49:
		goto loc_82098FB4;
	case 50:
		goto loc_82098FB4;
	case 51:
		goto loc_82098FB4;
	case 52:
		goto loc_82098FB4;
	case 53:
		goto loc_82098FB4;
	case 54:
		goto loc_82098FB4;
	case 55:
		goto loc_82098FB4;
	case 56:
		goto loc_82098FB4;
	case 57:
		goto loc_82098FB4;
	case 58:
		goto loc_82098FB4;
	case 59:
		goto loc_82098FB4;
	case 60:
		goto loc_82098FB4;
	case 61:
		goto loc_82098FB4;
	case 62:
		goto loc_82098FB4;
	case 63:
		goto loc_82098FB4;
	case 64:
		goto loc_82098FB4;
	case 65:
		goto loc_82098FB4;
	case 66:
		goto loc_82098FB4;
	case 67:
		goto loc_82098FB4;
	case 68:
		goto loc_82098FB4;
	case 69:
		goto loc_82098FB4;
	case 70:
		goto loc_82098FB4;
	case 71:
		goto loc_82098FB4;
	case 72:
		goto loc_82098FB4;
	case 73:
		goto loc_82098FB4;
	case 74:
		goto loc_82098FB4;
	case 75:
		goto loc_82098FB4;
	case 76:
		goto loc_82098FB4;
	case 77:
		goto loc_82098FB4;
	case 78:
		goto loc_82098FB4;
	case 79:
		goto loc_82098FB4;
	case 80:
		goto loc_82098FB4;
	case 81:
		goto loc_82098FB4;
	case 82:
		goto loc_82098FB4;
	case 83:
		goto loc_82098FB4;
	case 84:
		goto loc_82098FB4;
	case 85:
		goto loc_82098FB4;
	case 86:
		goto loc_82098FB4;
	case 87:
		goto loc_82098FB4;
	case 88:
		goto loc_82098FB4;
	case 89:
		goto loc_82098FB4;
	case 90:
		goto loc_82098FB4;
	case 91:
		goto loc_82098FB4;
	case 92:
		goto loc_82098FB4;
	case 93:
		goto loc_82098FB4;
	case 94:
		goto loc_82098FB4;
	case 95:
		goto loc_82098FB4;
	case 96:
		goto loc_82098FB4;
	case 97:
		goto loc_82098FB4;
	case 98:
		goto loc_82098FB4;
	case 99:
		goto loc_82098FB4;
	case 100:
		goto loc_82098FB4;
	case 101:
		goto loc_82098FB4;
	case 102:
		goto loc_82098FB4;
	case 103:
		goto loc_82098FB4;
	case 104:
		goto loc_82098FB4;
	case 105:
		goto loc_82098FB4;
	case 106:
		goto loc_82098FB4;
	case 107:
		goto loc_82098FB4;
	case 108:
		goto loc_82098FB4;
	case 109:
		goto loc_82098FB4;
	case 110:
		goto loc_82098FB4;
	case 111:
		goto loc_82098FB4;
	case 112:
		goto loc_82098FB4;
	case 113:
		goto loc_82098FB4;
	case 114:
		goto loc_82098FB4;
	case 115:
		goto loc_82098FB4;
	case 116:
		goto loc_82098FB4;
	case 117:
		goto loc_82098FB4;
	case 118:
		goto loc_82098FB4;
	case 119:
		goto loc_82098FB4;
	case 120:
		goto loc_82098FB4;
	case 121:
		goto loc_82098FB4;
	case 122:
		goto loc_82098DE8;
	case 123:
		goto loc_82098ED0;
	case 124:
		goto loc_82098FB4;
	case 125:
		goto loc_82098FB4;
	case 126:
		goto loc_82098F54;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-29380(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29380);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28876(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28876);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-29208(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29208);
	// lwz r16,-28976(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28976);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28748);
	// lwz r16,-28844(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
loc_82098D3C:
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x82098dd0
	if (!ctx.cr6.eq) goto loc_82098DD0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098d84
	if (ctx.cr6.eq) goto loc_82098D84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x82098D5C;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098d84
	if (ctx.cr6.eq) goto loc_82098D84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098D84:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_82098DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098DD0:
	// li r11,122
	ctx.r11.s64 = 122;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098DE8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// ld r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// lwz r30,3840(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82098e98
	if (ctx.cr6.eq) goto loc_82098E98;
	// bl 0x825aeb48
	ctx.lr = 0x82098E08;
	sub_825AEB48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82098e98
	if (ctx.cr6.eq) goto loc_82098E98;
	// addi r8,r30,828
	ctx.r8.s64 = ctx.r30.s64 + 828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82098E24:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82098e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098E24;
	// addi r7,r30,796
	ctx.r7.s64 = ctx.r30.s64 + 796;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rldicr r6,r29,12,51
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 12) & 0xFFFFFFFFFFFFF000;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82098e54
	if (ctx.cr6.eq) goto loc_82098E54;
	// li r5,512
	ctx.r5.s64 = 512;
loc_82098E54:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82098e64
	if (ctx.cr6.eq) goto loc_82098E64;
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
loc_82098E64:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825af690
	ctx.lr = 0x82098E70;
	sub_825AF690(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82098eb8
	if (ctx.cr6.eq) goto loc_82098EB8;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098E98:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098EB8:
	// li r11,123
	ctx.r11.s64 = 123;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098ED0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82097140
	ctx.lr = 0x82098EDC;
	sub_82097140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82098dac
	if (ctx.cr6.eq) goto loc_82098DAC;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// beq cr6,0x82098f14
	if (ctx.cr6.eq) goto loc_82098F14;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x82098fb4
	if (ctx.cr6.eq) goto loc_82098FB4;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098F14:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098F34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82098F54:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82098f9c
	if (ctx.cr6.eq) goto loc_82098F9C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82098F78:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82098f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098F78;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82098F9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82098FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098FB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82098FBC"))) PPC_WEAK_FUNC(sub_82098FBC);
PPC_FUNC_IMPL(__imp__sub_82098FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098FC0"))) PPC_WEAK_FUNC(sub_82098FC0);
PPC_FUNC_IMPL(__imp__sub_82098FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82098FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3344
	ctx.r31.s64 = ctx.r11.s64 + 3344;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82099150
	if (!ctx.cr6.eq) goto loc_82099150;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82099008
	if (!ctx.cr6.eq) goto loc_82099008;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82099008:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x825af1c8
	ctx.lr = 0x82099024;
	sub_825AF1C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82099040
	if (ctx.cr6.eq) goto loc_82099040;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82099058
	if (!ctx.cr6.eq) goto loc_82099058;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82099058
	goto loc_82099058;
loc_82099040:
	// bl 0x825af6c0
	ctx.lr = 0x82099044;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// beq cr6,0x82099054
	if (ctx.cr6.eq) goto loc_82099054;
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// bne cr6,0x82099058
	if (!ctx.cr6.eq) goto loc_82099058;
loc_82099054:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82099058:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// bgt cr6,0x820990e8
	if (ctx.cr6.gt) goto loc_820990E8;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-28544
	ctx.r12.s64 = ctx.r12.s64 + -28544;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_820990AC;
	case 1:
		goto loc_820990E8;
	case 2:
		goto loc_820990B8;
	case 3:
		goto loc_820990D8;
	case 4:
		goto loc_820990E8;
	case 5:
		goto loc_820990E8;
	case 6:
		goto loc_820990D0;
	case 7:
		goto loc_820990C8;
	case 8:
		goto loc_820990E8;
	case 9:
		goto loc_820990C0;
	case 10:
		goto loc_820990E0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-28500(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28500);
	// lwz r16,-28440(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28440);
	// lwz r16,-28488(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28488);
	// lwz r16,-28456(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28456);
	// lwz r16,-28440(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28440);
	// lwz r16,-28440(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28440);
	// lwz r16,-28464(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28464);
	// lwz r16,-28472(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28472);
	// lwz r16,-28440(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28440);
	// lwz r16,-28480(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28480);
	// lwz r16,-28448(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28448);
loc_820990AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// b 0x820990ec
	goto loc_820990EC;
loc_820990B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820990ec
	goto loc_820990EC;
loc_820990C0:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x820990ec
	goto loc_820990EC;
loc_820990C8:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x820990ec
	goto loc_820990EC;
loc_820990D0:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x820990ec
	goto loc_820990EC;
loc_820990D8:
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x820990ec
	goto loc_820990EC;
loc_820990E0:
	// li r10,19
	ctx.r10.s64 = 19;
	// b 0x820990ec
	goto loc_820990EC;
loc_820990E8:
	// li r10,23
	ctx.r10.s64 = 23;
loc_820990EC:
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82099138
	if (ctx.cr6.eq) goto loc_82099138;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r8,39
	ctx.r8.s64 = 39;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82099114:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82099114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099114;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
loc_82099138:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82099150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82099150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82099158"))) PPC_WEAK_FUNC(sub_82099158);
PPC_FUNC_IMPL(__imp__sub_82099158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82099160;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3460
	ctx.r31.s64 = ctx.r11.s64 + 3460;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820992fc
	if (!ctx.cr6.eq) goto loc_820992FC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x820991a0
	if (!ctx.cr6.eq) goto loc_820991A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820991A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x825af500
	ctx.lr = 0x820991BC;
	sub_825AF500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820991e8
	if (ctx.cr6.eq) goto loc_820991E8;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820991e0
	if (ctx.cr6.eq) goto loc_820991E0;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820991e0
	if (!ctx.cr6.eq) goto loc_820991E0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82099204
	goto loc_82099204;
loc_820991E0:
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82099204
	goto loc_82099204;
loc_820991E8:
	// bl 0x825af6c0
	ctx.lr = 0x820991EC;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// beq cr6,0x820991fc
	if (ctx.cr6.eq) goto loc_820991FC;
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// bne cr6,0x82099200
	if (!ctx.cr6.eq) goto loc_82099200;
loc_820991FC:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82099200:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82099204:
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// bgt cr6,0x82099294
	if (ctx.cr6.gt) goto loc_82099294;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-28120
	ctx.r12.s64 = ctx.r12.s64 + -28120;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82099254;
	case 1:
		goto loc_82099294;
	case 2:
		goto loc_82099264;
	case 3:
		goto loc_82099284;
	case 4:
		goto loc_82099294;
	case 5:
		goto loc_82099294;
	case 6:
		goto loc_8209927C;
	case 7:
		goto loc_82099274;
	case 8:
		goto loc_82099294;
	case 9:
		goto loc_8209926C;
	case 10:
		goto loc_8209928C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-28076(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28076);
	// lwz r16,-28012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28012);
	// lwz r16,-28060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28060);
	// lwz r16,-28028(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28028);
	// lwz r16,-28012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28012);
	// lwz r16,-28012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28012);
	// lwz r16,-28036(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28036);
	// lwz r16,-28044(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28044);
	// lwz r16,-28012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28012);
	// lwz r16,-28052(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28052);
	// lwz r16,-28020(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28020);
loc_82099254:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82099298
	goto loc_82099298;
loc_82099264:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82099298
	goto loc_82099298;
loc_8209926C:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x82099298
	goto loc_82099298;
loc_82099274:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82099298
	goto loc_82099298;
loc_8209927C:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82099298
	goto loc_82099298;
loc_82099284:
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x82099298
	goto loc_82099298;
loc_8209928C:
	// li r10,19
	ctx.r10.s64 = 19;
	// b 0x82099298
	goto loc_82099298;
loc_82099294:
	// li r10,23
	ctx.r10.s64 = 23;
loc_82099298:
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820992e4
	if (ctx.cr6.eq) goto loc_820992E4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r8,39
	ctx.r8.s64 = 39;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820992C0:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x820992c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820992C0;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r6,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r6.u32);
loc_820992E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820992FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820992FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82099304"))) PPC_WEAK_FUNC(sub_82099304);
PPC_FUNC_IMPL(__imp__sub_82099304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82099308"))) PPC_WEAK_FUNC(sub_82099308);
PPC_FUNC_IMPL(__imp__sub_82099308) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3404
	ctx.r31.s64 = ctx.r11.s64 + 3404;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82099400
	if (!ctx.cr6.eq) goto loc_82099400;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82099358
	if (ctx.cr6.lt) goto loc_82099358;
	// beq cr6,0x82099350
	if (ctx.cr6.eq) goto loc_82099350;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8209935c
	if (!ctx.cr6.lt) goto loc_8209935C;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x8209935c
	goto loc_8209935C;
loc_82099350:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8209935c
	goto loc_8209935C;
loc_82099358:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8209935C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82099370
	if (!ctx.cr6.eq) goto loc_82099370;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82099370:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825afbb8
	ctx.lr = 0x82099380;
	sub_825AFBB8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82099394
	if (!ctx.cr6.eq) goto loc_82099394;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8209939c
	goto loc_8209939C;
loc_82099394:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,23
	ctx.r6.s64 = 23;
loc_8209939C:
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820993e8
	if (ctx.cr6.eq) goto loc_820993E8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820993C8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820993c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820993C8;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r3,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
loc_820993E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82099400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82099400:
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

__attribute__((alias("__imp__sub_82099414"))) PPC_WEAK_FUNC(sub_82099414);
PPC_FUNC_IMPL(__imp__sub_82099414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82099418"))) PPC_WEAK_FUNC(sub_82099418);
PPC_FUNC_IMPL(__imp__sub_82099418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82099420;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r30,r11,3520
	ctx.r30.s64 = ctx.r11.s64 + 3520;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209991c
	if (ctx.cr6.gt) goto loc_8209991C;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-27564
	ctx.r12.s64 = ctx.r12.s64 + -27564;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82099650;
	case 1:
		goto loc_8209991C;
	case 2:
		goto loc_8209991C;
	case 3:
		goto loc_8209991C;
	case 4:
		goto loc_8209991C;
	case 5:
		goto loc_8209991C;
	case 6:
		goto loc_8209991C;
	case 7:
		goto loc_8209991C;
	case 8:
		goto loc_8209991C;
	case 9:
		goto loc_8209991C;
	case 10:
		goto loc_82099660;
	case 11:
		goto loc_82099804;
	case 12:
		goto loc_8209991C;
	case 13:
		goto loc_8209991C;
	case 14:
		goto loc_8209991C;
	case 15:
		goto loc_8209991C;
	case 16:
		goto loc_8209991C;
	case 17:
		goto loc_8209991C;
	case 18:
		goto loc_8209991C;
	case 19:
		goto loc_8209991C;
	case 20:
		goto loc_8209991C;
	case 21:
		goto loc_8209991C;
	case 22:
		goto loc_8209991C;
	case 23:
		goto loc_8209991C;
	case 24:
		goto loc_8209991C;
	case 25:
		goto loc_8209991C;
	case 26:
		goto loc_8209991C;
	case 27:
		goto loc_8209991C;
	case 28:
		goto loc_8209991C;
	case 29:
		goto loc_8209991C;
	case 30:
		goto loc_8209991C;
	case 31:
		goto loc_8209991C;
	case 32:
		goto loc_8209991C;
	case 33:
		goto loc_8209991C;
	case 34:
		goto loc_8209991C;
	case 35:
		goto loc_8209991C;
	case 36:
		goto loc_8209991C;
	case 37:
		goto loc_8209991C;
	case 38:
		goto loc_8209991C;
	case 39:
		goto loc_8209991C;
	case 40:
		goto loc_8209991C;
	case 41:
		goto loc_8209991C;
	case 42:
		goto loc_8209991C;
	case 43:
		goto loc_8209991C;
	case 44:
		goto loc_8209991C;
	case 45:
		goto loc_8209991C;
	case 46:
		goto loc_8209991C;
	case 47:
		goto loc_8209991C;
	case 48:
		goto loc_8209991C;
	case 49:
		goto loc_8209991C;
	case 50:
		goto loc_8209991C;
	case 51:
		goto loc_8209991C;
	case 52:
		goto loc_8209991C;
	case 53:
		goto loc_8209991C;
	case 54:
		goto loc_8209991C;
	case 55:
		goto loc_8209991C;
	case 56:
		goto loc_8209991C;
	case 57:
		goto loc_8209991C;
	case 58:
		goto loc_8209991C;
	case 59:
		goto loc_8209991C;
	case 60:
		goto loc_8209991C;
	case 61:
		goto loc_8209991C;
	case 62:
		goto loc_8209991C;
	case 63:
		goto loc_8209991C;
	case 64:
		goto loc_8209991C;
	case 65:
		goto loc_8209991C;
	case 66:
		goto loc_8209991C;
	case 67:
		goto loc_8209991C;
	case 68:
		goto loc_8209991C;
	case 69:
		goto loc_8209991C;
	case 70:
		goto loc_8209991C;
	case 71:
		goto loc_8209991C;
	case 72:
		goto loc_8209991C;
	case 73:
		goto loc_8209991C;
	case 74:
		goto loc_8209991C;
	case 75:
		goto loc_8209991C;
	case 76:
		goto loc_8209991C;
	case 77:
		goto loc_8209991C;
	case 78:
		goto loc_8209991C;
	case 79:
		goto loc_8209991C;
	case 80:
		goto loc_8209991C;
	case 81:
		goto loc_8209991C;
	case 82:
		goto loc_8209991C;
	case 83:
		goto loc_8209991C;
	case 84:
		goto loc_8209991C;
	case 85:
		goto loc_8209991C;
	case 86:
		goto loc_8209991C;
	case 87:
		goto loc_8209991C;
	case 88:
		goto loc_8209991C;
	case 89:
		goto loc_8209991C;
	case 90:
		goto loc_8209991C;
	case 91:
		goto loc_8209991C;
	case 92:
		goto loc_8209991C;
	case 93:
		goto loc_8209991C;
	case 94:
		goto loc_8209991C;
	case 95:
		goto loc_8209991C;
	case 96:
		goto loc_8209991C;
	case 97:
		goto loc_8209991C;
	case 98:
		goto loc_8209991C;
	case 99:
		goto loc_8209991C;
	case 100:
		goto loc_8209991C;
	case 101:
		goto loc_8209991C;
	case 102:
		goto loc_8209991C;
	case 103:
		goto loc_8209991C;
	case 104:
		goto loc_8209991C;
	case 105:
		goto loc_8209991C;
	case 106:
		goto loc_8209991C;
	case 107:
		goto loc_8209991C;
	case 108:
		goto loc_8209991C;
	case 109:
		goto loc_8209991C;
	case 110:
		goto loc_8209991C;
	case 111:
		goto loc_8209991C;
	case 112:
		goto loc_8209991C;
	case 113:
		goto loc_8209991C;
	case 114:
		goto loc_8209991C;
	case 115:
		goto loc_8209991C;
	case 116:
		goto loc_8209991C;
	case 117:
		goto loc_8209991C;
	case 118:
		goto loc_8209991C;
	case 119:
		goto loc_8209991C;
	case 120:
		goto loc_8209991C;
	case 121:
		goto loc_8209991C;
	case 122:
		goto loc_8209991C;
	case 123:
		goto loc_8209991C;
	case 124:
		goto loc_8209991C;
	case 125:
		goto loc_8209991C;
	case 126:
		goto loc_82099894;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-27056(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27056);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-27040(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27040);
	// lwz r16,-26620(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26620);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26340);
	// lwz r16,-26476(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26476);
loc_82099650:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82099660:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// lwz r3,3840(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3840);
	// bl 0x82096f50
	ctx.lr = 0x82099678;
	sub_82096F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// bne cr6,0x820997f0
	if (!ctx.cr6.eq) goto loc_820997F0;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82099688:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// std r27,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r27.u64);
	// std r27,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r27.u64);
	// std r27,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r27.u64);
	// bl 0x82090850
	ctx.lr = 0x820996BC;
	sub_82090850(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x82090850
	ctx.lr = 0x820996C8;
	sub_82090850(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820909e0
	ctx.lr = 0x820996D4;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82099760
	if (!ctx.cr6.eq) goto loc_82099760;
	// lwz r31,3840(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3840);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,496
	ctx.r29.s64 = ctx.r31.s64 + 496;
	// li r28,12
	ctx.r28.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d300
	ctx.lr = 0x820996F8;
	sub_8259D300(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r31,488
	ctx.r4.s64 = ctx.r31.s64 + 488;
	// bl 0x825ae950
	ctx.lr = 0x82099710;
	sub_825AE950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82099728
	if (!ctx.cr6.eq) goto loc_82099728;
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x82099740
	goto loc_82099740;
loc_82099728:
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// bl 0x825aed30
	ctx.lr = 0x82099730;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209973c
	if (!ctx.cr6.eq) goto loc_8209973C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8209973C:
	// stw r25,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r25.u32);
loc_82099740:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// beq cr6,0x82099688
	if (ctx.cr6.eq) goto loc_82099688;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82099760:
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r30,116
	ctx.r6.s64 = ctx.r30.s64 + 116;
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r4,r9,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82099928
	ctx.lr = 0x82099780;
	sub_82099928(ctx, base);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x82099794
	if (!ctx.cr6.eq) goto loc_82099794;
	// li r11,126
	ctx.r11.s64 = 126;
	// b 0x820997dc
	goto loc_820997DC;
loc_82099794:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lbz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// beq cr6,0x820997d8
	if (ctx.cr6.eq) goto loc_820997D8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r9,38
	ctx.r9.s64 = 38;
	// addi r10,r11,3892
	ctx.r10.s64 = ctx.r11.s64 + 3892;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820997C4:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820997c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820997C4;
loc_820997D8:
	// li r11,11
	ctx.r11.s64 = 11;
loc_820997DC:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// beq cr6,0x8209991c
	if (ctx.cr6.eq) goto loc_8209991C;
loc_820997F0:
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82099804:
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,116
	ctx.r6.s64 = ctx.r30.s64 + 116;
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82099928
	ctx.lr = 0x82099824;
	sub_82099928(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x82099848
	if (!ctx.cr6.eq) goto loc_82099848;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82099848:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// beq cr6,0x8209991c
	if (ctx.cr6.eq) goto loc_8209991C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r9,38
	ctx.r9.s64 = 38;
	// addi r10,r11,3892
	ctx.r10.s64 = ctx.r11.s64 + 3892;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82099878:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82099878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099878;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82099894:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x820970d8
	ctx.lr = 0x820998A0;
	sub_820970D8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820998c0
	if (ctx.cr6.gt) goto loc_820998C0;
	// li r7,10
	ctx.r7.s64 = 10;
loc_820998C0:
	// stw r7,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r7.u32);
	// lbz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82099904
	if (ctx.cr6.eq) goto loc_82099904;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820998E8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820998e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820998E8;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82099904:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209991C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209991C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82099924"))) PPC_WEAK_FUNC(sub_82099924);
PPC_FUNC_IMPL(__imp__sub_82099924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82099928"))) PPC_WEAK_FUNC(sub_82099928);
PPC_FUNC_IMPL(__imp__sub_82099928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82099930;
	__savegprlr_27(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// std r3,736(r1)
	PPC_STORE_U64(ctx.r1.u32 + 736, ctx.r3.u64);
	// std r4,744(r1)
	PPC_STORE_U64(ctx.r1.u32 + 744, ctx.r4.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,1728
	ctx.r31.s64 = ctx.r11.s64 + 1728;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82099960:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82099960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099960;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8259d300
	ctx.lr = 0x8209997C;
	sub_8259D300(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209998C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209998c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209998C;
	// li r11,28
	ctx.r11.s64 = 28;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r29,r10,-16728
	ctx.r29.s64 = ctx.r10.s64 + -16728;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82099bb8
	if (ctx.cr6.eq) goto loc_82099BB8;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82099bb8
	if (ctx.cr6.eq) goto loc_82099BB8;
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a11b0
	ctx.lr = 0x820999D8;
	sub_825A11B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82099bb8
	if (ctx.cr6.eq) goto loc_82099BB8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820999F0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820999f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820999F0;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82099A24:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82099a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099A24;
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82099da4
	if (ctx.cr6.gt) goto loc_82099DA4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-26028
	ctx.r12.s64 = ctx.r12.s64 + -26028;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82099A64;
	case 1:
		goto loc_82099AA4;
	case 2:
		goto loc_82099A64;
	case 3:
		goto loc_82099A64;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-26012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26012);
	// lwz r16,-25948(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25948);
	// lwz r16,-26012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26012);
	// lwz r16,-26012(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26012);
loc_82099A64:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// beq cr6,0x82099a9c
	if (ctx.cr6.eq) goto loc_82099A9C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82099a94
	if (ctx.cr6.eq) goto loc_82099A94;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82096b70
	ctx.lr = 0x82099A90;
	sub_82096B70(ctx, base);
	// b 0x82099b58
	goto loc_82099B58;
loc_82099A94:
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82099b58
	goto loc_82099B58;
loc_82099A9C:
	// bl 0x82096e70
	ctx.lr = 0x82099AA0;
	sub_82096E70(ctx, base);
	// b 0x82099b58
	goto loc_82099B58;
loc_82099AA4:
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82099acc
	if (ctx.cr6.eq) goto loc_82099ACC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82096d80
	ctx.lr = 0x82099AC8;
	sub_82096D80(ctx, base);
	// b 0x82099b58
	goto loc_82099B58;
loc_82099ACC:
	// lwz r29,3840(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// li r28,12
	ctx.r28.s64 = 12;
	// addi r30,r29,168
	ctx.r30.s64 = ctx.r29.s64 + 168;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// bl 0x825b4088
	ctx.lr = 0x82099AE4;
	sub_825B4088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82099b44
	if (ctx.cr6.eq) goto loc_82099B44;
	// lwz r11,820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 820);
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r8,820(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 820);
	// lwz r7,488(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// stw r7,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r7.u32);
	// b 0x82099b54
	goto loc_82099B54;
loc_82099B44:
	// lwz r3,816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// bl 0x825aed30
	ctx.lr = 0x82099B4C;
	sub_825AED30(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r6,816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 816, ctx.r6.u32);
loc_82099B54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82099B58:
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82099da4
	if (!ctx.cr6.eq) goto loc_82099DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82099B80:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82099b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099B80;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82099BA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82099ba0
	if (!ctx.cr6.eq) goto loc_82099BA0;
	// b 0x82099d9c
	goto loc_82099D9C;
loc_82099BB8:
	// lwz r8,740(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82099be8
	if (!ctx.cr6.eq) goto loc_82099BE8;
loc_82099BD4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82099bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099BD4;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x82099bf8
	goto loc_82099BF8;
loc_82099BE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82099be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099BE8;
	// li r11,33
	ctx.r11.s64 = 33;
loc_82099BF8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bgt cr6,0x82099da4
	if (ctx.cr6.gt) goto loc_82099DA4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-25544
	ctx.r12.s64 = ctx.r12.s64 + -25544;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_82099C48;
	case 1:
		goto loc_82099C70;
	case 2:
		goto loc_82099C48;
	case 3:
		goto loc_82099C48;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-25528(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25528);
	// lwz r16,-25488(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25488);
	// lwz r16,-25528(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25528);
	// lwz r16,-25528(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25528);
loc_82099C48:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// beq cr6,0x82099c68
	if (ctx.cr6.eq) goto loc_82099C68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82096f50
	ctx.lr = 0x82099C64;
	sub_82096F50(ctx, base);
	// b 0x82099d64
	goto loc_82099D64;
loc_82099C68:
	// bl 0x82097048
	ctx.lr = 0x82099C6C;
	sub_82097048(ctx, base);
	// b 0x82099d64
	goto loc_82099D64;
loc_82099C70:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r30,3840(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// beq cr6,0x82099d14
	if (ctx.cr6.eq) goto loc_82099D14;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r28,12
	ctx.r28.s64 = 12;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r7,824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 824, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82099CA4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82099ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099CA4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82090850
	ctx.lr = 0x82099CBC;
	sub_82090850(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r30,860
	ctx.r5.s64 = ctx.r30.s64 + 860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8259d1b0
	ctx.lr = 0x82099CD0;
	sub_8259D1B0(ctx, base);
	// addi r29,r30,212
	ctx.r29.s64 = ctx.r30.s64 + 212;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d300
	ctx.lr = 0x82099CE4;
	sub_8259D300(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x825b3ec0
	ctx.lr = 0x82099CF0;
	sub_825B3EC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r3.u32);
	// beq cr6,0x82099d08
	if (ctx.cr6.eq) goto loc_82099D08;
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x82099d60
	goto loc_82099D60;
loc_82099D08:
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r6,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r6.u32);
	// b 0x82099d60
	goto loc_82099D60;
loc_82099D14:
	// addi r29,r30,212
	ctx.r29.s64 = ctx.r30.s64 + 212;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,12
	ctx.r28.s64 = 12;
	// bl 0x8259d300
	ctx.lr = 0x82099D2C;
	sub_8259D300(ctx, base);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// bl 0x825b4088
	ctx.lr = 0x82099D38;
	sub_825B4088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82099d50
	if (ctx.cr6.eq) goto loc_82099D50;
	// lwz r5,824(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// b 0x82099d60
	goto loc_82099D60;
loc_82099D50:
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// bl 0x825aed30
	ctx.lr = 0x82099D58;
	sub_825AED30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r4,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r4.u32);
loc_82099D60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82099D64:
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82099da4
	if (!ctx.cr6.eq) goto loc_82099DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82099D84:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82099d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099D84;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8259dbb0
	ctx.lr = 0x82099D9C;
	sub_8259DBB0(ctx, base);
loc_82099D9C:
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82099DA4:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82095f70
	ctx.lr = 0x82099DAC;
	sub_82095F70(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82099df4
	if (ctx.cr6.lt) goto loc_82099DF4;
	// beq cr6,0x82099ddc
	if (ctx.cr6.eq) goto loc_82099DDC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82099e00
	if (!ctx.cr6.lt) goto loc_82099E00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82099DDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82099DF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82099E00:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82099E08"))) PPC_WEAK_FUNC(sub_82099E08);
PPC_FUNC_IMPL(__imp__sub_82099E08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32149
	ctx.r9.s64 = -2106916864;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r31,r9,3744
	ctx.r31.s64 = ctx.r9.s64 + 3744;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r7,512
	ctx.r7.s64 = 512;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// lwz r3,3840(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3840);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x820962d0
	ctx.lr = 0x82099E70;
	sub_820962D0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// beq cr6,0x82099e98
	if (ctx.cr6.eq) goto loc_82099E98;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82099e90
	if (ctx.cr6.eq) goto loc_82099E90;
	// li r7,23
	ctx.r7.s64 = 23;
	// b 0x82099ea4
	goto loc_82099EA4;
loc_82099E90:
	// li r7,10
	ctx.r7.s64 = 10;
	// b 0x82099ea4
	goto loc_82099EA4;
loc_82099E98:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_82099EA4:
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lbz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82099ee4
	if (ctx.cr6.eq) goto loc_82099EE4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,39
	ctx.r8.s64 = 39;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82099EC8:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82099ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099EC8;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82099EE4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82099EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82099F14"))) PPC_WEAK_FUNC(sub_82099F14);
PPC_FUNC_IMPL(__imp__sub_82099F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82099F18"))) PPC_WEAK_FUNC(sub_82099F18);
PPC_FUNC_IMPL(__imp__sub_82099F18) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3860
	ctx.r31.s64 = ctx.r11.s64 + 3860;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82096a88
	ctx.lr = 0x82099F44;
	sub_82096A88(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// beq cr6,0x82099f6c
	if (ctx.cr6.eq) goto loc_82099F6C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82099f64
	if (ctx.cr6.eq) goto loc_82099F64;
	// li r6,23
	ctx.r6.s64 = 23;
	// b 0x82099f78
	goto loc_82099F78;
loc_82099F64:
	// li r6,10
	ctx.r6.s64 = 10;
	// b 0x82099f78
	goto loc_82099F78;
loc_82099F6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
loc_82099F78:
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82099fbc
	if (ctx.cr6.eq) goto loc_82099FBC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82099FA0:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82099fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099FA0;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_82099FBC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82099FD4;
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

__attribute__((alias("__imp__sub_82099FE8"))) PPC_WEAK_FUNC(sub_82099FE8);
PPC_FUNC_IMPL(__imp__sub_82099FE8) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,3976
	ctx.r31.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820962d0
	ctx.lr = 0x8209A024;
	sub_820962D0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// beq cr6,0x8209a05c
	if (ctx.cr6.eq) goto loc_8209A05C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x8209a054
	if (ctx.cr6.eq) goto loc_8209A054;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x8209a04c
	if (ctx.cr6.eq) goto loc_8209A04C;
	// li r9,23
	ctx.r9.s64 = 23;
	// b 0x8209a068
	goto loc_8209A068;
loc_8209A04C:
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x8209a068
	goto loc_8209A068;
loc_8209A054:
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x8209a068
	goto loc_8209A068;
loc_8209A05C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
loc_8209A068:
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209a0bc
	if (ctx.cr6.eq) goto loc_8209A0BC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r8,39
	ctx.r8.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8209A090:
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209a090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A090;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
loc_8209A0BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209A0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8209A0E8"))) PPC_WEAK_FUNC(sub_8209A0E8);
PPC_FUNC_IMPL(__imp__sub_8209A0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,4292
	ctx.r31.s64 = ctx.r11.s64 + 4292;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209a114
	if (!ctx.cr6.eq) goto loc_8209A114;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8209a1b8
	goto loc_8209A1B8;
loc_8209A114:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8209A11C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8209a11c
	if (!ctx.cr6.eq) goto loc_8209A11C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r31,116
	ctx.r7.s64 = ctx.r31.s64 + 116;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8209A14C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209a14c
	if (!ctx.cr6.eq) goto loc_8209A14C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,128
	ctx.r4.s64 = 128;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8209a178
	if (ctx.cr6.eq) goto loc_8209A178;
	// li r4,160
	ctx.r4.s64 = 160;
loc_8209A178:
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209a188
	if (ctx.cr6.eq) goto loc_8209A188;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
loc_8209A188:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209a198
	if (ctx.cr6.eq) goto loc_8209A198;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_8209A198:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209a1a8
	if (ctx.cr6.eq) goto loc_8209A1A8;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_8209A1A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b3fa8
	ctx.lr = 0x8209A1B0;
	sub_825B3FA8(ctx, base);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8209A1B8:
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// beq cr6,0x8209a1e0
	if (ctx.cr6.eq) goto loc_8209A1E0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8209a1d8
	if (ctx.cr6.eq) goto loc_8209A1D8;
	// li r7,23
	ctx.r7.s64 = 23;
	// b 0x8209a1ec
	goto loc_8209A1EC;
loc_8209A1D8:
	// li r7,10
	ctx.r7.s64 = 10;
	// b 0x8209a1ec
	goto loc_8209A1EC;
loc_8209A1E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
loc_8209A1EC:
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lbz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209a230
	if (ctx.cr6.eq) goto loc_8209A230;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209A214:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209a214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A214;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_8209A230:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209A248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209A25C"))) PPC_WEAK_FUNC(sub_8209A25C);
PPC_FUNC_IMPL(__imp__sub_8209A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209A260"))) PPC_WEAK_FUNC(sub_8209A260);
PPC_FUNC_IMPL(__imp__sub_8209A260) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,4140
	ctx.r31.s64 = ctx.r11.s64 + 4140;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// addi r4,r11,-16884
	ctx.r4.s64 = ctx.r11.s64 + -16884;
	// bl 0x8259cce0
	ctx.lr = 0x8209A28C;
	sub_8259CCE0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bne cr6,0x8209a2c4
	if (!ctx.cr6.eq) goto loc_8209A2C4;
	// bl 0x82096a88
	ctx.lr = 0x8209A2AC;
	sub_82096A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209a30c
	if (ctx.cr6.eq) goto loc_8209A30C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8209a314
	goto loc_8209A314;
loc_8209A2C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,116
	ctx.r6.s64 = ctx.r31.s64 + 116;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82096880
	ctx.lr = 0x8209A2DC;
	sub_82096880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209a30c
	if (ctx.cr6.eq) goto loc_8209A30C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x8209a304
	if (ctx.cr6.eq) goto loc_8209A304;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x8209a2fc
	if (ctx.cr6.eq) goto loc_8209A2FC;
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x8209a314
	goto loc_8209A314;
loc_8209A2FC:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8209a314
	goto loc_8209A314;
loc_8209A304:
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x8209a314
	goto loc_8209A314;
loc_8209A30C:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8209A314:
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209a35c
	if (ctx.cr6.eq) goto loc_8209A35C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r8,39
	ctx.r8.s64 = 39;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8209A33C:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8209a33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A33C;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8209A35C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209A374;
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

__attribute__((alias("__imp__sub_8209A38C"))) PPC_WEAK_FUNC(sub_8209A38C);
PPC_FUNC_IMPL(__imp__sub_8209A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209A390"))) PPC_WEAK_FUNC(sub_8209A390);
PPC_FUNC_IMPL(__imp__sub_8209A390) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stb r6,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r6.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// std r5,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r5.u64);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r7,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r7.u8);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209A400;
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

__attribute__((alias("__imp__sub_8209A414"))) PPC_WEAK_FUNC(sub_8209A414);
PPC_FUNC_IMPL(__imp__sub_8209A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209A418"))) PPC_WEAK_FUNC(sub_8209A418);
PPC_FUNC_IMPL(__imp__sub_8209A418) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209A44C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209a44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A44C;
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r11,-16184
	ctx.r4.s64 = ctx.r11.s64 + -16184;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82090c60
	ctx.lr = 0x8209A474;
	sub_82090C60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x820910a0
	ctx.lr = 0x8209A488;
	sub_820910A0(ctx, base);
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

__attribute__((alias("__imp__sub_8209A4A0"))) PPC_WEAK_FUNC(sub_8209A4A0);
PPC_FUNC_IMPL(__imp__sub_8209A4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8209A4A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4452);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r30,r9,4404
	ctx.r30.s64 = ctx.r9.s64 + 4404;
	// bne cr6,0x8209a4e4
	if (!ctx.cr6.eq) goto loc_8209A4E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4452, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_8209A4E4:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2260
	ctx.r31.s64 = ctx.r11.s64 + 2260;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209a9d4
	if (ctx.cr6.gt) goto loc_8209A9D4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-23280
	ctx.r12.s64 = ctx.r12.s64 + -23280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209A70C;
	case 1:
		goto loc_8209A9D4;
	case 2:
		goto loc_8209A9D4;
	case 3:
		goto loc_8209A9D4;
	case 4:
		goto loc_8209A9D4;
	case 5:
		goto loc_8209A9D4;
	case 6:
		goto loc_8209A9D4;
	case 7:
		goto loc_8209A9D4;
	case 8:
		goto loc_8209A9D4;
	case 9:
		goto loc_8209A9D4;
	case 10:
		goto loc_8209A9D4;
	case 11:
		goto loc_8209A8E0;
	case 12:
		goto loc_8209A774;
	case 13:
		goto loc_8209A7C0;
	case 14:
		goto loc_8209A9D4;
	case 15:
		goto loc_8209A9D4;
	case 16:
		goto loc_8209A9D4;
	case 17:
		goto loc_8209A9D4;
	case 18:
		goto loc_8209A9D4;
	case 19:
		goto loc_8209A9D4;
	case 20:
		goto loc_8209A9D4;
	case 21:
		goto loc_8209A9D4;
	case 22:
		goto loc_8209A9D4;
	case 23:
		goto loc_8209A9D4;
	case 24:
		goto loc_8209A9D4;
	case 25:
		goto loc_8209A9D4;
	case 26:
		goto loc_8209A9D4;
	case 27:
		goto loc_8209A9D4;
	case 28:
		goto loc_8209A9D4;
	case 29:
		goto loc_8209A9D4;
	case 30:
		goto loc_8209A9D4;
	case 31:
		goto loc_8209A9D4;
	case 32:
		goto loc_8209A9D4;
	case 33:
		goto loc_8209A9D4;
	case 34:
		goto loc_8209A9D4;
	case 35:
		goto loc_8209A9D4;
	case 36:
		goto loc_8209A9D4;
	case 37:
		goto loc_8209A9D4;
	case 38:
		goto loc_8209A9D4;
	case 39:
		goto loc_8209A9D4;
	case 40:
		goto loc_8209A9D4;
	case 41:
		goto loc_8209A9D4;
	case 42:
		goto loc_8209A9D4;
	case 43:
		goto loc_8209A9D4;
	case 44:
		goto loc_8209A9D4;
	case 45:
		goto loc_8209A9D4;
	case 46:
		goto loc_8209A9D4;
	case 47:
		goto loc_8209A9D4;
	case 48:
		goto loc_8209A9D4;
	case 49:
		goto loc_8209A9D4;
	case 50:
		goto loc_8209A9D4;
	case 51:
		goto loc_8209A9D4;
	case 52:
		goto loc_8209A9D4;
	case 53:
		goto loc_8209A9D4;
	case 54:
		goto loc_8209A9D4;
	case 55:
		goto loc_8209A9D4;
	case 56:
		goto loc_8209A9D4;
	case 57:
		goto loc_8209A9D4;
	case 58:
		goto loc_8209A9D4;
	case 59:
		goto loc_8209A9D4;
	case 60:
		goto loc_8209A9D4;
	case 61:
		goto loc_8209A9D4;
	case 62:
		goto loc_8209A9D4;
	case 63:
		goto loc_8209A9D4;
	case 64:
		goto loc_8209A9D4;
	case 65:
		goto loc_8209A9D4;
	case 66:
		goto loc_8209A9D4;
	case 67:
		goto loc_8209A9D4;
	case 68:
		goto loc_8209A9D4;
	case 69:
		goto loc_8209A9D4;
	case 70:
		goto loc_8209A9D4;
	case 71:
		goto loc_8209A9D4;
	case 72:
		goto loc_8209A9D4;
	case 73:
		goto loc_8209A9D4;
	case 74:
		goto loc_8209A9D4;
	case 75:
		goto loc_8209A9D4;
	case 76:
		goto loc_8209A9D4;
	case 77:
		goto loc_8209A9D4;
	case 78:
		goto loc_8209A9D4;
	case 79:
		goto loc_8209A9D4;
	case 80:
		goto loc_8209A9D4;
	case 81:
		goto loc_8209A9D4;
	case 82:
		goto loc_8209A9D4;
	case 83:
		goto loc_8209A9D4;
	case 84:
		goto loc_8209A9D4;
	case 85:
		goto loc_8209A9D4;
	case 86:
		goto loc_8209A9D4;
	case 87:
		goto loc_8209A9D4;
	case 88:
		goto loc_8209A9D4;
	case 89:
		goto loc_8209A9D4;
	case 90:
		goto loc_8209A9D4;
	case 91:
		goto loc_8209A9D4;
	case 92:
		goto loc_8209A9D4;
	case 93:
		goto loc_8209A9D4;
	case 94:
		goto loc_8209A9D4;
	case 95:
		goto loc_8209A9D4;
	case 96:
		goto loc_8209A9D4;
	case 97:
		goto loc_8209A9D4;
	case 98:
		goto loc_8209A9D4;
	case 99:
		goto loc_8209A9D4;
	case 100:
		goto loc_8209A9D4;
	case 101:
		goto loc_8209A9D4;
	case 102:
		goto loc_8209A9D4;
	case 103:
		goto loc_8209A9D4;
	case 104:
		goto loc_8209A9D4;
	case 105:
		goto loc_8209A9D4;
	case 106:
		goto loc_8209A9D4;
	case 107:
		goto loc_8209A9D4;
	case 108:
		goto loc_8209A9D4;
	case 109:
		goto loc_8209A9D4;
	case 110:
		goto loc_8209A9D4;
	case 111:
		goto loc_8209A9D4;
	case 112:
		goto loc_8209A9D4;
	case 113:
		goto loc_8209A9D4;
	case 114:
		goto loc_8209A9D4;
	case 115:
		goto loc_8209A9D4;
	case 116:
		goto loc_8209A9D4;
	case 117:
		goto loc_8209A9D4;
	case 118:
		goto loc_8209A9D4;
	case 119:
		goto loc_8209A9D4;
	case 120:
		goto loc_8209A9D4;
	case 121:
		goto loc_8209A9D4;
	case 122:
		goto loc_8209A9D4;
	case 123:
		goto loc_8209A9D4;
	case 124:
		goto loc_8209A908;
	case 125:
		goto loc_8209A9D4;
	case 126:
		goto loc_8209A970;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-22772(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22772);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22304(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22304);
	// lwz r16,-22668(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22668);
	// lwz r16,-22592(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22592);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22264(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22264);
	// lwz r16,-22060(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22060);
	// lwz r16,-22160(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22160);
loc_8209A70C:
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r4,r11,4396
	ctx.r4.s64 = ctx.r11.s64 + 4396;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r3,3840(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3840);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r3,864
	ctx.r8.s64 = ctx.r3.s64 + 864;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// bl 0x82096f50
	ctx.lr = 0x8209A744;
	sub_82096F50(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209a760
	if (!ctx.cr6.eq) goto loc_8209A760;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8209A760:
	// li r11,124
	ctx.r11.s64 = 124;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8209A774:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,4364
	ctx.r30.s64 = ctx.r11.s64 + 4364;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4396);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r29,r11,3892
	ctx.r29.s64 = ctx.r11.s64 + 3892;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82090850
	ctx.lr = 0x8209A79C;
	sub_82090850(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r30.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8209A7C0:
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r26,r10,3892
	ctx.r26.s64 = ctx.r10.s64 + 3892;
	// lwz r11,3844(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3844);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8209a80c
	if (ctx.cr6.eq) goto loc_8209A80C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8209a7e8
	if (!ctx.cr6.eq) goto loc_8209A7E8;
loc_8209A7E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r11.u32);
loc_8209A7E8:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r28,3844(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3844, ctx.r28.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8209A80C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r29,r11,4364
	ctx.r29.s64 = ctx.r11.s64 + 4364;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4396);
	// bl 0x82090850
	ctx.lr = 0x8209A824;
	sub_82090850(ctx, base);
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// lwz r3,3840(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3840);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8209a7e0
	if (ctx.cr6.eq) goto loc_8209A7E0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82096b70
	ctx.lr = 0x8209A844;
	sub_82096B70(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209a7e0
	if (!ctx.cr6.eq) goto loc_8209A7E0;
	// lwz r3,3840(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3840);
	// bl 0x82096e70
	ctx.lr = 0x8209A854;
	sub_82096E70(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,56
	ctx.r10.s64 = 56;
	// addi r6,r11,4095
	ctx.r6.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r6,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFFFF;
	// cmplwi cr6,r11,168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 168, ctx.xer);
	// ble cr6,0x8209a88c
	if (!ctx.cr6.gt) goto loc_8209A88C;
	// rlwinm r10,r11,2,10,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lis r5,-16192
	ctx.r5.s64 = -1061158912;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// ori r4,r5,49345
	ctx.r4.u64 = ctx.r5.u64 | 49345;
	// mulhwu r10,r3,r4
	ctx.r10.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r4.u32)) >> 32;
	// rlwinm r10,r10,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_8209A88C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r7,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// addi r6,r11,4095
	ctx.r6.s64 = ctx.r11.s64 + 4095;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-15904(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15904);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8209a7e8
	goto loc_8209A7E8;
loc_8209A8E0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82097048
	ctx.lr = 0x8209A8EC;
	sub_82097048(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209a760
	if (!ctx.cr6.eq) goto loc_8209A760;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8209A908:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8209a920
	if (!ctx.cr6.gt) goto loc_8209A920;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8209a924
	goto loc_8209A924;
loc_8209A920:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8209A924:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r11,3680
	ctx.r3.s64 = ctx.r11.s64 + 3680;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8209a390
	ctx.lr = 0x8209A968;
	sub_8209A390(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8209A970:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209A988:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209a988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A988;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,-32044
	ctx.r8.s64 = -2100035584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// stw r28,3844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3844, ctx.r28.u32);
	// addi r10,r10,3680
	ctx.r10.s64 = ctx.r10.s64 + 3680;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209A9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209A9D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209A9DC"))) PPC_WEAK_FUNC(sub_8209A9DC);
PPC_FUNC_IMPL(__imp__sub_8209A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209A9E0"))) PPC_WEAK_FUNC(sub_8209A9E0);
PPC_FUNC_IMPL(__imp__sub_8209A9E0) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2360
	ctx.r31.s64 = ctx.r11.s64 + 2360;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209aa20
	if (ctx.cr6.eq) goto loc_8209AA20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x8209AA14;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x8209aa24
	if (ctx.cr6.eq) goto loc_8209AA24;
loc_8209AA20:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8209AA24:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209AA40:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209aa40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209AA40;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// addi r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209AA98;
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

__attribute__((alias("__imp__sub_8209AAAC"))) PPC_WEAK_FUNC(sub_8209AAAC);
PPC_FUNC_IMPL(__imp__sub_8209AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209AAB0"))) PPC_WEAK_FUNC(sub_8209AAB0);
PPC_FUNC_IMPL(__imp__sub_8209AAB0) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,2412
	ctx.r31.s64 = ctx.r11.s64 + 2412;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209ab78
	if (!ctx.cr6.eq) goto loc_8209AB78;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// bl 0x825c6b9c
	ctx.lr = 0x8209AAF0;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ab40
	if (ctx.cr6.eq) goto loc_8209AB40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8209ab40
	if (!ctx.cr6.eq) goto loc_8209AB40;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209AB1C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209ab1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209AB1C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8209abdc
	goto loc_8209ABDC;
loc_8209AB40:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209AB58:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209ab58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209AB58;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8209abdc
	goto loc_8209ABDC;
loc_8209AB78:
	// bl 0x825af1b0
	ctx.lr = 0x8209AB7C;
	sub_825AF1B0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x8209abbc
	if (!ctx.cr6.eq) goto loc_8209ABBC;
loc_8209AB9C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209ab9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209AB9C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8209abdc
	goto loc_8209ABDC;
loc_8209ABBC:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209abbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209ABBC;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8209ABDC:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209AC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8209AC20"))) PPC_WEAK_FUNC(sub_8209AC20);
PPC_FUNC_IMPL(__imp__sub_8209AC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209AC28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,3850(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3850);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,3876
	ctx.r30.s64 = ctx.r11.s64 + 3876;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// beq cr6,0x8209ac7c
	if (ctx.cr6.eq) goto loc_8209AC7C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209ac6c
	if (ctx.cr6.eq) goto loc_8209AC6C;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8209aea4
	if (!ctx.cr6.lt) goto loc_8209AEA4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8209AC6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209AC70:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209b49c
	if (ctx.cr6.eq) goto loc_8209B49C;
loc_8209AC7C:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2644
	ctx.r31.s64 = ctx.r11.s64 + 2644;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209b49c
	if (ctx.cr6.gt) goto loc_8209B49C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-21336
	ctx.r12.s64 = ctx.r12.s64 + -21336;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209AEAC;
	case 1:
		goto loc_8209B49C;
	case 2:
		goto loc_8209B49C;
	case 3:
		goto loc_8209B208;
	case 4:
		goto loc_8209B350;
	case 5:
		goto loc_8209B49C;
	case 6:
		goto loc_8209B49C;
	case 7:
		goto loc_8209B49C;
	case 8:
		goto loc_8209B49C;
	case 9:
		goto loc_8209B49C;
	case 10:
		goto loc_8209B49C;
	case 11:
		goto loc_8209B49C;
	case 12:
		goto loc_8209B49C;
	case 13:
		goto loc_8209B49C;
	case 14:
		goto loc_8209B49C;
	case 15:
		goto loc_8209B49C;
	case 16:
		goto loc_8209B49C;
	case 17:
		goto loc_8209B49C;
	case 18:
		goto loc_8209B49C;
	case 19:
		goto loc_8209B49C;
	case 20:
		goto loc_8209B49C;
	case 21:
		goto loc_8209B49C;
	case 22:
		goto loc_8209B49C;
	case 23:
		goto loc_8209B49C;
	case 24:
		goto loc_8209B49C;
	case 25:
		goto loc_8209B49C;
	case 26:
		goto loc_8209B49C;
	case 27:
		goto loc_8209B49C;
	case 28:
		goto loc_8209B49C;
	case 29:
		goto loc_8209B49C;
	case 30:
		goto loc_8209B49C;
	case 31:
		goto loc_8209B49C;
	case 32:
		goto loc_8209B49C;
	case 33:
		goto loc_8209B49C;
	case 34:
		goto loc_8209B49C;
	case 35:
		goto loc_8209B49C;
	case 36:
		goto loc_8209AEDC;
	case 37:
		goto loc_8209B49C;
	case 38:
		goto loc_8209B49C;
	case 39:
		goto loc_8209B49C;
	case 40:
		goto loc_8209B49C;
	case 41:
		goto loc_8209B49C;
	case 42:
		goto loc_8209B49C;
	case 43:
		goto loc_8209B49C;
	case 44:
		goto loc_8209B49C;
	case 45:
		goto loc_8209B49C;
	case 46:
		goto loc_8209B49C;
	case 47:
		goto loc_8209B49C;
	case 48:
		goto loc_8209B49C;
	case 49:
		goto loc_8209B49C;
	case 50:
		goto loc_8209B49C;
	case 51:
		goto loc_8209B49C;
	case 52:
		goto loc_8209B49C;
	case 53:
		goto loc_8209B49C;
	case 54:
		goto loc_8209B49C;
	case 55:
		goto loc_8209B49C;
	case 56:
		goto loc_8209B49C;
	case 57:
		goto loc_8209B49C;
	case 58:
		goto loc_8209B49C;
	case 59:
		goto loc_8209B49C;
	case 60:
		goto loc_8209B49C;
	case 61:
		goto loc_8209B49C;
	case 62:
		goto loc_8209B49C;
	case 63:
		goto loc_8209B49C;
	case 64:
		goto loc_8209B49C;
	case 65:
		goto loc_8209B49C;
	case 66:
		goto loc_8209B49C;
	case 67:
		goto loc_8209B49C;
	case 68:
		goto loc_8209B49C;
	case 69:
		goto loc_8209B49C;
	case 70:
		goto loc_8209B49C;
	case 71:
		goto loc_8209B49C;
	case 72:
		goto loc_8209B49C;
	case 73:
		goto loc_8209B49C;
	case 74:
		goto loc_8209B104;
	case 75:
		goto loc_8209B49C;
	case 76:
		goto loc_8209B49C;
	case 77:
		goto loc_8209B49C;
	case 78:
		goto loc_8209B49C;
	case 79:
		goto loc_8209AF8C;
	case 80:
		goto loc_8209B49C;
	case 81:
		goto loc_8209B49C;
	case 82:
		goto loc_8209B49C;
	case 83:
		goto loc_8209B49C;
	case 84:
		goto loc_8209B49C;
	case 85:
		goto loc_8209B49C;
	case 86:
		goto loc_8209B49C;
	case 87:
		goto loc_8209B49C;
	case 88:
		goto loc_8209B49C;
	case 89:
		goto loc_8209B49C;
	case 90:
		goto loc_8209B49C;
	case 91:
		goto loc_8209B49C;
	case 92:
		goto loc_8209B49C;
	case 93:
		goto loc_8209B49C;
	case 94:
		goto loc_8209B49C;
	case 95:
		goto loc_8209B49C;
	case 96:
		goto loc_8209B49C;
	case 97:
		goto loc_8209B49C;
	case 98:
		goto loc_8209B49C;
	case 99:
		goto loc_8209B49C;
	case 100:
		goto loc_8209B49C;
	case 101:
		goto loc_8209B49C;
	case 102:
		goto loc_8209B49C;
	case 103:
		goto loc_8209B49C;
	case 104:
		goto loc_8209B49C;
	case 105:
		goto loc_8209B49C;
	case 106:
		goto loc_8209B49C;
	case 107:
		goto loc_8209B49C;
	case 108:
		goto loc_8209B49C;
	case 109:
		goto loc_8209B49C;
	case 110:
		goto loc_8209B49C;
	case 111:
		goto loc_8209B49C;
	case 112:
		goto loc_8209B49C;
	case 113:
		goto loc_8209B49C;
	case 114:
		goto loc_8209B49C;
	case 115:
		goto loc_8209B49C;
	case 116:
		goto loc_8209B49C;
	case 117:
		goto loc_8209B49C;
	case 118:
		goto loc_8209B49C;
	case 119:
		goto loc_8209B49C;
	case 120:
		goto loc_8209B49C;
	case 121:
		goto loc_8209B49C;
	case 122:
		goto loc_8209B49C;
	case 123:
		goto loc_8209B49C;
	case 124:
		goto loc_8209B49C;
	case 125:
		goto loc_8209B49C;
	case 126:
		goto loc_8209B41C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-20820(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20820);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19960(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19960);
	// lwz r16,-19632(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19632);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-20772(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20772);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-20220(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20220);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-20596(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20596);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19300(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19300);
	// lwz r16,-19428(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19428);
loc_8209AEA4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8209ac70
	goto loc_8209AC70;
loc_8209AEAC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209AEDC:
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82096f50
	ctx.lr = 0x8209AF00;
	sub_82096F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8209af3c
	if (!ctx.cr6.eq) goto loc_8209AF3C;
loc_8209AF0C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r5,42
	ctx.r5.s64 = 42;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a11f8
	ctx.lr = 0x8209AF20;
	sub_825A11F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209af3c
	if (ctx.cr6.eq) goto loc_8209AF3C;
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// bl 0x82097048
	ctx.lr = 0x8209AF30;
	sub_82097048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x8209af0c
	if (ctx.cr6.eq) goto loc_8209AF0C;
loc_8209AF3C:
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// bl 0x820970d8
	ctx.lr = 0x8209AF44;
	sub_820970D8(ctx, base);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8209af64
	if (!ctx.cr6.eq) goto loc_8209AF64;
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209AF64:
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// bne cr6,0x8209b0a4
	if (!ctx.cr6.eq) goto loc_8209B0A4;
loc_8209AF6C:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209AF8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b0c4
	if (ctx.cr6.eq) goto loc_8209B0C4;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x820962d0
	ctx.lr = 0x8209AFBC;
	sub_820962D0(ctx, base);
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x8209b18c
	if (ctx.cr6.gt) goto loc_8209B18C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-20516
	ctx.r12.s64 = ctx.r12.s64 + -20516;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8209B014;
	case 1:
		goto loc_8209B18C;
	case 2:
		goto loc_8209B074;
	case 3:
		goto loc_8209B18C;
	case 4:
		goto loc_8209B18C;
	case 5:
		goto loc_8209B18C;
	case 6:
		goto loc_8209B18C;
	case 7:
		goto loc_8209B18C;
	case 8:
		goto loc_8209B3B8;
	case 9:
		goto loc_8209B094;
	case 10:
		goto loc_8209B18C;
	case 11:
		goto loc_8209B18C;
	case 12:
		goto loc_8209B18C;
	case 13:
		goto loc_8209AF6C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-20460(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20460);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20364(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20364);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-19528(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19528);
	// lwz r16,-20332(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20332);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20084(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20084);
	// lwz r16,-20628(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20628);
loc_8209B014:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209B02C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209b02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B02C;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B074:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B094:
	// lbz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// li r11,13
	ctx.r11.s64 = 13;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8209b0a8
	if (!ctx.cr6.eq) goto loc_8209B0A8;
loc_8209B0A4:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8209B0A8:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B0C4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82091018
	ctx.lr = 0x8209B0DC;
	sub_82091018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B104:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b1c4
	if (ctx.cr6.eq) goto loc_8209B1C4;
	// cmpwi cr6,r11,75
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 75, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r30,r11,3460
	ctx.r30.s64 = ctx.r11.s64 + 3460;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209b148
	if (!ctx.cr6.eq) goto loc_8209B148;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8209b158
	goto loc_8209B158;
loc_8209B148:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,3844(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
loc_8209B158:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82096788
	ctx.lr = 0x8209B168;
	sub_82096788(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209b49c
	if (ctx.cr6.eq) goto loc_8209B49C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209b1ac
	if (ctx.cr6.eq) goto loc_8209B1AC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8209b074
	if (ctx.cr6.eq) goto loc_8209B074;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x8209af6c
	if (ctx.cr6.eq) goto loc_8209AF6C;
loc_8209B18C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B1AC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B1C4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r10,r11,3892
	ctx.r10.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209B1DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209b1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B1DC;
	// li r11,29
	ctx.r11.s64 = 29;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r28,3844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B208:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209b224
	if (ctx.cr6.eq) goto loc_8209B224;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8209b228
	if (!ctx.cr6.lt) goto loc_8209B228;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8209B224:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209B228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b49c
	if (ctx.cr6.eq) goto loc_8209B49C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b288
	if (ctx.cr6.eq) goto loc_8209B288;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209B250;
	sub_82095F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209b260
	if (!ctx.cr6.eq) goto loc_8209B260;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209B260:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,3844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B288:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209b308
	if (ctx.cr6.eq) goto loc_8209B308;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209b308
	if (ctx.cr6.eq) goto loc_8209B308;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209b2c0
	if (ctx.cr6.eq) goto loc_8209B2C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x8209B2B8;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209b304
	if (!ctx.cr6.eq) goto loc_8209B304;
loc_8209B2C0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r30,r11,3892
	ctx.r30.s64 = ctx.r11.s64 + 3892;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82091018
	ctx.lr = 0x8209B2DC;
	sub_82091018(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B304:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_8209B308:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8209b318
	if (ctx.cr6.eq) goto loc_8209B318;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8209b320
	if (!ctx.cr6.eq) goto loc_8209B320;
loc_8209B318:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209B320:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82091018
	ctx.lr = 0x8209B338;
	sub_82091018(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B350:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b3d8
	if (ctx.cr6.eq) goto loc_8209B3D8;
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r9,3844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x8209b380
	if (ctx.cr6.eq) goto loc_8209B380;
	// lwz r8,3844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x8209b49c
	if (!ctx.cr6.eq) goto loc_8209B49C;
loc_8209B380:
	// lwz r7,3844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x8209b3b0
	if (!ctx.cr6.eq) goto loc_8209B3B0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B3B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8209B3B8:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B3D8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r10,r11,3892
	ctx.r10.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209B3F0:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209b3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B3F0;
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r28,3844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B41C:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209b438
	if (ctx.cr6.eq) goto loc_8209B438;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8209b43c
	if (!ctx.cr6.lt) goto loc_8209B43C;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8209B438:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209B43C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209b49c
	if (ctx.cr6.eq) goto loc_8209B49C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209B460:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209b460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B460;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209B49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209B49C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209B4A4"))) PPC_WEAK_FUNC(sub_8209B4A4);
PPC_FUNC_IMPL(__imp__sub_8209B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B4A8"))) PPC_WEAK_FUNC(sub_8209B4A8);
PPC_FUNC_IMPL(__imp__sub_8209B4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209B4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2492
	ctx.r31.s64 = ctx.r11.s64 + 2492;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209bc38
	if (ctx.cr6.gt) goto loc_8209BC38;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-19228
	ctx.r12.s64 = ctx.r12.s64 + -19228;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209B6E0;
	case 1:
		goto loc_8209BC38;
	case 2:
		goto loc_8209BC38;
	case 3:
		goto loc_8209BC38;
	case 4:
		goto loc_8209BC38;
	case 5:
		goto loc_8209BC38;
	case 6:
		goto loc_8209BC38;
	case 7:
		goto loc_8209BC38;
	case 8:
		goto loc_8209BC38;
	case 9:
		goto loc_8209BC38;
	case 10:
		goto loc_8209BC38;
	case 11:
		goto loc_8209BC38;
	case 12:
		goto loc_8209BC38;
	case 13:
		goto loc_8209BC38;
	case 14:
		goto loc_8209BC38;
	case 15:
		goto loc_8209BC38;
	case 16:
		goto loc_8209BC38;
	case 17:
		goto loc_8209BC38;
	case 18:
		goto loc_8209BC38;
	case 19:
		goto loc_8209BC38;
	case 20:
		goto loc_8209BC38;
	case 21:
		goto loc_8209BC38;
	case 22:
		goto loc_8209BC38;
	case 23:
		goto loc_8209BC38;
	case 24:
		goto loc_8209B74C;
	case 25:
		goto loc_8209BC38;
	case 26:
		goto loc_8209BC38;
	case 27:
		goto loc_8209BC38;
	case 28:
		goto loc_8209BC38;
	case 29:
		goto loc_8209BC38;
	case 30:
		goto loc_8209B9C4;
	case 31:
		goto loc_8209BC38;
	case 32:
		goto loc_8209BC38;
	case 33:
		goto loc_8209BC38;
	case 34:
		goto loc_8209BC38;
	case 35:
		goto loc_8209BC38;
	case 36:
		goto loc_8209BA94;
	case 37:
		goto loc_8209BC38;
	case 38:
		goto loc_8209BC38;
	case 39:
		goto loc_8209BC38;
	case 40:
		goto loc_8209BC38;
	case 41:
		goto loc_8209BC38;
	case 42:
		goto loc_8209BC38;
	case 43:
		goto loc_8209BC38;
	case 44:
		goto loc_8209BC38;
	case 45:
		goto loc_8209BC38;
	case 46:
		goto loc_8209BC38;
	case 47:
		goto loc_8209BC38;
	case 48:
		goto loc_8209BC38;
	case 49:
		goto loc_8209BC38;
	case 50:
		goto loc_8209BC38;
	case 51:
		goto loc_8209BC38;
	case 52:
		goto loc_8209BC38;
	case 53:
		goto loc_8209BC38;
	case 54:
		goto loc_8209BC38;
	case 55:
		goto loc_8209BC38;
	case 56:
		goto loc_8209BC38;
	case 57:
		goto loc_8209BC38;
	case 58:
		goto loc_8209BC38;
	case 59:
		goto loc_8209BC38;
	case 60:
		goto loc_8209BB3C;
	case 61:
		goto loc_8209BB7C;
	case 62:
		goto loc_8209BC38;
	case 63:
		goto loc_8209BC38;
	case 64:
		goto loc_8209BC38;
	case 65:
		goto loc_8209BC38;
	case 66:
		goto loc_8209BC38;
	case 67:
		goto loc_8209BC38;
	case 68:
		goto loc_8209BC38;
	case 69:
		goto loc_8209BC38;
	case 70:
		goto loc_8209BC38;
	case 71:
		goto loc_8209BC38;
	case 72:
		goto loc_8209BC38;
	case 73:
		goto loc_8209BC38;
	case 74:
		goto loc_8209BC38;
	case 75:
		goto loc_8209BC38;
	case 76:
		goto loc_8209BC38;
	case 77:
		goto loc_8209BC38;
	case 78:
		goto loc_8209BC38;
	case 79:
		goto loc_8209BC38;
	case 80:
		goto loc_8209BC38;
	case 81:
		goto loc_8209BC38;
	case 82:
		goto loc_8209BC38;
	case 83:
		goto loc_8209BC38;
	case 84:
		goto loc_8209BC38;
	case 85:
		goto loc_8209BC38;
	case 86:
		goto loc_8209BC38;
	case 87:
		goto loc_8209BC38;
	case 88:
		goto loc_8209BC38;
	case 89:
		goto loc_8209BC38;
	case 90:
		goto loc_8209BC38;
	case 91:
		goto loc_8209BC38;
	case 92:
		goto loc_8209BC38;
	case 93:
		goto loc_8209BC38;
	case 94:
		goto loc_8209BC38;
	case 95:
		goto loc_8209BC38;
	case 96:
		goto loc_8209BC38;
	case 97:
		goto loc_8209BC38;
	case 98:
		goto loc_8209BC38;
	case 99:
		goto loc_8209BC38;
	case 100:
		goto loc_8209BC38;
	case 101:
		goto loc_8209BC38;
	case 102:
		goto loc_8209BC38;
	case 103:
		goto loc_8209BC38;
	case 104:
		goto loc_8209BC38;
	case 105:
		goto loc_8209BC38;
	case 106:
		goto loc_8209BC38;
	case 107:
		goto loc_8209BC38;
	case 108:
		goto loc_8209BC38;
	case 109:
		goto loc_8209BC38;
	case 110:
		goto loc_8209BC38;
	case 111:
		goto loc_8209BC38;
	case 112:
		goto loc_8209BC38;
	case 113:
		goto loc_8209BC38;
	case 114:
		goto loc_8209BC38;
	case 115:
		goto loc_8209BC38;
	case 116:
		goto loc_8209BC38;
	case 117:
		goto loc_8209BC38;
	case 118:
		goto loc_8209BC38;
	case 119:
		goto loc_8209BC38;
	case 120:
		goto loc_8209BC38;
	case 121:
		goto loc_8209BC38;
	case 122:
		goto loc_8209BC38;
	case 123:
		goto loc_8209BC38;
	case 124:
		goto loc_8209BC38;
	case 125:
		goto loc_8209BC38;
	case 126:
		goto loc_8209BBE4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-18720(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18720);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-18612(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18612);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17980(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17980);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17772(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17772);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17604(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17604);
	// lwz r16,-17540(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17540);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17436(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17436);
loc_8209B6E0:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r11.u8);
	// lwz r11,3840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// lwz r3,804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// bl 0x825c6b9c
	ctx.lr = 0x8209B718;
	__imp__XNotifyGetNext(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209b738
	if (!ctx.cr6.eq) goto loc_8209B738;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8209b750
	goto loc_8209B750;
loc_8209B738:
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8209b750
	goto loc_8209B750;
loc_8209B74C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_8209B750:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8209b90c
	if (ctx.cr6.lt) goto loc_8209B90C;
	// bne cr6,0x8209bc38
	if (!ctx.cr6.eq) goto loc_8209BC38;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r29,r11,3004
	ctx.r29.s64 = ctx.r11.s64 + 3004;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8209bc38
	if (ctx.cr6.gt) goto loc_8209BC38;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-18552
	ctx.r12.s64 = ctx.r12.s64 + -18552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209B7EC;
	case 1:
		goto loc_8209B8E8;
	case 2:
		goto loc_8209B8C0;
	case 3:
		goto loc_8209BC38;
	case 4:
		goto loc_8209BC38;
	case 5:
		goto loc_8209BC38;
	case 6:
		goto loc_8209BC38;
	case 7:
		goto loc_8209BC38;
	case 8:
		goto loc_8209B868;
	case 9:
		goto loc_8209BC38;
	case 10:
		goto loc_8209BC38;
	case 11:
		goto loc_8209BC38;
	case 12:
		goto loc_8209BC38;
	case 13:
		goto loc_8209BC38;
	case 14:
		goto loc_8209BC38;
	case 15:
		goto loc_8209BC38;
	case 16:
		goto loc_8209BC38;
	case 17:
		goto loc_8209BC38;
	case 18:
		goto loc_8209BC38;
	case 19:
		goto loc_8209BC38;
	case 20:
		goto loc_8209BC38;
	case 21:
		goto loc_8209BC38;
	case 22:
		goto loc_8209BC38;
	case 23:
		goto loc_8209BC38;
	case 24:
		goto loc_8209B8E8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-18452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18452);
	// lwz r16,-18200(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18200);
	// lwz r16,-18240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18240);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-18328(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18328);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-17352(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17352);
	// lwz r16,-18200(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18200);
loc_8209B7EC:
	// lwz r11,3840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// bl 0x82095df8
	ctx.lr = 0x8209B820;
	sub_82095DF8(ctx, base);
	// lbz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209b850
	if (ctx.cr6.eq) goto loc_8209B850;
	// lbz r5,237(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 237);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209b850
	if (ctx.cr6.eq) goto loc_8209B850;
loc_8209B838:
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B850:
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B868:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209b898
	if (!ctx.cr6.eq) goto loc_8209B898;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B898:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B8C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B8E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B90C:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r30,r11,3004
	ctx.r30.s64 = ctx.r11.s64 + 3004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,136(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8209B958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209B988:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8209b988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B988;
	// stw r28,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209B9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209B9C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209ba60
	if (ctx.cr6.eq) goto loc_8209BA60;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209bc38
	if (!ctx.cr6.eq) goto loc_8209BC38;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8209ba48
	if (ctx.cr6.eq) goto loc_8209BA48;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8209ba20
	if (ctx.cr6.eq) goto loc_8209BA20;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8209bc38
	if (!ctx.cr6.eq) goto loc_8209BC38;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BA20:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BA48:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BA60:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// ori r5,r5,2053
	ctx.r5.u64 = ctx.r5.u64 | 2053;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82090f98
	ctx.lr = 0x8209BA78;
	sub_82090F98(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r9,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BA94:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,3840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82096f50
	ctx.lr = 0x8209BAC0;
	sub_82096F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// bne cr6,0x8209bafc
	if (!ctx.cr6.eq) goto loc_8209BAFC;
loc_8209BACC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r5,42
	ctx.r5.s64 = 42;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a11f8
	ctx.lr = 0x8209BAE0;
	sub_825A11F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209bafc
	if (ctx.cr6.eq) goto loc_8209BAFC;
	// lwz r3,3840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// bl 0x82097048
	ctx.lr = 0x8209BAF0;
	sub_82097048(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x8209bacc
	if (ctx.cr6.eq) goto loc_8209BACC;
loc_8209BAFC:
	// lwz r3,3840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3840);
	// bl 0x820970d8
	ctx.lr = 0x8209BB04;
	sub_820970D8(ctx, base);
	// lbz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209bb18
	if (ctx.cr6.eq) goto loc_8209BB18;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x8209b838
	if (ctx.cr6.eq) goto loc_8209B838;
loc_8209BB18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BB3C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// li r5,1543
	ctx.r5.s64 = 1543;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8209a418
	ctx.lr = 0x8209BB58;
	sub_8209A418(ctx, base);
	// li r11,61
	ctx.r11.s64 = 61;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r5.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BB7C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8209bbbc
	if (ctx.cr6.eq) goto loc_8209BBBC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8209bb18
	if (ctx.cr6.eq) goto loc_8209BB18;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209BB9C;
	sub_82095F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8209b8e8
	if (ctx.cr6.eq) goto loc_8209B8E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8209b8c0
	if (ctx.cr6.eq) goto loc_8209B8C0;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// beq cr6,0x8209b8e8
	if (ctx.cr6.eq) goto loc_8209B8E8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BBBC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BBE4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209BBFC:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209bbfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209BBFC;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209BC38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209BC40"))) PPC_WEAK_FUNC(sub_8209BC40);
PPC_FUNC_IMPL(__imp__sub_8209BC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209BC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,3850(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3850);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,3876
	ctx.r30.s64 = ctx.r11.s64 + 3876;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// beq cr6,0x8209bc9c
	if (ctx.cr6.eq) goto loc_8209BC9C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209bc8c
	if (ctx.cr6.eq) goto loc_8209BC8C;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8209bec4
	if (!ctx.cr6.lt) goto loc_8209BEC4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8209BC8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209BC90:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209c78c
	if (ctx.cr6.eq) goto loc_8209C78C;
loc_8209BC9C:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2492
	ctx.r31.s64 = ctx.r11.s64 + 2492;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209c78c
	if (ctx.cr6.gt) goto loc_8209C78C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-17208
	ctx.r12.s64 = ctx.r12.s64 + -17208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209BECC;
	case 1:
		goto loc_8209C78C;
	case 2:
		goto loc_8209C78C;
	case 3:
		goto loc_8209C604;
	case 4:
		goto loc_8209C78C;
	case 5:
		goto loc_8209C78C;
	case 6:
		goto loc_8209C78C;
	case 7:
		goto loc_8209C78C;
	case 8:
		goto loc_8209C78C;
	case 9:
		goto loc_8209C78C;
	case 10:
		goto loc_8209C78C;
	case 11:
		goto loc_8209C78C;
	case 12:
		goto loc_8209C78C;
	case 13:
		goto loc_8209C78C;
	case 14:
		goto loc_8209C78C;
	case 15:
		goto loc_8209C78C;
	case 16:
		goto loc_8209C78C;
	case 17:
		goto loc_8209C78C;
	case 18:
		goto loc_8209C78C;
	case 19:
		goto loc_8209C78C;
	case 20:
		goto loc_8209C78C;
	case 21:
		goto loc_8209C78C;
	case 22:
		goto loc_8209C78C;
	case 23:
		goto loc_8209C78C;
	case 24:
		goto loc_8209C208;
	case 25:
		goto loc_8209C78C;
	case 26:
		goto loc_8209C78C;
	case 27:
		goto loc_8209C78C;
	case 28:
		goto loc_8209C78C;
	case 29:
		goto loc_8209C78C;
	case 30:
		goto loc_8209C294;
	case 31:
		goto loc_8209C78C;
	case 32:
		goto loc_8209C78C;
	case 33:
		goto loc_8209C78C;
	case 34:
		goto loc_8209C78C;
	case 35:
		goto loc_8209C78C;
	case 36:
		goto loc_8209C148;
	case 37:
		goto loc_8209C78C;
	case 38:
		goto loc_8209C78C;
	case 39:
		goto loc_8209C78C;
	case 40:
		goto loc_8209C78C;
	case 41:
		goto loc_8209C78C;
	case 42:
		goto loc_8209C78C;
	case 43:
		goto loc_8209C78C;
	case 44:
		goto loc_8209C78C;
	case 45:
		goto loc_8209C78C;
	case 46:
		goto loc_8209C78C;
	case 47:
		goto loc_8209C78C;
	case 48:
		goto loc_8209C78C;
	case 49:
		goto loc_8209C78C;
	case 50:
		goto loc_8209C78C;
	case 51:
		goto loc_8209C78C;
	case 52:
		goto loc_8209C78C;
	case 53:
		goto loc_8209C78C;
	case 54:
		goto loc_8209C78C;
	case 55:
		goto loc_8209C78C;
	case 56:
		goto loc_8209C78C;
	case 57:
		goto loc_8209C78C;
	case 58:
		goto loc_8209C78C;
	case 59:
		goto loc_8209C78C;
	case 60:
		goto loc_8209C328;
	case 61:
		goto loc_8209C364;
	case 62:
		goto loc_8209C78C;
	case 63:
		goto loc_8209C78C;
	case 64:
		goto loc_8209C78C;
	case 65:
		goto loc_8209C78C;
	case 66:
		goto loc_8209C78C;
	case 67:
		goto loc_8209C4D4;
	case 68:
		goto loc_8209C78C;
	case 69:
		goto loc_8209C78C;
	case 70:
		goto loc_8209C78C;
	case 71:
		goto loc_8209C78C;
	case 72:
		goto loc_8209C78C;
	case 73:
		goto loc_8209C78C;
	case 74:
		goto loc_8209C78C;
	case 75:
		goto loc_8209C78C;
	case 76:
		goto loc_8209C78C;
	case 77:
		goto loc_8209C78C;
	case 78:
		goto loc_8209C78C;
	case 79:
		goto loc_8209C3C4;
	case 80:
		goto loc_8209C78C;
	case 81:
		goto loc_8209C78C;
	case 82:
		goto loc_8209C78C;
	case 83:
		goto loc_8209C78C;
	case 84:
		goto loc_8209C78C;
	case 85:
		goto loc_8209C78C;
	case 86:
		goto loc_8209C78C;
	case 87:
		goto loc_8209C78C;
	case 88:
		goto loc_8209C78C;
	case 89:
		goto loc_8209C78C;
	case 90:
		goto loc_8209C78C;
	case 91:
		goto loc_8209C78C;
	case 92:
		goto loc_8209C78C;
	case 93:
		goto loc_8209C78C;
	case 94:
		goto loc_8209C78C;
	case 95:
		goto loc_8209C78C;
	case 96:
		goto loc_8209C78C;
	case 97:
		goto loc_8209C78C;
	case 98:
		goto loc_8209C78C;
	case 99:
		goto loc_8209C78C;
	case 100:
		goto loc_8209C78C;
	case 101:
		goto loc_8209C78C;
	case 102:
		goto loc_8209C78C;
	case 103:
		goto loc_8209C78C;
	case 104:
		goto loc_8209C78C;
	case 105:
		goto loc_8209C78C;
	case 106:
		goto loc_8209C78C;
	case 107:
		goto loc_8209C78C;
	case 108:
		goto loc_8209C78C;
	case 109:
		goto loc_8209C78C;
	case 110:
		goto loc_8209C78C;
	case 111:
		goto loc_8209C78C;
	case 112:
		goto loc_8209C78C;
	case 113:
		goto loc_8209C78C;
	case 114:
		goto loc_8209C78C;
	case 115:
		goto loc_8209C78C;
	case 116:
		goto loc_8209C78C;
	case 117:
		goto loc_8209C78C;
	case 118:
		goto loc_8209C78C;
	case 119:
		goto loc_8209C78C;
	case 120:
		goto loc_8209C78C;
	case 121:
		goto loc_8209C78C;
	case 122:
		goto loc_8209C78C;
	case 123:
		goto loc_8209C78C;
	case 124:
		goto loc_8209BF0C;
	case 125:
		goto loc_8209C088;
	case 126:
		goto loc_8209C70C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-16692(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16692);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14844(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14844);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-15864(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15864);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-15724(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15724);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-16056(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16056);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-15576(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15576);
	// lwz r16,-15516(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15516);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-15148(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15148);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-15420(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15420);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-16628(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16628);
	// lwz r16,-16248(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16248);
	// lwz r16,-14580(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14580);
loc_8209BEC4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8209bc90
	goto loc_8209BC90;
loc_8209BECC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209bfe4
	if (!ctx.cr6.eq) goto loc_8209BFE4;
loc_8209BEF4:
	// li r11,124
	ctx.r11.s64 = 124;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BF0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8209c044
	if (ctx.cr6.lt) goto loc_8209C044;
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,3680
	ctx.r11.s64 = ctx.r11.s64 + 3680;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8209c78c
	if (ctx.cr6.gt) goto loc_8209C78C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-16568
	ctx.r12.s64 = ctx.r12.s64 + -16568;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209BFAC;
	case 1:
		goto loc_8209C374;
	case 2:
		goto loc_8209C024;
	case 3:
		goto loc_8209C78C;
	case 4:
		goto loc_8209C78C;
	case 5:
		goto loc_8209C78C;
	case 6:
		goto loc_8209C78C;
	case 7:
		goto loc_8209C78C;
	case 8:
		goto loc_8209BFFC;
	case 9:
		goto loc_8209C78C;
	case 10:
		goto loc_8209C78C;
	case 11:
		goto loc_8209C78C;
	case 12:
		goto loc_8209C78C;
	case 13:
		goto loc_8209C78C;
	case 14:
		goto loc_8209C78C;
	case 15:
		goto loc_8209C78C;
	case 16:
		goto loc_8209C78C;
	case 17:
		goto loc_8209C78C;
	case 18:
		goto loc_8209C78C;
	case 19:
		goto loc_8209C78C;
	case 20:
		goto loc_8209C78C;
	case 21:
		goto loc_8209C78C;
	case 22:
		goto loc_8209C78C;
	case 23:
		goto loc_8209C414;
	case 24:
		goto loc_8209C414;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-16468(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16468);
	// lwz r16,-15500(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15500);
	// lwz r16,-16348(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16348);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-16388(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16388);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-14452(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14452);
	// lwz r16,-15340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15340);
	// lwz r16,-15340(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15340);
loc_8209BFAC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// bl 0x82095df8
	ctx.lr = 0x8209BFE4;
	sub_82095DF8(ctx, base);
loc_8209BFE4:
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209BFFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,125
	ctx.r11.s64 = 125;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C024:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C044:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8209f518
	ctx.lr = 0x8209C060;
	sub_8209F518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r10,3680
	ctx.r3.s64 = ctx.r10.s64 + 3680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x8209a390
	ctx.lr = 0x8209C080;
	sub_8209A390(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C088:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209c0d0
	if (ctx.cr6.eq) goto loc_8209C0D0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,3844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// beq cr6,0x8209bef4
	if (ctx.cr6.eq) goto loc_8209BEF4;
	// lwz r5,3844(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C0D0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r30,r11,3892
	ctx.r30.s64 = ctx.r11.s64 + 3892;
	// li r10,39
	ctx.r10.s64 = 39;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209C0E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209c0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C0E8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,-16188
	ctx.r4.s64 = ctx.r11.s64 + -16188;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,3004
	ctx.r11.s64 = ctx.r11.s64 + 3004;
	// lwz r5,160(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x82090c60
	ctx.lr = 0x8209C120;
	sub_82090C60(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// li r4,773
	ctx.r4.s64 = 773;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820910a0
	ctx.lr = 0x8209C130;
	sub_820910A0(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C148:
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82096f50
	ctx.lr = 0x8209C18C;
	sub_82096F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8209c1c8
	if (!ctx.cr6.eq) goto loc_8209C1C8;
loc_8209C198:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r5,42
	ctx.r5.s64 = 42;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a11f8
	ctx.lr = 0x8209C1AC;
	sub_825A11F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209c1c8
	if (ctx.cr6.eq) goto loc_8209C1C8;
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// bl 0x82097048
	ctx.lr = 0x8209C1BC;
	sub_82097048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x8209c198
	if (ctx.cr6.eq) goto loc_8209C198;
loc_8209C1C8:
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// bl 0x820970d8
	ctx.lr = 0x8209C1D0;
	sub_820970D8(ctx, base);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8209c1f0
	if (!ctx.cr6.eq) goto loc_8209C1F0;
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C1F0:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C208:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825af1b8
	ctx.lr = 0x8209C214;
	sub_825AF1B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209c26c
	if (!ctx.cr6.eq) goto loc_8209C26C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// rldicl r30,r6,52,12
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u64, 52) & 0xFFFFFFFFFFFFF;
	// bl 0x8209f518
	ctx.lr = 0x8209C238;
	sub_8209F518(ctx, base);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpld cr6,r30,r5
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r5.u64, ctx.xer);
	// bge cr6,0x8209c3ac
	if (!ctx.cr6.lt) goto loc_8209C3AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C26C:
	// bl 0x825af6c0
	ctx.lr = 0x8209C270;
	sub_825AF6C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C294:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209c2f8
	if (ctx.cr6.eq) goto loc_8209C2F8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209C2B0;
	sub_82095F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209c374
	if (!ctx.cr6.eq) goto loc_8209C374;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8209bef4
	if (ctx.cr6.eq) goto loc_8209BEF4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
loc_8209C2D0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C2F8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,773
	ctx.r5.s64 = 773;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82091018
	ctx.lr = 0x8209C310;
	sub_82091018(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C328:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// li r5,1543
	ctx.r5.s64 = 1543;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8209a418
	ctx.lr = 0x8209C344;
	sub_8209A418(ctx, base);
	// li r11,61
	ctx.r11.s64 = 61;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C364:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209C36C;
	sub_82095F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209c394
	if (ctx.cr6.eq) goto loc_8209C394;
loc_8209C374:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C394:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8209c2d0
	if (ctx.cr6.eq) goto loc_8209C2D0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
loc_8209C3AC:
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C3C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209c494
	if (ctx.cr6.eq) goto loc_8209C494;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,515
	ctx.r7.s64 = 515;
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x820962d0
	ctx.lr = 0x8209C3F4;
	sub_820962D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209c434
	if (ctx.cr6.eq) goto loc_8209C434;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8209c374
	if (ctx.cr6.eq) goto loc_8209C374;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x8209c374
	if (ctx.cr6.eq) goto loc_8209C374;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8209C414:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C434:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209C44C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209c44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C44C;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C494:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82091018
	ctx.lr = 0x8209C4AC;
	sub_82091018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C4D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209c5c0
	if (ctx.cr6.eq) goto loc_8209C5C0;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r30,r11,3344
	ctx.r30.s64 = ctx.r11.s64 + 3344;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209c518
	if (!ctx.cr6.eq) goto loc_8209C518;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8209c528
	goto loc_8209C528;
loc_8209C518:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,3844(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
loc_8209C528:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82096788
	ctx.lr = 0x8209C538;
	sub_82096788(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209c78c
	if (ctx.cr6.eq) goto loc_8209C78C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209c59c
	if (ctx.cr6.eq) goto loc_8209C59C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8209c374
	if (ctx.cr6.eq) goto loc_8209C374;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x8209c57c
	if (ctx.cr6.eq) goto loc_8209C57C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C57C:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C59C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C5C0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r10,r11,3892
	ctx.r10.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209C5D8:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209c5d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C5D8;
	// li r11,30
	ctx.r11.s64 = 30;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r28,3844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C604:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c620
	if (ctx.cr6.eq) goto loc_8209C620;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8209c624
	if (!ctx.cr6.lt) goto loc_8209C624;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8209C620:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209C624:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c78c
	if (ctx.cr6.eq) goto loc_8209C78C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209c684
	if (ctx.cr6.eq) goto loc_8209C684;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209C64C;
	sub_82095F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209c65c
	if (!ctx.cr6.eq) goto loc_8209C65C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209C65C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,3844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C684:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209c6cc
	if (ctx.cr6.eq) goto loc_8209C6CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209c6cc
	if (ctx.cr6.eq) goto loc_8209C6CC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c6bc
	if (ctx.cr6.eq) goto loc_8209C6BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x8209C6B4;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209c6c8
	if (!ctx.cr6.eq) goto loc_8209C6C8;
loc_8209C6BC:
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8209c6e4
	goto loc_8209C6E4;
loc_8209C6C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_8209C6CC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209c6dc
	if (!ctx.cr6.eq) goto loc_8209C6DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209C6DC:
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// li r4,17
	ctx.r4.s64 = 17;
loc_8209C6E4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// bl 0x82091018
	ctx.lr = 0x8209C6F4;
	sub_82091018(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209C70C:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8209c728
	if (ctx.cr6.eq) goto loc_8209C728;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8209c72c
	if (!ctx.cr6.lt) goto loc_8209C72C;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8209C728:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209C72C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209c78c
	if (ctx.cr6.eq) goto loc_8209C78C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209C750:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209c750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C750;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209C78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209C78C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C794"))) PPC_WEAK_FUNC(sub_8209C794);
PPC_FUNC_IMPL(__imp__sub_8209C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C798"))) PPC_WEAK_FUNC(sub_8209C798);
PPC_FUNC_IMPL(__imp__sub_8209C798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209C7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,3850(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3850);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,3876
	ctx.r30.s64 = ctx.r11.s64 + 3876;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// beq cr6,0x8209c7f4
	if (ctx.cr6.eq) goto loc_8209C7F4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209c7e4
	if (ctx.cr6.eq) goto loc_8209C7E4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8209ca1c
	if (!ctx.cr6.lt) goto loc_8209CA1C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8209C7E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209C7E8:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209cf00
	if (ctx.cr6.eq) goto loc_8209CF00;
loc_8209C7F4:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2860
	ctx.r31.s64 = ctx.r11.s64 + 2860;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209cf00
	if (ctx.cr6.gt) goto loc_8209CF00;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-14304
	ctx.r12.s64 = ctx.r12.s64 + -14304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209CA24;
	case 1:
		goto loc_8209CF00;
	case 2:
		goto loc_8209CF00;
	case 3:
		goto loc_8209CD40;
	case 4:
		goto loc_8209CF00;
	case 5:
		goto loc_8209CF00;
	case 6:
		goto loc_8209CF00;
	case 7:
		goto loc_8209CF00;
	case 8:
		goto loc_8209CF00;
	case 9:
		goto loc_8209CF00;
	case 10:
		goto loc_8209CF00;
	case 11:
		goto loc_8209CF00;
	case 12:
		goto loc_8209CF00;
	case 13:
		goto loc_8209CF00;
	case 14:
		goto loc_8209CF00;
	case 15:
		goto loc_8209CF00;
	case 16:
		goto loc_8209CF00;
	case 17:
		goto loc_8209CF00;
	case 18:
		goto loc_8209CF00;
	case 19:
		goto loc_8209CF00;
	case 20:
		goto loc_8209CF00;
	case 21:
		goto loc_8209CF00;
	case 22:
		goto loc_8209CF00;
	case 23:
		goto loc_8209CF00;
	case 24:
		goto loc_8209CF00;
	case 25:
		goto loc_8209CF00;
	case 26:
		goto loc_8209CF00;
	case 27:
		goto loc_8209CF00;
	case 28:
		goto loc_8209CF00;
	case 29:
		goto loc_8209CF00;
	case 30:
		goto loc_8209CF00;
	case 31:
		goto loc_8209CF00;
	case 32:
		goto loc_8209CF00;
	case 33:
		goto loc_8209CF00;
	case 34:
		goto loc_8209CF00;
	case 35:
		goto loc_8209CF00;
	case 36:
		goto loc_8209CF00;
	case 37:
		goto loc_8209CF00;
	case 38:
		goto loc_8209CF00;
	case 39:
		goto loc_8209CF00;
	case 40:
		goto loc_8209CF00;
	case 41:
		goto loc_8209CF00;
	case 42:
		goto loc_8209CF00;
	case 43:
		goto loc_8209CF00;
	case 44:
		goto loc_8209CF00;
	case 45:
		goto loc_8209CF00;
	case 46:
		goto loc_8209CF00;
	case 47:
		goto loc_8209CF00;
	case 48:
		goto loc_8209CF00;
	case 49:
		goto loc_8209CF00;
	case 50:
		goto loc_8209CF00;
	case 51:
		goto loc_8209CF00;
	case 52:
		goto loc_8209CF00;
	case 53:
		goto loc_8209CF00;
	case 54:
		goto loc_8209CF00;
	case 55:
		goto loc_8209CF00;
	case 56:
		goto loc_8209CF00;
	case 57:
		goto loc_8209CF00;
	case 58:
		goto loc_8209CF00;
	case 59:
		goto loc_8209CF00;
	case 60:
		goto loc_8209CF00;
	case 61:
		goto loc_8209CF00;
	case 62:
		goto loc_8209CF00;
	case 63:
		goto loc_8209CF00;
	case 64:
		goto loc_8209CF00;
	case 65:
		goto loc_8209CF00;
	case 66:
		goto loc_8209CF00;
	case 67:
		goto loc_8209CF00;
	case 68:
		goto loc_8209CF00;
	case 69:
		goto loc_8209CF00;
	case 70:
		goto loc_8209CF00;
	case 71:
		goto loc_8209CF00;
	case 72:
		goto loc_8209CF00;
	case 73:
		goto loc_8209CF00;
	case 74:
		goto loc_8209CF00;
	case 75:
		goto loc_8209CF00;
	case 76:
		goto loc_8209CF00;
	case 77:
		goto loc_8209CF00;
	case 78:
		goto loc_8209CF00;
	case 79:
		goto loc_8209CF00;
	case 80:
		goto loc_8209CF00;
	case 81:
		goto loc_8209CF00;
	case 82:
		goto loc_8209CF00;
	case 83:
		goto loc_8209CF00;
	case 84:
		goto loc_8209CF00;
	case 85:
		goto loc_8209CA6C;
	case 86:
		goto loc_8209CF00;
	case 87:
		goto loc_8209CB28;
	case 88:
		goto loc_8209CF00;
	case 89:
		goto loc_8209CF00;
	case 90:
		goto loc_8209CF00;
	case 91:
		goto loc_8209CF00;
	case 92:
		goto loc_8209CF00;
	case 93:
		goto loc_8209CF00;
	case 94:
		goto loc_8209CF00;
	case 95:
		goto loc_8209CF00;
	case 96:
		goto loc_8209CF00;
	case 97:
		goto loc_8209CF00;
	case 98:
		goto loc_8209CF00;
	case 99:
		goto loc_8209CF00;
	case 100:
		goto loc_8209CF00;
	case 101:
		goto loc_8209CF00;
	case 102:
		goto loc_8209CF00;
	case 103:
		goto loc_8209CF00;
	case 104:
		goto loc_8209CF00;
	case 105:
		goto loc_8209CF00;
	case 106:
		goto loc_8209CF00;
	case 107:
		goto loc_8209CF00;
	case 108:
		goto loc_8209CF00;
	case 109:
		goto loc_8209CF00;
	case 110:
		goto loc_8209CF00;
	case 111:
		goto loc_8209CF00;
	case 112:
		goto loc_8209CF00;
	case 113:
		goto loc_8209CF00;
	case 114:
		goto loc_8209CF00;
	case 115:
		goto loc_8209CF00;
	case 116:
		goto loc_8209CF00;
	case 117:
		goto loc_8209CF00;
	case 118:
		goto loc_8209CF00;
	case 119:
		goto loc_8209CF00;
	case 120:
		goto loc_8209CF00;
	case 121:
		goto loc_8209CF00;
	case 122:
		goto loc_8209CF00;
	case 123:
		goto loc_8209CF00;
	case 124:
		goto loc_8209CF00;
	case 125:
		goto loc_8209CF00;
	case 126:
		goto loc_8209CE80;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-13788(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13788);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12992(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12992);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-13716(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13716);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-13528(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13528);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12544(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	// lwz r16,-12672(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12672);
loc_8209CA1C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8209c7e8
	goto loc_8209C7E8;
loc_8209CA24:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r3,804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// bl 0x825c6b9c
	ctx.lr = 0x8209CA58;
	__imp__XNotifyGetNext(ctx, base);
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8209ca70
	goto loc_8209CA70;
loc_8209CA6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_8209CA70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209caf4
	if (ctx.cr6.eq) goto loc_8209CAF4;
	// cmpwi cr6,r11,86
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 86, ctx.xer);
	// bne cr6,0x8209cf00
	if (!ctx.cr6.eq) goto loc_8209CF00;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cce8
	if (ctx.cr6.eq) goto loc_8209CCE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x8209CA94;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209cce8
	if (!ctx.cr6.eq) goto loc_8209CCE8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8209cacc
	if (ctx.cr6.eq) goto loc_8209CACC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8209cf00
	if (!ctx.cr6.eq) goto loc_8209CF00;
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CACC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CAF4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// li r5,1543
	ctx.r5.s64 = 1543;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x8209a418
	ctx.lr = 0x8209CB10;
	sub_8209A418(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CB28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209cd00
	if (ctx.cr6.eq) goto loc_8209CD00;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8209cc60
	if (ctx.cr6.eq) goto loc_8209CC60;
	// cmpwi cr6,r11,87
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// bne cr6,0x8209cf00
	if (!ctx.cr6.eq) goto loc_8209CF00;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r4,r11,-16716
	ctx.r4.s64 = ctx.r11.s64 + -16716;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8259cce0
	ctx.lr = 0x8209CB64;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// bne cr6,0x8209cb88
	if (!ctx.cr6.eq) goto loc_8209CB88;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82096a88
	ctx.lr = 0x8209CB84;
	sub_82096A88(ctx, base);
	// b 0x8209cba0
	goto loc_8209CBA0;
loc_8209CB88:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82096880
	ctx.lr = 0x8209CBA0;
	sub_82096880(ctx, base);
loc_8209CBA0:
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x8209cc48
	if (ctx.cr6.gt) goto loc_8209CC48;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-13376
	ctx.r12.s64 = ctx.r12.s64 + -13376;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8209CBF8;
	case 1:
		goto loc_8209CC48;
	case 2:
		goto loc_8209CC34;
	case 3:
		goto loc_8209CC48;
	case 4:
		goto loc_8209CC48;
	case 5:
		goto loc_8209CC48;
	case 6:
		goto loc_8209CC48;
	case 7:
		goto loc_8209CC48;
	case 8:
		goto loc_8209CC48;
	case 9:
		goto loc_8209CC1C;
	case 10:
		goto loc_8209CC48;
	case 11:
		goto loc_8209CC48;
	case 12:
		goto loc_8209CC48;
	case 13:
		goto loc_8209CC34;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-13320(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13320);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13260(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13260);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13284(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13284);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13240(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13240);
	// lwz r16,-13260(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13260);
loc_8209CBF8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CC1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CC34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CC48:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CC60:
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x82096f50
	ctx.lr = 0x8209CC84;
	sub_82096F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8209ccc0
	if (!ctx.cr6.eq) goto loc_8209CCC0;
loc_8209CC90:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r5,42
	ctx.r5.s64 = 42;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a11f8
	ctx.lr = 0x8209CCA4;
	sub_825A11F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ccc0
	if (ctx.cr6.eq) goto loc_8209CCC0;
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// bl 0x82097048
	ctx.lr = 0x8209CCB4;
	sub_82097048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x8209cc90
	if (ctx.cr6.eq) goto loc_8209CC90;
loc_8209CCC0:
	// lwz r3,3840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3840);
	// bl 0x820970d8
	ctx.lr = 0x8209CCC8;
	sub_820970D8(ctx, base);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8209cce0
	if (!ctx.cr6.eq) goto loc_8209CCE0;
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CCE0:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209CCE8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CD00:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82091018
	ctx.lr = 0x8209CD18;
	sub_82091018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CD40:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209cd5c
	if (ctx.cr6.eq) goto loc_8209CD5C;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8209cd60
	if (!ctx.cr6.lt) goto loc_8209CD60;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8209CD5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209CD60:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209cf00
	if (ctx.cr6.eq) goto loc_8209CF00;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209cdc0
	if (ctx.cr6.eq) goto loc_8209CDC0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209cf00
	if (!ctx.cr6.eq) goto loc_8209CF00;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209CD88;
	sub_82095F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209cd98
	if (!ctx.cr6.eq) goto loc_8209CD98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209CD98:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3844(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bne cr6,0x8209cf00
	if (!ctx.cr6.eq) goto loc_8209CF00;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CDC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209ce40
	if (ctx.cr6.eq) goto loc_8209CE40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209ce40
	if (ctx.cr6.eq) goto loc_8209CE40;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cdf8
	if (ctx.cr6.eq) goto loc_8209CDF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x8209CDF0;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209ce3c
	if (!ctx.cr6.eq) goto loc_8209CE3C;
loc_8209CDF8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r30,r11,3892
	ctx.r30.s64 = ctx.r11.s64 + 3892;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82091018
	ctx.lr = 0x8209CE14;
	sub_82091018(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CE3C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_8209CE40:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209ce50
	if (!ctx.cr6.eq) goto loc_8209CE50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209CE50:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x82091018
	ctx.lr = 0x8209CE68;
	sub_82091018(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r28.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209CE80:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ce9c
	if (ctx.cr6.eq) goto loc_8209CE9C;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8209cea0
	if (!ctx.cr6.lt) goto loc_8209CEA0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8209CE9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209CEA0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209cf00
	if (ctx.cr6.eq) goto loc_8209CF00;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209CEC4:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209cec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209CEC4;
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209CF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209CF00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209CF08"))) PPC_WEAK_FUNC(sub_8209CF08);
PPC_FUNC_IMPL(__imp__sub_8209CF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8209CF10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,3004
	ctx.r31.s64 = ctx.r11.s64 + 3004;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8209da8c
	if (ctx.cr6.gt) goto loc_8209DA8C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-12480
	ctx.r12.s64 = ctx.r12.s64 + -12480;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209D13C;
	case 1:
		goto loc_8209DA8C;
	case 2:
		goto loc_8209DA8C;
	case 3:
		goto loc_8209DA8C;
	case 4:
		goto loc_8209DA8C;
	case 5:
		goto loc_8209DA8C;
	case 6:
		goto loc_8209D3A4;
	case 7:
		goto loc_8209DA8C;
	case 8:
		goto loc_8209DA8C;
	case 9:
		goto loc_8209DA8C;
	case 10:
		goto loc_8209DA8C;
	case 11:
		goto loc_8209DA8C;
	case 12:
		goto loc_8209D518;
	case 13:
		goto loc_8209DA8C;
	case 14:
		goto loc_8209DA8C;
	case 15:
		goto loc_8209DA8C;
	case 16:
		goto loc_8209DA8C;
	case 17:
		goto loc_8209DA8C;
	case 18:
		goto loc_8209DA8C;
	case 19:
		goto loc_8209DA8C;
	case 20:
		goto loc_8209DA8C;
	case 21:
		goto loc_8209DA8C;
	case 22:
		goto loc_8209DA8C;
	case 23:
		goto loc_8209DA8C;
	case 24:
		goto loc_8209D1C8;
	case 25:
		goto loc_8209DA8C;
	case 26:
		goto loc_8209DA8C;
	case 27:
		goto loc_8209DA8C;
	case 28:
		goto loc_8209DA8C;
	case 29:
		goto loc_8209DA8C;
	case 30:
		goto loc_8209DA8C;
	case 31:
		goto loc_8209DA8C;
	case 32:
		goto loc_8209DA8C;
	case 33:
		goto loc_8209DA8C;
	case 34:
		goto loc_8209DA8C;
	case 35:
		goto loc_8209DA8C;
	case 36:
		goto loc_8209DA8C;
	case 37:
		goto loc_8209DA8C;
	case 38:
		goto loc_8209DA8C;
	case 39:
		goto loc_8209DA8C;
	case 40:
		goto loc_8209DA8C;
	case 41:
		goto loc_8209DA8C;
	case 42:
		goto loc_8209DA8C;
	case 43:
		goto loc_8209DA8C;
	case 44:
		goto loc_8209DA8C;
	case 45:
		goto loc_8209DA8C;
	case 46:
		goto loc_8209DA8C;
	case 47:
		goto loc_8209DA8C;
	case 48:
		goto loc_8209DA8C;
	case 49:
		goto loc_8209DA8C;
	case 50:
		goto loc_8209DA8C;
	case 51:
		goto loc_8209DA8C;
	case 52:
		goto loc_8209DA8C;
	case 53:
		goto loc_8209DA8C;
	case 54:
		goto loc_8209DA8C;
	case 55:
		goto loc_8209DA8C;
	case 56:
		goto loc_8209DA8C;
	case 57:
		goto loc_8209DA8C;
	case 58:
		goto loc_8209DA8C;
	case 59:
		goto loc_8209DA8C;
	case 60:
		goto loc_8209DA8C;
	case 61:
		goto loc_8209DA8C;
	case 62:
		goto loc_8209DA8C;
	case 63:
		goto loc_8209DA8C;
	case 64:
		goto loc_8209DA8C;
	case 65:
		goto loc_8209DA8C;
	case 66:
		goto loc_8209DA8C;
	case 67:
		goto loc_8209DA8C;
	case 68:
		goto loc_8209DA8C;
	case 69:
		goto loc_8209DA8C;
	case 70:
		goto loc_8209DA8C;
	case 71:
		goto loc_8209DA8C;
	case 72:
		goto loc_8209DA8C;
	case 73:
		goto loc_8209DA8C;
	case 74:
		goto loc_8209DA8C;
	case 75:
		goto loc_8209DA8C;
	case 76:
		goto loc_8209DA8C;
	case 77:
		goto loc_8209DA8C;
	case 78:
		goto loc_8209DA8C;
	case 79:
		goto loc_8209DA8C;
	case 80:
		goto loc_8209DA8C;
	case 81:
		goto loc_8209DA8C;
	case 82:
		goto loc_8209DA8C;
	case 83:
		goto loc_8209DA8C;
	case 84:
		goto loc_8209DA8C;
	case 85:
		goto loc_8209DA8C;
	case 86:
		goto loc_8209DA8C;
	case 87:
		goto loc_8209DA8C;
	case 88:
		goto loc_8209DA8C;
	case 89:
		goto loc_8209DA8C;
	case 90:
		goto loc_8209DA8C;
	case 91:
		goto loc_8209DA8C;
	case 92:
		goto loc_8209DA8C;
	case 93:
		goto loc_8209DA8C;
	case 94:
		goto loc_8209DA8C;
	case 95:
		goto loc_8209DA8C;
	case 96:
		goto loc_8209DA8C;
	case 97:
		goto loc_8209DA8C;
	case 98:
		goto loc_8209DA8C;
	case 99:
		goto loc_8209DA8C;
	case 100:
		goto loc_8209DA8C;
	case 101:
		goto loc_8209DA8C;
	case 102:
		goto loc_8209DA8C;
	case 103:
		goto loc_8209DA8C;
	case 104:
		goto loc_8209DA8C;
	case 105:
		goto loc_8209DA8C;
	case 106:
		goto loc_8209DA8C;
	case 107:
		goto loc_8209DA8C;
	case 108:
		goto loc_8209DA8C;
	case 109:
		goto loc_8209DA8C;
	case 110:
		goto loc_8209DA8C;
	case 111:
		goto loc_8209DA8C;
	case 112:
		goto loc_8209DA8C;
	case 113:
		goto loc_8209DA8C;
	case 114:
		goto loc_8209DA8C;
	case 115:
		goto loc_8209DA8C;
	case 116:
		goto loc_8209DA8C;
	case 117:
		goto loc_8209DA8C;
	case 118:
		goto loc_8209DA8C;
	case 119:
		goto loc_8209DA8C;
	case 120:
		goto loc_8209DA8C;
	case 121:
		goto loc_8209DA8C;
	case 122:
		goto loc_8209DA8C;
	case 123:
		goto loc_8209DA8C;
	case 124:
		goto loc_8209DA8C;
	case 125:
		goto loc_8209DA8C;
	case 126:
		goto loc_8209D9EC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-11972(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11972);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-11356(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11356);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-10984(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10984);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-11832(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11832);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9748(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9748);
loc_8209D13C:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// stb r11,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,238(r31)
	PPC_STORE_U8(ctx.r31.u32 + 238, ctx.r11.u8);
	// li r11,18
	ctx.r11.s64 = 18;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209D17C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209d17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D17C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,24
	ctx.r11.s64 = 24;
	// beq cr6,0x8209d19c
	if (ctx.cr6.eq) goto loc_8209D19C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8209D19C:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D1C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8209d378
	if (ctx.cr6.lt) goto loc_8209D378;
	// bne cr6,0x8209da8c
	if (!ctx.cr6.eq) goto loc_8209DA8C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,3680
	ctx.r11.s64 = ctx.r11.s64 + 3680;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8209da8c
	if (ctx.cr6.gt) goto loc_8209DA8C;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,-11772
	ctx.r12.s64 = ctx.r12.s64 + -11772;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8209D268;
	case 1:
		goto loc_8209D2D8;
	case 2:
		goto loc_8209D304;
	case 3:
		goto loc_8209DA8C;
	case 4:
		goto loc_8209DA8C;
	case 5:
		goto loc_8209DA8C;
	case 6:
		goto loc_8209DA8C;
	case 7:
		goto loc_8209DA8C;
	case 8:
		goto loc_8209D2A8;
	case 9:
		goto loc_8209DA8C;
	case 10:
		goto loc_8209DA8C;
	case 11:
		goto loc_8209DA8C;
	case 12:
		goto loc_8209DA8C;
	case 13:
		goto loc_8209DA8C;
	case 14:
		goto loc_8209DA8C;
	case 15:
		goto loc_8209DA8C;
	case 16:
		goto loc_8209DA8C;
	case 17:
		goto loc_8209DA8C;
	case 18:
		goto loc_8209DA8C;
	case 19:
		goto loc_8209DA8C;
	case 20:
		goto loc_8209DA8C;
	case 21:
		goto loc_8209DA8C;
	case 22:
		goto loc_8209DA8C;
	case 23:
		goto loc_8209D348;
	case 24:
		goto loc_8209D318;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-11672(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11672);
	// lwz r16,-11560(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11560);
	// lwz r16,-11516(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11516);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-11608(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11608);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-11448(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11448);
	// lwz r16,-11496(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11496);
loc_8209D268:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// lwz r11,3840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// addi r9,r11,864
	ctx.r9.s64 = ctx.r11.s64 + 864;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D2A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D2D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209D2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D304:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8209da74
	goto loc_8209DA74;
loc_8209D318:
	// li r11,24
	ctx.r11.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209D340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D348:
	// li r11,23
	ctx.r11.s64 = 23;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209D370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D378:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,3680
	ctx.r3.s64 = ctx.r11.s64 + 3680;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8209a390
	ctx.lr = 0x8209D39C;
	sub_8209A390(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D3A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209d3e4
	if (ctx.cr6.eq) goto loc_8209D3E4;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// bne cr6,0x8209da8c
	if (!ctx.cr6.eq) goto loc_8209DA8C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r8,3844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8209d4cc
	if (ctx.cr6.eq) goto loc_8209D4CC;
	// lwz r7,3844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8209da8c
	if (!ctx.cr6.eq) goto loc_8209DA8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D3E4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r6,238(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// addi r30,r11,3840
	ctx.r30.s64 = ctx.r11.s64 + 3840;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x8209d414
	if (ctx.cr6.eq) goto loc_8209D414;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82096f50
	ctx.lr = 0x8209D404;
	sub_82096F50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// stb r11,238(r31)
	PPC_STORE_U8(ctx.r31.u32 + 238, ctx.r11.u8);
	// b 0x8209d41c
	goto loc_8209D41C;
loc_8209D414:
	// bl 0x82097048
	ctx.lr = 0x8209D418;
	sub_82097048(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
loc_8209D41C:
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209d4e4
	if (!ctx.cr6.eq) goto loc_8209D4E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209D434:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209d434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D434;
	// li r5,35
	ctx.r5.s64 = 35;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x8259ddc0
	ctx.lr = 0x8209D450;
	sub_8259DDC0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209d4ac
	if (!ctx.cr6.eq) goto loc_8209D4AC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209D474:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209d474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D474;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// stw r5,3844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3844, ctx.r5.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// li r11,119
	ctx.r11.s64 = 119;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D4AC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a11b0
	ctx.lr = 0x8209D4BC;
	sub_825A11B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209da8c
	if (!ctx.cr6.eq) goto loc_8209DA8C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820970d8
	ctx.lr = 0x8209D4CC;
	sub_820970D8(ctx, base);
loc_8209D4CC:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D4E4:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8209d4f4
	if (ctx.cr6.eq) goto loc_8209D4F4;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// bne cr6,0x8209d500
	if (!ctx.cr6.eq) goto loc_8209D500;
loc_8209D4F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209D500:
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D518:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bgt cr6,0x8209da8c
	if (ctx.cr6.gt) goto loc_8209DA8C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r29,r10,-16936
	ctx.r29.s64 = ctx.r10.s64 + -16936;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
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
		goto loc_8209D6F8;
	case 1:
		goto loc_8209DA8C;
	case 2:
		goto loc_8209DA8C;
	case 3:
		goto loc_8209DA8C;
	case 4:
		goto loc_8209DA8C;
	case 5:
		goto loc_8209D968;
	case 6:
		goto loc_8209DA8C;
	case 7:
		goto loc_8209DA8C;
	case 8:
		goto loc_8209DA8C;
	case 9:
		goto loc_8209DA8C;
	case 10:
		goto loc_8209D714;
	case 11:
		goto loc_8209D9CC;
	case 12:
		goto loc_8209DA8C;
	case 13:
		goto loc_8209D75C;
	case 14:
		goto loc_8209DA8C;
	case 15:
		goto loc_8209DA8C;
	case 16:
		goto loc_8209DA8C;
	case 17:
		goto loc_8209DA8C;
	case 18:
		goto loc_8209DA8C;
	case 19:
		goto loc_8209DA8C;
	case 20:
		goto loc_8209DA8C;
	case 21:
		goto loc_8209DA8C;
	case 22:
		goto loc_8209DA8C;
	case 23:
		goto loc_8209DA8C;
	case 24:
		goto loc_8209DA8C;
	case 25:
		goto loc_8209DA8C;
	case 26:
		goto loc_8209DA8C;
	case 27:
		goto loc_8209DA8C;
	case 28:
		goto loc_8209DA8C;
	case 29:
		goto loc_8209DA8C;
	case 30:
		goto loc_8209DA8C;
	case 31:
		goto loc_8209DA8C;
	case 32:
		goto loc_8209DA8C;
	case 33:
		goto loc_8209DA8C;
	case 34:
		goto loc_8209DA8C;
	case 35:
		goto loc_8209DA8C;
	case 36:
		goto loc_8209DA8C;
	case 37:
		goto loc_8209DA8C;
	case 38:
		goto loc_8209DA8C;
	case 39:
		goto loc_8209DA8C;
	case 40:
		goto loc_8209DA8C;
	case 41:
		goto loc_8209DA8C;
	case 42:
		goto loc_8209DA8C;
	case 43:
		goto loc_8209DA8C;
	case 44:
		goto loc_8209DA8C;
	case 45:
		goto loc_8209DA8C;
	case 46:
		goto loc_8209DA8C;
	case 47:
		goto loc_8209DA8C;
	case 48:
		goto loc_8209DA8C;
	case 49:
		goto loc_8209DA8C;
	case 50:
		goto loc_8209DA8C;
	case 51:
		goto loc_8209DA8C;
	case 52:
		goto loc_8209DA8C;
	case 53:
		goto loc_8209DA8C;
	case 54:
		goto loc_8209DA8C;
	case 55:
		goto loc_8209DA8C;
	case 56:
		goto loc_8209DA8C;
	case 57:
		goto loc_8209DA8C;
	case 58:
		goto loc_8209DA8C;
	case 59:
		goto loc_8209DA8C;
	case 60:
		goto loc_8209DA8C;
	case 61:
		goto loc_8209DA8C;
	case 62:
		goto loc_8209DA8C;
	case 63:
		goto loc_8209DA8C;
	case 64:
		goto loc_8209DA8C;
	case 65:
		goto loc_8209DA8C;
	case 66:
		goto loc_8209DA8C;
	case 67:
		goto loc_8209DA8C;
	case 68:
		goto loc_8209DA8C;
	case 69:
		goto loc_8209DA8C;
	case 70:
		goto loc_8209DA8C;
	case 71:
		goto loc_8209DA8C;
	case 72:
		goto loc_8209DA8C;
	case 73:
		goto loc_8209DA8C;
	case 74:
		goto loc_8209DA8C;
	case 75:
		goto loc_8209DA8C;
	case 76:
		goto loc_8209DA8C;
	case 77:
		goto loc_8209DA8C;
	case 78:
		goto loc_8209DA8C;
	case 79:
		goto loc_8209DA8C;
	case 80:
		goto loc_8209DA8C;
	case 81:
		goto loc_8209DA8C;
	case 82:
		goto loc_8209DA8C;
	case 83:
		goto loc_8209DA8C;
	case 84:
		goto loc_8209DA8C;
	case 85:
		goto loc_8209DA8C;
	case 86:
		goto loc_8209DA8C;
	case 87:
		goto loc_8209DA8C;
	case 88:
		goto loc_8209DA8C;
	case 89:
		goto loc_8209DA8C;
	case 90:
		goto loc_8209DA8C;
	case 91:
		goto loc_8209DA8C;
	case 92:
		goto loc_8209DA8C;
	case 93:
		goto loc_8209DA8C;
	case 94:
		goto loc_8209DA8C;
	case 95:
		goto loc_8209DA8C;
	case 96:
		goto loc_8209DA8C;
	case 97:
		goto loc_8209DA8C;
	case 98:
		goto loc_8209DA8C;
	case 99:
		goto loc_8209DA8C;
	case 100:
		goto loc_8209DA8C;
	case 101:
		goto loc_8209DA8C;
	case 102:
		goto loc_8209DA8C;
	case 103:
		goto loc_8209DA8C;
	case 104:
		goto loc_8209DA8C;
	case 105:
		goto loc_8209DA8C;
	case 106:
		goto loc_8209DA8C;
	case 107:
		goto loc_8209DA8C;
	case 108:
		goto loc_8209D9A0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-10504(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10504);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9880(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9880);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-10476(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10476);
	// lwz r16,-9780(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9780);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-10404(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10404);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9588(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9588);
	// lwz r16,-9824(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9824);
loc_8209D6F8:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8209D714:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8209d748
	if (ctx.cr6.eq) goto loc_8209D748;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// bl 0x82096b70
	ctx.lr = 0x8209D734;
	sub_82096B70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8209d760
	goto loc_8209D760;
loc_8209D748:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8209d760
	goto loc_8209D760;
loc_8209D75C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
loc_8209D760:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209d4f4
	if (ctx.cr6.eq) goto loc_8209D4F4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8209d4f4
	if (ctx.cr6.eq) goto loc_8209D4F4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8209d79c
	if (!ctx.cr6.eq) goto loc_8209D79C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209d500
	if (!ctx.cr6.eq) goto loc_8209D500;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D79C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r10,56
	ctx.r10.s64 = 56;
	// addi r3,r11,4095
	ctx.r3.s64 = ctx.r11.s64 + 4095;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// rlwinm r11,r3,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// cmplwi cr6,r11,168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 168, ctx.xer);
	// ble cr6,0x8209d7dc
	if (!ctx.cr6.gt) goto loc_8209D7DC;
	// rlwinm r10,r11,2,10,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lis r9,-16192
	ctx.r9.s64 = -1061158912;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// ori r8,r9,49345
	ctx.r8.u64 = ctx.r9.u64 | 49345;
	// mulhwu r6,r7,r8
	ctx.r6.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r6,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
loc_8209D7DC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r4,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-15912(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15912);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8209D820:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8209d844
	if (ctx.cr6.eq) goto loc_8209D844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209d820
	if (ctx.cr6.eq) goto loc_8209D820;
loc_8209D844:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209d9bc
	if (ctx.cr6.eq) goto loc_8209D9BC;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8209D854:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8209d878
	if (ctx.cr6.eq) goto loc_8209D878;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209d854
	if (ctx.cr6.eq) goto loc_8209D854;
loc_8209D878:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209d9bc
	if (ctx.cr6.eq) goto loc_8209D9BC;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8259cce0
	ctx.lr = 0x8209D88C;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209d8a0
	if (!ctx.cr6.eq) goto loc_8209D8A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r11.u8);
	// b 0x8209d8c8
	goto loc_8209D8C8;
loc_8209D8A0:
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x8259cce0
	ctx.lr = 0x8209D8AC;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209d8c8
	if (ctx.cr6.eq) goto loc_8209D8C8;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x8259cce0
	ctx.lr = 0x8209D8C0;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209d8cc
	if (!ctx.cr6.eq) goto loc_8209D8CC;
loc_8209D8C8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8209D8CC:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8209d990
	if (!ctx.cr6.eq) goto loc_8209D990;
	// lbz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209d9bc
	if (ctx.cr6.eq) goto loc_8209D9BC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// li r9,39
	ctx.r9.s64 = 39;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209D8FC:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209d8fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D8FC;
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209D938:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209d938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D938;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r8,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D968:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,3844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8209d990
	if (ctx.cr6.eq) goto loc_8209D990;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8209da8c
	if (!ctx.cr6.eq) goto loc_8209DA8C;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D990:
	// li r11,108
	ctx.r11.s64 = 108;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D9A0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_8209D9BC:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D9CC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,3840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3840);
	// bl 0x82096e70
	ctx.lr = 0x8209D9D8;
	sub_82096E70(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8209D9EC:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82095f70
	ctx.lr = 0x8209D9F4;
	sub_82095F70(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209da68
	if (!ctx.cr6.eq) goto loc_8209DA68;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209da68
	if (ctx.cr6.eq) goto loc_8209DA68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af1b0
	ctx.lr = 0x8209DA14;
	sub_825AF1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209da68
	if (!ctx.cr6.eq) goto loc_8209DA68;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209da60
	if (ctx.cr6.eq) goto loc_8209DA60;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8209da60
	if (!ctx.cr6.gt) goto loc_8209DA60;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// beq cr6,0x8209da74
	if (ctx.cr6.eq) goto loc_8209DA74;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x8209da74
	goto loc_8209DA74;
loc_8209DA60:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8209da70
	goto loc_8209DA70;
loc_8209DA68:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8209DA70:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8209DA74:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8209DA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209DA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209DA94"))) PPC_WEAK_FUNC(sub_8209DA94);
PPC_FUNC_IMPL(__imp__sub_8209DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209DA98"))) PPC_WEAK_FUNC(sub_8209DA98);
PPC_FUNC_IMPL(__imp__sub_8209DA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209DAA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,3850(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3850);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209daf4
	if (ctx.cr6.eq) goto loc_8209DAF4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,3876
	ctx.r11.s64 = ctx.r11.s64 + 3876;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209dae4
	if (ctx.cr6.eq) goto loc_8209DAE4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8209db3c
	if (!ctx.cr6.lt) goto loc_8209DB3C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8209DAE4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209DAE8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209e05c
	if (ctx.cr6.eq) goto loc_8209E05C;
loc_8209DAF4:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r29,r11,2784
	ctx.r29.s64 = ctx.r11.s64 + 2784;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209dba4
	if (ctx.cr6.eq) goto loc_8209DBA4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8209dbd4
	if (ctx.cr6.eq) goto loc_8209DBD4;
	// cmpwi cr6,r11,126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 126, ctx.xer);
	// bne cr6,0x8209e05c
	if (!ctx.cr6.eq) goto loc_8209E05C;
	// lwz r7,36(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8209db50
	if (!ctx.cr6.eq) goto loc_8209DB50;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209db44
	if (!ctx.cr6.eq) goto loc_8209DB44;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r8,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r8.u32);
	// b 0x8209db54
	goto loc_8209DB54;
loc_8209DB3C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8209dae8
	goto loc_8209DAE8;
loc_8209DB44:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r8,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r8.u32);
	// b 0x8209db54
	goto loc_8209DB54;
loc_8209DB50:
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
loc_8209DB54:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209DB68:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209db68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DB68;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209DB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209DBA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r11,48(r29)
	PPC_STORE_U8(ctx.r29.u32 + 48, ctx.r11.u8);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x8209dbd8
	goto loc_8209DBD8;
loc_8209DBD4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
loc_8209DBD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209de0c
	if (ctx.cr6.eq) goto loc_8209DE0C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8209e05c
	if (!ctx.cr6.eq) goto loc_8209E05C;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3840);
	// bl 0x82097048
	ctx.lr = 0x8209DBF4;
	sub_82097048(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209e048
	if (!ctx.cr6.eq) goto loc_8209E048;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// lwz r4,4456(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4456);
	// bl 0x82090850
	ctx.lr = 0x8209DC34;
	sub_82090850(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_8209DC40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209dc40
	if (!ctx.cr6.eq) goto loc_8209DC40;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820909e0
	ctx.lr = 0x8209DC60;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209e05c
	if (ctx.cr6.eq) goto loc_8209E05C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r31,r11,1728
	ctx.r31.s64 = ctx.r11.s64 + 1728;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209DC8C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209dc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DC8C;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8259d300
	ctx.lr = 0x8209DCA8;
	sub_8259D300(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209DCB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209dcb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DCB8;
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3840);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8209dd8c
	if (ctx.cr6.eq) goto loc_8209DD8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82096b70
	ctx.lr = 0x8209DD04;
	sub_82096B70(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209dd8c
	if (!ctx.cr6.eq) goto loc_8209DD8C;
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3840);
	// bl 0x82096e70
	ctx.lr = 0x8209DD14;
	sub_82096E70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209DD30:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209dd30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DD30;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r31,116
	ctx.r9.s64 = ctx.r31.s64 + 116;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r31,156
	ctx.r6.s64 = ctx.r31.s64 + 156;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lbz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stb r10,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r10.u8);
loc_8209DD74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209dd74
	if (!ctx.cr6.eq) goto loc_8209DD74;
	// b 0x8209ddcc
	goto loc_8209DDCC;
loc_8209DD8C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r31,156
	ctx.r10.s64 = ctx.r31.s64 + 156;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_8209DDB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209ddb8
	if (!ctx.cr6.eq) goto loc_8209DDB8;
loc_8209DDCC:
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// li r9,38
	ctx.r9.s64 = 38;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209DDF0:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209ddf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DDF0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209DE0C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// addi r31,r11,4456
	ctx.r31.s64 = ctx.r11.s64 + 4456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3840);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82096f50
	ctx.lr = 0x8209DE2C;
	sub_82096F50(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209e048
	if (!ctx.cr6.eq) goto loc_8209E048;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bl 0x82090850
	ctx.lr = 0x8209DE68;
	sub_82090850(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_8209DE74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209de74
	if (!ctx.cr6.eq) goto loc_8209DE74;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820909e0
	ctx.lr = 0x8209DE94;
	sub_820909E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209e038
	if (ctx.cr6.eq) goto loc_8209E038;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r31,r11,1728
	ctx.r31.s64 = ctx.r11.s64 + 1728;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209DEC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209dec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DEC0;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8259d300
	ctx.lr = 0x8209DEDC;
	sub_8259D300(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,39
	ctx.r10.s64 = 39;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209DEEC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209deec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DEEC;
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3840);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8209dfc0
	if (ctx.cr6.eq) goto loc_8209DFC0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82096b70
	ctx.lr = 0x8209DF38;
	sub_82096B70(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8209dfc0
	if (!ctx.cr6.eq) goto loc_8209DFC0;
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3840);
	// bl 0x82096e70
	ctx.lr = 0x8209DF48;
	sub_82096E70(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209DF64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209df64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DF64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r31,116
	ctx.r7.s64 = ctx.r31.s64 + 116;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lbz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stb r10,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r10.u8);
loc_8209DFA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209dfa8
	if (!ctx.cr6.eq) goto loc_8209DFA8;
	// b 0x8209e000
	goto loc_8209E000;
loc_8209DFC0:
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_8209DFE4:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r31,156
	ctx.r5.s64 = ctx.r31.s64 + 156;
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8209dfe4
	if (!ctx.cr6.eq) goto loc_8209DFE4;
loc_8209E000:
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r9,38
	ctx.r9.s64 = 38;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,3892
	ctx.r11.s64 = ctx.r11.s64 + 3892;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209E024:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E024;
loc_8209E038:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8209E048:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
loc_8209E05C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E064"))) PPC_WEAK_FUNC(sub_8209E064);
PPC_FUNC_IMPL(__imp__sub_8209E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E068"))) PPC_WEAK_FUNC(sub_8209E068);
PPC_FUNC_IMPL(__imp__sub_8209E068) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,2260
	ctx.r31.s64 = ctx.r11.s64 + 2260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209E09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209E0FC:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E0FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E130;
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

__attribute__((alias("__imp__sub_8209E148"))) PPC_WEAK_FUNC(sub_8209E148);
PPC_FUNC_IMPL(__imp__sub_8209E148) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,2412
	ctx.r31.s64 = ctx.r11.s64 + 2412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209E17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209E1E4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E1E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209E22C;
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

__attribute__((alias("__imp__sub_8209E244"))) PPC_WEAK_FUNC(sub_8209E244);
PPC_FUNC_IMPL(__imp__sub_8209E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E248"))) PPC_WEAK_FUNC(sub_8209E248);
PPC_FUNC_IMPL(__imp__sub_8209E248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8209E250;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r7,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r7.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209E2D8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E2D8;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// bne cr6,0x8209e304
	if (!ctx.cr6.eq) goto loc_8209E304;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// b 0x8209e308
	goto loc_8209E308;
loc_8209E304:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8209E308:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209E320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E328"))) PPC_WEAK_FUNC(sub_8209E328);
PPC_FUNC_IMPL(__imp__sub_8209E328) {
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
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r10,4140
	ctx.r31.s64 = ctx.r10.s64 + 4140;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209E35C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E35C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209E378:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E378;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// bl 0x8259dbb0
	ctx.lr = 0x8209E3D4;
	sub_8259DBB0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209e3f8
	if (ctx.cr6.eq) goto loc_8209E3F8;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8209e3f8
	if (ctx.cr6.eq) goto loc_8209E3F8;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x8259d2a0
	ctx.lr = 0x8209E3F8;
	sub_8259D2A0(ctx, base);
loc_8209E3F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209E410;
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

__attribute__((alias("__imp__sub_8209E428"))) PPC_WEAK_FUNC(sub_8209E428);
PPC_FUNC_IMPL(__imp__sub_8209E428) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209E454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,2260
	ctx.r3.s64 = ctx.r11.s64 + 2260;
	// bl 0x8209e068
	ctx.lr = 0x8209E488;
	sub_8209E068(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8209E49C;
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

__attribute__((alias("__imp__sub_8209E4B4"))) PPC_WEAK_FUNC(sub_8209E4B4);
PPC_FUNC_IMPL(__imp__sub_8209E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E4B8"))) PPC_WEAK_FUNC(sub_8209E4B8);
PPC_FUNC_IMPL(__imp__sub_8209E4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8209E4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2360
	ctx.r31.s64 = ctx.r11.s64 + 2360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209E4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E588"))) PPC_WEAK_FUNC(sub_8209E588);
PPC_FUNC_IMPL(__imp__sub_8209E588) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,2412
	ctx.r3.s64 = ctx.r11.s64 + 2412;
	// bl 0x8209e148
	ctx.lr = 0x8209E5C8;
	sub_8209E148(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E5DC;
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

__attribute__((alias("__imp__sub_8209E5F4"))) PPC_WEAK_FUNC(sub_8209E5F4);
PPC_FUNC_IMPL(__imp__sub_8209E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E5F8"))) PPC_WEAK_FUNC(sub_8209E5F8);
PPC_FUNC_IMPL(__imp__sub_8209E5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209E600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,2644
	ctx.r31.s64 = ctx.r11.s64 + 2644;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x82095df8
	ctx.lr = 0x8209E628;
	sub_82095DF8(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209E650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209E6B4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E6B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E6FC"))) PPC_WEAK_FUNC(sub_8209E6FC);
PPC_FUNC_IMPL(__imp__sub_8209E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E700"))) PPC_WEAK_FUNC(sub_8209E700);
PPC_FUNC_IMPL(__imp__sub_8209E700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8209E708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,2492
	ctx.r29.s64 = ctx.r11.s64 + 2492;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82095df8
	ctx.lr = 0x8209E738;
	sub_82095DF8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209e248
	ctx.lr = 0x8209E764;
	sub_8209E248(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E780"))) PPC_WEAK_FUNC(sub_8209E780);
PPC_FUNC_IMPL(__imp__sub_8209E780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8209E788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r31,r11,2784
	ctx.r31.s64 = ctx.r11.s64 + 2784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209E7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209E82C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8209e82c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E82C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}


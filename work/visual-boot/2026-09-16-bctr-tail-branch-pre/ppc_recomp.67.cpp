#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82484114"))) PPC_WEAK_FUNC(sub_82484114);
PPC_FUNC_IMPL(__imp__sub_82484114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484118"))) PPC_WEAK_FUNC(sub_82484118);
PPC_FUNC_IMPL(__imp__sub_82484118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,29884(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29884);
	// lwz r16,-15648(r7)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + -15648);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82484128;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r30,668
	ctx.r3.s64 = ctx.r30.s64 + 668;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82484170
	if (ctx.cr6.eq) {
		sub_82484170(ctx, base);
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8248a498
	ctx.lr = 0x82484154;
	sub_8248A498(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82484164
	// ERROR 82484164
	return;
}

__attribute__((alias("__imp__sub_82484120"))) PPC_WEAK_FUNC(sub_82484120);
PPC_FUNC_IMPL(__imp__sub_82484120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82484128;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r30,668
	ctx.r3.s64 = ctx.r30.s64 + 668;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82484170
	if (ctx.cr6.eq) goto loc_82484170;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8248a498
	ctx.lr = 0x82484154;
	sub_8248A498(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82484164
	goto loc_82484164;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82484164:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r29.u32);
	// b 0x82484174
	goto loc_82484174;
loc_82484170:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82484174:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484194
	if (ctx.cr6.eq) goto loc_82484194;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82484190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
loc_82484194:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r29.u32);
	// stw r29,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r29.u32);
	// stw r29,660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 660, ctx.r29.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82484160"))) PPC_WEAK_FUNC(sub_82484160);
PPC_FUNC_IMPL(__imp__sub_82484160) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r29.u32);
	// b 0x82484174
	// ERROR 82484174
	return;
}

__attribute__((alias("__imp__sub_82484170"))) PPC_WEAK_FUNC(sub_82484170);
PPC_FUNC_IMPL(__imp__sub_82484170) {
	PPC_FUNC_PROLOGUE();
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484194
	if (ctx.cr6.eq) goto loc_82484194;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82484190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
loc_82484194:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r29.u32);
	// stw r29,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r29.u32);
	// stw r29,660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 660, ctx.r29.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824841AC"))) PPC_WEAK_FUNC(sub_824841AC);
PPC_FUNC_IMPL(__imp__sub_824841AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824841B8"))) PPC_WEAK_FUNC(sub_824841B8);
PPC_FUNC_IMPL(__imp__sub_824841B8) {
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824841f0
	if (ctx.cr6.eq) goto loc_824841F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824841E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_824841F0:
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

__attribute__((alias("__imp__sub_82484208"))) PPC_WEAK_FUNC(sub_82484208);
PPC_FUNC_IMPL(__imp__sub_82484208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,29884(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29884);
	// lwz r16,-15624(r7)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + -15624);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x82484218;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r27,124
	ctx.r30.s64 = ctx.r27.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824818e0
	ctx.lr = 0x82484250;
	sub_824818E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824818f0
	ctx.lr = 0x8248425C;
	sub_824818F0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r24,r3,29,3,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bne cr6,0x82484274
	if (!ctx.cr6.eq) goto loc_82484274;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82484274:
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// divwu r20,r21,r11
	ctx.r20.u32 = ctx.r21.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r25,r10,r11
	ctx.r25.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// subf r23,r25,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r25.s64;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f31,26856(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26856);
	// lfd f30,-4840(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
loc_824842A8:
	// lwz r9,672(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82484478
	if (ctx.cr6.eq) goto loc_82484478;
	// subf r23,r25,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r25.s64;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x82484480
	if (ctx.cr6.lt) goto loc_82484480;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r30,r8,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r8.s64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824842E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,116(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824842F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r10,r25,r24
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// lwz r3,668(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 668);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8248ba78
	ctx.lr = 0x82484328;
	sub_8248BA78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8248446c
	if (ctx.cr6.eq) goto loc_8248446C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82484384
	if (ctx.cr6.lt) goto loc_82484384;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82484384
	if (!ctx.cr6.eq) goto loc_82484384;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// lis r7,14470
	ctx.r7.s64 = 948305920;
	// ori r6,r7,22859
	ctx.r6.u64 = ctx.r7.u64 | 22859;
	// lis r5,13421
	ctx.r5.s64 = 879558656;
	// ori r4,r5,50646
	ctx.r4.u64 = ctx.r5.u64 | 50646;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// mulhd r3,r11,r6
	ctx.r3.s64 = __mulh(ctx.r11.s64, ctx.r6.s64);
	// sradi r11,r3,11
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 11;
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82484384:
	// lwz r10,672(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r9,672(r27)
	PPC_STORE_U32(ctx.r27.u32 + 672, ctx.r9.u32);
	// beq cr6,0x82484458
	if (ctx.cr6.eq) goto loc_82484458;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_824843CC:
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82484458
	if (!ctx.cr6.lt) goto loc_82484458;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r5,r9,0,8,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82484420
	if (ctx.cr6.eq) goto loc_82484420;
	// clrldi r3,r9,41
	ctx.r3.u64 = ctx.r9.u64 & 0x7FFFFF;
	// std r3,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmsub f12,f13,f31,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64 - ctx.f30.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x8248443c
	goto loc_8248443C;
loc_82484420:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f10,120(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f8,f9,f31
	ctx.f8.f64 = ctx.f9.f64 * ctx.f31.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8248443C:
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x824843cc
	goto loc_824843CC;
loc_82484458:
	// mullw r8,r25,r24
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mullw r7,r8,r26
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// stw r7,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r7.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824842a8
	goto loc_824842A8;
loc_8248446C:
	// lis r18,-32768
	ctx.r18.s64 = -2147483648;
	// ori r18,r18,16389
	ctx.r18.u64 = ctx.r18.u64 | 16389;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
loc_82484478:
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// bge cr6,0x82484488
	if (!ctx.cr6.lt) goto loc_82484488;
loc_82484480:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8248448c
	goto loc_8248448C;
loc_82484488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248448C:
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824844a8
	// ERROR 824844A8
	return;
}

__attribute__((alias("__imp__sub_82484210"))) PPC_WEAK_FUNC(sub_82484210);
PPC_FUNC_IMPL(__imp__sub_82484210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x82484218;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r27,124
	ctx.r30.s64 = ctx.r27.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824818e0
	ctx.lr = 0x82484250;
	sub_824818E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824818f0
	ctx.lr = 0x8248425C;
	sub_824818F0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r24,r3,29,3,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bne cr6,0x82484274
	if (!ctx.cr6.eq) goto loc_82484274;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82484274:
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// divwu r20,r21,r11
	ctx.r20.u32 = ctx.r21.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r25,r10,r11
	ctx.r25.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// subf r23,r25,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r25.s64;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f31,26856(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26856);
	// lfd f30,-4840(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
loc_824842A8:
	// lwz r9,672(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82484478
	if (ctx.cr6.eq) goto loc_82484478;
	// subf r23,r25,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r25.s64;
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x82484480
	if (ctx.cr6.lt) goto loc_82484480;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r30,r8,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r8.s64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824842E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,116(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824842F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r10,r25,r24
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// lwz r3,668(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 668);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8248ba78
	ctx.lr = 0x82484328;
	sub_8248BA78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8248446c
	if (ctx.cr6.eq) goto loc_8248446C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82484384
	if (ctx.cr6.lt) goto loc_82484384;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82484384
	if (!ctx.cr6.eq) goto loc_82484384;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// lis r7,14470
	ctx.r7.s64 = 948305920;
	// ori r6,r7,22859
	ctx.r6.u64 = ctx.r7.u64 | 22859;
	// lis r5,13421
	ctx.r5.s64 = 879558656;
	// ori r4,r5,50646
	ctx.r4.u64 = ctx.r5.u64 | 50646;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// mulhd r3,r11,r6
	ctx.r3.s64 = __mulh(ctx.r11.s64, ctx.r6.s64);
	// sradi r11,r3,11
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 11;
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82484384:
	// lwz r10,672(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r9,672(r27)
	PPC_STORE_U32(ctx.r27.u32 + 672, ctx.r9.u32);
	// beq cr6,0x82484458
	if (ctx.cr6.eq) goto loc_82484458;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_824843CC:
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82484458
	if (!ctx.cr6.lt) goto loc_82484458;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r5,r9,0,8,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82484420
	if (ctx.cr6.eq) goto loc_82484420;
	// clrldi r3,r9,41
	ctx.r3.u64 = ctx.r9.u64 & 0x7FFFFF;
	// std r3,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmsub f12,f13,f31,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64 - ctx.f30.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x8248443c
	goto loc_8248443C;
loc_82484420:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f10,120(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f8,f9,f31
	ctx.f8.f64 = ctx.f9.f64 * ctx.f31.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8248443C:
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x824843cc
	goto loc_824843CC;
loc_82484458:
	// mullw r8,r25,r24
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mullw r7,r8,r26
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// stw r7,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r7.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824842a8
	goto loc_824842A8;
loc_8248446C:
	// lis r18,-32768
	ctx.r18.s64 = -2147483648;
	// ori r18,r18,16389
	ctx.r18.u64 = ctx.r18.u64 | 16389;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
loc_82484478:
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// bge cr6,0x82484488
	if (!ctx.cr6.lt) goto loc_82484488;
loc_82484480:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8248448c
	goto loc_8248448C;
loc_82484488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248448C:
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824844a8
	goto loc_824844A8;
	// lis r18,-32768
	ctx.r18.s64 = -2147483648;
	// ori r18,r18,16389
	ctx.r18.u64 = ctx.r18.u64 | 16389;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
loc_824844A8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248449C"))) PPC_WEAK_FUNC(sub_8248449C);
PPC_FUNC_IMPL(__imp__sub_8248449C) {
	PPC_FUNC_PROLOGUE();
	// lis r18,-32768
	ctx.r18.s64 = -2147483648;
	// ori r18,r18,16389
	ctx.r18.u64 = ctx.r18.u64 | 16389;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824844BC"))) PPC_WEAK_FUNC(sub_824844BC);
PPC_FUNC_IMPL(__imp__sub_824844BC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824844C8"))) PPC_WEAK_FUNC(sub_824844C8);
PPC_FUNC_IMPL(__imp__sub_824844C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x824844D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// bgt cr6,0x82484578
	if (ctx.cr6.gt) goto loc_82484578;
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484518
	if (ctx.cr6.lt) goto loc_82484518;
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82484654
	if (!ctx.cr6.gt) goto loc_82484654;
loc_82484518:
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82484538
	if (ctx.cr6.eq) goto loc_82484538;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82484538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82484538:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82484584
	if (!ctx.cr6.lt) goto loc_82484584;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82484578
	if (ctx.cr6.eq) goto loc_82484578;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82484578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82484578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82484584:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8248459C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x824845d0
	if (!ctx.cr6.lt) goto loc_824845D0;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824845c4
	if (ctx.cr6.eq) goto loc_824845C4;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824845C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824845C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_824845D0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824845F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82484628
	if (!ctx.cr6.lt) goto loc_82484628;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8248461c
	if (ctx.cr6.eq) goto loc_8248461C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8248461C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8248461C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82484628:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82484648
	if (ctx.cr6.eq) goto loc_82484648;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82484648:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
loc_82484654:
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// subf r10,r30,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r30.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82484670
	if (!ctx.cr6.lt) goto loc_82484670;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82484670:
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248468C"))) PPC_WEAK_FUNC(sub_8248468C);
PPC_FUNC_IMPL(__imp__sub_8248468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484690"))) PPC_WEAK_FUNC(sub_82484690);
PPC_FUNC_IMPL(__imp__sub_82484690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,29884(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29884);
	// lwz r16,-15600(r7)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + -15600);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x824846A0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r25,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r25.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r30,124
	ctx.r29.s64 = ctx.r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824818e0
	ctx.lr = 0x824846DC;
	sub_824818E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824818f0
	ctx.lr = 0x824846E8;
	sub_824818F0(ctx, base);
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8248470c
	if (!ctx.cr6.lt) goto loc_8248470C;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_8248470C:
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824847d0
	if (ctx.cr6.lt) goto loc_824847D0;
	// lwz r10,672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82484740
	if (!ctx.cr6.gt) goto loc_82484740;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82484210
	ctx.lr = 0x82484738;
	sub_82484210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82484740:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824847d0
	if (ctx.cr6.lt) goto loc_824847D0;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824847d0
	if (!ctx.cr6.eq) goto loc_824847D0;
loc_82484754:
	// addi r29,r30,672
	ctx.r29.s64 = ctx.r30.s64 + 672;
	// lwz r3,668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8248b8c8
	ctx.lr = 0x82484764;
	sub_8248B8C8(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82484778
	if (!ctx.cr6.eq) goto loc_82484778;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82484754
	if (ctx.cr6.eq) goto loc_82484754;
loc_82484778:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824847ac
	if (!ctx.cr6.eq) goto loc_824847AC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824847a4
	if (ctx.cr6.lt) goto loc_824847A4;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82484210
	ctx.lr = 0x8248479C;
	sub_82484210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_824847A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82484740
	goto loc_82484740;
loc_824847AC:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x824847c8
	if (ctx.cr6.eq) goto loc_824847C8;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x824847c8
	if (ctx.cr6.eq) goto loc_824847C8;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x824847cc
	goto loc_824847CC;
loc_824847C8:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_824847CC:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_824847D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824847f0
	// ERROR 824847F0
	return;
}

__attribute__((alias("__imp__sub_82484698"))) PPC_WEAK_FUNC(sub_82484698);
PPC_FUNC_IMPL(__imp__sub_82484698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x824846A0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r25,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r25.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r30,124
	ctx.r29.s64 = ctx.r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824818e0
	ctx.lr = 0x824846DC;
	sub_824818E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824818f0
	ctx.lr = 0x824846E8;
	sub_824818F0(ctx, base);
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8248470c
	if (!ctx.cr6.lt) goto loc_8248470C;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_8248470C:
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824847d0
	if (ctx.cr6.lt) goto loc_824847D0;
	// lwz r10,672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82484740
	if (!ctx.cr6.gt) goto loc_82484740;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82484210
	ctx.lr = 0x82484738;
	sub_82484210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82484740:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824847d0
	if (ctx.cr6.lt) goto loc_824847D0;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824847d0
	if (!ctx.cr6.eq) goto loc_824847D0;
loc_82484754:
	// addi r29,r30,672
	ctx.r29.s64 = ctx.r30.s64 + 672;
	// lwz r3,668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8248b8c8
	ctx.lr = 0x82484764;
	sub_8248B8C8(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82484778
	if (!ctx.cr6.eq) goto loc_82484778;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82484754
	if (ctx.cr6.eq) goto loc_82484754;
loc_82484778:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824847ac
	if (!ctx.cr6.eq) goto loc_824847AC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824847a4
	if (ctx.cr6.lt) goto loc_824847A4;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82484210
	ctx.lr = 0x8248479C;
	sub_82484210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_824847A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82484740
	goto loc_82484740;
loc_824847AC:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x824847c8
	if (ctx.cr6.eq) goto loc_824847C8;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x824847c8
	if (ctx.cr6.eq) goto loc_824847C8;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x824847cc
	goto loc_824847CC;
loc_824847C8:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_824847CC:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_824847D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824847f0
	goto loc_824847F0;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r25,196(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
loc_824847F0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82484840
	if (ctx.cr6.lt) goto loc_82484840;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82484840
	if (ctx.cr6.eq) goto loc_82484840;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,116(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82484818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8248483C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82484840:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824847DC"))) PPC_WEAK_FUNC(sub_824847DC);
PPC_FUNC_IMPL(__imp__sub_824847DC) {
	PPC_FUNC_PROLOGUE();
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r25,196(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82484840
	if (ctx.cr6.lt) goto loc_82484840;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82484840
	if (ctx.cr6.eq) goto loc_82484840;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,116(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82484818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8248483C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82484840:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248484C"))) PPC_WEAK_FUNC(sub_8248484C);
PPC_FUNC_IMPL(__imp__sub_8248484C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82484858"))) PPC_WEAK_FUNC(sub_82484858);
PPC_FUNC_IMPL(__imp__sub_82484858) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x824844c8
	sub_824844C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82484864"))) PPC_WEAK_FUNC(sub_82484864);
PPC_FUNC_IMPL(__imp__sub_82484864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484868"))) PPC_WEAK_FUNC(sub_82484868);
PPC_FUNC_IMPL(__imp__sub_82484868) {
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
	// bl 0x824869c0
	ctx.lr = 0x82484880;
	sub_824869C0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82486c80
	ctx.lr = 0x82484888;
	sub_82486C80(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x824818f8
	ctx.lr = 0x82484890;
	sub_824818F8(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x8248bcf8
	ctx.lr = 0x82484898;
	sub_8248BCF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26864
	ctx.r11.s64 = ctx.r11.s64 + 26864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82489ee8
	ctx.lr = 0x824848AC;
	sub_82489EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824848D8"))) PPC_WEAK_FUNC(sub_824848D8);
PPC_FUNC_IMPL(__imp__sub_824848D8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26864
	ctx.r11.s64 = ctx.r11.s64 + 26864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82483d18
	ctx.lr = 0x82484904;
	sub_82483D18(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x8248bc08
	ctx.lr = 0x8248490C;
	sub_8248BC08(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82481840
	ctx.lr = 0x82484914;
	sub_82481840(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82486c38
	ctx.lr = 0x8248491C;
	sub_82486C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82486a08
	ctx.lr = 0x82484924;
	sub_82486A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82484944
	if (ctx.cr6.eq) goto loc_82484944;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x821fe818
	ctx.lr = 0x82484940;
	sub_821FE818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82484944:
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

__attribute__((alias("__imp__sub_8248495C"))) PPC_WEAK_FUNC(sub_8248495C);
PPC_FUNC_IMPL(__imp__sub_8248495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484960"))) PPC_WEAK_FUNC(sub_82484960);
PPC_FUNC_IMPL(__imp__sub_82484960) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// b 0x821f8968
	sub_821F8968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248496C"))) PPC_WEAK_FUNC(sub_8248496C);
PPC_FUNC_IMPL(__imp__sub_8248496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484970"))) PPC_WEAK_FUNC(sub_82484970);
PPC_FUNC_IMPL(__imp__sub_82484970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// std r11,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824849BC"))) PPC_WEAK_FUNC(sub_824849BC);
PPC_FUNC_IMPL(__imp__sub_824849BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824849C0"))) PPC_WEAK_FUNC(sub_824849C0);
PPC_FUNC_IMPL(__imp__sub_824849C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824849D0"))) PPC_WEAK_FUNC(sub_824849D0);
PPC_FUNC_IMPL(__imp__sub_824849D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x824849D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82484a58
	if (ctx.cr6.lt) goto loc_82484A58;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82484a58
	if (ctx.cr6.lt) goto loc_82484A58;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82484A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82484A58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82484A60"))) PPC_WEAK_FUNC(sub_82484A60);
PPC_FUNC_IMPL(__imp__sub_82484A60) {
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
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82484AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82484B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82484B1C"))) PPC_WEAK_FUNC(sub_82484B1C);
PPC_FUNC_IMPL(__imp__sub_82484B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484B20"))) PPC_WEAK_FUNC(sub_82484B20);
PPC_FUNC_IMPL(__imp__sub_82484B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82484B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484b60
	if (ctx.cr6.eq) goto loc_82484B60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82484B60:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484b80
	if (ctx.cr6.eq) goto loc_82484B80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82484B80:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484ba0
	if (ctx.cr6.eq) goto loc_82484BA0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82484B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82484BA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82484bc0
	if (ctx.cr6.eq) goto loc_82484BC0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82484BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82484BC0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82484be0
	if (ctx.cr6.eq) goto loc_82484BE0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_82484BE0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82484c00
	if (ctx.cr6.eq) goto loc_82484C00;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_82484C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82484C0C"))) PPC_WEAK_FUNC(sub_82484C0C);
PPC_FUNC_IMPL(__imp__sub_82484C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484C10"))) PPC_WEAK_FUNC(sub_82484C10);
PPC_FUNC_IMPL(__imp__sub_82484C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82484C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484c50
	if (ctx.cr6.eq) goto loc_82484C50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82484C50:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484c70
	if (ctx.cr6.eq) goto loc_82484C70;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82484C70:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484c90
	if (ctx.cr6.eq) goto loc_82484C90;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82484C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82484C90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82484cb0
	if (ctx.cr6.eq) goto loc_82484CB0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82484CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_82484CB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82484cd0
	if (ctx.cr6.eq) goto loc_82484CD0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82484CD0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82484cf0
	if (ctx.cr6.eq) goto loc_82484CF0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
loc_82484CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82484CFC"))) PPC_WEAK_FUNC(sub_82484CFC);
PPC_FUNC_IMPL(__imp__sub_82484CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82484D00"))) PPC_WEAK_FUNC(sub_82484D00);
PPC_FUNC_IMPL(__imp__sub_82484D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82484D08;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lfs f31,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f31.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82484d4c
	if (ctx.cr6.eq) goto loc_82484D4C;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82484D4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82484d84
	if (ctx.cr6.eq) goto loc_82484D84;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82484d84
	if (ctx.cr6.lt) goto loc_82484D84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82481768
	ctx.lr = 0x82484D64;
	sub_82481768(ctx, base);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82484D84:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82484db0
	if (ctx.cr6.eq) goto loc_82484DB0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82484db0
	if (ctx.cr6.lt) goto loc_82484DB0;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82484DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82484DB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82484e6c
	if (ctx.cr6.eq) goto loc_82484E6C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82484e6c
	if (ctx.cr6.lt) goto loc_82484E6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824818e0
	ctx.lr = 0x82484DC8;
	sub_824818E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824818f0
	ctx.lr = 0x82484DD4;
	sub_824818F0(ctx, base);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x82484de4
	if (!ctx.cr6.eq) goto loc_82484DE4;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x82484df0
	goto loc_82484DF0;
loc_82484DE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824818f0
	ctx.lr = 0x82484DEC;
	sub_824818F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82484DF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r31,r30,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x824818e8
	ctx.lr = 0x82484DFC;
	sub_824818E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// mulli r10,r11,8000
	ctx.r10.s64 = ctx.r11.s64 * 8000;
	// divwu r9,r10,r7
	ctx.r9.u32 = ctx.r10.u32 / ctx.r7.u32;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r9,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r9.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x8248c2a8
	ctx.lr = 0x82484E68;
	sub_8248C2A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82484E6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82484ef0
	if (ctx.cr6.eq) goto loc_82484EF0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82484ef0
	if (ctx.cr6.lt) goto loc_82484EF0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824818e0
	ctx.lr = 0x82484E84;
	sub_824818E0(ctx, base);
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82484ee8
	if (!ctx.cr6.eq) goto loc_82484EE8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824818e8
	ctx.lr = 0x82484E98;
	sub_824818E8(ctx, base);
	// clrlwi r7,r3,31
	ctx.r7.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82484ee8
	if (!ctx.cr6.eq) goto loc_82484EE8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824818e0
	ctx.lr = 0x82484EAC;
	sub_824818E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824818e8
	ctx.lr = 0x82484EB8;
	sub_824818E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,31,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x1FFFFFFF;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x8248c2a8
	ctx.lr = 0x82484EE0;
	sub_8248C2A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82484ef0
	goto loc_82484EF0;
loc_82484EE8:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16385
	ctx.r31.u64 = ctx.r31.u64 | 16385;
loc_82484EF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82484f14
	if (ctx.cr6.eq) goto loc_82484F14;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82484f30
	if (ctx.cr6.lt) goto loc_82484F30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,27012
	ctx.r4.s64 = ctx.r11.s64 + 27012;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,26996
	ctx.r3.s64 = ctx.r11.s64 + 26996;
	// bl 0x825c72ec
	ctx.lr = 0x82484F14;
	__imp__DbgPrint(ctx, base);
loc_82484F14:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82484f34
	if (ctx.cr6.lt) goto loc_82484F34;
	// stfs f31,328(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 328, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82484F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82484F34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82484F40"))) PPC_WEAK_FUNC(sub_82484F40);
PPC_FUNC_IMPL(__imp__sub_82484F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82484F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484f80
	if (ctx.cr6.eq) goto loc_82484F80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82484F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82485000
	if (ctx.cr6.lt) goto loc_82485000;
loc_82484F80:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484fa0
	if (ctx.cr6.eq) goto loc_82484FA0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82484F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82484FA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82485000
	if (ctx.cr6.lt) goto loc_82485000;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82484fc8
	if (ctx.cr6.eq) goto loc_82484FC8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82484FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82484FC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82485000
	if (ctx.cr6.lt) goto loc_82485000;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8248c1f0
	ctx.lr = 0x82484FD8;
	sub_8248C1F0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8248c1f0
	ctx.lr = 0x82484FE0;
	sub_8248C1F0(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x8248c1f0
	ctx.lr = 0x82484FE8;
	sub_8248C1F0(ctx, base);
	// std r29,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r29.u64);
	// std r29,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r29.u64);
	// stw r29,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r29.u32);
	// stw r29,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r29.u32);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
loc_82485000:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248500C"))) PPC_WEAK_FUNC(sub_8248500C);
PPC_FUNC_IMPL(__imp__sub_8248500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485010"))) PPC_WEAK_FUNC(sub_82485010);
PPC_FUNC_IMPL(__imp__sub_82485010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82485020"))) PPC_WEAK_FUNC(sub_82485020);
PPC_FUNC_IMPL(__imp__sub_82485020) {
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
	// bl 0x824869c0
	ctx.lr = 0x82485038;
	sub_824869C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,27056
	ctx.r11.s64 = ctx.r11.s64 + 27056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8248c208
	ctx.lr = 0x8248504C;
	sub_8248C208(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8248c208
	ctx.lr = 0x82485054;
	sub_8248C208(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x8248c208
	ctx.lr = 0x8248505C;
	sub_8248C208(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r11.u64);
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824850BC"))) PPC_WEAK_FUNC(sub_824850BC);
PPC_FUNC_IMPL(__imp__sub_824850BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824850C0"))) PPC_WEAK_FUNC(sub_824850C0);
PPC_FUNC_IMPL(__imp__sub_824850C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x824850C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8248510c
	if (ctx.cr6.eq) goto loc_8248510C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82485104
	if (ctx.cr6.eq) goto loc_82485104;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82485104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82485104:
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8248510C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8248513c
	if (ctx.cr6.eq) goto loc_8248513C;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82485134
	if (ctx.cr6.eq) goto loc_82485134;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82485134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82485134:
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
loc_8248513C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8248516c
	if (ctx.cr6.eq) goto loc_8248516C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82485164
	if (ctx.cr6.eq) goto loc_82485164;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82485164:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_8248516C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485178"))) PPC_WEAK_FUNC(sub_82485178);
PPC_FUNC_IMPL(__imp__sub_82485178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82485180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824851c4
	if (ctx.cr6.eq) goto loc_824851C4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824851bc
	if (ctx.cr6.eq) goto loc_824851BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824851BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824851BC:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_824851C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824851f4
	if (ctx.cr6.eq) goto loc_824851F4;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824851ec
	if (ctx.cr6.eq) goto loc_824851EC;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824851EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824851EC:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
loc_824851F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82485224
	if (ctx.cr6.eq) goto loc_82485224;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8248521c
	if (ctx.cr6.eq) goto loc_8248521C;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8248521C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8248521C:
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82485224:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485230"))) PPC_WEAK_FUNC(sub_82485230);
PPC_FUNC_IMPL(__imp__sub_82485230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82485238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82485270
	if (ctx.cr6.eq) goto loc_82485270;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8248526C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82485270:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82485294
	if (ctx.cr6.eq) goto loc_82485294;
	// addi r31,r30,140
	ctx.r31.s64 = ctx.r30.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82485290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82485294:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824852b8
	if (ctx.cr6.eq) goto loc_824852B8;
	// addi r31,r30,212
	ctx.r31.s64 = ctx.r30.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824852B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_824852B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824852C4"))) PPC_WEAK_FUNC(sub_824852C4);
PPC_FUNC_IMPL(__imp__sub_824852C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824852C8"))) PPC_WEAK_FUNC(sub_824852C8);
PPC_FUNC_IMPL(__imp__sub_824852C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blt cr6,0x824852e8
	if (ctx.cr6.lt) goto loc_824852E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_824852E8:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfs f13,328(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,-31380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82485334
	if (!ctx.cr6.gt) goto loc_82485334;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82485334:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,-5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5892);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// ble cr6,0x8248535c
	if (!ctx.cr6.gt) goto loc_8248535C;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8248535C:
	// li r7,4
	ctx.r7.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248536C"))) PPC_WEAK_FUNC(sub_8248536C);
PPC_FUNC_IMPL(__imp__sub_8248536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485370"))) PPC_WEAK_FUNC(sub_82485370);
PPC_FUNC_IMPL(__imp__sub_82485370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82485378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x824853cc
	if (!ctx.cr6.eq) goto loc_824853CC;
	// std r3,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r3.u64);
	// ld r8,288(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// cmpdi cr6,r8,22
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 22, ctx.xer);
	// blt cr6,0x824853c4
	if (ctx.cr6.lt) goto loc_824853C4;
	// ld r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// addi r7,r11,-22
	ctx.r7.s64 = ctx.r11.s64 + -22;
	// std r7,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r7.u64);
	// b 0x824853cc
	goto loc_824853CC;
loc_824853C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// std r6,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r6.u64);
loc_824853CC:
	// ld r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824853F4"))) PPC_WEAK_FUNC(sub_824853F4);
PPC_FUNC_IMPL(__imp__sub_824853F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824853F8"))) PPC_WEAK_FUNC(sub_824853F8);
PPC_FUNC_IMPL(__imp__sub_824853F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485410"))) PPC_WEAK_FUNC(sub_82485410);
PPC_FUNC_IMPL(__imp__sub_82485410) {
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
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r7.u32);
	// std r8,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r8.u64);
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mulhwu r6,r11,r9
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82485468
	if (!ctx.cr0.eq) goto loc_82485468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82485468:
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

__attribute__((alias("__imp__sub_8248547C"))) PPC_WEAK_FUNC(sub_8248547C);
PPC_FUNC_IMPL(__imp__sub_8248547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485480"))) PPC_WEAK_FUNC(sub_82485480);
PPC_FUNC_IMPL(__imp__sub_82485480) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485498"))) PPC_WEAK_FUNC(sub_82485498);
PPC_FUNC_IMPL(__imp__sub_82485498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r9.u32);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824854D0"))) PPC_WEAK_FUNC(sub_824854D0);
PPC_FUNC_IMPL(__imp__sub_824854D0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825af8e8
	ctx.lr = 0x824854E4;
	sub_825AF8E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825b01b8
	ctx.lr = 0x824854EC;
	sub_825B01B8(ctx, base);
	// lis r10,-7341
	ctx.r10.s64 = -481099776;
	// lis r8,8388
	ctx.r8.s64 = 549715968;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r9,r10,63439
	ctx.r9.u64 = ctx.r10.u64 | 63439;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ori r7,r8,39845
	ctx.r7.u64 = ctx.r8.u64 | 39845;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rotldi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// mulhd r4,r11,r6
	ctx.r4.s64 = __mulh(ctx.r11.s64, ctx.r6.s64);
	// sradi r11,r4,7
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s64 >> 7;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// rldicl r9,r11,1,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// andc r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// tdllei r3,0
	if (ctx.r3.u64 <= 0) __builtin_debugtrap();
	// divd r3,r10,r3
	ctx.r3.s64 = ctx.r10.s64 / ctx.r3.s64;
	// tdlgei r11,-1
	if (ctx.r11.u64 >= 4294967295) __builtin_debugtrap();
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485544"))) PPC_WEAK_FUNC(sub_82485544);
PPC_FUNC_IMPL(__imp__sub_82485544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485548"))) PPC_WEAK_FUNC(sub_82485548);
PPC_FUNC_IMPL(__imp__sub_82485548) {
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
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8248556C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// std r8,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r8.u64);
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

__attribute__((alias("__imp__sub_82485594"))) PPC_WEAK_FUNC(sub_82485594);
PPC_FUNC_IMPL(__imp__sub_82485594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485598"))) PPC_WEAK_FUNC(sub_82485598);
PPC_FUNC_IMPL(__imp__sub_82485598) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27056
	ctx.r11.s64 = ctx.r11.s64 + 27056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82484a60
	ctx.lr = 0x824855C4;
	sub_82484A60(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x8248c268
	ctx.lr = 0x824855CC;
	sub_8248C268(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8248c268
	ctx.lr = 0x824855D4;
	sub_8248C268(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8248c268
	ctx.lr = 0x824855DC;
	sub_8248C268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82486a08
	ctx.lr = 0x824855E4;
	sub_82486A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82485604
	if (ctx.cr6.eq) goto loc_82485604;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// bl 0x821fe818
	ctx.lr = 0x82485600;
	sub_821FE818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82485604:
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

__attribute__((alias("__imp__sub_8248561C"))) PPC_WEAK_FUNC(sub_8248561C);
PPC_FUNC_IMPL(__imp__sub_8248561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485620"))) PPC_WEAK_FUNC(sub_82485620);
PPC_FUNC_IMPL(__imp__sub_82485620) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// b 0x821f8968
	sub_821F8968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248562C"))) PPC_WEAK_FUNC(sub_8248562C);
PPC_FUNC_IMPL(__imp__sub_8248562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485630"))) PPC_WEAK_FUNC(sub_82485630);
PPC_FUNC_IMPL(__imp__sub_82485630) {
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
	// bl 0x8248d1a0
	ctx.lr = 0x82485648;
	sub_8248D1A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27176
	ctx.r11.s64 = ctx.r11.s64 + 27176;
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

__attribute__((alias("__imp__sub_8248566C"))) PPC_WEAK_FUNC(sub_8248566C);
PPC_FUNC_IMPL(__imp__sub_8248566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485670"))) PPC_WEAK_FUNC(sub_82485670);
PPC_FUNC_IMPL(__imp__sub_82485670) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27176
	ctx.r11.s64 = ctx.r11.s64 + 27176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8248fa20
	ctx.lr = 0x8248569C;
	sub_8248FA20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824856bc
	if (ctx.cr6.eq) goto loc_824856BC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// bl 0x821fe818
	ctx.lr = 0x824856B8;
	sub_821FE818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824856BC:
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

__attribute__((alias("__imp__sub_824856D4"))) PPC_WEAK_FUNC(sub_824856D4);
PPC_FUNC_IMPL(__imp__sub_824856D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824856D8"))) PPC_WEAK_FUNC(sub_824856D8);
PPC_FUNC_IMPL(__imp__sub_824856D8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// b 0x821f8968
	sub_821F8968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824856E4"))) PPC_WEAK_FUNC(sub_824856E4);
PPC_FUNC_IMPL(__imp__sub_824856E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824856E8"))) PPC_WEAK_FUNC(sub_824856E8);
PPC_FUNC_IMPL(__imp__sub_824856E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485704"))) PPC_WEAK_FUNC(sub_82485704);
PPC_FUNC_IMPL(__imp__sub_82485704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485708"))) PPC_WEAK_FUNC(sub_82485708);
PPC_FUNC_IMPL(__imp__sub_82485708) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485710"))) PPC_WEAK_FUNC(sub_82485710);
PPC_FUNC_IMPL(__imp__sub_82485710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82485718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8248574c
	if (ctx.cr6.lt) goto loc_8248574C;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8248574C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82485760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248576C"))) PPC_WEAK_FUNC(sub_8248576C);
PPC_FUNC_IMPL(__imp__sub_8248576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485770"))) PPC_WEAK_FUNC(sub_82485770);
PPC_FUNC_IMPL(__imp__sub_82485770) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8248578C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_824857A0"))) PPC_WEAK_FUNC(sub_824857A0);
PPC_FUNC_IMPL(__imp__sub_824857A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824857C0"))) PPC_WEAK_FUNC(sub_824857C0);
PPC_FUNC_IMPL(__imp__sub_824857C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824857D8"))) PPC_WEAK_FUNC(sub_824857D8);
PPC_FUNC_IMPL(__imp__sub_824857D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x824857E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ld r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82485810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82485824
	if (ctx.cr6.lt) goto loc_82485824;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8248582c
	if (!ctx.cr6.lt) goto loc_8248582C;
loc_82485824:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_8248582C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r8.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485844"))) PPC_WEAK_FUNC(sub_82485844);
PPC_FUNC_IMPL(__imp__sub_82485844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485848"))) PPC_WEAK_FUNC(sub_82485848);
PPC_FUNC_IMPL(__imp__sub_82485848) {
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
	// bl 0x824869c0
	ctx.lr = 0x82485860;
	sub_824869C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,27472
	ctx.r10.s64 = ctx.r11.s64 + 27472;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8248589C"))) PPC_WEAK_FUNC(sub_8248589C);
PPC_FUNC_IMPL(__imp__sub_8248589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824858A0"))) PPC_WEAK_FUNC(sub_824858A0);
PPC_FUNC_IMPL(__imp__sub_824858A0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824858D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82486a08
	ctx.lr = 0x824858DC;
	sub_82486A08(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824858fc
	if (ctx.cr6.eq) goto loc_824858FC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x821fe818
	ctx.lr = 0x824858F8;
	sub_821FE818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824858FC:
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

__attribute__((alias("__imp__sub_82485914"))) PPC_WEAK_FUNC(sub_82485914);
PPC_FUNC_IMPL(__imp__sub_82485914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485918"))) PPC_WEAK_FUNC(sub_82485918);
PPC_FUNC_IMPL(__imp__sub_82485918) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x821f8968
	sub_821F8968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485924"))) PPC_WEAK_FUNC(sub_82485924);
PPC_FUNC_IMPL(__imp__sub_82485924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485928"))) PPC_WEAK_FUNC(sub_82485928);
PPC_FUNC_IMPL(__imp__sub_82485928) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x821fe818
	sub_821FE818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485934"))) PPC_WEAK_FUNC(sub_82485934);
PPC_FUNC_IMPL(__imp__sub_82485934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485938"))) PPC_WEAK_FUNC(sub_82485938);
PPC_FUNC_IMPL(__imp__sub_82485938) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485940"))) PPC_WEAK_FUNC(sub_82485940);
PPC_FUNC_IMPL(__imp__sub_82485940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82485948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82485978
	if (ctx.cr6.lt) goto loc_82485978;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_82485978:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485980"))) PPC_WEAK_FUNC(sub_82485980);
PPC_FUNC_IMPL(__imp__sub_82485980) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824859b0
	if (ctx.cr6.eq) goto loc_824859B0;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x821fe818
	ctx.lr = 0x824859B0;
	sub_821FE818(ctx, base);
loc_824859B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824859DC"))) PPC_WEAK_FUNC(sub_824859DC);
PPC_FUNC_IMPL(__imp__sub_824859DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824859E0"))) PPC_WEAK_FUNC(sub_824859E0);
PPC_FUNC_IMPL(__imp__sub_824859E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824859FC"))) PPC_WEAK_FUNC(sub_824859FC);
PPC_FUNC_IMPL(__imp__sub_824859FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485A00"))) PPC_WEAK_FUNC(sub_82485A00);
PPC_FUNC_IMPL(__imp__sub_82485A00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82485a24
	if (ctx.cr6.eq) goto loc_82485A24;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82485a24
	if (!ctx.cr6.eq) goto loc_82485A24;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
loc_82485A24:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485A34"))) PPC_WEAK_FUNC(sub_82485A34);
PPC_FUNC_IMPL(__imp__sub_82485A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485A38"))) PPC_WEAK_FUNC(sub_82485A38);
PPC_FUNC_IMPL(__imp__sub_82485A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82485A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82485a78
	if (ctx.cr6.eq) goto loc_82485A78;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82485a98
	goto loc_82485A98;
loc_82485A78:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82485a94
	if (!ctx.cr6.gt) goto loc_82485A94;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82485a98
	goto loc_82485A98;
loc_82485A94:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82485A98:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82485AB0;
	sub_8259D3A0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485ACC"))) PPC_WEAK_FUNC(sub_82485ACC);
PPC_FUNC_IMPL(__imp__sub_82485ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485AD0"))) PPC_WEAK_FUNC(sub_82485AD0);
PPC_FUNC_IMPL(__imp__sub_82485AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82485AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82485b10
	if (ctx.cr6.eq) goto loc_82485B10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82485b30
	goto loc_82485B30;
loc_82485B10:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82485b2c
	if (!ctx.cr6.gt) goto loc_82485B2C;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82485b30
	goto loc_82485B30;
loc_82485B2C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82485B30:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82485B48;
	sub_8259D3A0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485B64"))) PPC_WEAK_FUNC(sub_82485B64);
PPC_FUNC_IMPL(__imp__sub_82485B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485B68"))) PPC_WEAK_FUNC(sub_82485B68);
PPC_FUNC_IMPL(__imp__sub_82485B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82485B7C"))) PPC_WEAK_FUNC(sub_82485B7C);
PPC_FUNC_IMPL(__imp__sub_82485B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485B80"))) PPC_WEAK_FUNC(sub_82485B80);
PPC_FUNC_IMPL(__imp__sub_82485B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485B90"))) PPC_WEAK_FUNC(sub_82485B90);
PPC_FUNC_IMPL(__imp__sub_82485B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485BAC"))) PPC_WEAK_FUNC(sub_82485BAC);
PPC_FUNC_IMPL(__imp__sub_82485BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485BB0"))) PPC_WEAK_FUNC(sub_82485BB0);
PPC_FUNC_IMPL(__imp__sub_82485BB0) {
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
	// bl 0x824869c0
	ctx.lr = 0x82485BC8;
	sub_824869C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,27576
	ctx.r10.s64 = ctx.r11.s64 + 27576;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82485C00"))) PPC_WEAK_FUNC(sub_82485C00);
PPC_FUNC_IMPL(__imp__sub_82485C00) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27576
	ctx.r11.s64 = ctx.r11.s64 + 27576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82485c3c
	if (ctx.cr6.eq) goto loc_82485C3C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x821fe818
	ctx.lr = 0x82485C3C;
	sub_821FE818(ctx, base);
loc_82485C3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82486a08
	ctx.lr = 0x82485C58;
	sub_82486A08(ctx, base);
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

__attribute__((alias("__imp__sub_82485C6C"))) PPC_WEAK_FUNC(sub_82485C6C);
PPC_FUNC_IMPL(__imp__sub_82485C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485C70"))) PPC_WEAK_FUNC(sub_82485C70);
PPC_FUNC_IMPL(__imp__sub_82485C70) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// b 0x821f8968
	sub_821F8968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485C7C"))) PPC_WEAK_FUNC(sub_82485C7C);
PPC_FUNC_IMPL(__imp__sub_82485C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485C80"))) PPC_WEAK_FUNC(sub_82485C80);
PPC_FUNC_IMPL(__imp__sub_82485C80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// std r11,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485CCC"))) PPC_WEAK_FUNC(sub_82485CCC);
PPC_FUNC_IMPL(__imp__sub_82485CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485CD0"))) PPC_WEAK_FUNC(sub_82485CD0);
PPC_FUNC_IMPL(__imp__sub_82485CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82485CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82485dd4
	if (ctx.cr6.lt) goto loc_82485DD4;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825af2f0
	ctx.lr = 0x82485D30;
	sub_825AF2F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82485d7c
	if (!ctx.cr6.eq) goto loc_82485D7C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82485D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82485dd0
	if (ctx.cr6.lt) goto loc_82485DD0;
loc_82485D5C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825af888
	ctx.lr = 0x82485D68;
	sub_825AF888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82485d84
	if (ctx.cr6.eq) goto loc_82485D84;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r7.u64);
	// b 0x82485d9c
	goto loc_82485D9C;
loc_82485D7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82485d5c
	goto loc_82485D5C;
loc_82485D84:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82485D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82485D9C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82485dd0
	if (ctx.cr6.lt) goto loc_82485DD0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82485DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82485DD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82485DD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485DDC"))) PPC_WEAK_FUNC(sub_82485DDC);
PPC_FUNC_IMPL(__imp__sub_82485DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485DE0"))) PPC_WEAK_FUNC(sub_82485DE0);
PPC_FUNC_IMPL(__imp__sub_82485DE0) {
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
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82485e28
	if (ctx.cr6.eq) goto loc_82485E28;
loc_82485E00:
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bge cr6,0x82485e28
	if (!ctx.cr6.lt) goto loc_82485E28;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82485e00
	if (!ctx.cr6.eq) goto loc_82485E00;
loc_82485E28:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r31,104(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82485E48;
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

__attribute__((alias("__imp__sub_82485E5C"))) PPC_WEAK_FUNC(sub_82485E5C);
PPC_FUNC_IMPL(__imp__sub_82485E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485E60"))) PPC_WEAK_FUNC(sub_82485E60);
PPC_FUNC_IMPL(__imp__sub_82485E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82485E68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82485ee0
	if (ctx.cr6.lt) goto loc_82485EE0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r28,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r28.u64);
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82485EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82485EE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485EE8"))) PPC_WEAK_FUNC(sub_82485EE8);
PPC_FUNC_IMPL(__imp__sub_82485EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82485EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// bne cr6,0x82485f18
	if (!ctx.cr6.eq) goto loc_82485F18;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82485F18:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// beq cr6,0x82485f2c
	if (ctx.cr6.eq) goto loc_82485F2C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82485f58
	goto loc_82485F58;
loc_82485F2C:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x821f8968
	ctx.lr = 0x82485F3C;
	sub_821F8968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// bne cr6,0x82485f50
	if (!ctx.cr6.eq) goto loc_82485F50;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82485F50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82486000
	if (ctx.cr6.lt) goto loc_82486000;
loc_82485F58:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82485fe0
	if (ctx.cr6.eq) goto loc_82485FE0;
loc_82485F64:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8248fad0
	ctx.lr = 0x82485F6C;
	sub_8248FAD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82486020
	if (ctx.cr6.eq) goto loc_82486020;
	// bl 0x8248fb78
	ctx.lr = 0x82485F78;
	sub_8248FB78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82486020
	if (ctx.cr6.eq) goto loc_82486020;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82485F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82485FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82486000
	if (ctx.cr6.lt) goto loc_82486000;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82485f64
	if (ctx.cr6.lt) goto loc_82485F64;
loc_82485FE0:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,116(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82485FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82486014
	if (!ctx.cr6.lt) goto loc_82486014;
loc_82486000:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82486014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82486014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82486020:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82486000
	goto loc_82486000;
}

__attribute__((alias("__imp__sub_8248602C"))) PPC_WEAK_FUNC(sub_8248602C);
PPC_FUNC_IMPL(__imp__sub_8248602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486030"))) PPC_WEAK_FUNC(sub_82486030);
PPC_FUNC_IMPL(__imp__sub_82486030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82486038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82486064
	if (ctx.cr6.eq) goto loc_82486064;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82486060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82486064:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824860a0
	if (ctx.cr6.eq) goto loc_824860A0;
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824860a0
	if (!ctx.cr6.eq) goto loc_824860A0;
	// bl 0x825aed30
	ctx.lr = 0x82486080;
	sub_825AED30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x824860a0
	if (!ctx.cr6.lt) goto loc_824860A0;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8248609C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_824860A0:
	// addi r29,r30,120
	ctx.r29.s64 = ctx.r30.s64 + 120;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824860e8
	if (ctx.cr6.eq) goto loc_824860E8;
loc_824860B0:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824860C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824860DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824860b0
	if (!ctx.cr6.eq) goto loc_824860B0;
loc_824860E8:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82486100
	if (ctx.cr6.eq) goto loc_82486100;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x821fe818
	ctx.lr = 0x82486100;
	sub_821FE818(ctx, base);
loc_82486100:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,108(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82486114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82486120"))) PPC_WEAK_FUNC(sub_82486120);
PPC_FUNC_IMPL(__imp__sub_82486120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82486128;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rldicr r10,r11,0,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF800;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// std r28,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r28.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// std r10,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// ble cr6,0x8248621c
	if (!ctx.cr6.gt) goto loc_8248621C;
loc_82486160:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82486174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82486190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r4,r28
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824861C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825af500
	ctx.lr = 0x824861DC;
	sub_825AF500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824861f8
	if (!ctx.cr6.eq) goto loc_824861F8;
	// bl 0x825af6c0
	ctx.lr = 0x824861E8;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82486228
	if (ctx.cr6.eq) goto loc_82486228;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8248625c
	if (!ctx.cr6.eq) goto loc_8248625C;
loc_824861F8:
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r5,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r5.u64);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82486160
	if (ctx.cr6.lt) goto loc_82486160;
loc_8248621C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82486220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82486228:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82486240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8248621c
	if (!ctx.cr6.eq) goto loc_8248621C;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8248625C:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82486274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82486288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82486220
	if (!ctx.cr6.eq) goto loc_82486220;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824862A0"))) PPC_WEAK_FUNC(sub_824862A0);
PPC_FUNC_IMPL(__imp__sub_824862A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x824862A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824863ac
	if (ctx.cr6.eq) goto loc_824863AC;
	// bl 0x825b4288
	ctx.lr = 0x824862C8;
	sub_825B4288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824862f4
	if (!ctx.cr6.eq) goto loc_824862F4;
	// bl 0x825af6c0
	ctx.lr = 0x824862D4;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x824862f4
	if (ctx.cr6.eq) goto loc_824862F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824862F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_824862F4:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x824863ac
	if (!ctx.cr6.gt) goto loc_824863AC;
loc_82486308:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8248631C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82486398
	if (!ctx.cr6.eq) goto loc_82486398;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82486338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825af7e0
	ctx.lr = 0x8248634C;
	sub_825AF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82486380
	if (!ctx.cr6.eq) goto loc_82486380;
	// bl 0x825af6c0
	ctx.lr = 0x82486358;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82486380
	if (ctx.cr6.eq) goto loc_82486380;
	// cmplwi cr6,r3,995
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 995, ctx.xer);
	// beq cr6,0x82486380
	if (ctx.cr6.eq) goto loc_82486380;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8248637C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82486380:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82486398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82486398:
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82486308
	if (ctx.cr6.lt) goto loc_82486308;
loc_824863AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// std r27,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r27.u64);
	// std r27,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r27.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824863C8"))) PPC_WEAK_FUNC(sub_824863C8);
PPC_FUNC_IMPL(__imp__sub_824863C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// ld r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// ld r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x82486404
	if (ctx.cr6.gt) goto loc_82486404;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82486404
	if (ctx.cr6.lt) goto loc_82486404;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// blr 
	return;
loc_82486404:
	// li r6,1
	ctx.r6.s64 = 1;
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486418"))) PPC_WEAK_FUNC(sub_82486418);
PPC_FUNC_IMPL(__imp__sub_82486418) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8248644c
	if (ctx.cr6.eq) goto loc_8248644C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8248644c
	if (!ctx.cr6.eq) goto loc_8248644C;
	// ld r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
	// blr 
	return;
loc_8248644C:
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r6,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r6.u64);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486464"))) PPC_WEAK_FUNC(sub_82486464);
PPC_FUNC_IMPL(__imp__sub_82486464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486468"))) PPC_WEAK_FUNC(sub_82486468);
PPC_FUNC_IMPL(__imp__sub_82486468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x82486470;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x824864c4
	if (ctx.cr6.lt) goto loc_824864C4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_824864C4:
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r6,r22,32
	ctx.r6.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r5,r6
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x824864ec
	if (!ctx.cr6.lt) goto loc_824864EC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824864EC:
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8248689c
	if (ctx.cr6.eq) goto loc_8248689C;
loc_824864F8:
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x82486898
	if (!ctx.cr6.lt) goto loc_82486898;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8248652c
	if (ctx.cr6.lt) goto loc_8248652C;
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x82486578
	if (ctx.cr6.lt) goto loc_82486578;
loc_8248652C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82486540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8248689c
	if (ctx.cr6.lt) goto loc_8248689C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,116(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82486560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8248689c
	if (ctx.cr6.lt) goto loc_8248689C;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8248689c
	if (!ctx.cr6.eq) goto loc_8248689C;
loc_82486578:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// tdllei r9,0
	if (ctx.r9.u64 <= 0) __builtin_debugtrap();
	// divdu r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 / ctx.r9.u64;
	// rotlwi r28,r8,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824865d0
	if (!ctx.cr6.gt) goto loc_824865D0;
	// subf. r7,r11,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x824865fc
	if (ctx.cr0.eq) goto loc_824865FC;
loc_824865AC:
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r3,r4,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r4.s64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x824865ac
	if (ctx.cr6.lt) goto loc_824865AC;
	// b 0x824865fc
	goto loc_824865FC;
loc_824865D0:
	// subf. r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x824865fc
	if (ctx.cr0.eq) goto loc_824865FC;
loc_824865DC:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r6,r28,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r28.s64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824865dc
	if (ctx.cr6.lt) goto loc_824865DC;
loc_824865FC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,56(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82486610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82486898
	if (!ctx.cr6.eq) goto loc_82486898;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82486780
	if (ctx.cr6.lt) goto loc_82486780;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8248662C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82486640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af7e0
	ctx.lr = 0x82486658;
	sub_825AF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82486764
	if (ctx.cr6.eq) goto loc_82486764;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82486678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r7,r11,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824866A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825af500
	ctx.lr = 0x824866BC;
	sub_825AF500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82486724
	if (!ctx.cr6.eq) goto loc_82486724;
	// bl 0x825af6c0
	ctx.lr = 0x824866C8;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x824866e8
	if (!ctx.cr6.eq) goto loc_824866E8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82486720
	goto loc_82486720;
loc_824866E8:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82486724
	if (ctx.cr6.eq) goto loc_82486724;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82486704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82486720:
	// bctrl 
	ctx.lr = 0x82486724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82486724:
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r3,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r3.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8248662c
	if (!ctx.cr6.gt) goto loc_8248662C;
	// b 0x82486780
	goto loc_82486780;
loc_82486764:
	// bl 0x825af6c0
	ctx.lr = 0x82486768;
	sub_825AF6C0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8248677C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82486780:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8248689c
	if (ctx.cr6.lt) goto loc_8248689C;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8248679C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824867B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825af7e0
	ctx.lr = 0x824867D4;
	sub_825AF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82486800
	if (!ctx.cr6.eq) goto loc_82486800;
	// bl 0x825af6c0
	ctx.lr = 0x824867E0;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82486800
	if (ctx.cr6.eq) goto loc_82486800;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824867FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82486800:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// ld r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mullw r9,r11,r6
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8248682c
	if (!ctx.cr6.gt) goto loc_8248682C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8248682C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82486898
	if (ctx.cr6.lt) goto loc_82486898;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82486898
	if (ctx.cr6.eq) goto loc_82486898;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82486850
	if (!ctx.cr6.gt) goto loc_82486850;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82486850:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82486864;
	sub_8259D3A0(ctx, base);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// std r7,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r7.u64);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r6.u32);
	// blt cr6,0x8248689c
	if (ctx.cr6.lt) goto loc_8248689C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x824864f8
	if (!ctx.cr6.eq) goto loc_824864F8;
	// b 0x8248689c
	goto loc_8248689C;
loc_82486898:
	// stw r21,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_8248689C:
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r5,r22
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x824868b0
	if (ctx.cr6.lt) goto loc_824868B0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x824868b4
	if (!ctx.cr6.lt) goto loc_824868B4;
loc_824868B0:
	// stw r21,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_824868B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824868C0"))) PPC_WEAK_FUNC(sub_824868C0);
PPC_FUNC_IMPL(__imp__sub_824868C0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824868C8"))) PPC_WEAK_FUNC(sub_824868C8);
PPC_FUNC_IMPL(__imp__sub_824868C8) {
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
	// bl 0x824869c0
	ctx.lr = 0x824868E0;
	sub_824869C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,27672
	ctx.r10.s64 = ctx.r11.s64 + 27672;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8248694C"))) PPC_WEAK_FUNC(sub_8248694C);
PPC_FUNC_IMPL(__imp__sub_8248694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486950"))) PPC_WEAK_FUNC(sub_82486950);
PPC_FUNC_IMPL(__imp__sub_82486950) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27672
	ctx.r11.s64 = ctx.r11.s64 + 27672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82486030
	ctx.lr = 0x8248697C;
	sub_82486030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82486a08
	ctx.lr = 0x82486984;
	sub_82486A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824869a4
	if (ctx.cr6.eq) goto loc_824869A4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x821fe818
	ctx.lr = 0x824869A0;
	sub_821FE818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824869A4:
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

__attribute__((alias("__imp__sub_824869BC"))) PPC_WEAK_FUNC(sub_824869BC);
PPC_FUNC_IMPL(__imp__sub_824869BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824869C0"))) PPC_WEAK_FUNC(sub_824869C0);
PPC_FUNC_IMPL(__imp__sub_824869C0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// bl 0x825c71ac
	ctx.lr = 0x824869EC;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82486A04"))) PPC_WEAK_FUNC(sub_82486A04);
PPC_FUNC_IMPL(__imp__sub_82486A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486A08"))) PPC_WEAK_FUNC(sub_82486A08);
PPC_FUNC_IMPL(__imp__sub_82486A08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486A14"))) PPC_WEAK_FUNC(sub_82486A14);
PPC_FUNC_IMPL(__imp__sub_82486A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486A18"))) PPC_WEAK_FUNC(sub_82486A18);
PPC_FUNC_IMPL(__imp__sub_82486A18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_82486A1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82486a1c
	if (!ctx.cr0.eq) goto loc_82486A1C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486A40"))) PPC_WEAK_FUNC(sub_82486A40);
PPC_FUNC_IMPL(__imp__sub_82486A40) {
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
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82486a84
	if (!ctx.cr6.eq) goto loc_82486A84;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82486A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82486A84:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82486a84
	if (!ctx.cr0.eq) goto loc_82486A84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486AB4"))) PPC_WEAK_FUNC(sub_82486AB4);
PPC_FUNC_IMPL(__imp__sub_82486AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486AB8"))) PPC_WEAK_FUNC(sub_82486AB8);
PPC_FUNC_IMPL(__imp__sub_82486AB8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x825c719c
	ctx.lr = 0x82486ACC;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82486AE0"))) PPC_WEAK_FUNC(sub_82486AE0);
PPC_FUNC_IMPL(__imp__sub_82486AE0) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x825c74cc
	ctx.lr = 0x82486AF4;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82486b10
	if (ctx.cr6.eq) goto loc_82486B10;
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
loc_82486B10:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486B28"))) PPC_WEAK_FUNC(sub_82486B28);
PPC_FUNC_IMPL(__imp__sub_82486B28) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x825c718c
	ctx.lr = 0x82486B3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82486B50"))) PPC_WEAK_FUNC(sub_82486B50);
PPC_FUNC_IMPL(__imp__sub_82486B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82486b88
	if (ctx.cr6.eq) goto loc_82486B88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
loc_82486B88:
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486B9C"))) PPC_WEAK_FUNC(sub_82486B9C);
PPC_FUNC_IMPL(__imp__sub_82486B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486BA0"))) PPC_WEAK_FUNC(sub_82486BA0);
PPC_FUNC_IMPL(__imp__sub_82486BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82486be0
	if (ctx.cr6.eq) goto loc_82486BE0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82486bc8
	if (!ctx.cr6.eq) goto loc_82486BC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82486bc4
	if (!ctx.cr6.eq) goto loc_82486BC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82486BC4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82486BC8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_82486BE0:
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486BF0"))) PPC_WEAK_FUNC(sub_82486BF0);
PPC_FUNC_IMPL(__imp__sub_82486BF0) {
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
	// bl 0x825af6c0
	ctx.lr = 0x82486C00;
	sub_825AF6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82486c10
	if (!ctx.cr6.gt) goto loc_82486C10;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_82486C10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C20"))) PPC_WEAK_FUNC(sub_82486C20);
PPC_FUNC_IMPL(__imp__sub_82486C20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C34"))) PPC_WEAK_FUNC(sub_82486C34);
PPC_FUNC_IMPL(__imp__sub_82486C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486C38"))) PPC_WEAK_FUNC(sub_82486C38);
PPC_FUNC_IMPL(__imp__sub_82486C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,27800
	ctx.r11.s64 = ctx.r11.s64 + 27800;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82486a08
	sub_82486A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82486C48"))) PPC_WEAK_FUNC(sub_82486C48);
PPC_FUNC_IMPL(__imp__sub_82486C48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C5C"))) PPC_WEAK_FUNC(sub_82486C5C);
PPC_FUNC_IMPL(__imp__sub_82486C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486C60"))) PPC_WEAK_FUNC(sub_82486C60);
PPC_FUNC_IMPL(__imp__sub_82486C60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C68"))) PPC_WEAK_FUNC(sub_82486C68);
PPC_FUNC_IMPL(__imp__sub_82486C68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C70"))) PPC_WEAK_FUNC(sub_82486C70);
PPC_FUNC_IMPL(__imp__sub_82486C70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C78"))) PPC_WEAK_FUNC(sub_82486C78);
PPC_FUNC_IMPL(__imp__sub_82486C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486C80"))) PPC_WEAK_FUNC(sub_82486C80);
PPC_FUNC_IMPL(__imp__sub_82486C80) {
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
	// bl 0x824869c0
	ctx.lr = 0x82486C98;
	sub_824869C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,27800
	ctx.r10.s64 = ctx.r11.s64 + 27800;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82486CCC"))) PPC_WEAK_FUNC(sub_82486CCC);
PPC_FUNC_IMPL(__imp__sub_82486CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486CD0"))) PPC_WEAK_FUNC(sub_82486CD0);
PPC_FUNC_IMPL(__imp__sub_82486CD0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27800
	ctx.r11.s64 = ctx.r11.s64 + 27800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82486a08
	ctx.lr = 0x82486CFC;
	sub_82486A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82486d1c
	if (ctx.cr6.eq) goto loc_82486D1C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32771
	ctx.r4.u64 = ctx.r4.u64 | 32771;
	// bl 0x821fe818
	ctx.lr = 0x82486D18;
	sub_821FE818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82486D1C:
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

__attribute__((alias("__imp__sub_82486D34"))) PPC_WEAK_FUNC(sub_82486D34);
PPC_FUNC_IMPL(__imp__sub_82486D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486D38"))) PPC_WEAK_FUNC(sub_82486D38);
PPC_FUNC_IMPL(__imp__sub_82486D38) {
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
	// bl 0x82489e70
	ctx.lr = 0x82486D50;
	sub_82489E70(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82486D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82486D8C"))) PPC_WEAK_FUNC(sub_82486D8C);
PPC_FUNC_IMPL(__imp__sub_82486D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486D90"))) PPC_WEAK_FUNC(sub_82486D90);
PPC_FUNC_IMPL(__imp__sub_82486D90) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486D98"))) PPC_WEAK_FUNC(sub_82486D98);
PPC_FUNC_IMPL(__imp__sub_82486D98) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82486DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82486dd8
	if (ctx.cr6.eq) goto loc_82486DD8;
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
loc_82486DD8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486DF0"))) PPC_WEAK_FUNC(sub_82486DF0);
PPC_FUNC_IMPL(__imp__sub_82486DF0) {
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
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82486E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82486e38
	if (ctx.cr6.eq) goto loc_82486E38;
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
loc_82486E38:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486E50"))) PPC_WEAK_FUNC(sub_82486E50);
PPC_FUNC_IMPL(__imp__sub_82486E50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r4.u32);
	// stw r5,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486E64"))) PPC_WEAK_FUNC(sub_82486E64);
PPC_FUNC_IMPL(__imp__sub_82486E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486E68"))) PPC_WEAK_FUNC(sub_82486E68);
PPC_FUNC_IMPL(__imp__sub_82486E68) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// bl 0x82481758
	ctx.lr = 0x82486E7C;
	sub_82481758(ctx, base);
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

__attribute__((alias("__imp__sub_82486E90"))) PPC_WEAK_FUNC(sub_82486E90);
PPC_FUNC_IMPL(__imp__sub_82486E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82486E98;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82490518
	ctx.lr = 0x82486ED0;
	sub_82490518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82486f84
	if (ctx.cr6.lt) goto loc_82486F84;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82486EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82486f84
	if (ctx.cr6.lt) goto loc_82486F84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x82490508
	ctx.lr = 0x82486F18;
	sub_82490508(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82486f84
	if (ctx.cr6.lt) goto loc_82486F84;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82486F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82486f84
	if (ctx.cr6.lt) goto loc_82486F84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r24.u32);
	// stw r23,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r23.u32);
	// stw r26,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r26.u32);
	// stw r7,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82486F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82486F84:
	// lis r5,-32688
	ctx.r5.s64 = -2142240768;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82486ff8
	if (ctx.cr6.eq) goto loc_82486FF8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82486ff8
	if (!ctx.cr6.lt) goto loc_82486FF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82486fc8
	if (ctx.cr6.eq) goto loc_82486FC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82486fc8
	if (ctx.cr6.eq) goto loc_82486FC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82486FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x82486FC8;
	sub_82490380(ctx, base);
loc_82486FC8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82486ff8
	if (ctx.cr6.eq) goto loc_82486FF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82486ff8
	if (ctx.cr6.eq) goto loc_82486FF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82486FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x82486FF8;
	sub_82490380(ctx, base);
loc_82486FF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82487004"))) PPC_WEAK_FUNC(sub_82487004);
PPC_FUNC_IMPL(__imp__sub_82487004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487008"))) PPC_WEAK_FUNC(sub_82487008);
PPC_FUNC_IMPL(__imp__sub_82487008) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82487060
	if (ctx.cr6.eq) goto loc_82487060;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82487050
	if (ctx.cr6.eq) goto loc_82487050;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8248704C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487050:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x8248705C;
	sub_82490380(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487060:
	// lwz r3,572(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 572);
	// bl 0x824908b8
	ctx.lr = 0x82487068;
	sub_824908B8(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,568(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 568);
	// bl 0x824908b8
	ctx.lr = 0x82487074;
	sub_824908B8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8248709c
	if (ctx.cr6.eq) goto loc_8248709C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x82487098;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8248709C:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824870e0
	if (ctx.cr6.eq) goto loc_824870E0;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824870cc
	if (ctx.cr6.eq) goto loc_824870CC;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824870C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_824870CC:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x824870DC;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_824870E0:
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82487100
	if (ctx.cr6.eq) goto loc_82487100;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x824870FC;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487100:
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82487144
	if (ctx.cr6.eq) goto loc_82487144;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82487130
	if (ctx.cr6.eq) goto loc_82487130;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x8248712C;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487130:
	// addi r5,r11,580
	ctx.r5.s64 = ctx.r11.s64 + 580;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x82487140;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487144:
	// lwz r8,584(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824871f8
	if (ctx.cr6.eq) goto loc_824871F8;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82487174
	if (ctx.cr6.eq) goto loc_82487174;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x82487170;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487174:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82487198
	if (ctx.cr6.eq) goto loc_82487198;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x82487194;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82487198:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824871bc
	if (ctx.cr6.eq) goto loc_824871BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x824871B8;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_824871BC:
	// lwz r3,584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x824871e4
	if (ctx.cr6.eq) goto loc_824871E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x824871E0;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_824871E4:
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x824871F4;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_824871F8:
	// addi r5,r11,612
	ctx.r5.s64 = ctx.r11.s64 + 612;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248721c
	if (ctx.cr6.eq) goto loc_8248721C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x82487214;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8248721C:
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248723c
	if (ctx.cr6.eq) goto loc_8248723C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x82490380
	ctx.lr = 0x82487238;
	sub_82490380(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8248723C:
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82487258
	if (ctx.cr6.eq) goto loc_82487258;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x8248ff28
	ctx.lr = 0x82487250;
	sub_8248FF28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82487258:
	// lwz r4,640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82487274
	if (ctx.cr6.eq) goto loc_82487274;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x8248ff28
	ctx.lr = 0x8248726C;
	sub_8248FF28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82487274:
	// lwz r4,644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82487290
	if (ctx.cr6.eq) goto loc_82487290;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x8248ff28
	ctx.lr = 0x82487288;
	sub_8248FF28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82487290:
	// lwz r4,648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824872ac
	if (ctx.cr6.eq) goto loc_824872AC;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x8248ff28
	ctx.lr = 0x824872A4;
	sub_8248FF28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824872AC:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x824872BC;
	sub_82490380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_824872D4"))) PPC_WEAK_FUNC(sub_824872D4);
PPC_FUNC_IMPL(__imp__sub_824872D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824872D8"))) PPC_WEAK_FUNC(sub_824872D8);
PPC_FUNC_IMPL(__imp__sub_824872D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82490798
	ctx.lr = 0x8248730C;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82487354
	if (ctx.cr6.lt) goto loc_82487354;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82490798
	ctx.lr = 0x82487324;
	sub_82490798(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82487348
	if (ctx.cr6.eq) goto loc_82487348;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82487348
	if (ctx.cr6.eq) goto loc_82487348;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x82490718
	ctx.lr = 0x82487348;
	sub_82490718(ctx, base);
loc_82487348:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82490718
	ctx.lr = 0x82487354;
	sub_82490718(ctx, base);
loc_82487354:
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

__attribute__((alias("__imp__sub_8248736C"))) PPC_WEAK_FUNC(sub_8248736C);
PPC_FUNC_IMPL(__imp__sub_8248736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487370"))) PPC_WEAK_FUNC(sub_82487370);
PPC_FUNC_IMPL(__imp__sub_82487370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x82487378;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r31.u32);
	// clrldi r26,r26,5
	ctx.r26.u64 = ctx.r26.u64 & 0x7FFFFFFFFFFFFFF;
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// beq cr6,0x824873e0
	if (ctx.cr6.eq) goto loc_824873E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x824873e8
	if (!ctx.cr6.eq) goto loc_824873E8;
loc_824873E0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r11.u32);
loc_824873E8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r17,20(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82487404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82487464
	if (!ctx.cr6.eq) goto loc_82487464;
	// lwz r8,632(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82487458
	if (ctx.cr6.eq) goto loc_82487458;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_82487424:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x824907c0
	ctx.lr = 0x82487438;
	sub_824907C0(ctx, base);
	// lis r7,-32688
	ctx.r7.s64 = -2142240768;
	// ori r18,r7,22
	ctx.r18.u64 = ctx.r7.u64 | 22;
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82487478
	if (!ctx.cr6.eq) goto loc_82487478;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,167
	ctx.r3.u64 = ctx.r3.u64 | 167;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_82487458:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_82487464:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge cr6,0x82487424
	if (!ctx.cr6.lt) goto loc_82487424;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_82487478:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// lis r6,-32688
	ctx.r6.s64 = -2142240768;
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r5,80
	ctx.r5.s64 = 5242880;
	// stw r31,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// ori r19,r6,11
	ctx.r19.u64 = ctx.r6.u64 | 11;
	// ori r20,r5,11
	ctx.r20.u64 = ctx.r5.u64 | 11;
	// li r16,6
	ctx.r16.s64 = 6;
loc_8248749C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82487764
	if (ctx.cr6.eq) goto loc_82487764;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// bl 0x82490798
	ctx.lr = 0x824874C4;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82490c78
	ctx.lr = 0x824874E4;
	sub_82490C78(ctx, base);
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x82487530
	if (!ctx.cr6.eq) goto loc_82487530;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82487524
	if (!ctx.cr6.eq) goto loc_82487524;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82487524
	if (!ctx.cr6.eq) goto loc_82487524;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82491500
	ctx.lr = 0x82487510;
	sub_82491500(ctx, base);
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824877ac
	if (!ctx.cr6.eq) goto loc_824877AC;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r23.u32);
loc_82487524:
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
	// stw r31,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// b 0x82487764
	goto loc_82487764;
loc_82487530:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// lwz r7,532(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x82487564
	if (!ctx.cr6.eq) goto loc_82487564;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r3,20(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpd cr6,r4,r3
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r3.s64, ctx.xer);
	// ble cr6,0x82487564
	if (!ctx.cr6.gt) goto loc_82487564;
	// stw r16,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r16.u32);
loc_82487564:
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82487594
	if (ctx.cr6.eq) goto loc_82487594;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824875a8
	if (!ctx.cr6.eq) goto loc_824875A8;
loc_82487594:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x82490798
	ctx.lr = 0x824875A4;
	sub_82490798(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_824875A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82487690
	if (!ctx.cr6.eq) goto loc_82487690;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824875d4
	if (!ctx.cr6.eq) goto loc_824875D4;
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_824875D4:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82487644
	if (ctx.cr6.lt) goto loc_82487644;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r31.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// bl 0x824872d8
	ctx.lr = 0x8248763C;
	sub_824872D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
loc_82487644:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82487658:
	// lwz r4,556(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82487740
	if (!ctx.cr6.eq) goto loc_82487740;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrldi r10,r17,32
	ctx.r10.u64 = ctx.r17.u64 & 0xFFFFFFFF;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpd cr6,r10,r26
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x82487764
	if (ctx.cr6.gt) goto loc_82487764;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82487764
	if (ctx.cr6.eq) goto loc_82487764;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// b 0x82487758
	goto loc_82487758;
loc_82487690:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82487658
	if (!ctx.cr6.eq) goto loc_82487658;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82487658
	if (ctx.cr6.eq) goto loc_82487658;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82487658
	if (ctx.cr6.lt) goto loc_82487658;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824876f8
	if (ctx.cr6.eq) goto loc_824876F8;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 20);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824876f8
	if (!ctx.cr6.eq) goto loc_824876F8;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r31.u8);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
loc_824876F8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r31.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r31.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r31.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// bl 0x824872d8
	ctx.lr = 0x82487730;
	sub_824872D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x82487764
	goto loc_82487764;
loc_82487740:
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x82487764
	if (ctx.cr6.gt) goto loc_82487764;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82487764
	if (ctx.cr6.eq) goto loc_82487764;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82487758:
	// lwz r25,68(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_82487764:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82490830
	ctx.lr = 0x82487778;
	sub_82490830(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8248749c
	if (!ctx.cr6.eq) goto loc_8248749C;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x824908a0
	ctx.lr = 0x8248778C;
	sub_824908A0(ctx, base);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x824877d0
	if (!ctx.cr6.eq) goto loc_824877D0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x824877ec
	if (!ctx.cr6.eq) goto loc_824877EC;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_824877AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r27,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r27.u32);
	// bl 0x82491340
	ctx.lr = 0x824877BC;
	sub_82491340(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x824908a0
	ctx.lr = 0x824877C8;
	sub_824908A0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_824877D0:
	// lis r7,-32688
	ctx.r7.s64 = -2142240768;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8248785c
	if (ctx.cr6.eq) goto loc_8248785C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8248785c
	if (!ctx.cr6.eq) goto loc_8248785C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82487878
	if (ctx.cr6.eq) goto loc_82487878;
loc_824877EC:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwz r3,608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82490050
	ctx.lr = 0x8248780C;
	sub_82490050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// lwz r30,332(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82491340
	ctx.lr = 0x82487824;
	sub_82491340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8248788c
	if (ctx.cr6.lt) goto loc_8248788C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x82490798
	ctx.lr = 0x8248783C;
	sub_82490798(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r22.u32);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82487874
	if (ctx.cr6.eq) goto loc_82487874;
	// stw r24,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r24.u32);
	// b 0x82487878
	goto loc_82487878;
loc_8248785C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x824877ec
	if (!ctx.cr6.eq) goto loc_824877EC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_82487874:
	// stw r31,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
loc_82487878:
	// lwz r6,532(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x8248788c
	if (!ctx.cr6.eq) goto loc_8248788C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_8248788C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82487894"))) PPC_WEAK_FUNC(sub_82487894);
PPC_FUNC_IMPL(__imp__sub_82487894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487898"))) PPC_WEAK_FUNC(sub_82487898);
PPC_FUNC_IMPL(__imp__sub_82487898) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824878cc
	if (!ctx.cr6.eq) goto loc_824878CC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// b 0x824878f0
	goto loc_824878F0;
loc_824878CC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82490d20
	ctx.lr = 0x824878D4;
	sub_82490D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824878f0
	if (ctx.cr6.lt) goto loc_824878F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824878f0
	if (!ctx.cr6.eq) goto loc_824878F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r10.u32);
loc_824878F0:
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

__attribute__((alias("__imp__sub_82487908"))) PPC_WEAK_FUNC(sub_82487908);
PPC_FUNC_IMPL(__imp__sub_82487908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82487910;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// clrldi r27,r27,5
	ctx.r27.u64 = ctx.r27.u64 & 0x7FFFFFFFFFFFFFF;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bne cr6,0x82487ccc
	if (!ctx.cr6.eq) goto loc_82487CCC;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// bgt cr6,0x82487b40
	if (ctx.cr6.gt) goto loc_82487B40;
	// beq cr6,0x82487ccc
	if (ctx.cr6.eq) goto loc_82487CCC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824879dc
	if (ctx.cr6.gt) goto loc_824879DC;
	// beq cr6,0x82487ccc
	if (ctx.cr6.eq) goto loc_82487CCC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824879a4
	if (ctx.cr6.eq) goto loc_824879A4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82487ca0
	if (!ctx.cr6.eq) goto loc_82487CA0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_824879A4:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,540(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r6,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r6.u32);
	// stw r4,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r4.u32);
	// beq cr6,0x824879d0
	if (ctx.cr6.eq) goto loc_824879D0;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_824879D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_824879DC:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82487ca0
	if (!ctx.cr6.eq) goto loc_82487CA0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x824907c0
	ctx.lr = 0x824879F8;
	sub_824907C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r26,r3,22
	ctx.r26.u64 = ctx.r3.u64 | 22;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82487a18
	if (!ctx.cr6.eq) goto loc_82487A18;
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,167
	ctx.r31.u64 = ctx.r31.u64 | 167;
	// b 0x82487cb0
	goto loc_82487CB0;
loc_82487A18:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82487cb0
	if (ctx.cr6.lt) goto loc_82487CB0;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r25,r11,11
	ctx.r25.u64 = ctx.r11.u64 | 11;
loc_82487A30:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82487cb0
	if (ctx.cr6.lt) goto loc_82487CB0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82487ae0
	if (ctx.cr6.eq) goto loc_82487AE0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82490798
	ctx.lr = 0x82487A58;
	sub_82490798(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82487cb0
	if (ctx.cr6.lt) goto loc_82487CB0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82490c78
	ctx.lr = 0x82487A78;
	sub_82490C78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82487a8c
	if (!ctx.cr6.eq) goto loc_82487A8C;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// b 0x82487ae0
	goto loc_82487AE0;
loc_82487A8C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82487cb0
	if (ctx.cr6.lt) goto loc_82487CB0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x82487ab4
	if (!ctx.cr6.gt) goto loc_82487AB4;
	// stw r24,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r24.u32);
loc_82487AB4:
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r27.s64, ctx.xer);
	// bge cr6,0x82487ac0
	if (!ctx.cr6.lt) goto loc_82487AC0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82487AC0:
	// cmpd cr6,r10,r28
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r28.s64, ctx.xer);
	// ble cr6,0x82487acc
	if (!ctx.cr6.gt) goto loc_82487ACC;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82487ACC:
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r5,r27,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r27.s64;
	// cmpd cr6,r5,r6
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r6.s64, ctx.xer);
	// ble cr6,0x82487ae0
	if (!ctx.cr6.gt) goto loc_82487AE0;
	// stw r24,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r24.u32);
loc_82487AE0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82490830
	ctx.lr = 0x82487AF4;
	sub_82490830(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82487a30
	if (!ctx.cr6.eq) goto loc_82487A30;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x824908a0
	ctx.lr = 0x82487B0C;
	sub_824908A0(ctx, base);
	// lwz r4,588(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82487b30
	if (ctx.cr6.eq) goto loc_82487B30;
	// lwz r3,632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82487b28
	if (!ctx.cr6.eq) goto loc_82487B28;
	// stw r24,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r24.u32);
loc_82487B28:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// b 0x82487cb0
	goto loc_82487CB0;
loc_82487B30:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82487B40:
	// addis r11,r4,-11
	ctx.r11.s64 = ctx.r4.s64 + -720896;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bgt cr6,0x82487ca0
	if (ctx.cr6.gt) goto loc_82487CA0;
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,31588
	ctx.r12.s64 = ctx.r12.s64 + 31588;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82487C28;
	case 1:
		goto loc_82487CA0;
	case 2:
		goto loc_82487CA0;
	case 3:
		goto loc_82487CA0;
	case 4:
		goto loc_82487CA0;
	case 5:
		goto loc_82487CA0;
	case 6:
		goto loc_82487CA0;
	case 7:
		goto loc_82487CA0;
	case 8:
		goto loc_82487CA0;
	case 9:
		goto loc_82487CA0;
	case 10:
		goto loc_82487CA0;
	case 11:
		goto loc_82487CA0;
	case 12:
		goto loc_82487CA0;
	case 13:
		goto loc_82487CA0;
	case 14:
		goto loc_82487CA0;
	case 15:
		goto loc_82487CA0;
	case 16:
		goto loc_82487C50;
	case 17:
		goto loc_82487CA0;
	case 18:
		goto loc_82487CA0;
	case 19:
		goto loc_82487CA0;
	case 20:
		goto loc_82487CA0;
	case 21:
		goto loc_82487CA0;
	case 22:
		goto loc_82487CA0;
	case 23:
		goto loc_82487CA0;
	case 24:
		goto loc_82487CA0;
	case 25:
		goto loc_82487CA0;
	case 26:
		goto loc_82487CA0;
	case 27:
		goto loc_82487CA0;
	case 28:
		goto loc_82487CA0;
	case 29:
		goto loc_82487CA0;
	case 30:
		goto loc_82487CA0;
	case 31:
		goto loc_82487CA0;
	case 32:
		goto loc_82487C68;
	case 33:
		goto loc_82487CA0;
	case 34:
		goto loc_82487CA0;
	case 35:
		goto loc_82487CA0;
	case 36:
		goto loc_82487CA0;
	case 37:
		goto loc_82487CA0;
	case 38:
		goto loc_82487CA0;
	case 39:
		goto loc_82487CA0;
	case 40:
		goto loc_82487CA0;
	case 41:
		goto loc_82487CA0;
	case 42:
		goto loc_82487CA0;
	case 43:
		goto loc_82487CA0;
	case 44:
		goto loc_82487CA0;
	case 45:
		goto loc_82487CA0;
	case 46:
		goto loc_82487CA0;
	case 47:
		goto loc_82487CA0;
	case 48:
		goto loc_82487C80;
	default:
		__builtin_unreachable();
	}
	// lwz r18,31784(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31784);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31824(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31824);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31848);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31904(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31904);
	// lwz r18,31872(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31872);
loc_82487C28:
	// lhz r11,626(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 626);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lbz r10,629(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 629);
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lbz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 628);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82487C50:
	// lhz r8,624(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 624);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82487C68:
	// lwz r7,620(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82487C80:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// lwz r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// bl 0x8259d3a0
	ctx.lr = 0x82487C90;
	sub_8259D3A0(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82487CA0:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ori r31,r31,178
	ctx.r31.u64 = ctx.r31.u64 | 178;
	// bne cr6,0x82487ccc
	if (!ctx.cr6.eq) goto loc_82487CCC;
loc_82487CB0:
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82487ccc
	if (ctx.cr6.eq) goto loc_82487CCC;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82487ccc
	if (ctx.cr6.eq) goto loc_82487CCC;
	// bl 0x824908a0
	ctx.lr = 0x82487CCC;
	sub_824908A0(ctx, base);
loc_82487CCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82487CD8"))) PPC_WEAK_FUNC(sub_82487CD8);
PPC_FUNC_IMPL(__imp__sub_82487CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82487de8
	if (ctx.cr6.gt) {
		sub_82487DE8(ctx, base);
		return;
	}
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,32004
	ctx.r12.s64 = ctx.r12.s64 + 32004;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82487D74
		return;
	case 1:
		// ERROR: 0x82487D84
		return;
	case 2:
		// ERROR: 0x82487D94
		return;
	case 3:
		// ERROR: 0x82487DA4
		return;
	case 4:
		// ERROR: 0x82487DB0
		return;
	case 5:
		// ERROR: 0x82487DBC
		return;
	case 6:
		// ERROR: 0x82487DD0
		return;
	case 7:
		// ERROR: 0x82487DDC
		return;
	case 8:
		// ERROR: 0x82487D34
		return;
	case 9:
		// ERROR: 0x82487D5C
		return;
	case 10:
		// ERROR: 0x82487DC8
		return;
	case 11:
		// ERROR: 0x82487D68
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82487D04"))) PPC_WEAK_FUNC(sub_82487D04);
PPC_FUNC_IMPL(__imp__sub_82487D04) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,32116(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32116);
	// lwz r18,32132(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32132);
	// lwz r18,32148(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32148);
	// lwz r18,32164(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32164);
	// lwz r18,32176(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32176);
	// lwz r18,32188(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32188);
	// lwz r18,32208(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32208);
	// lwz r18,32220(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32220);
	// lwz r18,32052(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32052);
	// lwz r18,32092(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32092);
	// lwz r18,32200(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32200);
	// lwz r18,32104(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32104);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r11,r11,22857
	ctx.r11.u64 = ctx.r11.u64 | 22857;
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82487d4c
	if (ctx.cr6.eq) goto loc_82487D4C;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82487D4C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82487d58
	if (ctx.cr6.eq) goto loc_82487D58;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_82487D58:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487D5C"))) PPC_WEAK_FUNC(sub_82487D5C);
PPC_FUNC_IMPL(__imp__sub_82487D5C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// b 0x82487d3c
	// ERROR 82487D3C
	return;
}

__attribute__((alias("__imp__sub_82487D68"))) PPC_WEAK_FUNC(sub_82487D68);
PPC_FUNC_IMPL(__imp__sub_82487D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// b 0x82487d3c
	// ERROR 82487D3C
	return;
}

__attribute__((alias("__imp__sub_82487D74"))) PPC_WEAK_FUNC(sub_82487D74);
PPC_FUNC_IMPL(__imp__sub_82487D74) {
	PPC_FUNC_PROLOGUE();
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487D84"))) PPC_WEAK_FUNC(sub_82487D84);
PPC_FUNC_IMPL(__imp__sub_82487D84) {
	PPC_FUNC_PROLOGUE();
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22869
	ctx.r11.u64 = ctx.r11.u64 | 22869;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487D94"))) PPC_WEAK_FUNC(sub_82487D94);
PPC_FUNC_IMPL(__imp__sub_82487D94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487DA4"))) PPC_WEAK_FUNC(sub_82487DA4);
PPC_FUNC_IMPL(__imp__sub_82487DA4) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487DB0"))) PPC_WEAK_FUNC(sub_82487DB0);
PPC_FUNC_IMPL(__imp__sub_82487DB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487DBC"))) PPC_WEAK_FUNC(sub_82487DBC);
PPC_FUNC_IMPL(__imp__sub_82487DBC) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487DC8"))) PPC_WEAK_FUNC(sub_82487DC8);
PPC_FUNC_IMPL(__imp__sub_82487DC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82487d3c
	// ERROR 82487D3C
	return;
}

__attribute__((alias("__imp__sub_82487DD0"))) PPC_WEAK_FUNC(sub_82487DD0);
PPC_FUNC_IMPL(__imp__sub_82487DD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487DDC"))) PPC_WEAK_FUNC(sub_82487DDC);
PPC_FUNC_IMPL(__imp__sub_82487DDC) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82487d40
	// ERROR 82487D40
	return;
}

__attribute__((alias("__imp__sub_82487DE8"))) PPC_WEAK_FUNC(sub_82487DE8);
PPC_FUNC_IMPL(__imp__sub_82487DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487DF4"))) PPC_WEAK_FUNC(sub_82487DF4);
PPC_FUNC_IMPL(__imp__sub_82487DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487DF8"))) PPC_WEAK_FUNC(sub_82487DF8);
PPC_FUNC_IMPL(__imp__sub_82487DF8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82487e84
	if (ctx.cr6.eq) goto loc_82487E84;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82487e84
	if (ctx.cr6.eq) goto loc_82487E84;
	// lwz r11,528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82487e84
	if (ctx.cr6.eq) goto loc_82487E84;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82487E28:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82487e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82487E28;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// stb r6,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r6.u8);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82487E84:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487E8C"))) PPC_WEAK_FUNC(sub_82487E8C);
PPC_FUNC_IMPL(__imp__sub_82487E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487E90"))) PPC_WEAK_FUNC(sub_82487E90);
PPC_FUNC_IMPL(__imp__sub_82487E90) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82487f10
	if (ctx.cr6.eq) goto loc_82487F10;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82487f10
	if (ctx.cr6.eq) goto loc_82487F10;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x82490270
	ctx.lr = 0x82487ECC;
	sub_82490270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,608(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x82487008
	ctx.lr = 0x82487ED8;
	sub_82487008(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82487ef8
	if (ctx.cr6.eq) goto loc_82487EF8;
	// bl 0x82492268
	ctx.lr = 0x82487EE8;
	sub_82492268(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82490380
	ctx.lr = 0x82487EF8;
	sub_82490380(ctx, base);
loc_82487EF8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x824903c8
	ctx.lr = 0x82487F08;
	sub_824903C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82487f14
	goto loc_82487F14;
loc_82487F10:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82487F14:
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

__attribute__((alias("__imp__sub_82487F2C"))) PPC_WEAK_FUNC(sub_82487F2C);
PPC_FUNC_IMPL(__imp__sub_82487F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487F30"))) PPC_WEAK_FUNC(sub_82487F30);
PPC_FUNC_IMPL(__imp__sub_82487F30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x82487ff8
	if (ctx.cr6.gt) {
		sub_82487FF8(ctx, base);
		return;
	}
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,32592
	ctx.r12.s64 = ctx.r12.s64 + 32592;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		// ERROR: 0x82487F88
		return;
	case 1:
		// ERROR: 0x82487F90
		return;
	case 2:
		// ERROR: 0x82487F98
		return;
	case 3:
		// ERROR: 0x82487FA0
		return;
	case 4:
		// ERROR: 0x82487FA8
		return;
	case 5:
		// ERROR: 0x82487FB0
		return;
	case 6:
		// ERROR: 0x82487FB8
		return;
	case 7:
		// ERROR: 0x82487FC0
		return;
	case 8:
		// ERROR: 0x82487FC8
		return;
	case 9:
		// ERROR: 0x82487FD0
		return;
	case 10:
		// ERROR: 0x82487FD8
		return;
	case 11:
		// ERROR: 0x82487FE0
		return;
	case 12:
		// ERROR: 0x82487FE8
		return;
	case 13:
		// ERROR: 0x82487FF0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82487F50"))) PPC_WEAK_FUNC(sub_82487F50);
PPC_FUNC_IMPL(__imp__sub_82487F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,32648(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32648);
	// lwz r18,32656(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32656);
	// lwz r18,32664(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32664);
	// lwz r18,32672(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32672);
	// lwz r18,32680(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32680);
	// lwz r18,32688(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32688);
	// lwz r18,32696(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32696);
	// lwz r18,32704(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32704);
	// lwz r18,32712(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32712);
	// lwz r18,32720(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32720);
	// lwz r18,32728(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32728);
	// lwz r18,32736(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32736);
	// lwz r18,32744(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32744);
	// lwz r18,32752(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32752);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487F90"))) PPC_WEAK_FUNC(sub_82487F90);
PPC_FUNC_IMPL(__imp__sub_82487F90) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487F98"))) PPC_WEAK_FUNC(sub_82487F98);
PPC_FUNC_IMPL(__imp__sub_82487F98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FA0"))) PPC_WEAK_FUNC(sub_82487FA0);
PPC_FUNC_IMPL(__imp__sub_82487FA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FA8"))) PPC_WEAK_FUNC(sub_82487FA8);
PPC_FUNC_IMPL(__imp__sub_82487FA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FB0"))) PPC_WEAK_FUNC(sub_82487FB0);
PPC_FUNC_IMPL(__imp__sub_82487FB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FB8"))) PPC_WEAK_FUNC(sub_82487FB8);
PPC_FUNC_IMPL(__imp__sub_82487FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FC0"))) PPC_WEAK_FUNC(sub_82487FC0);
PPC_FUNC_IMPL(__imp__sub_82487FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FC8"))) PPC_WEAK_FUNC(sub_82487FC8);
PPC_FUNC_IMPL(__imp__sub_82487FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FD0"))) PPC_WEAK_FUNC(sub_82487FD0);
PPC_FUNC_IMPL(__imp__sub_82487FD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FD8"))) PPC_WEAK_FUNC(sub_82487FD8);
PPC_FUNC_IMPL(__imp__sub_82487FD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FE0"))) PPC_WEAK_FUNC(sub_82487FE0);
PPC_FUNC_IMPL(__imp__sub_82487FE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FE8"))) PPC_WEAK_FUNC(sub_82487FE8);
PPC_FUNC_IMPL(__imp__sub_82487FE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FF0"))) PPC_WEAK_FUNC(sub_82487FF0);
PPC_FUNC_IMPL(__imp__sub_82487FF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487FF8"))) PPC_WEAK_FUNC(sub_82487FF8);
PPC_FUNC_IMPL(__imp__sub_82487FF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488000"))) PPC_WEAK_FUNC(sub_82488000);
PPC_FUNC_IMPL(__imp__sub_82488000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824883b8
	if (ctx.cr6.gt) {
		sub_824883B8(ctx, base);
		return;
	}
	// beq cr6,0x824883b0
	if (ctx.cr6.eq) {
		sub_824883B0(ctx, base);
		return;
	}
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r11,r10,12
	ctx.r11.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824880b4
	if (ctx.cr6.gt) goto loc_824880B4;
	// beq cr6,0x824880ac
	if (ctx.cr6.eq) goto loc_824880AC;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8248806c
	if (ctx.cr6.gt) goto loc_8248806C;
	// beq cr6,0x8248809c
	if (ctx.cr6.eq) goto loc_8248809C;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// ori r8,r9,16389
	ctx.r8.u64 = ctx.r9.u64 | 16389;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824880a4
	if (ctx.cr6.eq) goto loc_824880A4;
	// addis r11,r3,32761
	ctx.r11.s64 = ctx.r3.s64 + 2147024896;
	// addic. r11,r11,-14
	ctx.xer.ca = ctx.r11.u32 > 13;
	ctx.r11.s64 = ctx.r11.s64 + -14;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82488064
	if (ctx.cr0.eq) goto loc_82488064;
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x82488484
	if (!ctx.cr6.eq) {
		// ERROR 82488484
		return;
	}
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82488064:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8248806C:
	// lis r7,-32688
	ctx.r7.s64 = -2142240768;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82488484
	if (ctx.cr6.lt) {
		// ERROR 82488484
		return;
	}
	// lis r5,-32688
	ctx.r5.s64 = -2142240768;
	// ori r4,r5,3
	ctx.r4.u64 = ctx.r5.u64 | 3;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x824880a4
	if (!ctx.cr6.gt) goto loc_824880A4;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82488484
	if (!ctx.cr6.eq) {
		// ERROR 82488484
		return;
	}
loc_8248809C:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_824880A4:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
loc_824880AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824880B4:
	// addis r11,r3,32688
	ctx.r11.s64 = ctx.r3.s64 + 2142240768;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// bgt cr6,0x82488484
	if (ctx.cr6.gt) {
		// ERROR 82488484
		return;
	}
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-32548
	ctx.r12.s64 = ctx.r12.s64 + -32548;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82488390
		return;
	case 1:
		// ERROR: 0x82488398
		return;
	case 2:
		// ERROR: 0x82488398
		return;
	case 3:
		// ERROR: 0x82488398
		return;
	case 4:
		// ERROR: 0x82488398
		return;
	case 5:
		// ERROR: 0x82488398
		return;
	case 6:
		// ERROR: 0x82488398
		return;
	case 7:
		// ERROR: 0x82488398
		return;
	case 8:
		// ERROR: 0x82488398
		return;
	case 9:
		// ERROR: 0x82488484
		return;
	case 10:
		// ERROR: 0x824883A0
		return;
	case 11:
		// ERROR: 0x824883A0
		return;
	case 12:
		// ERROR: 0x82488484
		return;
	case 13:
		// ERROR: 0x82488484
		return;
	case 14:
		// ERROR: 0x82488484
		return;
	case 15:
		// ERROR: 0x82488484
		return;
	case 16:
		// ERROR: 0x82488484
		return;
	case 17:
		// ERROR: 0x82488484
		return;
	case 18:
		// ERROR: 0x82488484
		return;
	case 19:
		// ERROR: 0x82488484
		return;
	case 20:
		// ERROR: 0x82488484
		return;
	case 21:
		// ERROR: 0x82488484
		return;
	case 22:
		// ERROR: 0x82488484
		return;
	case 23:
		// ERROR: 0x82488484
		return;
	case 24:
		// ERROR: 0x82488484
		return;
	case 25:
		// ERROR: 0x82488484
		return;
	case 26:
		// ERROR: 0x82488484
		return;
	case 27:
		// ERROR: 0x82488484
		return;
	case 28:
		// ERROR: 0x82488484
		return;
	case 29:
		// ERROR: 0x82488484
		return;
	case 30:
		// ERROR: 0x82488484
		return;
	case 31:
		// ERROR: 0x82488484
		return;
	case 32:
		// ERROR: 0x82488484
		return;
	case 33:
		// ERROR: 0x82488484
		return;
	case 34:
		// ERROR: 0x82488484
		return;
	case 35:
		// ERROR: 0x82488484
		return;
	case 36:
		// ERROR: 0x82488484
		return;
	case 37:
		// ERROR: 0x82488484
		return;
	case 38:
		// ERROR: 0x82488484
		return;
	case 39:
		// ERROR: 0x82488484
		return;
	case 40:
		// ERROR: 0x82488484
		return;
	case 41:
		// ERROR: 0x82488484
		return;
	case 42:
		// ERROR: 0x82488484
		return;
	case 43:
		// ERROR: 0x82488484
		return;
	case 44:
		// ERROR: 0x82488484
		return;
	case 45:
		// ERROR: 0x82488484
		return;
	case 46:
		// ERROR: 0x82488484
		return;
	case 47:
		// ERROR: 0x82488484
		return;
	case 48:
		// ERROR: 0x82488484
		return;
	case 49:
		// ERROR: 0x82488484
		return;
	case 50:
		// ERROR: 0x82488484
		return;
	case 51:
		// ERROR: 0x82488484
		return;
	case 52:
		// ERROR: 0x82488484
		return;
	case 53:
		// ERROR: 0x82488484
		return;
	case 54:
		// ERROR: 0x82488484
		return;
	case 55:
		// ERROR: 0x82488484
		return;
	case 56:
		// ERROR: 0x82488484
		return;
	case 57:
		// ERROR: 0x82488484
		return;
	case 58:
		// ERROR: 0x82488484
		return;
	case 59:
		// ERROR: 0x82488484
		return;
	case 60:
		// ERROR: 0x82488484
		return;
	case 61:
		// ERROR: 0x82488484
		return;
	case 62:
		// ERROR: 0x82488484
		return;
	case 63:
		// ERROR: 0x82488484
		return;
	case 64:
		// ERROR: 0x82488484
		return;
	case 65:
		// ERROR: 0x82488484
		return;
	case 66:
		// ERROR: 0x82488484
		return;
	case 67:
		// ERROR: 0x82488484
		return;
	case 68:
		// ERROR: 0x82488484
		return;
	case 69:
		// ERROR: 0x82488484
		return;
	case 70:
		// ERROR: 0x82488484
		return;
	case 71:
		// ERROR: 0x82488484
		return;
	case 72:
		// ERROR: 0x82488484
		return;
	case 73:
		// ERROR: 0x82488484
		return;
	case 74:
		// ERROR: 0x82488484
		return;
	case 75:
		// ERROR: 0x82488484
		return;
	case 76:
		// ERROR: 0x82488484
		return;
	case 77:
		// ERROR: 0x82488484
		return;
	case 78:
		// ERROR: 0x82488484
		return;
	case 79:
		// ERROR: 0x82488484
		return;
	case 80:
		// ERROR: 0x82488484
		return;
	case 81:
		// ERROR: 0x82488484
		return;
	case 82:
		// ERROR: 0x82488484
		return;
	case 83:
		// ERROR: 0x82488484
		return;
	case 84:
		// ERROR: 0x82488484
		return;
	case 85:
		// ERROR: 0x82488484
		return;
	case 86:
		// ERROR: 0x82488484
		return;
	case 87:
		// ERROR: 0x82488484
		return;
	case 88:
		// ERROR: 0x82488484
		return;
	case 89:
		// ERROR: 0x82488484
		return;
	case 90:
		// ERROR: 0x82488484
		return;
	case 91:
		// ERROR: 0x82488484
		return;
	case 92:
		// ERROR: 0x82488484
		return;
	case 93:
		// ERROR: 0x82488484
		return;
	case 94:
		// ERROR: 0x82488484
		return;
	case 95:
		// ERROR: 0x82488484
		return;
	case 96:
		// ERROR: 0x82488484
		return;
	case 97:
		// ERROR: 0x82488484
		return;
	case 98:
		// ERROR: 0x82488484
		return;
	case 99:
		// ERROR: 0x82488484
		return;
	case 100:
		// ERROR: 0x82488484
		return;
	case 101:
		// ERROR: 0x82488484
		return;
	case 102:
		// ERROR: 0x82488484
		return;
	case 103:
		// ERROR: 0x82488484
		return;
	case 104:
		// ERROR: 0x82488484
		return;
	case 105:
		// ERROR: 0x82488484
		return;
	case 106:
		// ERROR: 0x82488484
		return;
	case 107:
		// ERROR: 0x82488484
		return;
	case 108:
		// ERROR: 0x82488484
		return;
	case 109:
		// ERROR: 0x82488484
		return;
	case 110:
		// ERROR: 0x82488484
		return;
	case 111:
		// ERROR: 0x82488484
		return;
	case 112:
		// ERROR: 0x82488484
		return;
	case 113:
		// ERROR: 0x82488484
		return;
	case 114:
		// ERROR: 0x82488484
		return;
	case 115:
		// ERROR: 0x82488484
		return;
	case 116:
		// ERROR: 0x82488484
		return;
	case 117:
		// ERROR: 0x82488484
		return;
	case 118:
		// ERROR: 0x82488484
		return;
	case 119:
		// ERROR: 0x82488484
		return;
	case 120:
		// ERROR: 0x82488484
		return;
	case 121:
		// ERROR: 0x82488484
		return;
	case 122:
		// ERROR: 0x82488484
		return;
	case 123:
		// ERROR: 0x82488484
		return;
	case 124:
		// ERROR: 0x82488484
		return;
	case 125:
		// ERROR: 0x82488484
		return;
	case 126:
		// ERROR: 0x82488484
		return;
	case 127:
		// ERROR: 0x82488484
		return;
	case 128:
		// ERROR: 0x82488484
		return;
	case 129:
		// ERROR: 0x82488484
		return;
	case 130:
		// ERROR: 0x82488484
		return;
	case 131:
		// ERROR: 0x82488484
		return;
	case 132:
		// ERROR: 0x82488484
		return;
	case 133:
		// ERROR: 0x82488484
		return;
	case 134:
		// ERROR: 0x82488484
		return;
	case 135:
		// ERROR: 0x82488484
		return;
	case 136:
		// ERROR: 0x82488484
		return;
	case 137:
		// ERROR: 0x82488484
		return;
	case 138:
		// ERROR: 0x82488484
		return;
	case 139:
		// ERROR: 0x82488484
		return;
	case 140:
		// ERROR: 0x82488484
		return;
	case 141:
		// ERROR: 0x82488484
		return;
	case 142:
		// ERROR: 0x82488484
		return;
	case 143:
		// ERROR: 0x82488484
		return;
	case 144:
		// ERROR: 0x82488484
		return;
	case 145:
		// ERROR: 0x82488484
		return;
	case 146:
		// ERROR: 0x82488484
		return;
	case 147:
		// ERROR: 0x82488484
		return;
	case 148:
		// ERROR: 0x82488484
		return;
	case 149:
		// ERROR: 0x82488484
		return;
	case 150:
		// ERROR: 0x82488484
		return;
	case 151:
		// ERROR: 0x82488484
		return;
	case 152:
		// ERROR: 0x82488484
		return;
	case 153:
		// ERROR: 0x82488484
		return;
	case 154:
		// ERROR: 0x824883A8
		return;
	case 155:
		// ERROR: 0x824883A8
		return;
	case 156:
		// ERROR: 0x82488484
		return;
	case 157:
		// ERROR: 0x82488484
		return;
	case 158:
		// ERROR: 0x82488484
		return;
	case 159:
		// ERROR: 0x82488484
		return;
	case 160:
		// ERROR: 0x82488484
		return;
	case 161:
		// ERROR: 0x82488484
		return;
	case 162:
		// ERROR: 0x82488484
		return;
	case 163:
		// ERROR: 0x82488484
		return;
	case 164:
		// ERROR: 0x82488484
		return;
	case 165:
		// ERROR: 0x82488484
		return;
	case 166:
		// ERROR: 0x82488484
		return;
	case 167:
		// ERROR: 0x82488484
		return;
	case 168:
		// ERROR: 0x82488484
		return;
	case 169:
		// ERROR: 0x82488484
		return;
	case 170:
		// ERROR: 0x82488388
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_824880DC"))) PPC_WEAK_FUNC(sub_824880DC);
PPC_FUNC_IMPL(__imp__sub_824880DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-31856(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31856);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31848(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31848);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31840(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31840);
	// lwz r18,-31840(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31840);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31832(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31832);
	// lwz r18,-31832(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31832);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31864(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31864);
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488390"))) PPC_WEAK_FUNC(sub_82488390);
PPC_FUNC_IMPL(__imp__sub_82488390) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488398"))) PPC_WEAK_FUNC(sub_82488398);
PPC_FUNC_IMPL(__imp__sub_82488398) {
	PPC_FUNC_PROLOGUE();
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824883A0"))) PPC_WEAK_FUNC(sub_824883A0);
PPC_FUNC_IMPL(__imp__sub_824883A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824883A8"))) PPC_WEAK_FUNC(sub_824883A8);
PPC_FUNC_IMPL(__imp__sub_824883A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824883B0"))) PPC_WEAK_FUNC(sub_824883B0);
PPC_FUNC_IMPL(__imp__sub_824883B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824883B8"))) PPC_WEAK_FUNC(sub_824883B8);
PPC_FUNC_IMPL(__imp__sub_824883B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32672
	ctx.r9.s64 = -2141192192;
	// ori r11,r9,8
	ctx.r11.u64 = ctx.r9.u64 | 8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82488448
	if (ctx.cr6.gt) {
		sub_82488448(ctx, base);
		return;
	}
	// beq cr6,0x82488440
	if (ctx.cr6.eq) {
		sub_82488440(ctx, base);
		return;
	}
	// addis r11,r3,32672
	ctx.r11.s64 = ctx.r3.s64 + 2141192192;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82488484
	if (ctx.cr6.gt) {
		// ERROR 82488484
		return;
	}
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-31760
	ctx.r12.s64 = ctx.r12.s64 + -31760;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82488410
		return;
	case 1:
		// ERROR: 0x82488484
		return;
	case 2:
		// ERROR: 0x82488484
		return;
	case 3:
		// ERROR: 0x82488418
		return;
	case 4:
		// ERROR: 0x82488420
		return;
	case 5:
		// ERROR: 0x82488428
		return;
	case 6:
		// ERROR: 0x82488430
		return;
	case 7:
		// ERROR: 0x82488438
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_824883F0"))) PPC_WEAK_FUNC(sub_824883F0);
PPC_FUNC_IMPL(__imp__sub_824883F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-31728(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31728);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31612(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31612);
	// lwz r18,-31720(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31720);
	// lwz r18,-31712(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31712);
	// lwz r18,-31704(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31704);
	// lwz r18,-31696(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31696);
	// lwz r18,-31688(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31688);
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488418"))) PPC_WEAK_FUNC(sub_82488418);
PPC_FUNC_IMPL(__imp__sub_82488418) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488420"))) PPC_WEAK_FUNC(sub_82488420);
PPC_FUNC_IMPL(__imp__sub_82488420) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488428"))) PPC_WEAK_FUNC(sub_82488428);
PPC_FUNC_IMPL(__imp__sub_82488428) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488430"))) PPC_WEAK_FUNC(sub_82488430);
PPC_FUNC_IMPL(__imp__sub_82488430) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488438"))) PPC_WEAK_FUNC(sub_82488438);
PPC_FUNC_IMPL(__imp__sub_82488438) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488440"))) PPC_WEAK_FUNC(sub_82488440);
PPC_FUNC_IMPL(__imp__sub_82488440) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488448"))) PPC_WEAK_FUNC(sub_82488448);
PPC_FUNC_IMPL(__imp__sub_82488448) {
	PPC_FUNC_PROLOGUE();
	// lis r8,80
	ctx.r8.s64 = 5242880;
	// ori r11,r8,4
	ctx.r11.u64 = ctx.r8.u64 | 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824884a0
	if (ctx.cr6.gt) goto loc_824884A0;
	// beq cr6,0x82488498
	if (ctx.cr6.eq) goto loc_82488498;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82488490
	if (ctx.cr6.eq) goto loc_82488490;
	// lis r7,79
	ctx.r7.s64 = 5177344;
	// ori r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 65535;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82488484
	if (!ctx.cr6.gt) goto loc_82488484;
	// lis r5,80
	ctx.r5.s64 = 5242880;
	// ori r4,r5,3
	ctx.r4.u64 = ctx.r5.u64 | 3;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82488490
	if (!ctx.cr6.gt) goto loc_82488490;
loc_82488484:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,29
	ctx.r3.s64 = 29;
	// blt cr6,0x82488494
	if (ctx.cr6.lt) goto loc_82488494;
loc_82488490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82488494:
	// blr 
	return;
loc_82488498:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_824884A0:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82488484
	if (ctx.cr6.lt) goto loc_82488484;
	// lis r9,80
	ctx.r9.s64 = 5242880;
	// ori r8,r9,6
	ctx.r8.u64 = ctx.r9.u64 | 6;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82488490
	if (!ctx.cr6.gt) goto loc_82488490;
	// lis r7,96
	ctx.r7.s64 = 6291456;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82488484
	if (!ctx.cr6.eq) goto loc_82488484;
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824884D4"))) PPC_WEAK_FUNC(sub_824884D4);
PPC_FUNC_IMPL(__imp__sub_824884D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824884D8"))) PPC_WEAK_FUNC(sub_824884D8);
PPC_FUNC_IMPL(__imp__sub_824884D8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824884F0:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824884f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824884F0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8248855c
	if (ctx.cr6.eq) goto loc_8248855C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82488534
	if (ctx.cr6.eq) goto loc_82488534;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,184
	ctx.r3.u64 = ctx.r3.u64 | 184;
	// blr 
	return;
loc_82488534:
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// blr 
	return;
loc_8248855C:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r4,14(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 14);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stb r4,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488580"))) PPC_WEAK_FUNC(sub_82488580);
PPC_FUNC_IMPL(__imp__sub_82488580) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r10,r4,-9
	ctx.r10.s64 = ctx.r4.s64 + -589824;
	// cmplwi cr6,r10,176
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 176, ctx.xer);
	// bgt cr6,0x824888d8
	if (ctx.cr6.gt) {
		sub_824888D8(ctx, base);
		return;
	}
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-31300
	ctx.r12.s64 = ctx.r12.s64 + -31300;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x824888E0
		return;
	case 1:
		// ERROR: 0x824888D8
		return;
	case 2:
		// ERROR: 0x824888D8
		return;
	case 3:
		// ERROR: 0x824888D8
		return;
	case 4:
		// ERROR: 0x824888D8
		return;
	case 5:
		// ERROR: 0x824888D8
		return;
	case 6:
		// ERROR: 0x824888D8
		return;
	case 7:
		// ERROR: 0x824888D8
		return;
	case 8:
		// ERROR: 0x824888D8
		return;
	case 9:
		// ERROR: 0x824888D8
		return;
	case 10:
		// ERROR: 0x824888D8
		return;
	case 11:
		// ERROR: 0x824888D8
		return;
	case 12:
		// ERROR: 0x824888D8
		return;
	case 13:
		// ERROR: 0x824888D8
		return;
	case 14:
		// ERROR: 0x824888D8
		return;
	case 15:
		// ERROR: 0x824888D8
		return;
	case 16:
		// ERROR: 0x82488880
		return;
	case 17:
		// ERROR: 0x824888D8
		return;
	case 18:
		// ERROR: 0x824888D8
		return;
	case 19:
		// ERROR: 0x824888D8
		return;
	case 20:
		// ERROR: 0x824888D8
		return;
	case 21:
		// ERROR: 0x824888D8
		return;
	case 22:
		// ERROR: 0x824888D8
		return;
	case 23:
		// ERROR: 0x824888D8
		return;
	case 24:
		// ERROR: 0x824888D8
		return;
	case 25:
		// ERROR: 0x824888D8
		return;
	case 26:
		// ERROR: 0x824888D8
		return;
	case 27:
		// ERROR: 0x824888D8
		return;
	case 28:
		// ERROR: 0x824888D8
		return;
	case 29:
		// ERROR: 0x824888D8
		return;
	case 30:
		// ERROR: 0x824888D8
		return;
	case 31:
		// ERROR: 0x824888D8
		return;
	case 32:
		// ERROR: 0x8248888C
		return;
	case 33:
		// ERROR: 0x824888D8
		return;
	case 34:
		// ERROR: 0x824888D8
		return;
	case 35:
		// ERROR: 0x824888D8
		return;
	case 36:
		// ERROR: 0x824888D8
		return;
	case 37:
		// ERROR: 0x824888D8
		return;
	case 38:
		// ERROR: 0x824888D8
		return;
	case 39:
		// ERROR: 0x824888D8
		return;
	case 40:
		// ERROR: 0x824888D8
		return;
	case 41:
		// ERROR: 0x824888D8
		return;
	case 42:
		// ERROR: 0x824888D8
		return;
	case 43:
		// ERROR: 0x824888D8
		return;
	case 44:
		// ERROR: 0x824888D8
		return;
	case 45:
		// ERROR: 0x824888D8
		return;
	case 46:
		// ERROR: 0x824888D8
		return;
	case 47:
		// ERROR: 0x824888D8
		return;
	case 48:
		// ERROR: 0x82488894
		return;
	case 49:
		// ERROR: 0x824888D8
		return;
	case 50:
		// ERROR: 0x824888D8
		return;
	case 51:
		// ERROR: 0x824888D8
		return;
	case 52:
		// ERROR: 0x824888D8
		return;
	case 53:
		// ERROR: 0x824888D8
		return;
	case 54:
		// ERROR: 0x824888D8
		return;
	case 55:
		// ERROR: 0x824888D8
		return;
	case 56:
		// ERROR: 0x824888D8
		return;
	case 57:
		// ERROR: 0x824888D8
		return;
	case 58:
		// ERROR: 0x824888D8
		return;
	case 59:
		// ERROR: 0x824888D8
		return;
	case 60:
		// ERROR: 0x824888D8
		return;
	case 61:
		// ERROR: 0x824888D8
		return;
	case 62:
		// ERROR: 0x824888D8
		return;
	case 63:
		// ERROR: 0x824888D8
		return;
	case 64:
		// ERROR: 0x8248889C
		return;
	case 65:
		// ERROR: 0x824888D8
		return;
	case 66:
		// ERROR: 0x824888D8
		return;
	case 67:
		// ERROR: 0x824888D8
		return;
	case 68:
		// ERROR: 0x824888D8
		return;
	case 69:
		// ERROR: 0x824888D8
		return;
	case 70:
		// ERROR: 0x824888D8
		return;
	case 71:
		// ERROR: 0x824888D8
		return;
	case 72:
		// ERROR: 0x824888D8
		return;
	case 73:
		// ERROR: 0x824888D8
		return;
	case 74:
		// ERROR: 0x824888D8
		return;
	case 75:
		// ERROR: 0x824888D8
		return;
	case 76:
		// ERROR: 0x824888D8
		return;
	case 77:
		// ERROR: 0x824888D8
		return;
	case 78:
		// ERROR: 0x824888D8
		return;
	case 79:
		// ERROR: 0x824888D8
		return;
	case 80:
		// ERROR: 0x824888E0
		return;
	case 81:
		// ERROR: 0x824888D8
		return;
	case 82:
		// ERROR: 0x824888D8
		return;
	case 83:
		// ERROR: 0x824888D8
		return;
	case 84:
		// ERROR: 0x824888D8
		return;
	case 85:
		// ERROR: 0x824888D8
		return;
	case 86:
		// ERROR: 0x824888D8
		return;
	case 87:
		// ERROR: 0x824888D8
		return;
	case 88:
		// ERROR: 0x824888D8
		return;
	case 89:
		// ERROR: 0x824888D8
		return;
	case 90:
		// ERROR: 0x824888D8
		return;
	case 91:
		// ERROR: 0x824888D8
		return;
	case 92:
		// ERROR: 0x824888D8
		return;
	case 93:
		// ERROR: 0x824888D8
		return;
	case 94:
		// ERROR: 0x824888D8
		return;
	case 95:
		// ERROR: 0x824888D8
		return;
	case 96:
		// ERROR: 0x824888E0
		return;
	case 97:
		// ERROR: 0x824888D8
		return;
	case 98:
		// ERROR: 0x824888D8
		return;
	case 99:
		// ERROR: 0x824888D8
		return;
	case 100:
		// ERROR: 0x824888D8
		return;
	case 101:
		// ERROR: 0x824888D8
		return;
	case 102:
		// ERROR: 0x824888D8
		return;
	case 103:
		// ERROR: 0x824888D8
		return;
	case 104:
		// ERROR: 0x824888D8
		return;
	case 105:
		// ERROR: 0x824888D8
		return;
	case 106:
		// ERROR: 0x824888D8
		return;
	case 107:
		// ERROR: 0x824888D8
		return;
	case 108:
		// ERROR: 0x824888D8
		return;
	case 109:
		// ERROR: 0x824888D8
		return;
	case 110:
		// ERROR: 0x824888D8
		return;
	case 111:
		// ERROR: 0x824888D8
		return;
	case 112:
		// ERROR: 0x824888A4
		return;
	case 113:
		// ERROR: 0x824888D8
		return;
	case 114:
		// ERROR: 0x824888D8
		return;
	case 115:
		// ERROR: 0x824888D8
		return;
	case 116:
		// ERROR: 0x824888D8
		return;
	case 117:
		// ERROR: 0x824888D8
		return;
	case 118:
		// ERROR: 0x824888D8
		return;
	case 119:
		// ERROR: 0x824888D8
		return;
	case 120:
		// ERROR: 0x824888D8
		return;
	case 121:
		// ERROR: 0x824888D8
		return;
	case 122:
		// ERROR: 0x824888D8
		return;
	case 123:
		// ERROR: 0x824888D8
		return;
	case 124:
		// ERROR: 0x824888D8
		return;
	case 125:
		// ERROR: 0x824888D8
		return;
	case 126:
		// ERROR: 0x824888D8
		return;
	case 127:
		// ERROR: 0x824888D8
		return;
	case 128:
		// ERROR: 0x824888B8
		return;
	case 129:
		// ERROR: 0x824888D8
		return;
	case 130:
		// ERROR: 0x824888D8
		return;
	case 131:
		// ERROR: 0x824888D8
		return;
	case 132:
		// ERROR: 0x824888D8
		return;
	case 133:
		// ERROR: 0x824888D8
		return;
	case 134:
		// ERROR: 0x824888D8
		return;
	case 135:
		// ERROR: 0x824888D8
		return;
	case 136:
		// ERROR: 0x824888D8
		return;
	case 137:
		// ERROR: 0x824888D8
		return;
	case 138:
		// ERROR: 0x824888D8
		return;
	case 139:
		// ERROR: 0x824888D8
		return;
	case 140:
		// ERROR: 0x824888D8
		return;
	case 141:
		// ERROR: 0x824888D8
		return;
	case 142:
		// ERROR: 0x824888D8
		return;
	case 143:
		// ERROR: 0x824888D8
		return;
	case 144:
		// ERROR: 0x824888E0
		return;
	case 145:
		// ERROR: 0x824888D8
		return;
	case 146:
		// ERROR: 0x824888D8
		return;
	case 147:
		// ERROR: 0x824888D8
		return;
	case 148:
		// ERROR: 0x824888D8
		return;
	case 149:
		// ERROR: 0x824888D8
		return;
	case 150:
		// ERROR: 0x824888D8
		return;
	case 151:
		// ERROR: 0x824888D8
		return;
	case 152:
		// ERROR: 0x824888D8
		return;
	case 153:
		// ERROR: 0x824888D8
		return;
	case 154:
		// ERROR: 0x824888D8
		return;
	case 155:
		// ERROR: 0x824888D8
		return;
	case 156:
		// ERROR: 0x824888D8
		return;
	case 157:
		// ERROR: 0x824888D8
		return;
	case 158:
		// ERROR: 0x824888D8
		return;
	case 159:
		// ERROR: 0x824888D8
		return;
	case 160:
		// ERROR: 0x824888E0
		return;
	case 161:
		// ERROR: 0x824888D8
		return;
	case 162:
		// ERROR: 0x824888D8
		return;
	case 163:
		// ERROR: 0x824888D8
		return;
	case 164:
		// ERROR: 0x824888D8
		return;
	case 165:
		// ERROR: 0x824888D8
		return;
	case 166:
		// ERROR: 0x824888D8
		return;
	case 167:
		// ERROR: 0x824888D8
		return;
	case 168:
		// ERROR: 0x824888D8
		return;
	case 169:
		// ERROR: 0x824888D8
		return;
	case 170:
		// ERROR: 0x824888D8
		return;
	case 171:
		// ERROR: 0x824888D8
		return;
	case 172:
		// ERROR: 0x824888D8
		return;
	case 173:
		// ERROR: 0x824888D8
		return;
	case 174:
		// ERROR: 0x824888D8
		return;
	case 175:
		// ERROR: 0x824888D8
		return;
	case 176:
		// ERROR: 0x824888E0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_824885BC"))) PPC_WEAK_FUNC(sub_824885BC);
PPC_FUNC_IMPL(__imp__sub_824885BC) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-30496(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30496);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30592(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30592);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30580(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30580);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30572(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30572);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30564(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30564);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30496(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30496);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30496(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30496);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30556(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30556);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30536(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30536);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30496(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30496);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30496(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30496);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30504(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30504);
	// lwz r18,-30496(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30496);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248888C"))) PPC_WEAK_FUNC(sub_8248888C);
PPC_FUNC_IMPL(__imp__sub_8248888C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488894"))) PPC_WEAK_FUNC(sub_82488894);
PPC_FUNC_IMPL(__imp__sub_82488894) {
	PPC_FUNC_PROLOGUE();
	// sth r5,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248889C"))) PPC_WEAK_FUNC(sub_8248889C);
PPC_FUNC_IMPL(__imp__sub_8248889C) {
	PPC_FUNC_PROLOGUE();
	// sth r5,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824888A4"))) PPC_WEAK_FUNC(sub_824888A4);
PPC_FUNC_IMPL(__imp__sub_824888A4) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824888B8"))) PPC_WEAK_FUNC(sub_824888B8);
PPC_FUNC_IMPL(__imp__sub_824888B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,552(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x824888d0
	if (ctx.cr6.eq) goto loc_824888D0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	return;
loc_824888D0:
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824888D8"))) PPC_WEAK_FUNC(sub_824888D8);
PPC_FUNC_IMPL(__imp__sub_824888D8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824888E4"))) PPC_WEAK_FUNC(sub_824888E4);
PPC_FUNC_IMPL(__imp__sub_824888E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824888E8"))) PPC_WEAK_FUNC(sub_824888E8);
PPC_FUNC_IMPL(__imp__sub_824888E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824888fc
	if (!ctx.cr6.eq) goto loc_824888FC;
loc_824888F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_824888FC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824888f0
	if (ctx.cr6.eq) goto loc_824888F0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824888f0
	if (ctx.cr6.eq) goto loc_824888F0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x824909e0
	sub_824909E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82488914"))) PPC_WEAK_FUNC(sub_82488914);
PPC_FUNC_IMPL(__imp__sub_82488914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488918"))) PPC_WEAK_FUNC(sub_82488918);
PPC_FUNC_IMPL(__imp__sub_82488918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82488934
	if (!ctx.cr6.eq) goto loc_82488934;
loc_82488928:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82488934:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82488928
	if (ctx.cr6.eq) goto loc_82488928;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82488928
	if (ctx.cr6.eq) goto loc_82488928;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,60(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r3,608(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 608);
	// b 0x8248ff28
	sub_8248FF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248895C"))) PPC_WEAK_FUNC(sub_8248895C);
PPC_FUNC_IMPL(__imp__sub_8248895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488960"))) PPC_WEAK_FUNC(sub_82488960);
PPC_FUNC_IMPL(__imp__sub_82488960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82488968;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82490318
	ctx.lr = 0x8248899C;
	sub_82490318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488adc
	if (ctx.cr6.lt) goto loc_82488ADC;
	// li r5,656
	ctx.r5.s64 = 656;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x824889B8;
	sub_8259D300(ctx, base);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r27.u32);
	// stw r28,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r28.u32);
	// bl 0x82490318
	ctx.lr = 0x824889D8;
	sub_82490318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488adc
	if (ctx.cr6.lt) goto loc_82488ADC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824889F4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824889f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824889F4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82490318
	ctx.lr = 0x82488A14;
	sub_82490318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488adc
	if (ctx.cr6.lt) goto loc_82488ADC;
	// li r5,644
	ctx.r5.s64 = 644;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x82488A30;
	sub_8259D300(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82490318
	ctx.lr = 0x82488A44;
	sub_82490318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488adc
	if (ctx.cr6.lt) goto loc_82488ADC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,12
	ctx.r10.s64 = 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82488A5C:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82488a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82488A5C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-30488
	ctx.r4.s64 = ctx.r11.s64 + -30488;
	// addi r7,r30,572
	ctx.r7.s64 = ctx.r30.s64 + 572;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r9.u32);
	// stw r29,608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 608, ctx.r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x824905f8
	ctx.lr = 0x82488AA8;
	sub_824905F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488adc
	if (ctx.cr6.lt) goto loc_82488ADC;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r7,r30,568
	ctx.r7.s64 = ctx.r30.s64 + 568;
	// li r6,84
	ctx.r6.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-30440
	ctx.r4.s64 = ctx.r11.s64 + -30440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824905f8
	ctx.lr = 0x82488AD0;
	sub_824905F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82488b4c
	if (!ctx.cr6.lt) goto loc_82488B4C;
loc_82488ADC:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82488af8
	if (ctx.cr6.eq) goto loc_82488AF8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82490380
	ctx.lr = 0x82488AF8;
	sub_82490380(ctx, base);
loc_82488AF8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82488b14
	if (ctx.cr6.eq) goto loc_82488B14;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82490380
	ctx.lr = 0x82488B14;
	sub_82490380(ctx, base);
loc_82488B14:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82488b30
	if (ctx.cr6.eq) goto loc_82488B30;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82490380
	ctx.lr = 0x82488B30;
	sub_82490380(ctx, base);
loc_82488B30:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82488b4c
	if (ctx.cr6.eq) goto loc_82488B4C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82490380
	ctx.lr = 0x82488B4C;
	sub_82490380(ctx, base);
loc_82488B4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82488B58"))) PPC_WEAK_FUNC(sub_82488B58);
PPC_FUNC_IMPL(__imp__sub_82488B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82488B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82490798
	ctx.lr = 0x82488B90;
	sub_82490798(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82490798
	ctx.lr = 0x82488BAC;
	sub_82490798(ctx, base);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,22
	ctx.r9.u64 = ctx.r10.u64 | 22;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82488bc8
	if (ctx.cr6.eq) goto loc_82488BC8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
loc_82488BC8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82488c20
	if (ctx.cr6.eq) goto loc_82488C20;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82490798
	ctx.lr = 0x82488BE4;
	sub_82490798(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82488c10
	if (ctx.cr6.eq) goto loc_82488C10;
	// bl 0x824909e0
	ctx.lr = 0x82488BF4;
	sub_824909E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82490718
	ctx.lr = 0x82488C10;
	sub_82490718(ctx, base);
loc_82488C10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x82490718
	ctx.lr = 0x82488C1C;
	sub_82490718(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82488C20:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824906b0
	ctx.lr = 0x82488C30;
	sub_824906B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r29.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// bl 0x824918e0
	ctx.lr = 0x82488C60;
	sub_824918E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82488cdc
	if (ctx.cr6.eq) goto loc_82488CDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,28660
	ctx.r11.s64 = ctx.r11.s64 + 28660;
	// addi r10,r10,28648
	ctx.r10.s64 = ctx.r10.s64 + 28648;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82488cac
	if (!ctx.cr6.eq) goto loc_82488CAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,28640
	ctx.r11.s64 = ctx.r11.s64 + 28640;
	// b 0x82488cbc
	goto loc_82488CBC;
loc_82488CAC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82488cc0
	if (!ctx.cr6.eq) goto loc_82488CC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,28632
	ctx.r11.s64 = ctx.r11.s64 + 28632;
loc_82488CBC:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82488CC0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824901a0
	ctx.lr = 0x82488CD0;
	sub_824901A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
loc_82488CDC:
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x82491d70
	ctx.lr = 0x82488D08;
	sub_82491D70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,-31360
	ctx.r4.s64 = ctx.r11.s64 + -31360;
	// bl 0x8248fe88
	ctx.lr = 0x82488D2C;
	sub_8248FE88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r28.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x824884d8
	ctx.lr = 0x82488D68;
	sub_824884D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r4,64(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// bl 0x82490050
	ctx.lr = 0x82488D8C;
	sub_82490050(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824906b0
	ctx.lr = 0x82488DA8;
	sub_824906B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82488df0
	if (ctx.cr6.lt) goto loc_82488DF0;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82490050
	ctx.lr = 0x82488DE4;
	sub_82490050(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82488e08
	if (!ctx.cr6.lt) goto loc_82488E08;
loc_82488DF0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82488e08
	if (ctx.cr6.eq) goto loc_82488E08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x82490718
	ctx.lr = 0x82488E08;
	sub_82490718(ctx, base);
loc_82488E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82488E14"))) PPC_WEAK_FUNC(sub_82488E14);
PPC_FUNC_IMPL(__imp__sub_82488E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488E18"))) PPC_WEAK_FUNC(sub_82488E18);
PPC_FUNC_IMPL(__imp__sub_82488E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82488E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82488e70
	if (!ctx.cr6.eq) goto loc_82488E70;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82488E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82488ef0
	if (ctx.cr6.lt) goto loc_82488EF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824872d8
	ctx.lr = 0x82488E68;
	sub_824872D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82488E70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82490798
	ctx.lr = 0x82488E7C;
	sub_82490798(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82488e94
	if (ctx.cr6.eq) goto loc_82488E94;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82488ef0
	if (ctx.cr6.eq) goto loc_82488EF0;
loc_82488E94:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82488b58
	ctx.lr = 0x82488EA4;
	sub_82488B58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82488ef0
	if (ctx.cr6.lt) goto loc_82488EF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82488EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82488ef0
	if (ctx.cr6.lt) goto loc_82488EF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82490798
	ctx.lr = 0x82488EDC;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82488ef0
	if (ctx.cr6.lt) goto loc_82488EF0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
loc_82488EF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82488EF8"))) PPC_WEAK_FUNC(sub_82488EF8);
PPC_FUNC_IMPL(__imp__sub_82488EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82488F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82488f44
	if (!ctx.cr6.eq) goto loc_82488F44;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82488F44:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82488F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82490798
	ctx.lr = 0x82488F74;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82490798
	ctx.lr = 0x82488F8C;
	sub_82490798(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82488fa4
	if (ctx.cr6.eq) goto loc_82488FA4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
loc_82488FA4:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82488fc8
	if (!ctx.cr6.eq) goto loc_82488FC8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82488b58
	ctx.lr = 0x82488FC0;
	sub_82488B58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
loc_82488FC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82490798
	ctx.lr = 0x82488FD8;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82489040
	if (ctx.cr6.eq) goto loc_82489040;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82489040
	if (ctx.cr6.eq) goto loc_82489040;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82489040
	if (ctx.cr6.eq) goto loc_82489040;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82489040
	if (ctx.cr6.eq) goto loc_82489040;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x824891ac
	if (ctx.cr6.gt) goto loc_824891AC;
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-28624
	ctx.r12.s64 = ctx.r12.s64 + -28624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82489040;
	case 1:
		goto loc_82489050;
	case 2:
		goto loc_82489040;
	case 3:
		goto loc_82489070;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-28608(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28608);
	// lwz r18,-28592(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28592);
	// lwz r18,-28608(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28608);
	// lwz r18,-28560(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28560);
loc_82489040:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82489050:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// b 0x824890e4
	goto loc_824890E4;
loc_82489070:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lbz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// bl 0x82490798
	ctx.lr = 0x82489088;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r27.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, ctx.r30.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// bl 0x824872d8
	ctx.lr = 0x824890D8;
	sub_824872D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_824890E4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x824891ac
	if (ctx.cr6.gt) goto loc_824891AC;
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-28404
	ctx.r12.s64 = ctx.r12.s64 + -28404;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8248911C;
	case 1:
		goto loc_82489040;
	case 2:
		goto loc_8248913C;
	case 3:
		goto loc_82489040;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-28388(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28388);
	// lwz r18,-28608(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28608);
	// lwz r18,-28356(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28356);
	// lwz r18,-28608(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28608);
loc_8248911C:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r27.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8248913C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824872d8
	ctx.lr = 0x82489148;
	sub_824872D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82488b58
	ctx.lr = 0x82489164;
	sub_82488B58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82490798
	ctx.lr = 0x8248917C;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824891b4
	if (ctx.cr6.lt) goto loc_824891B4;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r27.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r29.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_824891AC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824891B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824891BC"))) PPC_WEAK_FUNC(sub_824891BC);
PPC_FUNC_IMPL(__imp__sub_824891BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824891C0"))) PPC_WEAK_FUNC(sub_824891C0);
PPC_FUNC_IMPL(__imp__sub_824891C0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8248fdd8
	ctx.lr = 0x824891E8;
	sub_8248FDD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82489208
	if (ctx.cr6.lt) goto loc_82489208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82488960
	ctx.lr = 0x82489200;
	sub_82488960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82489228
	if (!ctx.cr6.lt) goto loc_82489228;
loc_82489208:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824903c8
	ctx.lr = 0x82489210;
	sub_824903C8(ctx, base);
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
loc_82489228:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_82489240"))) PPC_WEAK_FUNC(sub_82489240);
PPC_FUNC_IMPL(__imp__sub_82489240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82489248;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,28660
	ctx.r11.s64 = ctx.r11.s64 + 28660;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8248947c
	if (ctx.cr6.eq) goto loc_8248947C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8248947c
	if (ctx.cr6.gt) goto loc_8248947C;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8248947c
	if (ctx.cr6.eq) goto loc_8248947C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490318
	ctx.lr = 0x824892A0;
	sub_82490318(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824892C0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824892c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824892C0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x824923d8
	ctx.lr = 0x824892E4;
	sub_824923D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,28676
	ctx.r11.s64 = ctx.r11.s64 + 28676;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x82489314
	if (!ctx.cr6.eq) goto loc_82489314;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
loc_82489314:
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r9,r10,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82487f30
	ctx.lr = 0x82489328;
	sub_82487F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// bne cr6,0x82489340
	if (!ctx.cr6.eq) goto loc_82489340;
	// lis r30,-32688
	ctx.r30.s64 = -2142240768;
	// ori r30,r30,186
	ctx.r30.u64 = ctx.r30.u64 | 186;
	// b 0x82489438
	goto loc_82489438;
loc_82489340:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824901a0
	ctx.lr = 0x82489350;
	sub_824901A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,30984
	ctx.r5.s64 = ctx.r11.s64 + 30984;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8248fe48
	ctx.lr = 0x82489374;
	sub_8248FE48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r29.u32);
	// addi r5,r11,30984
	ctx.r5.s64 = ctx.r11.s64 + 30984;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8248fe48
	ctx.lr = 0x8248939C;
	sub_8248FE48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,30984
	ctx.r5.s64 = ctx.r11.s64 + 30984;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r8,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r8.u32);
	// bl 0x8248fe48
	ctx.lr = 0x824893C8;
	sub_8248FE48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,30984
	ctx.r5.s64 = ctx.r11.s64 + 30984;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r7,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r7.u32);
	// bl 0x8248fe48
	ctx.lr = 0x824893F4;
	sub_8248FE48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489438
	if (ctx.cr6.lt) goto loc_82489438;
	// li r5,5
	ctx.r5.s64 = 5;
	// cntlzw r4,r25
	ctx.r4.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r5,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r5.u32);
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82486e90
	ctx.lr = 0x8248942C;
	sub_82486E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8248946c
	if (!ctx.cr6.lt) goto loc_8248946C;
loc_82489438:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8248946c
	if (ctx.cr6.eq) goto loc_8248946C;
	// bl 0x82492268
	ctx.lr = 0x82489448;
	sub_82492268(ctx, base);
	// lwz r3,548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8248945c
	if (!ctx.cr6.eq) goto loc_8248945C;
	// stw r24,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r24.u32);
loc_8248945C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82490380
	ctx.lr = 0x8248946C;
	sub_82490380(ctx, base);
loc_8248946C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82488000
	ctx.lr = 0x82489474;
	sub_82488000(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8248947C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489488"))) PPC_WEAK_FUNC(sub_82489488);
PPC_FUNC_IMPL(__imp__sub_82489488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82489490;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// beq cr6,0x8248965c
	if (ctx.cr6.eq) goto loc_8248965C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8248965c
	if (ctx.cr6.eq) goto loc_8248965C;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x8248965c
	if (ctx.cr6.gt) goto loc_8248965C;
	// lwz r10,528(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8248965c
	if (ctx.cr6.eq) goto loc_8248965C;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x824894E4;
	sub_8259D300(ctx, base);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x82490798
	ctx.lr = 0x824894FC;
	sub_82490798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8248964c
	if (ctx.cr6.lt) goto loc_8248964C;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8248965c
	if (!ctx.cr6.eq) goto loc_8248965C;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// bl 0x82490798
	ctx.lr = 0x8248952C;
	sub_82490798(ctx, base);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82489578
	if (ctx.cr6.eq) goto loc_82489578;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82489578
	if (ctx.cr6.eq) goto loc_82489578;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82489554:
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824895cc
	if (ctx.cr6.eq) goto loc_824895CC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82489554
	if (ctx.cr6.lt) goto loc_82489554;
loc_82489578:
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r8,r9,52429
	ctx.r8.u64 = ctx.r9.u64 | 52429;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r6,r7,r8
	ctx.r6.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r5,r6,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_82489598:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824895e0
	if (ctx.cr6.eq) goto loc_824895E0;
	// ld r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x824895e0
	if (ctx.cr6.eq) goto loc_824895E0;
	// bl 0x8259f690
	ctx.lr = 0x824895B4;
	sub_8259F690(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,28680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28680);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x824895ec
	goto loc_824895EC;
loc_824895CC:
	// rlwinm r11,r10,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82489598
	goto loc_82489598;
loc_824895E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_824895EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,790
	ctx.r5.s64 = ctx.r31.s64 + 790;
	// addi r4,r31,792
	ctx.r4.s64 = ctx.r31.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// sth r9,788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 788, ctx.r9.u16);
	// bl 0x82487cd8
	ctx.lr = 0x8248962C;
	sub_82487CD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8248964c
	if (ctx.cr6.lt) goto loc_8248964C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,27864
	ctx.r4.s64 = ctx.r11.s64 + 27864;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x8259d3a0
	ctx.lr = 0x8248964C;
	sub_8259D3A0(ctx, base);
loc_8248964C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82488000
	ctx.lr = 0x82489654;
	sub_82488000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8248965C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489668"))) PPC_WEAK_FUNC(sub_82489668);
PPC_FUNC_IMPL(__imp__sub_82489668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82489670;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x8259d300
	ctx.lr = 0x82489698;
	sub_8259D300(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x8259d300
	ctx.lr = 0x824896AC;
	sub_8259D300(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82489a58
	if (ctx.cr6.eq) goto loc_82489A58;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82489a58
	if (ctx.cr6.eq) goto loc_82489A58;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82489a58
	if (ctx.cr6.eq) goto loc_82489A58;
	// lwz r11,528(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82489a58
	if (ctx.cr6.eq) goto loc_82489A58;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// lhz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82489764
	if (!ctx.cr6.gt) goto loc_82489764;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_82489704:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82489724
	if (!ctx.cr6.eq) goto loc_82489724;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// stwx r23,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r23.u32);
	// b 0x82489750
	goto loc_82489750;
loc_82489724:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82489740
	if (!ctx.cr6.eq) goto loc_82489740;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rotlwi r6,r3,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x82489750
	goto loc_82489750;
loc_82489740:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// rotlwi r3,r5,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// stwx r24,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r24.u32);
loc_82489750:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82489704
	if (ctx.cr6.lt) goto loc_82489704;
loc_82489764:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8248976C:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwzx r9,r6,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x824897b4
	if (ctx.cr6.eq) goto loc_824897B4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8248979c
	if (!ctx.cr6.eq) goto loc_8248979C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82489a58
	if (ctx.cr6.eq) goto loc_82489A58;
loc_8248979C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824897ac
	if (!ctx.cr6.eq) goto loc_824897AC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82489a58
	if (ctx.cr6.eq) goto loc_82489A58;
loc_824897AC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
loc_824897B4:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8248976c
	if (ctx.cr6.lt) goto loc_8248976C;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_824897D0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82489a08
	if (!ctx.cr6.eq) goto loc_82489A08;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,124(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x82490798
	ctx.lr = 0x824897F4;
	sub_82490798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489a48
	if (ctx.cr6.lt) goto loc_82489A48;
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// bge cr6,0x82489924
	if (!ctx.cr6.lt) goto loc_82489924;
loc_82489814:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82489910
	if (!ctx.cr6.eq) goto loc_82489910;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x82490798
	ctx.lr = 0x82489838;
	sub_82490798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489a48
	if (ctx.cr6.lt) goto loc_82489A48;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82489910
	if (!ctx.cr6.eq) goto loc_82489910;
	// addi r7,r27,3
	ctx.r7.s64 = ctx.r27.s64 + 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82489878
	if (ctx.cr6.eq) goto loc_82489878;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824898bc
	if (!ctx.cr6.eq) goto loc_824898BC;
loc_82489878:
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824898bc
	if (!ctx.cr6.eq) goto loc_824898BC;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824898bc
	if (!ctx.cr6.eq) goto loc_824898BC;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82489940
	if (ctx.cr6.eq) goto loc_82489940;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82489940
	if (ctx.cr6.eq) goto loc_82489940;
loc_824898BC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82489910
	if (!ctx.cr6.eq) goto loc_82489910;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824898e0
	if (ctx.cr6.eq) goto loc_824898E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82489910
	if (!ctx.cr6.eq) goto loc_82489910;
loc_824898E0:
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824898fc
	if (ctx.cr6.eq) goto loc_824898FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82489910
	if (!ctx.cr6.eq) goto loc_82489910;
loc_824898FC:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8248998c
	if (ctx.cr6.eq) goto loc_8248998C;
loc_82489910:
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x82489814
	if (ctx.cr6.lt) goto loc_82489814;
loc_82489924:
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824899d8
	if (!ctx.cr6.eq) goto loc_824899D8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x824899ec
	goto loc_824899EC;
loc_82489940:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82489960
	if (ctx.cr6.eq) goto loc_82489960;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82489960:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82488ef8
	ctx.lr = 0x82489974;
	sub_82488EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489a48
	if (ctx.cr6.lt) goto loc_82489A48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stbx r24,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r24.u8);
	// b 0x82489a08
	goto loc_82489A08;
loc_8248998C:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x824899a8
	if (ctx.cr6.eq) goto loc_824899A8;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_824899A8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82488ef8
	ctx.lr = 0x824899BC;
	sub_82488EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489a48
	if (ctx.cr6.lt) goto loc_82489A48;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stbx r24,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r24.u8);
	// b 0x82489a08
	goto loc_82489A08;
loc_824899D8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// beq cr6,0x824899ec
	if (ctx.cr6.eq) goto loc_824899EC;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_824899EC:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82488e18
	ctx.lr = 0x824899FC;
	sub_82488E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82489a48
	if (ctx.cr6.lt) goto loc_82489A48;
loc_82489A08:
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// blt cr6,0x824897d0
	if (ctx.cr6.lt) goto loc_824897D0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82489A20:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stwx r5,r6,r28
	PPC_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r5.u32);
	// blt cr6,0x82489a20
	if (ctx.cr6.lt) goto loc_82489A20;
loc_82489A48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82488000
	ctx.lr = 0x82489A50;
	sub_82488000(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_82489A58:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489A64"))) PPC_WEAK_FUNC(sub_82489A64);
PPC_FUNC_IMPL(__imp__sub_82489A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489A68"))) PPC_WEAK_FUNC(sub_82489A68);
PPC_FUNC_IMPL(__imp__sub_82489A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82489A70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82489b68
	if (ctx.cr6.eq) goto loc_82489B68;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82489b68
	if (ctx.cr6.eq) goto loc_82489B68;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82489b68
	if (ctx.cr6.eq) goto loc_82489B68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82489b68
	if (ctx.cr6.eq) goto loc_82489B68;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82489b68
	if (ctx.cr6.eq) goto loc_82489B68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82489b68
	if (ctx.cr6.eq) goto loc_82489B68;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82489afc
	if (!ctx.cr6.eq) goto loc_82489AFC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x82488000
	ctx.lr = 0x82489AF4;
	sub_82488000(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82489AFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82491340
	ctx.lr = 0x82489B04;
	sub_82491340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82489b5c
	if (ctx.cr6.lt) goto loc_82489B5C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x82490798
	ctx.lr = 0x82489B20;
	sub_82490798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82489b5c
	if (ctx.cr6.lt) goto loc_82489B5C;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82489b68
	if (!ctx.cr6.eq) goto loc_82489B68;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82487898
	ctx.lr = 0x82489B5C;
	sub_82487898(ctx, base);
loc_82489B5C:
	// bl 0x82488000
	ctx.lr = 0x82489B60;
	sub_82488000(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82489B68:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489B74"))) PPC_WEAK_FUNC(sub_82489B74);
PPC_FUNC_IMPL(__imp__sub_82489B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489B78"))) PPC_WEAK_FUNC(sub_82489B78);
PPC_FUNC_IMPL(__imp__sub_82489B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82489B80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82489cb4
	if (ctx.cr6.eq) goto loc_82489CB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82489cb4
	if (ctx.cr6.eq) goto loc_82489CB4;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82489cb4
	if (ctx.cr6.gt) goto loc_82489CB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82489cb4
	if (ctx.cr6.eq) goto loc_82489CB4;
	// lwz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82489cb4
	if (ctx.cr6.eq) goto loc_82489CB4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82487370
	ctx.lr = 0x82489BE4;
	sub_82487370(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82489c74
	if (ctx.cr6.lt) goto loc_82489C74;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82489c58
	if (ctx.cr6.eq) goto loc_82489C58;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82489c58
	if (!ctx.cr6.gt) goto loc_82489C58;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,124(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	// bl 0x82490798
	ctx.lr = 0x82489C20;
	sub_82490798(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82489c58
	if (!ctx.cr6.eq) goto loc_82489C58;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// divwu r8,r5,r9
	ctx.r8.u32 = ctx.r5.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82489C58:
	// lis r7,80
	ctx.r7.s64 = 5242880;
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82489c74
	if (!ctx.cr6.eq) goto loc_82489C74;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82489C74:
	// lis r5,-32688
	ctx.r5.s64 = -2142240768;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82489ca0
	if (ctx.cr6.eq) goto loc_82489CA0;
	// lis r4,-32688
	ctx.r4.s64 = -2142240768;
	// ori r3,r4,11
	ctx.r3.u64 = ctx.r4.u64 | 11;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82489ca0
	if (ctx.cr6.eq) goto loc_82489CA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82488000
	ctx.lr = 0x82489C98;
	sub_82488000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82489CA0:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82489CB4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489CC0"))) PPC_WEAK_FUNC(sub_82489CC0);
PPC_FUNC_IMPL(__imp__sub_82489CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,28688
	ctx.r11.s64 = ctx.r11.s64 + 28688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82492580
	sub_82492580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489CD0"))) PPC_WEAK_FUNC(sub_82489CD0);
PPC_FUNC_IMPL(__imp__sub_82489CD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,204
	ctx.r11.s64 = ctx.r3.s64 + 204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82489CE0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82489ce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82489CE0;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// li r10,20
	ctx.r10.s64 = 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82489CF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82489cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82489CF8;
	// stw r9,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489D0C"))) PPC_WEAK_FUNC(sub_82489D0C);
PPC_FUNC_IMPL(__imp__sub_82489D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_82585070"))) PPC_WEAK_FUNC(sub_82585070);
__attribute__((alias("__imp__sub_825863C0"))) PPC_WEAK_FUNC(sub_825863C0);
__attribute__((alias("__imp__sub_82586448"))) PPC_WEAK_FUNC(sub_82586448);
__attribute__((alias("__imp__sub_82586598"))) PPC_WEAK_FUNC(sub_82586598);
__attribute__((alias("__imp__sub_82586600"))) PPC_WEAK_FUNC(sub_82586600);
__attribute__((alias("__imp__sub_825866B8"))) PPC_WEAK_FUNC(sub_825866B8);
__attribute__((alias("__imp__sub_82586728"))) PPC_WEAK_FUNC(sub_82586728);
__attribute__((alias("__imp__sub_82586790"))) PPC_WEAK_FUNC(sub_82586790);
__attribute__((alias("__imp__sub_82586800"))) PPC_WEAK_FUNC(sub_82586800);
__attribute__((alias("__imp__sub_825868D8"))) PPC_WEAK_FUNC(sub_825868D8);
__attribute__((alias("__imp__sub_82586C18"))) PPC_WEAK_FUNC(sub_82586C18);
__attribute__((alias("__imp__sub_82586DC0"))) PPC_WEAK_FUNC(sub_82586DC0);
__attribute__((alias("__imp__sub_82586E28"))) PPC_WEAK_FUNC(sub_82586E28);
__attribute__((alias("__imp__sub_82586EF0"))) PPC_WEAK_FUNC(sub_82586EF0);
__attribute__((alias("__imp__sub_82586FC0"))) PPC_WEAK_FUNC(sub_82586FC0);
__attribute__((alias("__imp__sub_82587208"))) PPC_WEAK_FUNC(sub_82587208);
__attribute__((alias("__imp__sub_82587298"))) PPC_WEAK_FUNC(sub_82587298);
__attribute__((alias("__imp__sub_825872A0"))) PPC_WEAK_FUNC(sub_825872A0);
__attribute__((alias("__imp__sub_82587330"))) PPC_WEAK_FUNC(sub_82587330);
__attribute__((alias("__imp__sub_82587338"))) PPC_WEAK_FUNC(sub_82587338);
__attribute__((alias("__imp__sub_825873A8"))) PPC_WEAK_FUNC(sub_825873A8);
__attribute__((alias("__imp__sub_82587430"))) PPC_WEAK_FUNC(sub_82587430);
__attribute__((alias("__imp__sub_82587468"))) PPC_WEAK_FUNC(sub_82587468);
__attribute__((alias("__imp__sub_825874A0"))) PPC_WEAK_FUNC(sub_825874A0);
__attribute__((alias("__imp__sub_82587570"))) PPC_WEAK_FUNC(sub_82587570);
__attribute__((alias("__imp__sub_82587578"))) PPC_WEAK_FUNC(sub_82587578);
__attribute__((alias("__imp__sub_82587790"))) PPC_WEAK_FUNC(sub_82587790);
__attribute__((alias("__imp__sub_82587A88"))) PPC_WEAK_FUNC(sub_82587A88);
__attribute__((alias("__imp__sub_82587C00"))) PPC_WEAK_FUNC(sub_82587C00);
__attribute__((alias("__imp__sub_82587C18"))) PPC_WEAK_FUNC(sub_82587C18);
__attribute__((alias("__imp__sub_82587D00"))) PPC_WEAK_FUNC(sub_82587D00);
__attribute__((alias("__imp__sub_82587DB0"))) PPC_WEAK_FUNC(sub_82587DB0);
__attribute__((alias("__imp__sub_82587E70"))) PPC_WEAK_FUNC(sub_82587E70);
__attribute__((alias("__imp__sub_82587F28"))) PPC_WEAK_FUNC(sub_82587F28);
__attribute__((alias("__imp__sub_82588030"))) PPC_WEAK_FUNC(sub_82588030);
__attribute__((alias("__imp__sub_82588170"))) PPC_WEAK_FUNC(sub_82588170);
__attribute__((alias("__imp__sub_825881E0"))) PPC_WEAK_FUNC(sub_825881E0);
__attribute__((alias("__imp__sub_82588348"))) PPC_WEAK_FUNC(sub_82588348);
__attribute__((alias("__imp__sub_825884E0"))) PPC_WEAK_FUNC(sub_825884E0);
__attribute__((alias("__imp__sub_825885E8"))) PPC_WEAK_FUNC(sub_825885E8);
__attribute__((alias("__imp__sub_825885F8"))) PPC_WEAK_FUNC(sub_825885F8);
__attribute__((alias("__imp__sub_82588658"))) PPC_WEAK_FUNC(sub_82588658);
__attribute__((alias("__imp__sub_825886B8"))) PPC_WEAK_FUNC(sub_825886B8);
__attribute__((alias("__imp__sub_82588718"))) PPC_WEAK_FUNC(sub_82588718);
__attribute__((alias("__imp__sub_82588808"))) PPC_WEAK_FUNC(sub_82588808);
__attribute__((alias("__imp__sub_82588848"))) PPC_WEAK_FUNC(sub_82588848);
__attribute__((alias("__imp__sub_82588940"))) PPC_WEAK_FUNC(sub_82588940);
__attribute__((alias("__imp__sub_825889E8"))) PPC_WEAK_FUNC(sub_825889E8);
__attribute__((alias("__imp__sub_82588AF8"))) PPC_WEAK_FUNC(sub_82588AF8);
__attribute__((alias("__imp__sub_82588B88"))) PPC_WEAK_FUNC(sub_82588B88);
__attribute__((alias("__imp__sub_82588C80"))) PPC_WEAK_FUNC(sub_82588C80);
__attribute__((alias("__imp__sub_82588CD8"))) PPC_WEAK_FUNC(sub_82588CD8);
__attribute__((alias("__imp__sub_82588D98"))) PPC_WEAK_FUNC(sub_82588D98);
__attribute__((alias("__imp__sub_82588E00"))) PPC_WEAK_FUNC(sub_82588E00);
__attribute__((alias("__imp__sub_82588ED8"))) PPC_WEAK_FUNC(sub_82588ED8);
__attribute__((alias("__imp__sub_82588F50"))) PPC_WEAK_FUNC(sub_82588F50);
__attribute__((alias("__imp__sub_82589098"))) PPC_WEAK_FUNC(sub_82589098);
__attribute__((alias("__imp__sub_82589140"))) PPC_WEAK_FUNC(sub_82589140);
PPC_FUNC_IMPL(__imp__sub_82585070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r11,-8940
	ctx.r7.s64 = ctx.r11.s64 + -8940;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// rlwinm r9,r3,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// addi r11,r11,-7456
	ctx.r11.s64 = ctx.r11.s64 + -7456;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f1,8(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825850b8
	if (ctx.cr6.eq) goto loc_825850B8;
	// rlwinm r10,r3,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	// rlwinm r8,r3,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825850B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825850BC:
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825850bc
	if (!ctx.cr6.eq) goto loc_825850BC;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825863C0) {
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
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x825863EC;
	sub_8259D300(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,34
	ctx.r9.s64 = 34;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825863FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825863fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825863FC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x824178c8
	ctx.lr = 0x82586430;
	sub_824178C8(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_82586448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82586450;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8258646c
	if (!ctx.cr6.gt) goto loc_8258646C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8258646C:
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r23,164(r28)
	PPC_STORE_U32(ctx.r28.u32 + 164, ctx.r23.u32);
	// ble cr6,0x82586540
	if (!ctx.cr6.gt) goto loc_82586540;
	// addi r25,r28,68
	ctx.r25.s64 = ctx.r28.s64 + 68;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r28,464
	ctx.r31.s64 = ctx.r28.s64 + 464;
loc_82586490:
	// addi r30,r31,-104
	ctx.r30.s64 = ctx.r31.s64 + -104;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x825864A4;
	sub_8259D300(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,34
	ctx.r9.s64 = 34;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825864B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825864b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825864B4;
	// addi r29,r31,-96
	ctx.r29.s64 = ctx.r31.s64 + -96;
	// stw r23,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r23.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824178c8
	ctx.lr = 0x825864E4;
	sub_824178C8(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
loc_825864EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82586510
	if (ctx.cr6.eq) goto loc_82586510;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825864ec
	if (ctx.cr6.eq) goto loc_825864EC;
loc_82586510:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8258652c
	if (!ctx.cr6.eq) goto loc_8258652C;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82586528;
	sub_8259D3A0(ctx, base);
	// stw r26,164(r28)
	PPC_STORE_U32(ctx.r28.u32 + 164, ctx.r26.u32);
loc_8258652C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// addi r27,r27,136
	ctx.r27.s64 = ctx.r27.s64 + 136;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82586490
	if (ctx.cr6.lt) goto loc_82586490;
loc_82586540:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r24,352(r28)
	PPC_STORE_U32(ctx.r28.u32 + 352, ctx.r24.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82586590
	if (!ctx.cr6.gt) goto loc_82586590;
	// addi r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 + 532;
loc_82586554:
	// lwz r7,48(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// beq cr6,0x8258657c
	if (ctx.cr6.eq) goto loc_8258657C;
	// lwz r6,172(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x8258657c
	if (ctx.cr6.eq) goto loc_8258657C;
	// rlwinm r5,r9,0,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
loc_8258657C:
	// lwz r4,352(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82586554
	if (ctx.cr6.lt) goto loc_82586554;
loc_82586590:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586598) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x825865f4
	if (!ctx.cr6.gt) goto loc_825865F4;
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
loc_825865B0:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_825865B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825865dc
	if (ctx.cr6.eq) goto loc_825865DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825865b8
	if (ctx.cr6.eq) goto loc_825865B8;
loc_825865DC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,176
	ctx.r7.s64 = ctx.r7.s64 + 176;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825865b0
	if (ctx.cr6.lt) goto loc_825865B0;
loc_825865F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586600) {
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
	// lis r4,26735
	ctx.r4.s64 = 1752104960;
	// addi r7,r31,368
	ctx.r7.s64 = ctx.r31.s64 + 368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ori r4,r4,29556
	ctx.r4.u64 = ctx.r4.u64 | 29556;
	// bl 0x8240d398
	ctx.lr = 0x82586638;
	sub_8240D398(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8258665c
	if (!ctx.cr6.eq) goto loc_8258665C;
	// lis r4,28271
	ctx.r4.s64 = 1852768256;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r31,332
	ctx.r7.s64 = ctx.r31.s64 + 332;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28259
	ctx.r4.u64 = ctx.r4.u64 | 28259;
	// bl 0x8240d398
	ctx.lr = 0x8258665C;
	sub_8240D398(ctx, base);
loc_8258665C:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825866a0
	if (!ctx.cr6.eq) goto loc_825866A0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82586684
	if (ctx.cr6.eq) goto loc_82586684;
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8258668c
	goto loc_8258668C;
loc_82586684:
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8258668C:
	// lis r4,29548
	ctx.r4.s64 = 1936457728;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r4,28532
	ctx.r4.u64 = ctx.r4.u64 | 28532;
	// bl 0x8240d398
	ctx.lr = 0x825866A0;
	sub_8240D398(ctx, base);
loc_825866A0:
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
PPC_FUNC_IMPL(__imp__sub_825866B8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825866e8
	if (ctx.cr6.eq) goto loc_825866E8;
	// bl 0x825bacb0
	ctx.lr = 0x825866E4;
	sub_825BACB0(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_825866E8:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82586708
	if (ctx.cr6.eq) goto loc_82586708;
	// bl 0x825ba368
	ctx.lr = 0x825866F8;
	sub_825BA368(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82586710
	goto loc_82586710;
loc_82586708:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
loc_82586710:
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
PPC_FUNC_IMPL(__imp__sub_82586728) {
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
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82586774
	if (ctx.cr6.lt) goto loc_82586774;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x82589578
	ctx.lr = 0x82586750;
	sub_82589578(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
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
loc_82586774:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
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
PPC_FUNC_IMPL(__imp__sub_82586790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82586798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825867bc
	if (ctx.cr6.eq) goto loc_825867BC;
	// bl 0x825bacb0
	ctx.lr = 0x825867B8;
	sub_825BACB0(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_825867BC:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825867d0
	if (ctx.cr6.eq) goto loc_825867D0;
	// bl 0x825ba368
	ctx.lr = 0x825867CC;
	sub_825BA368(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_825867D0:
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// blt cr6,0x825867f4
	if (ctx.cr6.lt) goto loc_825867F4;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x82589578
	ctx.lr = 0x825867EC;
	sub_82589578(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_825867F4:
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82586808;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,29285
	ctx.r4.s64 = 1919221760;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// ori r4,r4,28022
	ctx.r4.u64 = ctx.r4.u64 | 28022;
	// bl 0x8240d398
	ctx.lr = 0x82586834;
	sub_8240D398(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258684c
	if (ctx.cr6.eq) goto loc_8258684C;
	// bl 0x825bacb0
	ctx.lr = 0x82586848;
	sub_825BACB0(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_8258684C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82586860
	if (ctx.cr6.eq) goto loc_82586860;
	// bl 0x825ba368
	ctx.lr = 0x8258685C;
	sub_825BA368(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_82586860:
	// li r28,5
	ctx.r28.s64 = 5;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// blt cr6,0x82586884
	if (ctx.cr6.lt) goto loc_82586884;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x82589578
	ctx.lr = 0x8258687C;
	sub_82589578(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82586884:
	// addi r30,r29,352
	ctx.r30.s64 = ctx.r29.s64 + 352;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825868b4
	if (ctx.cr6.eq) goto loc_825868B4;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r5,r9,176
	ctx.r5.s64 = ctx.r9.s64 * 176;
	// bl 0x8259dd00
	ctx.lr = 0x825868B4;
	sub_8259DD00(ctx, base);
loc_825868B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x82586598
	ctx.lr = 0x825868CC;
	sub_82586598(ctx, base);
	// stw r3,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825868D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x825868E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,-5952(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5952);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lwz r27,136(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// bne cr6,0x8258692c
	if (!ctx.cr6.eq) goto loc_8258692C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82586a20
	if (ctx.cr6.eq) goto loc_82586A20;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x82586a20
	if (ctx.cr6.eq) goto loc_82586A20;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,11764
	ctx.r5.s64 = ctx.r11.s64 + 11764;
	// bl 0x825866b8
	ctx.lr = 0x8258692C;
	sub_825866B8(ctx, base);
loc_8258692C:
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r28,5
	ctx.r28.s64 = 5;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82586ac0
	if (!ctx.cr6.eq) goto loc_82586AC0;
	// bl 0x825ba308
	ctx.lr = 0x82586944;
	sub_825BA308(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// beq cr6,0x82586abc
	if (ctx.cr6.eq) goto loc_82586ABC;
	// lwz r5,192(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82586968
	if (ctx.cr6.eq) goto loc_82586968;
	// lis r4,28009
	ctx.r4.s64 = 1835597824;
	// ori r4,r4,28272
	ctx.r4.u64 = ctx.r4.u64 | 28272;
	// bl 0x825b9d78
	ctx.lr = 0x82586968;
	sub_825B9D78(ctx, base);
loc_82586968:
	// lwz r5,196(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82586984
	if (ctx.cr6.eq) goto loc_82586984;
	// lis r4,28015
	ctx.r4.s64 = 1835991040;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// ori r4,r4,30068
	ctx.r4.u64 = ctx.r4.u64 | 30068;
	// bl 0x825b9d78
	ctx.lr = 0x82586984;
	sub_825B9D78(ctx, base);
loc_82586984:
	// lwz r5,200(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825869a0
	if (ctx.cr6.eq) goto loc_825869A0;
	// lis r4,28023
	ctx.r4.s64 = 1836515328;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// ori r4,r4,26980
	ctx.r4.u64 = ctx.r4.u64 | 26980;
	// bl 0x825b9d78
	ctx.lr = 0x825869A0;
	sub_825B9D78(ctx, base);
loc_825869A0:
	// lwz r5,164(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mulli r11,r5,176
	ctx.r11.s64 = ctx.r5.s64 * 176;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r7,r11,464
	ctx.r7.s64 = ctx.r11.s64 + 464;
	// bne cr6,0x82586a34
	if (!ctx.cr6.eq) goto loc_82586A34;
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82586a68
	if (ctx.cr6.eq) goto loc_82586A68;
loc_825869CC:
	// li r29,258
	ctx.r29.s64 = 258;
loc_825869D0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,11668
	ctx.r5.s64 = ctx.r11.s64 + 11668;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82417800
	ctx.lr = 0x825869E4;
	sub_82417800(ctx, base);
	// rlwinm r7,r29,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82586a7c
	if (ctx.cr6.eq) goto loc_82586A7C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82411600
	ctx.lr = 0x825869F8;
	sub_82411600(ctx, base);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,11752
	ctx.r5.s64 = ctx.r11.s64 + 11752;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x82417800
	ctx.lr = 0x82586A1C;
	sub_82417800(ctx, base);
	// b 0x82586a9c
	goto loc_82586A9C;
loc_82586A20:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825a1340
	ctx.lr = 0x82586A28;
	sub_825A1340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82586A34:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82586A3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82586a60
	if (ctx.cr6.eq) goto loc_82586A60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82586a3c
	if (ctx.cr6.eq) goto loc_82586A3C;
loc_82586A60:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x825869cc
	if (!ctx.cr6.lt) goto loc_825869CC;
loc_82586A68:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r29,257
	ctx.r29.s64 = 257;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x825869d0
	goto loc_825869D0;
loc_82586A7C:
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,11740
	ctx.r5.s64 = ctx.r11.s64 + 11740;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82417800
	ctx.lr = 0x82586A9C;
	sub_82417800(ctx, base);
loc_82586A9C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825b9de8
	ctx.lr = 0x82586AAC;
	sub_825B9DE8(ctx, base);
	// stw r26,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r26.u32);
	// bl 0x82418818
	ctx.lr = 0x82586AB4;
	sub_82418818(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// b 0x82586ac0
	goto loc_82586AC0;
loc_82586ABC:
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
loc_82586AC0:
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82586b58
	if (!ctx.cr6.eq) goto loc_82586B58;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x825ba000
	ctx.lr = 0x82586AD4;
	sub_825BA000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82586b30
	if (ctx.cr6.eq) goto loc_82586B30;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x825babb8
	ctx.lr = 0x82586AE8;
	sub_825BABB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// beq cr6,0x82586b2c
	if (ctx.cr6.eq) goto loc_82586B2C;
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// ori r4,r4,26992
	ctx.r4.u64 = ctx.r4.u64 | 26992;
	// bl 0x825ba248
	ctx.lr = 0x82586B04;
	sub_825BA248(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// ori r4,r4,29300
	ctx.r4.u64 = ctx.r4.u64 | 29300;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// bl 0x825ba248
	ctx.lr = 0x82586B1C;
	sub_825BA248(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// sth r3,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r3.u16);
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// b 0x82586b30
	goto loc_82586B30;
loc_82586B2C:
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
loc_82586B30:
	// bl 0x82418818
	ctx.lr = 0x82586B34;
	sub_82418818(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// ble cr6,0x82586b58
	if (!ctx.cr6.gt) goto loc_82586B58;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,11720
	ctx.r5.s64 = ctx.r11.s64 + 11720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825866b8
	ctx.lr = 0x82586B58;
	sub_825866B8(ctx, base);
loc_82586B58:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82586bb0
	if (!ctx.cr6.eq) goto loc_82586BB0;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x825bad20
	ctx.lr = 0x82586B6C;
	sub_825BAD20(ctx, base);
	// lbz r8,85(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82586b84
	if (!ctx.cr6.eq) goto loc_82586B84;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,11700
	ctx.r5.s64 = ctx.r11.s64 + 11700;
	// b 0x82586ba4
	goto loc_82586BA4;
loc_82586B84:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,188(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82586bb0
	if (!ctx.cr6.gt) goto loc_82586BB0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,11676
	ctx.r5.s64 = ctx.r11.s64 + 11676;
loc_82586BA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825866b8
	ctx.lr = 0x82586BB0;
	sub_825866B8(ctx, base);
loc_82586BB0:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82586bf0
	if (ctx.cr6.eq) goto loc_82586BF0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r26,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r26.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82586BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
loc_82586BF0:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82586c00
	if (ctx.cr6.eq) goto loc_82586C00;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82586C00:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825a1340
	ctx.lr = 0x82586C08;
	sub_825A1340(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82586C20;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bne cr6,0x82586c64
	if (!ctx.cr6.eq) goto loc_82586C64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82586db4
	if (ctx.cr6.eq) goto loc_82586DB4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82586db4
	if (ctx.cr6.eq) goto loc_82586DB4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,11796
	ctx.r5.s64 = ctx.r11.s64 + 11796;
	// bl 0x82586728
	ctx.lr = 0x82586C64;
	sub_82586728(ctx, base);
loc_82586C64:
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r28,5
	ctx.r28.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82586d00
	if (!ctx.cr6.eq) goto loc_82586D00;
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82586c98
	if (!ctx.cr6.eq) goto loc_82586C98;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82586ccc
	if (!ctx.cr6.eq) goto loc_82586CCC;
loc_82586C90:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82586cd0
	goto loc_82586CD0;
loc_82586C98:
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82586CA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82586cc4
	if (ctx.cr6.eq) goto loc_82586CC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82586ca0
	if (ctx.cr6.eq) goto loc_82586CA0;
loc_82586CC4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82586c90
	if (!ctx.cr6.gt) goto loc_82586C90;
loc_82586CCC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82586CD0:
	// li r8,6000
	ctx.r8.s64 = 6000;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,6000
	ctx.r7.s64 = 6000;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82589448
	ctx.lr = 0x82586CE8;
	sub_82589448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82586cfc
	if (ctx.cr6.lt) goto loc_82586CFC;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// b 0x82586d00
	goto loc_82586D00;
loc_82586CFC:
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
loc_82586D00:
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82586d2c
	if (!ctx.cr6.eq) goto loc_82586D2C;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x825895b8
	ctx.lr = 0x82586D18;
	sub_825895B8(ctx, base);
	// clrlwi r5,r3,31
	ctx.r5.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82586d2c
	if (ctx.cr6.eq) goto loc_82586D2C;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
loc_82586D2C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82586d40
	if (ctx.cr6.eq) goto loc_82586D40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82586d64
	if (!ctx.cr6.eq) goto loc_82586D64;
loc_82586D40:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x825895b8
	ctx.lr = 0x82586D4C;
	sub_825895B8(ctx, base);
	// rlwinm r3,r3,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82586d64
	if (ctx.cr6.eq) goto loc_82586D64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82586D64:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82586da4
	if (ctx.cr6.eq) goto loc_82586DA4;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82586D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r9.u32);
loc_82586DA4:
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x82586db8
	if (!ctx.cr6.eq) goto loc_82586DB8;
loc_82586DB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82586DB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82586DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82586e20
	if (!ctx.cr6.gt) goto loc_82586E20;
	// addi r30,r29,360
	ctx.r30.s64 = ctx.r29.s64 + 360;
loc_82586DE4:
	// lhz r10,174(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 174);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82586e0c
	if (ctx.cr6.eq) goto loc_82586E0C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586800
	ctx.lr = 0x82586E04;
	sub_82586800(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-176
	ctx.r30.s64 = ctx.r30.s64 + -176;
loc_82586E0C:
	// lwz r8,352(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82586de4
	if (ctx.cr6.lt) goto loc_82586DE4;
loc_82586E20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82586E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82586e9c
	if (!ctx.cr6.gt) goto loc_82586E9C;
	// addi r29,r31,360
	ctx.r29.s64 = ctx.r31.s64 + 360;
loc_82586E50:
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82586e88
	if (ctx.cr6.eq) goto loc_82586E88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825868d8
	ctx.lr = 0x82586E6C;
	sub_825868D8(ctx, base);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82586e88
	if (ctx.cr6.eq) goto loc_82586E88;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82586e9c
	if (ctx.cr6.eq) goto loc_82586E9C;
loc_82586E88:
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82586e50
	if (ctx.cr6.lt) goto loc_82586E50;
loc_82586E9C:
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82586ee4
	if (!ctx.cr6.gt) goto loc_82586EE4;
	// addi r29,r31,360
	ctx.r29.s64 = ctx.r31.s64 + 360;
loc_82586EB0:
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82586ed0
	if (ctx.cr6.eq) goto loc_82586ED0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586c18
	ctx.lr = 0x82586ECC;
	sub_82586C18(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_82586ED0:
	// lwz r4,352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82586eb0
	if (ctx.cr6.lt) goto loc_82586EB0;
loc_82586EE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82586EF0) {
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
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// ori r4,r4,29555
	ctx.r4.u64 = ctx.r4.u64 | 29555;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8240db88
	ctx.lr = 0x82586F20;
	sub_8240DB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82586f98
	if (!ctx.cr6.gt) goto loc_82586F98;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82586f7c
	if (!ctx.cr6.eq) goto loc_82586F7C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82586F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
loc_82586F7C:
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bgt cr6,0x82586f90
	if (ctx.cr6.gt) goto loc_82586F90;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82586F90:
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// b 0x82586fa4
	goto loc_82586FA4;
loc_82586F98:
	// bge cr6,0x82586fa4
	if (!ctx.cr6.lt) goto loc_82586FA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r5.u32);
loc_82586FA4:
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
PPC_FUNC_IMPL(__imp__sub_82586FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82586FC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,26980
	ctx.r4.s64 = 1768161280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,27749
	ctx.r4.u64 = ctx.r4.u64 | 27749;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8240db88
	ctx.lr = 0x82586FE8;
	sub_8240DB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82586ff8
	if (!ctx.cr6.eq) goto loc_82586FF8;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_82586FF8:
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82587040
	if (!ctx.cr6.gt) goto loc_82587040;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r11,r31,504
	ctx.r11.s64 = ctx.r31.s64 + 504;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82587014:
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwx r7,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u32);
	// stwx r6,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82587014
	if (!ctx.cr6.eq) goto loc_82587014;
loc_82587040:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8258710c
	if (!ctx.cr6.gt) goto loc_8258710C;
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r24,5
	ctx.r24.s64 = 5;
loc_8258705C:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x825870f8
	if (ctx.cr6.eq) goto loc_825870F8;
	// addi r28,r30,-136
	ctx.r28.s64 = ctx.r30.s64 + -136;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82587080
	if (ctx.cr6.eq) goto loc_82587080;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x825870f8
	goto loc_825870F8;
loc_82587080:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258709c
	if (ctx.cr6.eq) goto loc_8258709C;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825870bc
	if (!ctx.cr6.eq) goto loc_825870BC;
loc_8258709C:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r29,-136
	ctx.r5.s64 = ctx.r29.s64 + -136;
	// bl 0x8240dda8
	ctx.lr = 0x825870B0;
	sub_8240DDA8(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x825870c4
	goto loc_825870C4;
loc_825870BC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825870f8
	if (!ctx.cr6.eq) goto loc_825870F8;
loc_825870C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8240d188
	ctx.lr = 0x825870D4;
	sub_8240D188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x825870ec
	if (!ctx.cr6.gt) goto loc_825870EC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// b 0x825870f8
	goto loc_825870F8;
loc_825870EC:
	// bge cr6,0x8258710c
	if (!ctx.cr6.lt) goto loc_8258710C;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_825870F8:
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8258705c
	if (ctx.cr6.lt) goto loc_8258705C;
loc_8258710C:
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82587140
	if (!ctx.cr6.eq) goto loc_82587140;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8258713c
	if (!ctx.cr6.gt) goto loc_8258713C;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82587134
	if (!ctx.cr6.eq) goto loc_82587134;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82587134:
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// b 0x82587140
	goto loc_82587140;
loc_8258713C:
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82587140:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825871f8
	if (!ctx.cr6.gt) goto loc_825871F8;
	// addi r28,r31,504
	ctx.r28.s64 = ctx.r31.s64 + 504;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82587158:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r11,-8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// lwzx r10,r27,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8258719c
	if (ctx.cr6.eq) goto loc_8258719C;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82587198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r23.u32);
loc_8258719C:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r10,r27,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825871e0
	if (ctx.cr6.eq) goto loc_825871E0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825871DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r23.u32);
loc_825871E0:
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,176
	ctx.r28.s64 = ctx.r28.s64 + 176;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82587158
	if (ctx.cr6.lt) goto loc_82587158;
loc_825871F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587208) {
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
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82587280
	if (!ctx.cr6.eq) goto loc_82587280;
	// bl 0x82586448
	ctx.lr = 0x82587230;
	sub_82586448(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586600
	ctx.lr = 0x8258723C;
	sub_82586600(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,1
	ctx.r30.s64 = 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82587258
	if (!ctx.cr6.eq) goto loc_82587258;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82587258:
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,29555
	ctx.r4.u64 = ctx.r4.u64 | 29555;
	// bl 0x8240d398
	ctx.lr = 0x82587270;
	sub_8240D398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82587280
	if (!ctx.cr6.eq) goto loc_82587280;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
loc_82587280:
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
PPC_FUNC_IMPL(__imp__sub_82587298) {
	PPC_FUNC_PROLOGUE();
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// b 0x82587208
	sub_82587208(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825872A0) {
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
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82587318
	if (!ctx.cr6.eq) goto loc_82587318;
	// bl 0x82586448
	ctx.lr = 0x825872C4;
	sub_82586448(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586600
	ctx.lr = 0x825872D0;
	sub_82586600(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825872e8
	if (!ctx.cr6.eq) goto loc_825872E8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825872E8:
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,29555
	ctx.r4.u64 = ctx.r4.u64 | 29555;
	// bl 0x8240d398
	ctx.lr = 0x82587300;
	sub_8240D398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82587318
	if (!ctx.cr6.eq) goto loc_82587318;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
loc_82587318:
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
PPC_FUNC_IMPL(__imp__sub_82587330) {
	PPC_FUNC_PROLOGUE();
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// b 0x825872a0
	sub_825872A0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587338) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82587390
	if (ctx.cr6.eq) goto loc_82587390;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82587390
	if (ctx.cr6.eq) goto loc_82587390;
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,360
	ctx.r4.s64 = ctx.r11.s64 + 360;
	// bl 0x825863c0
	ctx.lr = 0x8258737C;
	sub_825863C0(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stw r8,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r8.u32);
loc_82587390:
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
PPC_FUNC_IMPL(__imp__sub_825873A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825873d8
	if (ctx.cr6.eq) goto loc_825873D8;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82586598
	ctx.lr = 0x825873CC;
	sub_82586598(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82587418
	if (ctx.cr6.lt) goto loc_82587418;
loc_825873D8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82587418
	if (ctx.cr6.eq) goto loc_82587418;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82587418
	if (ctx.cr6.eq) goto loc_82587418;
	// mulli r11,r5,176
	ctx.r11.s64 = ctx.r5.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// lhz r10,174(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 174);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r9,174(r11)
	PPC_STORE_U16(ctx.r11.u32 + 174, ctx.r9.u16);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82587418
	if (!ctx.cr6.eq) goto loc_82587418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586dc0
	ctx.lr = 0x82587418;
	sub_82586DC0(ctx, base);
loc_82587418:
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
PPC_FUNC_IMPL(__imp__sub_82587430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82587444
	if (ctx.cr6.eq) goto loc_82587444;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82587444:
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r5,352(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,29300
	ctx.r4.u64 = ctx.r4.u64 | 29300;
	// b 0x8240d398
	sub_8240D398(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28528
	ctx.r4.u64 = ctx.r4.u64 | 28528;
	// b 0x8240d398
	sub_8240D398(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825874A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x825874A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82587568
	if (ctx.cr6.eq) goto loc_82587568;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82587568
	if (ctx.cr6.eq) goto loc_82587568;
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28528
	ctx.r4.u64 = ctx.r4.u64 | 28528;
	// bl 0x8240d398
	ctx.lr = 0x825874E0;
	sub_8240D398(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258752c
	if (!ctx.cr6.gt) goto loc_8258752C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r31,360
	ctx.r29.s64 = ctx.r31.s64 + 360;
	// addi r28,r11,11828
	ctx.r28.s64 = ctx.r11.s64 + 11828;
loc_825874FC:
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82587518
	if (ctx.cr6.eq) goto loc_82587518;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586790
	ctx.lr = 0x82587518;
	sub_82586790(ctx, base);
loc_82587518:
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825874fc
	if (ctx.cr6.lt) goto loc_825874FC;
loc_8258752C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r8,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r8.u32);
	// bl 0x8259d300
	ctx.lr = 0x82587544;
	sub_8259D300(ctx, base);
	// lis r4,25701
	ctx.r4.s64 = 1684340736;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,27749
	ctx.r4.u64 = ctx.r4.u64 | 27749;
	// bl 0x8240d398
	ctx.lr = 0x82587560;
	sub_8240D398(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
loc_82587568:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587578) {
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
	// lis r9,25442
	ctx.r9.s64 = 1667366912;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r8,r9,26224
	ctx.r8.u64 = ctx.r9.u64 | 26224;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825875e0
	if (!ctx.cr6.eq) goto loc_825875E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82587774
	if (ctx.cr6.eq) goto loc_82587774;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82587774
	if (ctx.cr6.lt) goto loc_82587774;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// lbz r4,3(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825875E0:
	// lis r3,25442
	ctx.r3.s64 = 1667366912;
	// ori r9,r3,30064
	ctx.r9.u64 = ctx.r3.u64 | 30064;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82587638
	if (!ctx.cr6.eq) goto loc_82587638;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82587774
	if (ctx.cr6.eq) goto loc_82587774;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82587774
	if (ctx.cr6.lt) goto loc_82587774;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82587638:
	// lis r3,26990
	ctx.r3.s64 = 1768816640;
	// ori r9,r3,26477
	ctx.r9.u64 = ctx.r3.u64 | 26477;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8258766c
	if (!ctx.cr6.eq) goto loc_8258766C;
	// lwz r8,348(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82587780
	if (!ctx.cr6.eq) goto loc_82587780;
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
loc_8258766C:
	// lis r7,27746
	ctx.r7.s64 = 1818361856;
	// ori r5,r7,30054
	ctx.r5.u64 = ctx.r7.u64 | 30054;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82587690
	if (!ctx.cr6.eq) goto loc_82587690;
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82587690:
	// lis r3,28009
	ctx.r3.s64 = 1835597824;
	// ori r9,r3,28272
	ctx.r9.u64 = ctx.r3.u64 | 28272;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825876b4
	if (!ctx.cr6.eq) goto loc_825876B4;
	// lwz r3,192(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825876B4:
	// lis r8,28015
	ctx.r8.s64 = 1835991040;
	// ori r7,r8,30068
	ctx.r7.u64 = ctx.r8.u64 | 30068;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x825876d8
	if (!ctx.cr6.eq) goto loc_825876D8;
loc_825876C4:
	// lwz r3,196(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825876D8:
	// lis r5,28023
	ctx.r5.s64 = 1836515328;
	// ori r3,r5,26980
	ctx.r3.u64 = ctx.r5.u64 | 26980;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x825876c4
	if (ctx.cr6.eq) goto loc_825876C4;
	// lis r9,28773
	ctx.r9.s64 = 1885667328;
	// ori r8,r9,25970
	ctx.r8.u64 = ctx.r9.u64 | 25970;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8258770c
	if (!ctx.cr6.eq) goto loc_8258770C;
	// lwz r3,172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8258770C:
	// lis r7,29541
	ctx.r7.s64 = 1935998976;
	// ori r5,r7,29555
	ctx.r5.u64 = ctx.r7.u64 | 29555;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82587750
	if (!ctx.cr6.eq) goto loc_82587750;
	// addi r9,r10,204
	ctx.r9.s64 = ctx.r10.s64 + 204;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587774
	if (ctx.cr6.eq) goto loc_82587774;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824178c8
	ctx.lr = 0x8258773C;
	sub_824178C8(ctx, base);
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
loc_82587750:
	// lis r9,29817
	ctx.r9.s64 = 1954086912;
	// ori r8,r9,28773
	ctx.r8.u64 = ctx.r9.u64 | 28773;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82587774
	if (!ctx.cr6.eq) goto loc_82587774;
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82587774:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8240db88
	ctx.lr = 0x82587780;
	sub_8240DB88(ctx, base);
loc_82587780:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82587798;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,24949
	ctx.r11.s64 = 1635057664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r10,r11,29807
	ctx.r10.u64 = ctx.r11.u64 | 29807;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825877d0
	if (!ctx.cr6.eq) goto loc_825877D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825877D0:
	// lis r9,25442
	ctx.r9.s64 = 1667366912;
	// ori r8,r9,26224
	ctx.r8.u64 = ctx.r9.u64 | 26224;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825877f0
	if (!ctx.cr6.eq) goto loc_825877F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825877F0:
	// lis r7,25442
	ctx.r7.s64 = 1667366912;
	// ori r6,r7,30064
	ctx.r6.u64 = ctx.r7.u64 | 30064;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82587810
	if (!ctx.cr6.eq) goto loc_82587810;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587810:
	// lis r5,25705
	ctx.r5.s64 = 1684602880;
	// ori r4,r5,29556
	ctx.r4.u64 = ctx.r5.u64 | 29556;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82587844
	if (!ctx.cr6.eq) goto loc_82587844;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x825879a4
	if (!ctx.cr6.lt) goto loc_825879A4;
	// mulli r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587844:
	// lis r10,26468
	ctx.r10.s64 = 1734606848;
	// ori r9,r10,29539
	ctx.r9.u64 = ctx.r10.u64 | 29539;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82587888
	if (!ctx.cr6.eq) goto loc_82587888;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8258787c
	if (!ctx.cr6.lt) goto loc_8258787C;
	// mulli r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,360
	ctx.r4.s64 = ctx.r11.s64 + 360;
	// addi r5,r10,11840
	ctx.r5.s64 = ctx.r10.s64 + 11840;
	// bl 0x825866b8
	ctx.lr = 0x8258787C;
	sub_825866B8(ctx, base);
loc_8258787C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587888:
	// lis r7,27746
	ctx.r7.s64 = 1818361856;
	// ori r6,r7,30054
	ctx.r6.u64 = ctx.r7.u64 | 30054;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x825878a8
	if (!ctx.cr6.eq) goto loc_825878A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825878A8:
	// lis r5,28009
	ctx.r5.s64 = 1835597824;
	// ori r4,r5,28272
	ctx.r4.u64 = ctx.r5.u64 | 28272;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x825878c8
	if (!ctx.cr6.eq) goto loc_825878C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825878C8:
	// lis r3,28015
	ctx.r3.s64 = 1835991040;
	// ori r11,r3,30068
	ctx.r11.u64 = ctx.r3.u64 | 30068;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825878e8
	if (!ctx.cr6.eq) goto loc_825878E8;
loc_825878D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825878E8:
	// lis r10,28023
	ctx.r10.s64 = 1836515328;
	// ori r9,r10,26980
	ctx.r9.u64 = ctx.r10.u64 | 26980;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x825878d8
	if (ctx.cr6.eq) goto loc_825878D8;
	// lis r8,28271
	ctx.r8.s64 = 1852768256;
	// ori r7,r8,28259
	ctx.r7.u64 = ctx.r8.u64 | 28259;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82587924
	if (!ctx.cr6.eq) goto loc_82587924;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x824178c8
	ctx.lr = 0x82587918;
	sub_824178C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587924:
	// lis r6,28773
	ctx.r6.s64 = 1885667328;
	// ori r5,r6,25970
	ctx.r5.u64 = ctx.r6.u64 | 25970;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82587944
	if (!ctx.cr6.eq) goto loc_82587944;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587944:
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// ori r3,r4,29555
	ctx.r3.u64 = ctx.r4.u64 | 29555;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82587970
	if (!ctx.cr6.eq) goto loc_82587970;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x824178c8
	ctx.lr = 0x82587964;
	sub_824178C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587970:
	// lis r11,29547
	ctx.r11.s64 = 1936392192;
	// ori r10,r11,26988
	ctx.r10.u64 = ctx.r11.u64 | 26988;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825879c4
	if (!ctx.cr6.eq) goto loc_825879C4;
	// mulli r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 * 176;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r4,29557
	ctx.r4.s64 = 1937047552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,368
	ctx.r7.s64 = ctx.r11.s64 + 368;
	// ori r4,r4,26980
	ctx.r4.u64 = ctx.r4.u64 | 26980;
	// bl 0x8240d398
	ctx.lr = 0x825879A4;
	sub_8240D398(ctx, base);
loc_825879A4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x8240d398
	ctx.lr = 0x825879BC;
	sub_8240D398(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825879C4:
	// lis r9,29548
	ctx.r9.s64 = 1936457728;
	// ori r8,r9,28532
	ctx.r8.u64 = ctx.r9.u64 | 28532;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825879e0
	if (!ctx.cr6.eq) goto loc_825879E0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r7.u32);
	// b 0x825879a4
	goto loc_825879A4;
loc_825879E0:
	// lis r6,29556
	ctx.r6.s64 = 1936982016;
	// ori r28,r6,24948
	ctx.r28.u64 = ctx.r6.u64 | 24948;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82587a34
	if (!ctx.cr6.eq) goto loc_82587A34;
	// mulli r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 * 176;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r4,29557
	ctx.r4.s64 = 1937047552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,368
	ctx.r7.s64 = ctx.r11.s64 + 368;
	// ori r4,r4,26980
	ctx.r4.u64 = ctx.r4.u64 | 26980;
	// bl 0x8240d398
	ctx.lr = 0x82587A14;
	sub_8240D398(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x8240d398
	ctx.lr = 0x82587A2C;
	sub_8240D398(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587A34:
	// lis r5,29801
	ctx.r5.s64 = 1953038336;
	// ori r4,r5,28005
	ctx.r4.u64 = ctx.r5.u64 | 28005;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82587a68
	if (!ctx.cr6.eq) goto loc_82587A68;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587a5c
	if (ctx.cr6.eq) goto loc_82587A5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82589708
	ctx.lr = 0x82587A5C;
	sub_82589708(ctx, base);
loc_82587A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82587A68:
	// lis r4,29817
	ctx.r4.s64 = 1954086912;
	// ori r3,r4,28773
	ctx.r3.u64 = ctx.r4.u64 | 28773;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x825879a4
	if (!ctx.cr6.eq) goto loc_825879A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587A88) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82587af4
	if (!ctx.cr6.gt) goto loc_82587AF4;
	// addi r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 + 532;
loc_82587AB8:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// beq cr6,0x82587ae0
	if (ctx.cr6.eq) goto loc_82587AE0;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82587ae0
	if (ctx.cr6.eq) goto loc_82587AE0;
	// rlwinm r7,r9,0,16,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82587AE0:
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82587ab8
	if (ctx.cr6.lt) goto loc_82587AB8;
loc_82587AF4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587b04
	if (ctx.cr6.eq) goto loc_82587B04;
	// bl 0x8240cee0
	ctx.lr = 0x82587B04;
	sub_8240CEE0(ctx, base);
loc_82587B04:
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82587b18
	if (!ctx.cr6.eq) goto loc_82587B18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586ef0
	ctx.lr = 0x82587B18;
	sub_82586EF0(ctx, base);
loc_82587B18:
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82587b2c
	if (!ctx.cr6.eq) goto loc_82587B2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586fc0
	ctx.lr = 0x82587B2C;
	sub_82586FC0(ctx, base);
loc_82587B2C:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82587b40
	if (ctx.cr6.eq) goto loc_82587B40;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82587b48
	if (!ctx.cr6.eq) goto loc_82587B48;
loc_82587B40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586e28
	ctx.lr = 0x82587B48;
	sub_82586E28(ctx, base);
loc_82587B48:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82587be0
	if (!ctx.cr6.eq) goto loc_82587BE0;
	// lis r4,26980
	ctx.r4.s64 = 1768161280;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,27749
	ctx.r4.u64 = ctx.r4.u64 | 27749;
	// bl 0x8240db88
	ctx.lr = 0x82587B6C;
	sub_8240DB88(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82587b94
	if (ctx.cr6.eq) goto loc_82587B94;
	// lis r4,26209
	ctx.r4.s64 = 1717633024;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26988
	ctx.r4.u64 = ctx.r4.u64 | 26988;
	// bl 0x8240db88
	ctx.lr = 0x82587B8C;
	sub_8240DB88(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82587be0
	if (!ctx.cr6.eq) goto loc_82587BE0;
loc_82587B94:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,5
	ctx.r6.s64 = 5;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82587BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
loc_82587BE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586dc0
	ctx.lr = 0x82587BE8;
	sub_82586DC0(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_82587C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82587a88
	sub_82587A88(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82587C20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mulli r11,r29,176
	ctx.r11.s64 = ctx.r29.s64 * 176;
	// addi r30,r11,536
	ctx.r30.s64 = ctx.r11.s64 + 536;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82366620
	ctx.lr = 0x82587C48;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82587c88
	if (ctx.cr6.eq) goto loc_82587C88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x82587C60;
	sub_8259D300(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3658
	ctx.r4.s64 = 3658;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240ce30
	ctx.lr = 0x82587C74;
	sub_8240CE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne cr6,0x82587c94
	if (!ctx.cr6.eq) goto loc_82587C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x82587C88;
	sub_82366680(ctx, base);
loc_82587C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82587C94:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824178c8
	ctx.lr = 0x82587CA4;
	sub_824178C8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// bne cr6,0x82587cbc
	if (!ctx.cr6.eq) goto loc_82587CBC;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r28,r11,-6136
	ctx.r28.s64 = ctx.r11.s64 + -6136;
loc_82587CBC:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r9,15000
	ctx.r9.s64 = 15000;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r3,r11,31744
	ctx.r3.s64 = ctx.r11.s64 + 31744;
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// bl 0x82414988
	ctx.lr = 0x82587CF4;
	sub_82414988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82587D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825892d0
	ctx.lr = 0x82587D1C;
	sub_825892D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// bne cr6,0x82587d40
	if (!ctx.cr6.eq) goto loc_82587D40;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82589140
	ctx.lr = 0x82587D34;
	sub_82589140(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82587D40:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587d5c
	if (ctx.cr6.eq) goto loc_82587D5C;
	// lis r4,29801
	ctx.r4.s64 = 1953038336;
	// ori r4,r4,28005
	ctx.r4.u64 = ctx.r4.u64 | 28005;
	// bl 0x82589708
	ctx.lr = 0x82587D5C;
	sub_82589708(ctx, base);
loc_82587D5C:
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,27750
	ctx.r4.u64 = ctx.r4.u64 | 27750;
	// bl 0x8240d398
	ctx.lr = 0x82587D78;
	sub_8240D398(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x825893b0
	ctx.lr = 0x82587D84;
	sub_825893B0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x824178c8
	ctx.lr = 0x82587D94;
	sub_824178C8(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82587DA4;
	sub_8259D3A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82587DB0) {
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
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82587de0
	if (ctx.cr6.eq) goto loc_82587DE0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82587de0
	if (ctx.cr6.eq) goto loc_82587DE0;
	// bl 0x825874a0
	ctx.lr = 0x82587DE0;
	sub_825874A0(ctx, base);
loc_82587DE0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,31744
	ctx.r3.s64 = ctx.r11.s64 + 31744;
	// bl 0x824149f8
	ctx.lr = 0x82587DF0;
	sub_824149F8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587e08
	if (ctx.cr6.eq) goto loc_82587E08;
	// bl 0x8240d320
	ctx.lr = 0x82587E04;
	sub_8240D320(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82587E08:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82587e34
	if (!ctx.cr6.gt) goto loc_82587E34;
	// addi r11,r31,360
	ctx.r11.s64 = ctx.r31.s64 + 360;
loc_82587E1C:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82587e1c
	if (ctx.cr6.lt) goto loc_82587E1C;
loc_82587E34:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587e50
	if (ctx.cr6.eq) goto loc_82587E50;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82587e50
	if (!ctx.cr6.eq) goto loc_82587E50;
	// bl 0x825892e0
	ctx.lr = 0x82587E50;
	sub_825892E0(ctx, base);
loc_82587E50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x82587E58;
	sub_82366680(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_82587E70) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82587ed0
	if (ctx.cr6.eq) goto loc_82587ED0;
	// lis r10,26467
	ctx.r10.s64 = 1734541312;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r9,r10,29285
	ctx.r9.u64 = ctx.r10.u64 | 29285;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82587ec8
	if (ctx.cr6.eq) goto loc_82587EC8;
	// lis r8,26474
	ctx.r8.s64 = 1735000064;
	// ori r7,r8,28521
	ctx.r7.u64 = ctx.r8.u64 | 28521;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82587ec8
	if (ctx.cr6.eq) goto loc_82587EC8;
	// lis r6,26481
	ctx.r6.s64 = 1735458816;
	// ori r5,r6,30571
	ctx.r5.u64 = ctx.r6.u64 | 30571;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82587ed0
	if (!ctx.cr6.eq) goto loc_82587ED0;
loc_82587EC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1800, ctx.r11.u32);
loc_82587ED0:
	// addi r31,r30,1672
	ctx.r31.s64 = ctx.r30.s64 + 1672;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82587f0c
	if (!ctx.cr6.eq) goto loc_82587F0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82587efc
	if (ctx.cr6.eq) goto loc_82587EFC;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82587EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82587EFC:
	// li r5,112
	ctx.r5.s64 = 112;
	// addi r4,r30,1688
	ctx.r4.s64 = ctx.r30.s64 + 1688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259dd00
	ctx.lr = 0x82587F0C;
	sub_8259DD00(ctx, base);
loc_82587F0C:
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
PPC_FUNC_IMPL(__imp__sub_82587F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82587F30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,26467
	ctx.r11.s64 = 1734541312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,29285
	ctx.r10.u64 = ctx.r11.u64 | 29285;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82587f64
	if (!ctx.cr6.eq) goto loc_82587F64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r9.u32);
	// b 0x82587fbc
	goto loc_82587FBC;
loc_82587F64:
	// lis r8,26474
	ctx.r8.s64 = 1735000064;
	// ori r7,r8,28521
	ctx.r7.u64 = ctx.r8.u64 | 28521;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82587f80
	if (!ctx.cr6.eq) goto loc_82587F80;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r6.u32);
	// b 0x82587fbc
	goto loc_82587FBC;
loc_82587F80:
	// lis r5,26481
	ctx.r5.s64 = 1735458816;
	// ori r4,r5,30571
	ctx.r4.u64 = ctx.r5.u64 | 30571;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82587fbc
	if (!ctx.cr6.eq) goto loc_82587FBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,27684
	ctx.r4.s64 = ctx.r11.s64 + 27684;
	// bl 0x82403840
	ctx.lr = 0x82587FA0;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x82587FA8;
	sub_82403C00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82587fb8
	if (ctx.cr6.eq) goto loc_82587FB8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82587FB8:
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
loc_82587FBC:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,1672
	ctx.r11.s64 = ctx.r31.s64 + 1672;
loc_82587FC4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82587fe8
	if (ctx.cr6.eq) goto loc_82587FE8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x82587fc4
	if (ctx.cr6.lt) goto loc_82587FC4;
	// b 0x82588004
	goto loc_82588004;
loc_82587FE8:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r28,r10,32368
	ctx.r28.s64 = ctx.r10.s64 + 32368;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82588004:
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x82588028
	if (ctx.cr6.eq) goto loc_82588028;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8240e350
	ctx.lr = 0x82588024;
	sub_8240E350(ctx, base);
	// stw r3,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r3.u32);
loc_82588028:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82588038;
	__savegprlr_27(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,-5952(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5952);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// bne cr6,0x82588140
	if (!ctx.cr6.eq) goto loc_82588140;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82588140
	if (!ctx.cr6.eq) goto loc_82588140;
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,29555
	ctx.r4.u64 = ctx.r4.u64 | 29555;
	// bl 0x82587578
	ctx.lr = 0x82588084;
	sub_82587578(ctx, base);
	// lis r4,28271
	ctx.r4.s64 = 1852768256;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,28259
	ctx.r4.u64 = ctx.r4.u64 | 28259;
	// bl 0x82587578
	ctx.lr = 0x8258809C;
	sub_82587578(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,27676
	ctx.r5.s64 = ctx.r11.s64 + 27676;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// bl 0x82405fe0
	ctx.lr = 0x825880BC;
	sub_82405FE0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,10824
	ctx.r5.s64 = ctx.r11.s64 + 10824;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82405fe0
	ctx.lr = 0x825880D4;
	sub_82405FE0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r31,1672
	ctx.r11.s64 = ctx.r31.s64 + 1672;
loc_825880E4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r4,26483
	ctx.r4.s64 = 1735589888;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// ori r4,r4,25972
	ctx.r4.u64 = ctx.r4.u64 | 25972;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82588110
	if (ctx.cr6.eq) goto loc_82588110;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x825880e4
	if (ctx.cr6.lt) goto loc_825880E4;
	// b 0x82588128
	goto loc_82588128;
loc_82588110:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r6,r10,32368
	ctx.r6.s64 = ctx.r10.s64 + 32368;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_82588128:
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x82588140
	if (ctx.cr6.eq) goto loc_82588140;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8240e350
	ctx.lr = 0x8258813C;
	sub_8240E350(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
loc_82588140:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82588160
	if (ctx.cr6.eq) goto loc_82588160;
	// lwz r5,1668(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82588160:
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825a1340
	ctx.lr = 0x82588168;
	sub_825A1340(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588170) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,524(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825881c8
	if (!ctx.cr6.gt) goto loc_825881C8;
	// addi r7,r3,536
	ctx.r7.s64 = ctx.r3.s64 + 536;
loc_82588184:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8258818C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825881b0
	if (ctx.cr6.eq) goto loc_825881B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8258818c
	if (ctx.cr6.eq) goto loc_8258818C;
loc_825881B0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825881c8
	if (ctx.cr6.eq) goto loc_825881C8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,140
	ctx.r7.s64 = ctx.r7.s64 + 140;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82588184
	if (ctx.cr6.lt) goto loc_82588184;
loc_825881C8:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825881E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x825881E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// lwz r11,-5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5952);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, ctx.r11.u32);
	// bne cr6,0x82588218
	if (!ctx.cr6.eq) goto loc_82588218;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82588218:
	// rlwinm r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82588228
	if (ctx.cr6.eq) goto loc_82588228;
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
loc_82588228:
	// lwz r7,524(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82588288
	if (!ctx.cr6.gt) goto loc_82588288;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,560
	ctx.r31.s64 = ctx.r29.s64 + 560;
loc_82588240:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824178c8
	ctx.lr = 0x82588250;
	sub_824178C8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824178c8
	ctx.lr = 0x82588260;
	sub_824178C8(ctx, base);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r4,524(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 524);
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// stw r6,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r6.u32);
	// stw r5,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r5.u32);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// blt cr6,0x82588240
	if (ctx.cr6.lt) goto loc_82588240;
loc_82588288:
	// lwz r3,1800(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1800);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825882c0
	if (!ctx.cr6.eq) goto loc_825882C0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82587298
	ctx.lr = 0x825882AC;
	sub_82587298(ctx, base);
	// lwz r3,2256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// bl 0x825a1340
	ctx.lr = 0x825882B4;
	sub_825A1340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825882C0:
	// addi r7,r29,76
	ctx.r7.s64 = ctx.r29.s64 + 76;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825882e4
	if (!ctx.cr6.eq) goto loc_825882E4;
	// lwz r3,2256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// bl 0x825a1340
	ctx.lr = 0x825882D8;
	sub_825A1340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_825882E4:
	// lis r4,29541
	ctx.r4.s64 = 1935998976;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,29555
	ctx.r4.u64 = ctx.r4.u64 | 29555;
	// bl 0x82587790
	ctx.lr = 0x825882FC;
	sub_82587790(ctx, base);
	// lis r4,28271
	ctx.r4.s64 = 1852768256;
	// addi r7,r29,336
	ctx.r7.s64 = ctx.r29.s64 + 336;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28259
	ctx.r4.u64 = ctx.r4.u64 | 28259;
	// bl 0x82587790
	ctx.lr = 0x82588318;
	sub_82587790(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82587330
	ctx.lr = 0x82588330;
	sub_82587330(ctx, base);
	// lwz r3,2256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// bl 0x825a1340
	ctx.lr = 0x82588338;
	sub_825A1340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82588350;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5952);
	// lwz r10,536(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// ble cr6,0x825883e8
	if (!ctx.cr6.gt) goto loc_825883E8;
	// addi r31,r28,548
	ctx.r31.s64 = ctx.r28.s64 + 548;
loc_8258837C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82588170
	ctx.lr = 0x82588388;
	sub_82588170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825883d4
	if (!ctx.cr6.eq) goto loc_825883D4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r28,1804
	ctx.r11.s64 = ctx.r28.s64 + 1804;
loc_82588398:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825883bc
	if (ctx.cr6.eq) goto loc_825883BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82588398
	if (ctx.cr6.eq) goto loc_82588398;
loc_825883BC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825884c0
	if (ctx.cr6.eq) goto loc_825884C0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825873a8
	ctx.lr = 0x825883D4;
	sub_825873A8(ctx, base);
loc_825883D4:
	// lwz r7,536(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8258837c
	if (ctx.cr6.lt) goto loc_8258837C;
loc_825883E8:
	// lwz r5,524(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 524);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825884b0
	if (!ctx.cr6.gt) goto loc_825884B0;
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// addi r31,r27,536
	ctx.r31.s64 = ctx.r27.s64 + 536;
loc_82588400:
	// lwz r5,524(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82588458
	if (!ctx.cr6.gt) goto loc_82588458;
	// addi r7,r30,536
	ctx.r7.s64 = ctx.r30.s64 + 536;
loc_82588414:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8258841C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82588440
	if (ctx.cr6.eq) goto loc_82588440;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8258841c
	if (ctx.cr6.eq) goto loc_8258841C;
loc_82588440:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82588458
	if (ctx.cr6.eq) goto loc_82588458;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,140
	ctx.r7.s64 = ctx.r7.s64 + 140;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82588414
	if (ctx.cr6.lt) goto loc_82588414;
loc_82588458:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8258849c
	if (!ctx.cr6.eq) goto loc_8258849C;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x824178c8
	ctx.lr = 0x82588470;
	sub_824178C8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824178c8
	ctx.lr = 0x82588480;
	sub_824178C8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82587338
	ctx.lr = 0x8258849C;
	sub_82587338(ctx, base);
loc_8258849C:
	// lwz r10,524(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 524);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82588400
	if (ctx.cr6.lt) goto loc_82588400;
loc_825884B0:
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x825a1340
	ctx.lr = 0x825884B8;
	sub_825A1340(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_825884C0:
	// bl 0x825874a0
	ctx.lr = 0x825884C4;
	sub_825874A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r6,1800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1800, ctx.r6.u32);
	// bl 0x825a1340
	ctx.lr = 0x825884D4;
	sub_825A1340(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825884E0) {
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
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,26465
	ctx.r10.s64 = 1734410240;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// ori r9,r10,28005
	ctx.r9.u64 = ctx.r10.u64 | 28005;
	// lwz r8,-5952(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5952);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// stw r8,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r8.u32);
	// bne cr6,0x82588584
	if (!ctx.cr6.eq) goto loc_82588584;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// bl 0x82403840
	ctx.lr = 0x8258852C;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82588548
	if (!ctx.cr6.eq) goto loc_82588548;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825874a0
	ctx.lr = 0x8258853C;
	sub_825874A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r6.u32);
	// b 0x82588584
	goto loc_82588584;
loc_82588548:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82411a58
	ctx.lr = 0x82588554;
	sub_82411A58(ctx, base);
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x825885dc
	if (!ctx.cr6.eq) goto loc_825885DC;
	// bl 0x825881e0
	ctx.lr = 0x8258856C;
	sub_825881E0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82588584
	if (!ctx.cr6.eq) goto loc_82588584;
loc_82588574:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1652
	ctx.r5.s64 = 1652;
	// bl 0x8259d3a0
	ctx.lr = 0x82588584;
	sub_8259D3A0(ctx, base);
loc_82588584:
	// lis r3,28780
	ctx.r3.s64 = 1886126080;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r3,24953
	ctx.r11.u64 = ctx.r3.u64 | 24953;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825885bc
	if (!ctx.cr6.eq) goto loc_825885BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82411a58
	ctx.lr = 0x825885A4;
	sub_82411A58(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588348
	ctx.lr = 0x825885B0;
	sub_82588348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82587430
	ctx.lr = 0x825885BC;
	sub_82587430(ctx, base);
loc_825885BC:
	// lwz r3,1732(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1732);
	// bl 0x825a1340
	ctx.lr = 0x825885C4;
	sub_825A1340(ctx, base);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
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
loc_825885DC:
	// bl 0x82588348
	ctx.lr = 0x825885E0;
	sub_82588348(ctx, base);
	// b 0x82588574
	goto loc_82588574;
}
PPC_FUNC_IMPL(__imp__sub_825885E8) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r3,1804
	ctx.r3.s64 = ctx.r3.s64 + 1804;
	// b 0x824178c8
	sub_824178C8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825885F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82588600;
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
	// lwz r11,1800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258864c
	if (!ctx.cr6.eq) goto loc_8258864C;
	// li r5,1652
	ctx.r5.s64 = 1652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8259d300
	ctx.lr = 0x82588630;
	sub_8259D300(ctx, base);
	// lis r4,26467
	ctx.r4.s64 = 1734541312;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,29285
	ctx.r4.u64 = ctx.r4.u64 | 29285;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82587f28
	ctx.lr = 0x8258864C;
	sub_82587F28(ctx, base);
loc_8258864C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82588660;
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
	// lwz r11,1800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825886ac
	if (!ctx.cr6.eq) goto loc_825886AC;
	// li r5,1652
	ctx.r5.s64 = 1652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8259d300
	ctx.lr = 0x82588690;
	sub_8259D300(ctx, base);
	// lis r4,26474
	ctx.r4.s64 = 1735000064;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,28521
	ctx.r4.u64 = ctx.r4.u64 | 28521;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82587f28
	ctx.lr = 0x825886AC;
	sub_82587F28(ctx, base);
loc_825886AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825886B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x825886C0;
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
	// lwz r11,1800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258870c
	if (!ctx.cr6.eq) goto loc_8258870C;
	// li r5,1652
	ctx.r5.s64 = 1652;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8259d300
	ctx.lr = 0x825886F0;
	sub_8259D300(ctx, base);
	// lis r4,26481
	ctx.r4.s64 = 1735458816;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,30571
	ctx.r4.u64 = ctx.r4.u64 | 30571;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82587f28
	ctx.lr = 0x8258870C;
	sub_82587F28(ctx, base);
loc_8258870C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588718) {
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
	// lwz r11,1800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1800);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82588784
	if (ctx.cr6.eq) goto loc_82588784;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825887f0
	if (ctx.cr6.eq) goto loc_825887F0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,26483
	ctx.r10.s64 = 1735589888;
	// lis r7,26990
	ctx.r7.s64 = 1768816640;
	// addi r11,r11,11856
	ctx.r11.s64 = ctx.r11.s64 + 11856;
	// ori r8,r10,29793
	ctx.r8.u64 = ctx.r10.u64 | 29793;
	// ori r6,r7,28528
	ctx.r6.u64 = ctx.r7.u64 | 28528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82588780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825887f0
	goto loc_825887F0;
loc_82588784:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r3,1672
	ctx.r11.s64 = ctx.r3.s64 + 1672;
loc_82588794:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r4,26483
	ctx.r4.s64 = 1735589888;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// ori r4,r4,29793
	ctx.r4.u64 = ctx.r4.u64 | 29793;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825887c0
	if (ctx.cr6.eq) goto loc_825887C0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x82588794
	if (ctx.cr6.lt) goto loc_82588794;
	// b 0x825887d8
	goto loc_825887D8;
loc_825887C0:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r6,r10,32368
	ctx.r6.s64 = ctx.r10.s64 + 32368;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_825887D8:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x825887f0
	if (ctx.cr6.eq) goto loc_825887F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8240e350
	ctx.lr = 0x825887EC;
	sub_8240E350(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_825887F0:
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
PPC_FUNC_IMPL(__imp__sub_82588808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1800);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258882c
	if (!ctx.cr6.eq) goto loc_8258882C;
	// lis r11,26468
	ctx.r11.s64 = 1734606848;
	// ori r11,r11,25964
	ctx.r11.u64 = ctx.r11.u64 | 25964;
	// b 0x82588834
	goto loc_82588834;
loc_8258882C:
	// lis r11,26476
	ctx.r11.s64 = 1735131136;
	// ori r11,r11,25953
	ctx.r11.u64 = ctx.r11.u64 | 25953;
loc_82588834:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82587f28
	sub_82587F28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82588850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1840
	ctx.r3.s64 = 1840;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82366620
	ctx.lr = 0x82588864;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82588878
	if (!ctx.cr6.eq) goto loc_82588878;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82588878:
	// li r5,1840
	ctx.r5.s64 = 1840;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x82588888;
	sub_8259D300(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r5,r11,-31520
	ctx.r5.s64 = ctx.r11.s64 + -31520;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240e1b8
	ctx.lr = 0x825888A8;
	sub_8240E1B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,25442
	ctx.r4.s64 = 1667366912;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,1664
	ctx.r5.s64 = ctx.r31.s64 + 1664;
	// ori r4,r4,26224
	ctx.r4.u64 = ctx.r4.u64 | 26224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82587578
	ctx.lr = 0x825888C8;
	sub_82587578(ctx, base);
	// lis r4,25442
	ctx.r4.s64 = 1667366912;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,1668
	ctx.r5.s64 = ctx.r31.s64 + 1668;
	// ori r4,r4,30064
	ctx.r4.u64 = ctx.r4.u64 | 30064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82587578
	ctx.lr = 0x825888E0;
	sub_82587578(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r4,25442
	ctx.r4.s64 = 1667366912;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-32720
	ctx.r7.s64 = ctx.r11.s64 + -32720;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26224
	ctx.r4.u64 = ctx.r4.u64 | 26224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82587790
	ctx.lr = 0x82588900;
	sub_82587790(ctx, base);
	// lis r4,25442
	ctx.r4.s64 = 1667366912;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,30064
	ctx.r4.u64 = ctx.r4.u64 | 30064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82587790
	ctx.lr = 0x8258891C;
	sub_82587790(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-6136
	ctx.r3.s64 = ctx.r11.s64 + -6136;
	// stb r10,1836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1836, ctx.r10.u8);
	// bl 0x82414988
	ctx.lr = 0x82588934;
	sub_82414988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82588948;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-6136
	ctx.r3.s64 = ctx.r11.s64 + -6136;
	// bl 0x824149f8
	ctx.lr = 0x82588960;
	sub_824149F8(ctx, base);
	// lis r4,25442
	ctx.r4.s64 = 1667366912;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,1664(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,26224
	ctx.r4.u64 = ctx.r4.u64 | 26224;
	// bl 0x82587790
	ctx.lr = 0x8258897C;
	sub_82587790(ctx, base);
	// lis r4,25442
	ctx.r4.s64 = 1667366912;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,1668(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,30064
	ctx.r4.u64 = ctx.r4.u64 | 30064;
	// bl 0x82587790
	ctx.lr = 0x82588998;
	sub_82587790(ctx, base);
	// addi r30,r31,1684
	ctx.r30.s64 = ctx.r31.s64 + 1684;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825889A4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825889bc
	if (!ctx.cr6.gt) goto loc_825889BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8240f0d8
	ctx.lr = 0x825889B8;
	sub_8240F0D8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_825889BC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825889a4
	if (!ctx.cr6.eq) goto loc_825889A4;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8240e220
	ctx.lr = 0x825889D8;
	sub_8240E220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x825889E0;
	sub_82366680(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825889E8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_825889FC:
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r9,4,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// lbz r11,-1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82588a24
	if (ctx.cr6.lt) goto loc_82588A24;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r8,48
	ctx.r8.s64 = 48;
	// blt cr6,0x82588a28
	if (ctx.cr6.lt) goto loc_82588A28;
loc_82588A24:
	// li r8,87
	ctx.r8.s64 = 87;
loc_82588A28:
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// or r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rldicr r9,r11,4,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82588a58
	if (ctx.cr6.lt) goto loc_82588A58;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r9,48
	ctx.r9.s64 = 48;
	// blt cr6,0x82588a5c
	if (ctx.cr6.lt) goto loc_82588A5C;
loc_82588A58:
	// li r9,87
	ctx.r9.s64 = 87;
loc_82588A5C:
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ld r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rldicr r8,r9,4,59
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82588a90
	if (ctx.cr6.lt) goto loc_82588A90;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r9,48
	ctx.r9.s64 = 48;
	// blt cr6,0x82588a94
	if (ctx.cr6.lt) goto loc_82588A94;
loc_82588A90:
	// li r9,87
	ctx.r9.s64 = 87;
loc_82588A94:
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r6,r8,4,59
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r6,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r6.u64);
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82588ac8
	if (ctx.cr6.lt) goto loc_82588AC8;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r9,48
	ctx.r9.s64 = 48;
	// blt cr6,0x82588acc
	if (ctx.cr6.lt) goto loc_82588ACC;
loc_82588AC8:
	// li r9,87
	ctx.r9.s64 = 87;
loc_82588ACC:
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 | ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r6,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r6.u64);
	// bne cr6,0x825889fc
	if (!ctx.cr6.eq) goto loc_825889FC;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82588B00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82588b7c
	if (ctx.cr6.eq) goto loc_82588B7C;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82588b74
	if (!ctx.cr6.gt) goto loc_82588B74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82588B28:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82588b60
	if (!ctx.cr6.eq) goto loc_82588B60;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x824219c8
	ctx.lr = 0x82588B4C;
	sub_824219C8(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82588b60
	if (ctx.cr6.eq) goto loc_82588B60;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82588B60:
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82588b28
	if (ctx.cr6.lt) goto loc_82588B28;
loc_82588B74:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r6.u32);
loc_82588B7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82588B90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588c74
	if (!ctx.cr6.gt) goto loc_82588C74;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82588BB4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r26,r24,r11
	ctx.r26.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82588c60
	if (!ctx.cr6.eq) goto loc_82588C60;
	// lwz r9,136(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82588bfc
	if (!ctx.cr6.eq) goto loc_82588BFC;
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82588bfc
	if (ctx.cr6.eq) goto loc_82588BFC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// slw r10,r27,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 | ctx.r10.u64;
	// b 0x82588c18
	goto loc_82588C18;
loc_82588BFC:
	// slw r6,r27,r28
	ctx.r6.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// and r30,r5,r10
	ctx.r30.u64 = ctx.r5.u64 & ctx.r10.u64;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82588C18:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82588c28
	if (ctx.cr6.eq) goto loc_82588C28;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82589ca8
	ctx.lr = 0x82588C28;
	sub_82589CA8(ctx, base);
loc_82588C28:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82588c40
	if (ctx.cr6.eq) goto loc_82588C40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82589cc0
	ctx.lr = 0x82588C40;
	sub_82589CC0(ctx, base);
loc_82588C40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// ld r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82588C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82588C60:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r24,r24,144
	ctx.r24.s64 = ctx.r24.s64 + 144;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82588bb4
	if (ctx.cr6.lt) goto loc_82588BB4;
loc_82588C74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588C80) {
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
	// lbz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r4,10
	ctx.r5.s64 = ctx.r4.s64 + 10;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82588CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82588CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82588d90
	if (ctx.cr6.eq) goto loc_82588D90;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82588d58
	if (ctx.cr6.eq) goto loc_82588D58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82588D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,11872
	ctx.r5.s64 = ctx.r11.s64 + 11872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82588D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82588D58:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,104(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r11,80(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82588D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82588D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r8.u32);
loc_82588D90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82588DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588df8
	if (!ctx.cr6.gt) goto loc_82588DF8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82588DC0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82588de4
	if (!ctx.cr6.eq) goto loc_82588DE4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82588cd8
	ctx.lr = 0x82588DE4;
	sub_82588CD8(ctx, base);
loc_82588DE4:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82588dc0
	if (ctx.cr6.lt) goto loc_82588DC0;
loc_82588DF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82588E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,11872
	ctx.r29.s64 = ctx.r11.s64 + 11872;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82588e74
	if (ctx.cr6.eq) goto loc_82588E74;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82588E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82588E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r5,r6,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r5,r5,0,26,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
loc_82588E74:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82588E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82588eb8
	if (!ctx.cr6.eq) goto loc_82588EB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82588EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82588EB8:
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82588ecc
	if (ctx.cr6.eq) goto loc_82588ECC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82588ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82588ED8) {
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
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82588f08
	if (!ctx.cr6.eq) goto loc_82588F08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82588f34
	goto loc_82588F34;
loc_82588F08:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588d98
	ctx.lr = 0x82588F14;
	sub_82588D98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588e00
	ctx.lr = 0x82588F20;
	sub_82588E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588d98
	ctx.lr = 0x82588F30;
	sub_82588D98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82588F34:
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
PPC_FUNC_IMPL(__imp__sub_82588F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82588F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,-5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5952);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825c6b9c
	ctx.lr = 0x82588F80;
	__imp__XNotifyGetNext(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82588f90
	if (ctx.cr6.eq) goto loc_82588F90;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
loc_82588F90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588af8
	ctx.lr = 0x82588F98;
	sub_82588AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588b88
	ctx.lr = 0x82588FA0;
	sub_82588B88(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82588FA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82588FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw r8,r3,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// or r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 | ctx.r29.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82588fa8
	if (ctx.cr6.lt) goto loc_82588FA8;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// slw r7,r28,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r4.u8 & 0x3F));
	// and r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 & ctx.r29.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82588ff8
	if (ctx.cr6.eq) goto loc_82588FF8;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r3,r5,64
	ctx.r3.u64 = ctx.r5.u64 | 64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x82589004
	goto loc_82589004;
loc_82588FF8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_82589004:
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// blt cr6,0x8258907c
	if (ctx.cr6.lt) goto loc_8258907C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82589038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8258907c
	if (ctx.cr6.lt) goto loc_8258907C;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82589044:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82589bc8
	ctx.lr = 0x82589050;
	sub_82589BC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82589074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82589044
	if (!ctx.cr6.lt) goto loc_82589044;
loc_8258907C:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8258a418
	ctx.lr = 0x82589084;
	sub_8258A418(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825a1340
	ctx.lr = 0x8258908C;
	sub_825A1340(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82589098) {
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
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825890d0
	if (!ctx.cr6.eq) goto loc_825890D0;
loc_825890BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825b3c00
	ctx.lr = 0x825890C4;
	sub_825B3C00(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825890bc
	if (ctx.cr6.eq) goto loc_825890BC;
loc_825890D0:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82589120
	if (ctx.cr6.eq) goto loc_82589120;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
loc_825890E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c719c
	ctx.lr = 0x825890F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588f50
	ctx.lr = 0x825890F8;
	sub_82588F50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c718c
	ctx.lr = 0x82589100;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825b3c00
	ctx.lr = 0x82589108;
	sub_825B3C00(ctx, base);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825890e8
	if (!ctx.cr6.eq) goto loc_825890E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// b 0x82589128
	goto loc_82589128;
loc_82589120:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
loc_82589128:
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
PPC_FUNC_IMPL(__imp__sub_82589140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82589148;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,-8924(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825891c4
	if (!ctx.cr6.eq) goto loc_825891C4;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82366620
	ctx.lr = 0x82589170;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825891c4
	if (ctx.cr6.eq) goto loc_825891C4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8258918C:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8258918c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8258918C;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x82589898
	ctx.lr = 0x825891B4;
	sub_82589898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x825891d0
	if (!ctx.cr6.lt) goto loc_825891D0;
loc_825891BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x825891C4;
	sub_82366680(ctx, base);
loc_825891C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_825891D0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825891E0:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x825891e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825891E0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r11,11872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11872);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lwz r11,11876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11876);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8258b610
	ctx.lr = 0x8258923C;
	sub_8258B610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x825891bc
	if (ctx.cr6.lt) goto loc_825891BC;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x825c71ac
	ctx.lr = 0x8258924C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-28520
	ctx.r5.s64 = ctx.r11.s64 + -28520;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825af158
	ctx.lr = 0x8258926C;
	sub_825AF158(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x825aee40
	ctx.lr = 0x8258927C;
	sub_825AEE40(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-29480
	ctx.r5.s64 = ctx.r10.s64 + -29480;
	// addi r4,r11,-29568
	ctx.r4.s64 = ctx.r11.s64 + -29568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82589920
	ctx.lr = 0x82589298;
	sub_82589920(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,47
	ctx.r3.s64 = 47;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x825af9f8
	ctx.lr = 0x825892B4;
	sub_825AF9F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,-8924(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8924, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

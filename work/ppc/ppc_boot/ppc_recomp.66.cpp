#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_82479F50"))) PPC_WEAK_FUNC(sub_82479F50);
__attribute__((alias("__imp__sub_8247AD10"))) PPC_WEAK_FUNC(sub_8247AD10);
__attribute__((alias("__imp__sub_8247B2A8"))) PPC_WEAK_FUNC(sub_8247B2A8);
__attribute__((alias("__imp__sub_8247B560"))) PPC_WEAK_FUNC(sub_8247B560);
__attribute__((alias("__imp__sub_8247BAA8"))) PPC_WEAK_FUNC(sub_8247BAA8);
__attribute__((alias("__imp__sub_8247BDD8"))) PPC_WEAK_FUNC(sub_8247BDD8);
__attribute__((alias("__imp__sub_8247C4C0"))) PPC_WEAK_FUNC(sub_8247C4C0);
__attribute__((alias("__imp__sub_8247C578"))) PPC_WEAK_FUNC(sub_8247C578);
__attribute__((alias("__imp__sub_8247C6C0"))) PPC_WEAK_FUNC(sub_8247C6C0);
__attribute__((alias("__imp__sub_8247C850"))) PPC_WEAK_FUNC(sub_8247C850);
__attribute__((alias("__imp__sub_8247CC90"))) PPC_WEAK_FUNC(sub_8247CC90);
__attribute__((alias("__imp__sub_8247CD78"))) PPC_WEAK_FUNC(sub_8247CD78);
__attribute__((alias("__imp__sub_8247E2C0"))) PPC_WEAK_FUNC(sub_8247E2C0);
__attribute__((alias("__imp__sub_8247E300"))) PPC_WEAK_FUNC(sub_8247E300);
__attribute__((alias("__imp__sub_8247E340"))) PPC_WEAK_FUNC(sub_8247E340);
__attribute__((alias("__imp__sub_8247E430"))) PPC_WEAK_FUNC(sub_8247E430);
__attribute__((alias("__imp__sub_8247E478"))) PPC_WEAK_FUNC(sub_8247E478);
__attribute__((alias("__imp__sub_8247E4D8"))) PPC_WEAK_FUNC(sub_8247E4D8);
__attribute__((alias("__imp__sub_8247E5A8"))) PPC_WEAK_FUNC(sub_8247E5A8);
__attribute__((alias("__imp__sub_8247E790"))) PPC_WEAK_FUNC(sub_8247E790);
__attribute__((alias("__imp__sub_8247EAB8"))) PPC_WEAK_FUNC(sub_8247EAB8);
__attribute__((alias("__imp__sub_8247ECD8"))) PPC_WEAK_FUNC(sub_8247ECD8);
__attribute__((alias("__imp__sub_8247EF98"))) PPC_WEAK_FUNC(sub_8247EF98);
__attribute__((alias("__imp__sub_8247F6C8"))) PPC_WEAK_FUNC(sub_8247F6C8);
__attribute__((alias("__imp__sub_8247FB30"))) PPC_WEAK_FUNC(sub_8247FB30);
__attribute__((alias("__imp__sub_8247FB90"))) PPC_WEAK_FUNC(sub_8247FB90);
PPC_FUNC_IMPL(__imp__sub_82479F50) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82428458
	sub_82428458(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247AD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac4
	ctx.lr = 0x8247AD18;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x8247ad68
	if (!ctx.cr6.eq) goto loc_8247AD68;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8247ad50
	if (!ctx.cr6.eq) goto loc_8247AD50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247AD50:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247ad6c
	if (ctx.cr6.eq) goto loc_8247AD6C;
loc_8247AD68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247AD6C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ad84
	if (ctx.cr6.eq) goto loc_8247AD84;
loc_8247AD78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb14
	__restgprlr_15(ctx, base);
	return;
loc_8247AD84:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r25,72(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82479de0
	ctx.lr = 0x8247AD94;
	sub_82479DE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8247ad78
	if (ctx.cr6.eq) goto loc_8247AD78;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r22,r10,-23976
	ctx.r22.s64 = ctx.r10.s64 + -23976;
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// beq cr6,0x8247af98
	if (ctx.cr6.eq) goto loc_8247AF98;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8247af98
	if (!ctx.cr6.gt) goto loc_8247AF98;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r19,-32044
	ctx.r19.s64 = -2100035584;
	// addi r30,r10,-24144
	ctx.r30.s64 = ctx.r10.s64 + -24144;
	// lis r23,-32044
	ctx.r23.s64 = -2100035584;
	// lis r17,2
	ctx.r17.s64 = 131072;
	// lis r18,4
	ctx.r18.s64 = 262144;
loc_8247ADE4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r7,r8,r21
	ctx.r7.u64 = ctx.r8.u64 & ctx.r21.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8247af80
	if (ctx.cr6.eq) goto loc_8247AF80;
	// cmpwi cr6,r21,512
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 512, ctx.xer);
	// bgt cr6,0x8247ae20
	if (ctx.cr6.gt) goto loc_8247AE20;
	// beq cr6,0x8247ae54
	if (ctx.cr6.eq) goto loc_8247AE54;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x8247ae18
	if (ctx.cr6.eq) goto loc_8247AE18;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// b 0x8247ae2c
	goto loc_8247AE2C;
loc_8247AE18:
	// lwz r6,-26604(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + -26604);
	// b 0x8247af68
	goto loc_8247AF68;
loc_8247AE20:
	// cmpw cr6,r21,r17
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x8247af54
	if (ctx.cr6.eq) goto loc_8247AF54;
	// cmpw cr6,r21,r18
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r18.s32, ctx.xer);
loc_8247AE2C:
	// beq cr6,0x8247ae4c
	if (ctx.cr6.eq) goto loc_8247AE4C;
	// lwz r10,-26656(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26656);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x8245f750
	ctx.lr = 0x8247AE48;
	sub_8245F750(ctx, base);
	// b 0x8247af7c
	goto loc_8247AF7C;
loc_8247AE4C:
	// cmpwi cr6,r21,512
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 512, ctx.xer);
	// bne cr6,0x8247ae5c
	if (!ctx.cr6.eq) goto loc_8247AE5C;
loc_8247AE54:
	// li r31,107
	ctx.r31.s64 = 107;
	// b 0x8247ae60
	goto loc_8247AE60;
loc_8247AE5C:
	// li r31,117
	ctx.r31.s64 = 117;
loc_8247AE60:
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r3,-26620(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8247AE6C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247aeb8
	if (ctx.cr6.eq) goto loc_8247AEB8;
	// lwz r6,32(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rldicr r10,r4,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwzx r11,r5,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8245ef58
	ctx.lr = 0x8247AEB0;
	sub_8245EF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8247aebc
	goto loc_8247AEBC;
loc_8247AEB8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8247AEBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437618
	ctx.lr = 0x8247AEC8;
	sub_82437618(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8247AEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8247AF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243f6d8
	ctx.lr = 0x8247AF24;
	sub_8243F6D8(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8247AF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x8244eb48
	ctx.lr = 0x8247AF40;
	sub_8244EB48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824376f0
	ctx.lr = 0x8247AF50;
	sub_824376F0(ctx, base);
	// b 0x8247af7c
	goto loc_8247AF7C;
loc_8247AF54:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r16,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 15) & 0x7FFF;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8247af80
	if (!ctx.cr6.eq) goto loc_8247AF80;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_8247AF68:
	// lwz r10,-26656(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26656);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x8245f7f0
	ctx.lr = 0x8247AF7C;
	sub_8245F7F0(ctx, base);
loc_8247AF7C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8247AF80:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r20,r9
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8247ade4
	if (ctx.cr6.lt) goto loc_8247ADE4;
loc_8247AF98:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8247b134
	if (ctx.cr6.eq) goto loc_8247B134;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,10348
	ctx.r28.s64 = ctx.r11.s64 + 10348;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8247AFB4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r7,r21,r8
	ctx.r7.u64 = ctx.r21.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8247afdc
	if (!ctx.cr6.eq) goto loc_8247AFDC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r28,48
	ctx.r6.s64 = ctx.r28.s64 + 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8247afb4
	if (ctx.cr6.lt) goto loc_8247AFB4;
	// b 0x8247afe0
	goto loc_8247AFE0;
loc_8247AFDC:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8247AFE0:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8247AFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r30,r31,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82456d90
	ctx.lr = 0x8247B00C;
	sub_82456D90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247b054
	if (ctx.cr6.eq) goto loc_8247B054;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8247b118
	if (ctx.cr6.eq) goto loc_8247B118;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x8247b118
	if (ctx.cr6.eq) goto loc_8247B118;
	// lwz r11,-26656(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26656);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x8245f960
	ctx.lr = 0x8247B044;
	sub_8245F960(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb14
	__restgprlr_15(ctx, base);
	return;
loc_8247B054:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x8242fc90
	ctx.lr = 0x8247B06C;
	sub_8242FC90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247b134
	if (ctx.cr6.eq) goto loc_8247B134;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247b090
	if (!ctx.cr6.eq) goto loc_8247B090;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B090:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247b134
	if (ctx.cr6.eq) goto loc_8247B134;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8247b0d4
	if (ctx.cr6.eq) goto loc_8247B0D4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247B0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r9,r8,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
loc_8247B0D4:
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8247b118
	if (ctx.cr6.eq) goto loc_8247B118;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x8247b118
	if (ctx.cr6.eq) goto loc_8247B118;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8247b118
	if (ctx.cr6.eq) goto loc_8247B118;
	// lwz r11,-26656(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26656);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x8245f960
	ctx.lr = 0x8247B108;
	sub_8245F960(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb14
	__restgprlr_15(ctx, base);
	return;
loc_8247B118:
	// lwz r11,-26656(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26656);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x8245f8a8
	ctx.lr = 0x8247B130;
	sub_8245F8A8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_8247B134:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb14
	__restgprlr_15(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247B2A8) {
	PPC_FUNC_PROLOGUE();
loc_8247B2A8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r10,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// srawi r9,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 25;
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// bne cr6,0x8247b2e8
	if (!ctx.cr6.eq) goto loc_8247B2E8;
	// rlwinm r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247b2d0
	if (!ctx.cr6.eq) goto loc_8247B2D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B2D0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247b2ec
	if (ctx.cr6.eq) goto loc_8247B2EC;
loc_8247B2E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B2EC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r9,19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 19, ctx.xer);
	// bne cr6,0x8247b32c
	if (!ctx.cr6.eq) goto loc_8247B32C;
	// rlwinm r5,r10,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8247b314
	if (!ctx.cr6.eq) goto loc_8247B314;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B314:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247b330
	if (ctx.cr6.eq) goto loc_8247B330;
loc_8247B32C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B330:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// b 0x8247b2a8
	goto loc_8247B2A8;
}
PPC_FUNC_IMPL(__imp__sub_8247B560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8247B568;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x8247b9d0
	if (ctx.cr6.eq) goto loc_8247B9D0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247b5a0
	if (!ctx.cr6.eq) goto loc_8247B5A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B5A0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247b9d0
	if (!ctx.cr6.eq) goto loc_8247B9D0;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x824744a8
	ctx.lr = 0x8247B5C8;
	sub_824744A8(ctx, base);
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// bne cr6,0x8247b5e8
	if (!ctx.cr6.eq) goto loc_8247B5E8;
	// lwz r9,-26376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26376);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
loc_8247B5E8:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8247b600
	if (!ctx.cr6.eq) goto loc_8247B600;
	// lwz r10,-26376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26376);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
loc_8247B600:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824744a8
	ctx.lr = 0x8247B60C;
	sub_824744A8(ctx, base);
	// lwz r3,-26656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8247b68c
	if (!ctx.cr6.gt) goto loc_8247B68C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8247B624:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8247b678
	if (!ctx.cr6.eq) goto loc_8247B678;
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247B648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,-26656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
loc_8247B678:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8247b624
	if (ctx.cr6.lt) goto loc_8247B624;
loc_8247B68C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r8,18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 18, ctx.xer);
	// bne cr6,0x8247b6c8
	if (!ctx.cr6.eq) goto loc_8247B6C8;
	// rlwinm r7,r11,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8247b6b0
	if (!ctx.cr6.eq) goto loc_8247B6B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B6B0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247b6cc
	if (ctx.cr6.eq) goto loc_8247B6CC;
loc_8247B6C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B6CC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247b6e0
	if (ctx.cr6.eq) goto loc_8247B6E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82460370
	ctx.lr = 0x8247B6E0;
	sub_82460370(ctx, base);
loc_8247B6E0:
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247b9ac
	if (ctx.cr6.eq) goto loc_8247B9AC;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// bne cr6,0x8247b808
	if (!ctx.cr6.eq) goto loc_8247B808;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8244eba0
	ctx.lr = 0x8247B70C;
	sub_8244EBA0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247b808
	if (ctx.cr6.eq) goto loc_8247B808;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247ad10
	ctx.lr = 0x8247B72C;
	sub_8247AD10(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,468
	ctx.r4.s64 = ctx.r11.s64 + 468;
	// bl 0x8242fc90
	ctx.lr = 0x8247B744;
	sub_8242FC90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247b808
	if (ctx.cr6.eq) goto loc_8247B808;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8247b768
	if (!ctx.cr6.eq) goto loc_8247B768;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b808
	if (ctx.cr6.eq) goto loc_8247B808;
	// rlwinm r10,r10,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// srawi r11,r10,25
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 25;
	// addi r8,r11,-43
	ctx.r8.s64 = ctx.r11.s64 + -43;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bgt cr6,0x8247b7b0
	if (ctx.cr6.gt) goto loc_8247B7B0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x8247b798
	if (!ctx.cr6.eq) goto loc_8247B798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B798:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247b7b4
	if (ctx.cr6.eq) goto loc_8247B7B4;
loc_8247B7B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247B7B4:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247b808
	if (ctx.cr6.eq) goto loc_8247B808;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243f6d8
	ctx.lr = 0x8247B7D0;
	sub_8243F6D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8247b808
	if (!ctx.cr6.gt) goto loc_8247B808;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247B7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8247B808:
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8247b950
	if (!ctx.cr6.eq) goto loc_8247B950;
	// lhz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b950
	if (ctx.cr6.eq) goto loc_8247B950;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82429548
	ctx.lr = 0x8247B828;
	sub_82429548(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b950
	if (ctx.cr6.eq) goto loc_8247B950;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82427818
	ctx.lr = 0x8247B83C;
	sub_82427818(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8247b950
	if (ctx.cr6.eq) goto loc_8247B950;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,-26588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b944
	if (ctx.cr6.eq) goto loc_8247B944;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8247b944
	if (!ctx.cr6.lt) goto loc_8247B944;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82477390
	ctx.lr = 0x8247B874;
	sub_82477390(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8247B888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82455ca0
	ctx.lr = 0x8247B88C;
	sub_82455CA0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8247b8a4
	if (ctx.cr6.eq) goto loc_8247B8A4;
	// bl 0x824621c0
	ctx.lr = 0x8247B8A4;
	sub_824621C0(ctx, base);
loc_8247B8A4:
	// lhz r5,88(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247b950
	if (ctx.cr6.eq) goto loc_8247B950;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r3,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8247B8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// oris r9,r8,8192
	ctx.r9.u64 = ctx.r8.u64 | 536870912;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lwz r11,-26588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26588);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8247b914
	if (ctx.cr6.lt) goto loc_8247B914;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r6,r9,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// rlwimi r11,r26,12,18,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// bl 0x82427258
	ctx.lr = 0x8247B90C;
	sub_82427258(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8247B914:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwimi r11,r26,12,18,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// bl 0x82427258
	ctx.lr = 0x8247B93C;
	sub_82427258(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8247B944:
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwimi r10,r26,13,18,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r26.u32, 13) & 0x3000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r10,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r10.u32);
loc_8247B950:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r8,r9,0,24,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8247B970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8247B984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b9a4
	if (ctx.cr6.eq) goto loc_8247B9A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247B9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247B9A4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r9.u32);
loc_8247B9AC:
	// lwz r8,88(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r8,0,17,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lwz r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r6,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r6.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247B9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247B9D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8247BAB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,72(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8246ca80
	ctx.lr = 0x8247BACC;
	sub_8246CA80(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247bdcc
	if (!ctx.cr6.eq) goto loc_8247BDCC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r27,r11,-26568
	ctx.r27.s64 = ctx.r11.s64 + -26568;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,10344
	ctx.r29.s64 = ctx.r11.s64 + 10344;
	// beq cr6,0x8247bb0c
	if (ctx.cr6.eq) goto loc_8247BB0C;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8247bb0c
	if (ctx.cr6.eq) goto loc_8247BB0C;
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247BB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247BB0C:
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r11,8344
	ctx.r9.s64 = ctx.r11.s64 + 8344;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x8247bb38
	if (ctx.cr6.eq) goto loc_8247BB38;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8247BB38:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247bb94
	if (ctx.cr6.eq) goto loc_8247BB94;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// beq cr6,0x8247bb74
	if (ctx.cr6.eq) goto loc_8247BB74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_8247BB74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8247BB94:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lfs f9,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lwz r5,48(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// beq cr6,0x8247bbdc
	if (ctx.cr6.eq) goto loc_8247BBDC;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247bbdc
	if (ctx.cr6.eq) goto loc_8247BBDC;
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x8247bbe4
	goto loc_8247BBE4;
loc_8247BBDC:
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
loc_8247BBE4:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// beq cr6,0x8247bc24
	if (ctx.cr6.eq) goto loc_8247BC24;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8247bc08
	if (ctx.cr6.eq) goto loc_8247BC08;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8247BC08:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8247bc24
	if (!ctx.cr6.eq) goto loc_8247BC24;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x8247bc50
	goto loc_8247BC50;
loc_8247BC24:
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8247bc4c
	if (ctx.cr6.lt) goto loc_8247BC4C;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x8247bc50
	goto loc_8247BC50;
loc_8247BC4C:
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_8247BC50:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lfs f8,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f6,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// rlwinm r5,r11,2,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// lfs f5,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// bne cr6,0x8247bcc8
	if (!ctx.cr6.eq) goto loc_8247BCC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// b 0x8247bcf0
	goto loc_8247BCF0;
loc_8247BCC8:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8247bcdc
	if (ctx.cr6.eq) goto loc_8247BCDC;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_8247BCDC:
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
loc_8247BCF0:
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247BD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8247bd7c
	if (ctx.cr6.eq) goto loc_8247BD7C;
	// lfs f4,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f3,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// fsubs f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// bne cr6,0x8247bd58
	if (!ctx.cr6.eq) goto loc_8247BD58;
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r9,88(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r8.u32);
	// fnmsubs f0,f2,f0,f1
	ctx.f0.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// b 0x8247bd78
	goto loc_8247BD78;
loc_8247BD58:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8247bd7c
	if (!ctx.cr6.eq) goto loc_8247BD7C;
	// lfs f10,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,88(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// ori r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 32768;
	// stw r6,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r6.u32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
loc_8247BD78:
	// stfs f0,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 28, temp.u32);
loc_8247BD7C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f8,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f7,92(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// ble cr6,0x8247bdac
	if (!ctx.cr6.gt) goto loc_8247BDAC;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8247BDAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// stfs f6,68(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f5,72(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f4,76(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
loc_8247BDCC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8247BDE0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bba0
	ctx.lr = 0x8247BDE8;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f26,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f26.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x8247c3f8
	if (ctx.cr6.eq) goto loc_8247C3F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8244ecd8
	ctx.lr = 0x8247BE2C;
	sub_8244ECD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247c0a8
	if (ctx.cr6.eq) goto loc_8247C0A8;
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,-23976
	ctx.r30.s64 = ctx.r11.s64 + -23976;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r6,r7,0,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8247be94
	if (!ctx.cr6.eq) goto loc_8247BE94;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247be84
	if (ctx.cr6.eq) goto loc_8247BE84;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// bl 0x82456d90
	ctx.lr = 0x8247BE68;
	sub_82456D90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247be84
	if (ctx.cr6.eq) goto loc_8247BE84;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r5,r4,4,26,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// b 0x8247be94
	goto loc_8247BE94;
loc_8247BE84:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r3,r11,5,26,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8247BE94:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r10,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8247c088
	if (!ctx.cr6.eq) goto loc_8247C088;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247bec0
	if (ctx.cr6.eq) goto loc_8247BEC0;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// bl 0x82456d90
	ctx.lr = 0x8247BEB8;
	sub_82456D90(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8247bec4
	goto loc_8247BEC4;
loc_8247BEC0:
	// li r24,0
	ctx.r24.s64 = 0;
loc_8247BEC4:
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// addi r3,r11,-24144
	ctx.r3.s64 = ctx.r11.s64 + -24144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r26,80(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82438b68
	ctx.lr = 0x8247BEF4;
	sub_82438B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247BF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,8344
	ctx.r31.s64 = ctx.r11.s64 + 8344;
	// ori r28,r8,65535
	ctx.r28.u64 = ctx.r8.u64 | 65535;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r27,r11,-26568
	ctx.r27.s64 = ctx.r11.s64 + -26568;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247bf60
	if (ctx.cr6.eq) goto loc_8247BF60;
	// lwz r7,72(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,24(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247BF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8247bfdc
	if (!ctx.cr6.eq) goto loc_8247BFDC;
loc_8247BF60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8242ddd8
	ctx.lr = 0x8247BF6C;
	sub_8242DDD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8247bfac
	if (!ctx.cr6.eq) goto loc_8247BFAC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8247BFAC;
	sub_8242BCD0(ctx, base);
loc_8247BFAC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + ctx.r28.u64;
	// sth r5,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247bfdc
	if (!ctx.cr6.eq) goto loc_8247BFDC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8247BFDC;
	sub_8242BCD0(ctx, base);
loc_8247BFDC:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8247bffc
	if (ctx.cr6.eq) goto loc_8247BFFC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_8247BFFC:
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r5,r7,25
	ctx.r5.u64 = ctx.r7.u32 & 0x7F;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x8247c01c
	if (ctx.cr6.eq) goto loc_8247C01C;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
loc_8247C01C:
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,116(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8247C038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8247C04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + ctx.r28.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8247c3f8
	if (!ctx.cr6.eq) goto loc_8247C3F8;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8247C078;
	sub_8242BCD0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbec
	ctx.lr = 0x8247C084;
	__restfpr_26(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8247C088:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82477078
	ctx.lr = 0x8247C098;
	sub_82477078(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbec
	ctx.lr = 0x8247C0A4;
	__restfpr_26(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8247C0A8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x8247c0e4
	if (!ctx.cr6.eq) goto loc_8247C0E4;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8247c0cc
	if (!ctx.cr6.eq) goto loc_8247C0CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C0CC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c0e8
	if (ctx.cr6.eq) goto loc_8247C0E8;
loc_8247C0E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C0E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c13c
	if (ctx.cr6.eq) goto loc_8247C13C;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c3f8
	if (ctx.cr6.eq) goto loc_8247C3F8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,10344
	ctx.r11.s64 = ctx.r11.s64 + 10344;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247c3f8
	if (ctx.cr6.eq) goto loc_8247C3F8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247C12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbec
	ctx.lr = 0x8247C138;
	__restfpr_26(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8247C13C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247cc90
	ctx.lr = 0x8247C144;
	sub_8247CC90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247c320
	if (ctx.cr6.eq) goto loc_8247C320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8247e430
	ctx.lr = 0x8247C15C;
	sub_8247E430(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x8247e5a8
	ctx.lr = 0x8247C16C;
	sub_8247E5A8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-26300
	ctx.r11.s64 = ctx.r11.s64 + -26300;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247C180:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8247c180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C180;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r23,0
	ctx.r23.s64 = 0;
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f29,23724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23724);
	ctx.f29.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8247c308
	if (!ctx.cr6.gt) goto loc_8247C308;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f27,6088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6088);
	ctx.f27.f64 = double(temp.f32);
loc_8247C1C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247e2c0
	ctx.lr = 0x8247C1CC;
	sub_8247E2C0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e340
	ctx.lr = 0x8247C1E4;
	sub_8247E340(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f29,f12
	ctx.cr6.compare(ctx.f29.f64, ctx.f12.f64);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r4,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bne cr6,0x8247c228
	if (!ctx.cr6.eq) goto loc_8247C228;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f11,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f28,f11
	ctx.cr6.compare(ctx.f28.f64, ctx.f11.f64);
	// beq cr6,0x8247c22c
	if (ctx.cr6.eq) goto loc_8247C22C;
loc_8247C228:
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
loc_8247C22C:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f29,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f30,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8247c2e8
	if (!ctx.cr6.gt) goto loc_8247C2E8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8247C264:
	// fadds f10,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// stfs f28,116(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x8246bd28
	ctx.lr = 0x8247C2B0;
	sub_8246BD28(ctx, base);
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// lfd f9,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmadds f31,f8,f27,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f31.f64));
	// blt cr6,0x8247c264
	if (ctx.cr6.lt) goto loc_8247C264;
loc_8247C2E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247e300
	ctx.lr = 0x8247C2F0;
	sub_8247E300(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// cmpw cr6,r23,r4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8247c1c4
	if (ctx.cr6.lt) goto loc_8247C1C4;
loc_8247C308:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247e478
	ctx.lr = 0x8247C310;
	sub_8247E478(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbec
	ctx.lr = 0x8247C31C;
	__restfpr_26(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8247C320:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8244ec48
	ctx.lr = 0x8247C328;
	sub_8244EC48(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c3cc
	if (ctx.cr6.eq) goto loc_8247C3CC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8247e2c0
	ctx.lr = 0x8247C340;
	sub_8247E2C0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f7,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,-26568
	ctx.r30.s64 = ctx.r11.s64 + -26568;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f6,0(r26)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247C36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8246bd28
	ctx.lr = 0x8247C384;
	sub_8246BD28(ctx, base);
	// lfs f5,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f5,0(r26)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8247C39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8246bd28
	ctx.lr = 0x8247C3B4;
	sub_8246BD28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247e300
	ctx.lr = 0x8247C3BC;
	sub_8247E300(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbec
	ctx.lr = 0x8247C3C8;
	__restfpr_26(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8247C3CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8244ec00
	ctx.lr = 0x8247C3D4;
	sub_8244EC00(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247c3f8
	if (ctx.cr6.eq) goto loc_8247C3F8;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8246bd28
	ctx.lr = 0x8247C3F8;
	sub_8246BD28(ctx, base);
loc_8247C3F8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbec
	ctx.lr = 0x8247C404;
	__restfpr_26(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247C4C0) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26616);
	// bl 0x82454900
	ctx.lr = 0x8247C4E4;
	sub_82454900(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247c504
	if (!ctx.cr6.eq) goto loc_8247C504;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8247C504:
	// bl 0x8247b560
	ctx.lr = 0x8247C508;
	sub_8247B560(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,-26656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26656);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x824609f8
	ctx.lr = 0x8247C51C;
	sub_824609F8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,6,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFC000;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// ble cr6,0x8247c550
	if (!ctx.cr6.gt) goto loc_8247C550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824763e0
	ctx.lr = 0x8247C534;
	sub_824763E0(ctx, base);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r7,r8,0,18,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8247c550
	if (!ctx.cr6.eq) goto loc_8247C550;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r6,0,5,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_8247C550:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247C564;
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
PPC_FUNC_IMPL(__imp__sub_8247C578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8247C580;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,72(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// blt cr6,0x8247c6b8
	if (ctx.cr6.lt) goto loc_8247C6B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8247c6b8
	if (!ctx.cr6.lt) goto loc_8247C6B8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8247c6b8
	if (ctx.cr6.eq) goto loc_8247C6B8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8247c5dc
	if (!ctx.cr6.eq) goto loc_8247C5DC;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8247ecd8
	ctx.lr = 0x8247C5D8;
	sub_8247ECD8(ctx, base);
	// b 0x8247c6a0
	goto loc_8247C6A0;
loc_8247C5DC:
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8247C5F0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c608
	if (ctx.cr6.eq) goto loc_8247C608;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82479a00
	ctx.lr = 0x8247C600;
	sub_82479A00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8247c60c
	goto loc_8247C60C;
loc_8247C608:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8247C60C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8247c624
	if (ctx.cr6.lt) goto loc_8247C624;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C624:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bgt cr6,0x8247c668
	if (ctx.cr6.gt) goto loc_8247C668;
loc_8247C630:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8247c668
	if (!ctx.cr6.lt) goto loc_8247C668;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247eab8
	ctx.lr = 0x8247C650;
	sub_8247EAB8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ble cr6,0x8247c630
	if (!ctx.cr6.gt) goto loc_8247C630;
loc_8247C668:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82478e68
	ctx.lr = 0x8247C680;
	sub_82478E68(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8247c6a0
	if (ctx.cr6.eq) goto loc_8247C6A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247cd78
	ctx.lr = 0x8247C690;
	sub_8247CD78(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8247C6A0;
	sub_8242BCD0(ctx, base);
loc_8247C6A0:
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// bl 0x8247ef98
	ctx.lr = 0x8247C6B8;
	sub_8247EF98(ctx, base);
loc_8247C6B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247C6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8247C6C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8244ecd8
	ctx.lr = 0x8247C6D8;
	sub_8244ECD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247c844
	if (ctx.cr6.eq) goto loc_8247C844;
	// lwz r31,72(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// rlwinm r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247c784
	if (ctx.cr6.eq) goto loc_8247C784;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8247c714
	if (!ctx.cr6.eq) goto loc_8247C714;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x8247c720
	goto loc_8247C720;
loc_8247C714:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
loc_8247C720:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8247c744
	if (!ctx.cr6.eq) goto loc_8247C744;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8247c744
	if (!ctx.cr6.eq) goto loc_8247C744;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x8247c7b8
	goto loc_8247C7B8;
loc_8247C744:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8247c764
	if (!ctx.cr6.eq) goto loc_8247C764;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247c578
	ctx.lr = 0x8247C760;
	sub_8247C578(ctx, base);
	// b 0x8247c7b8
	goto loc_8247C7B8;
loc_8247C764:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247c784
	if (ctx.cr6.eq) goto loc_8247C784;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8247ecd8
	ctx.lr = 0x8247C784;
	sub_8247ECD8(ctx, base);
loc_8247C784:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247c7b8
	if (ctx.cr6.eq) goto loc_8247C7B8;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// neg r9,r5
	ctx.r9.s64 = -ctx.r5.s64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bl 0x8247ef98
	ctx.lr = 0x8247C7B0;
	sub_8247EF98(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
loc_8247C7B8:
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// rlwinm r6,r7,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247c7e4
	if (ctx.cr6.eq) goto loc_8247C7E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82429548
	ctx.lr = 0x8247C7D8;
	sub_82429548(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c80c
	if (ctx.cr6.eq) goto loc_8247C80C;
loc_8247C7E4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479de0
	ctx.lr = 0x8247C7F0;
	sub_82479DE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8247c80c
	if (ctx.cr6.eq) goto loc_8247C80C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,-26604(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26604);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247ad10
	ctx.lr = 0x8247C80C;
	sub_8247AD10(ctx, base);
loc_8247C80C:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r3,r4,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c83c
	if (ctx.cr6.eq) goto loc_8247C83C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,-26604(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26604);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247ad10
	ctx.lr = 0x8247C830;
	sub_8247AD10(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_8247C83C:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82477328
	ctx.lr = 0x8247C844;
	sub_82477328(ctx, base);
loc_8247C844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247C850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8247C858;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r26,72(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rlwinm r11,r10,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// srawi r9,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 25;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// bne cr6,0x8247c8a4
	if (!ctx.cr6.eq) goto loc_8247C8A4;
	// rlwinm r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c88c
	if (!ctx.cr6.eq) goto loc_8247C88C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C88C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8247c8a8
	if (ctx.cr6.eq) goto loc_8247C8A8;
loc_8247C8A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C8A8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8247c8f8
	if (!ctx.cr6.eq) goto loc_8247C8F8;
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// bne cr6,0x8247c8e8
	if (!ctx.cr6.eq) goto loc_8247C8E8;
	// rlwinm r6,r10,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8247c8d0
	if (!ctx.cr6.eq) goto loc_8247C8D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C8D0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247c8ec
	if (ctx.cr6.eq) goto loc_8247C8EC;
loc_8247C8E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C8EC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247cc80
	if (ctx.cr6.eq) goto loc_8247CC80;
loc_8247C8F8:
	// lwz r6,44(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8247cc80
	if (!ctx.cr6.eq) goto loc_8247CC80;
	// lwz r27,12(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8242b338
	ctx.lr = 0x8247C91C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c930
	if (ctx.cr6.eq) goto loc_8247C930;
	// bl 0x82430500
	ctx.lr = 0x8247C928;
	sub_82430500(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8247c934
	goto loc_8247C934;
loc_8247C930:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8247C934:
	// lwz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8247c954
	if (ctx.cr6.eq) goto loc_8247C954;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8247C954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247C954:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c970
	if (ctx.cr6.eq) goto loc_8247C970;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247C970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247C970:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
	// lwz r10,-22948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22948);
	// addi r4,r11,376
	ctx.r4.s64 = ctx.r11.s64 + 376;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8247C990;
	sub_82456D90(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8247C9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8247c9c4
	if (ctx.cr6.eq) goto loc_8247C9C4;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8247C9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247C9C4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c9e0
	if (ctx.cr6.eq) goto loc_8247C9E0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8247C9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247C9E0:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8247cc80
	if (!ctx.cr6.gt) goto loc_8247CC80;
	// lwz r7,52(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_8247CA00:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247ca2c
	if (ctx.cr6.eq) goto loc_8247CA2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8247ca00
	if (ctx.cr6.lt) goto loc_8247CA00;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8247CA2C:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,-26268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247cc80
	if (ctx.cr6.eq) goto loc_8247CC80;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// bl 0x82434768
	ctx.lr = 0x8247CA4C;
	sub_82434768(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,-26268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26268);
	// bl 0x82456d90
	ctx.lr = 0x8247CA58;
	sub_82456D90(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247ca90
	if (!ctx.cr6.eq) goto loc_8247CA90;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8247CA90;
	sub_8242BCD0(ctx, base);
loc_8247CA90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8247cc80
	if (ctx.cr6.eq) goto loc_8247CC80;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8247cab0
	if (!ctx.cr6.eq) goto loc_8247CAB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247CAB0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247cc80
	if (ctx.cr6.eq) goto loc_8247CC80;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247CAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8247cb38
	if (ctx.cr6.eq) goto loc_8247CB38;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247caf4
	if (!ctx.cr6.eq) goto loc_8247CAF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247CAF4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247cb38
	if (ctx.cr6.eq) goto loc_8247CB38;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8247CB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247cb34
	if (ctx.cr6.eq) goto loc_8247CB34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247CB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247CB34:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_8247CB38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8247c6c0
	ctx.lr = 0x8247CB40;
	sub_8247C6C0(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8247CB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82437618
	ctx.lr = 0x8247CB6C;
	sub_82437618(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r28,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247CBA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r10.u32);
	// bl 0x8243f6d8
	ctx.lr = 0x8247CBC0;
	sub_8243F6D8(ctx, base);
	// lwz r9,88(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// rlwinm r8,r9,0,22,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r8,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r8.u32);
	// bl 0x8244eb48
	ctx.lr = 0x8247CBD4;
	sub_8244EB48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8247cc0c
	if (!ctx.cr6.gt) goto loc_8247CC0C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247CC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8247CC0C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824376f0
	ctx.lr = 0x8247CC1C;
	sub_824376F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82479c88
	ctx.lr = 0x8247CC24;
	sub_82479C88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8247cc80
	if (ctx.cr6.eq) goto loc_8247CC80;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26656);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8247cc68
	if (!ctx.cr6.gt) goto loc_8247CC68;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8247CC4C:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8247cc88
	if (ctx.cr6.eq) goto loc_8247CC88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8247cc4c
	if (ctx.cr6.lt) goto loc_8247CC4C;
loc_8247CC68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247CC6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247cc80
	if (!ctx.cr6.eq) goto loc_8247CC80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82474430
	ctx.lr = 0x8247CC80;
	sub_82474430(ctx, base);
loc_8247CC80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8247CC88:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8247cc6c
	goto loc_8247CC6C;
}
PPC_FUNC_IMPL(__imp__sub_8247CC90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x8247cccc
	if (!ctx.cr6.eq) goto loc_8247CCCC;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8247ccb4
	if (!ctx.cr6.eq) goto loc_8247CCB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247CCB4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247ccd0
	if (ctx.cr6.eq) goto loc_8247CCD0;
loc_8247CCCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247CCD0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8247CD80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82476838
	ctx.lr = 0x8247CD8C;
	sub_82476838(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8247cde4
	if (ctx.cr6.eq) goto loc_8247CDE4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// beq cr6,0x8247cdd4
	if (ctx.cr6.eq) goto loc_8247CDD4;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8247CDD0;
	sub_8242BCD0(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8247CDD4:
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8242bcd0
	ctx.lr = 0x8247CDE4;
	sub_8242BCD0(ctx, base);
loc_8247CDE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247E2DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8247e2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E2DC;
	// lwz r11,952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 952, ctx.r8.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r11,952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 952, ctx.r11.u32);
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247E328:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8247e328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E328;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,28(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r9,6
	ctx.r9.s64 = 6;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,568
	ctx.r11.s64 = ctx.r11.s64 + 568;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247E454:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8247e454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E454;
	// lwz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 956, ctx.r8.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E478) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r10.u32);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r7,568
	ctx.r11.s64 = ctx.r7.s64 + 568;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8247E4AC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8247e4ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E4AC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247E4E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8247e4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E4E8;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247E50C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8247e50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E50C;
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f8,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f10,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f0,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f1,f7,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f9,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f10,f0,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f11,f10,f12,f5
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// lfs f5,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f0,f9,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f4.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f9,f12,f9,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f3.f64));
	// lfs f3,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f6,f8,f12,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f6,12(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fadds f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f4,16(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fadds f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,20(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247E5A8) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8247e4d8
	ctx.lr = 0x8247E5C0;
	sub_8247E4D8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247E5D4;
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
PPC_FUNC_IMPL(__imp__sub_8247E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8247E798;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8247ea5c
	if (!ctx.cr6.gt) goto loc_8247EA5C;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8247E7BC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwzx r9,r25,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8247ea28
	if (!ctx.cr6.gt) goto loc_8247EA28;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8247E7D4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x8247e9e8
	if (ctx.cr6.gt) goto loc_8247E9E8;
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,-6132
	ctx.r12.s64 = ctx.r12.s64 + -6132;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8247E82C;
	case 1:
		goto loc_8247E9C8;
	case 2:
		goto loc_8247E8E4;
	case 3:
		goto loc_8247E9E8;
	case 4:
		goto loc_8247E9E8;
	case 5:
		goto loc_8247E9E8;
	case 6:
		goto loc_8247E9E8;
	case 7:
		goto loc_8247E870;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-6100(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6100);
	// lwz r18,-5688(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5688);
	// lwz r18,-5916(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5916);
	// lwz r18,-5656(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5656);
	// lwz r18,-5656(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5656);
	// lwz r18,-5656(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5656);
	// lwz r18,-5656(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5656);
	// lwz r18,-6032(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6032);
loc_8247E82C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8243d9d8
	ctx.lr = 0x8247E83C;
	sub_8243D9D8(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247e9e8
	if (ctx.cr6.eq) goto loc_8247E9E8;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r28,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r28.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8247e9e8
	goto loc_8247E9E8;
loc_8247E870:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8243d9d8
	ctx.lr = 0x8247E880;
	sub_8243D9D8(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247e8b0
	if (ctx.cr6.eq) goto loc_8247E8B0;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r4,r28,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r28.s64;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_8247E8B0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8247e9e8
	if (!ctx.cr6.lt) goto loc_8247E9E8;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r6,r7
	ctx.r6.s64 = -ctx.r7.s64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x8247e9e8
	goto loc_8247E9E8;
loc_8247E8E4:
	// lwz r30,60(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8247e964
	if (ctx.cr6.eq) goto loc_8247E964;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8247e950
	if (!ctx.cr6.gt) goto loc_8247E950;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8247E904:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8243d9d8
	ctx.lr = 0x8247E91C;
	sub_8243D9D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247e93c
	if (ctx.cr6.eq) goto loc_8247E93C;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// subf r8,r28,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8247E93C:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8247e904
	if (ctx.cr6.lt) goto loc_8247E904;
loc_8247E950:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247e964
	if (ctx.cr6.eq) goto loc_8247E964;
	// subf r6,r28,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_8247E964:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247e994
	if (ctx.cr6.eq) goto loc_8247E994;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
loc_8247E994:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r6,60(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247e9e8
	if (ctx.cr6.eq) goto loc_8247E9E8;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// subf r3,r28,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r28.s64;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8247e9e8
	goto loc_8247E9E8;
loc_8247E9C8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247e9e8
	if (ctx.cr6.eq) goto loc_8247E9E8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r28,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8247E9E8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247ea10
	if (ctx.cr6.eq) goto loc_8247EA10;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r4,r28,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r28.s64;
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
loc_8247EA10:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwzx r11,r25,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8247e7d4
	if (ctx.cr6.lt) goto loc_8247E7D4;
loc_8247EA28:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ea48
	if (ctx.cr6.eq) goto loc_8247EA48;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// subf r8,r28,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8247EA48:
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmpw cr6,r22,r7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8247e7bc
	if (ctx.cr6.lt) goto loc_8247E7BC;
loc_8247EA5C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247ea70
	if (ctx.cr6.eq) goto loc_8247EA70;
	// subf r6,r28,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r6,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r6.u32);
loc_8247EA70:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247eab0
	if (ctx.cr6.eq) goto loc_8247EAB0;
	// bl 0x82455bd0
	ctx.lr = 0x8247EA80;
	sub_82455BD0(ctx, base);
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8247eaa8
	if (ctx.cr6.eq) goto loc_8247EAA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82455af0
	ctx.lr = 0x8247EA94;
	sub_82455AF0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8247EAA8;
	sub_8242BCD0(ctx, base);
loc_8247EAA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r5.u32);
loc_8247EAB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247EAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x8247EAC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r23,r25,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r21,4(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8247eccc
	if (!ctx.cr6.gt) goto loc_8247ECCC;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r22,-32044
	ctx.r22.s64 = -2100035584;
	// li r20,19
	ctx.r20.s64 = 19;
loc_8247EAFC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r31,r9,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8247eb48
	if (ctx.cr6.eq) goto loc_8247EB48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8247ecb0
	if (!ctx.cr6.eq) goto loc_8247ECB0;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,-26632(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8247EB24;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247eca4
	if (ctx.cr6.eq) goto loc_8247ECA4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82476078
	ctx.lr = 0x8247EB40;
	sub_82476078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247eca8
	goto loc_8247ECA8;
loc_8247EB48:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82476130
	ctx.lr = 0x8247EB64;
	sub_82476130(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eb88
	if (ctx.cr6.eq) goto loc_8247EB88;
	// lwz r8,72(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwzx r29,r4,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
loc_8247EB88:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ec74
	if (ctx.cr6.eq) goto loc_8247EC74;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247ec74
	if (!ctx.cr6.eq) goto loc_8247EC74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r3,r20,3,0,30
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r20.u32, 3) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8247ec74
	if (ctx.cr6.eq) goto loc_8247EC74;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247ebc4
	if (ctx.cr6.eq) goto loc_8247EBC4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// b 0x8247ebcc
	goto loc_8247EBCC;
loc_8247EBC4:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_8247EBCC:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8247ebf0
	if (ctx.cr6.eq) goto loc_8247EBF0;
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// b 0x8247ebf8
	goto loc_8247EBF8;
loc_8247EBF0:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
loc_8247EBF8:
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247ec1c
	if (ctx.cr6.eq) goto loc_8247EC1C;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// b 0x8247ec24
	goto loc_8247EC24;
loc_8247EC1C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_8247EC24:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8247ec48
	if (ctx.cr6.eq) goto loc_8247EC48;
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8247ec50
	goto loc_8247EC50;
loc_8247EC48:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
loc_8247EC50:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// b 0x8247ecb0
	goto loc_8247ECB0;
loc_8247EC74:
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,-26632(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8247EC80;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247eca4
	if (ctx.cr6.eq) goto loc_8247ECA4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82476078
	ctx.lr = 0x8247EC9C;
	sub_82476078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247eca8
	goto loc_8247ECA8;
loc_8247ECA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247ECA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82477698
	ctx.lr = 0x8247ECB0;
	sub_82477698(ctx, base);
loc_8247ECB0:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8247eafc
	if (ctx.cr6.lt) goto loc_8247EAFC;
loc_8247ECCC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247ECD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8247ECE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r24,r6,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8247edb0
	if (!ctx.cr6.gt) goto loc_8247EDB0;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r10,-24144
	ctx.r27.s64 = ctx.r10.s64 + -24144;
loc_8247ED18:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r31,r9,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8247ed94
	if (!ctx.cr6.eq) goto loc_8247ED94;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8247ed94
	if (ctx.cr6.lt) goto loc_8247ED94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82437618
	ctx.lr = 0x8247ED44;
	sub_82437618(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8247ed60
	if (ctx.cr6.eq) goto loc_8247ED60;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247b2a8
	ctx.lr = 0x8247ED58;
	sub_8247B2A8(ctx, base);
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x8247ed64
	goto loc_8247ED64;
loc_8247ED60:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8247ED64:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82439768
	ctx.lr = 0x8247ED78;
	sub_82439768(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// neg r11,r6
	ctx.r11.s64 = -ctx.r6.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x824376f0
	ctx.lr = 0x8247ED94;
	sub_824376F0(ctx, base);
loc_8247ED94:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8247ed18
	if (ctx.cr6.lt) goto loc_8247ED18;
loc_8247EDB0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8247ee7c
	if (!ctx.cr6.gt) goto loc_8247EE7C;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r10,-26568
	ctx.r27.s64 = ctx.r10.s64 + -26568;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8247EDDC:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r31,r8,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8247ee34
	if (ctx.cr6.eq) goto loc_8247EE34;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8247ee24
	if (ctx.cr6.eq) goto loc_8247EE24;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8247ee60
	if (!ctx.cr6.eq) goto loc_8247EE60;
	// lbz r6,-26612(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + -26612);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8247ee60
	if (!ctx.cr6.eq) goto loc_8247EE60;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8247EE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,-26612(r28)
	PPC_STORE_U8(ctx.r28.u32 + -26612, ctx.r23.u8);
	// b 0x8247ee60
	goto loc_8247EE60;
loc_8247EE24:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82476638
	ctx.lr = 0x8247EE30;
	sub_82476638(ctx, base);
	// b 0x8247ee60
	goto loc_8247EE60;
loc_8247EE34:
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82461cd0
	ctx.lr = 0x8247EE50;
	sub_82461CD0(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x824786f0
	ctx.lr = 0x8247EE60;
	sub_824786F0(ctx, base);
loc_8247EE60:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8247eddc
	if (ctx.cr6.lt) goto loc_8247EDDC;
loc_8247EE7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247EF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8247EFA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r28,r5,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8247f01c
	if (!ctx.cr6.gt) goto loc_8247F01C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
loc_8247EFD4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8247f000
	if (!ctx.cr6.eq) goto loc_8247F000;
	// lwz r11,-26656(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26656);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-26604(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26604);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x8245f750
	ctx.lr = 0x8247F000;
	sub_8245F750(ctx, base);
loc_8247F000:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8247efd4
	if (ctx.cr6.lt) goto loc_8247EFD4;
loc_8247F01C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247F6C8) {
	PPC_FUNC_PROLOGUE();
	// li r10,50
	ctx.r10.s64 = 50;
	// li r11,212
	ctx.r11.s64 = 212;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r10,-188(r1)
	PPC_STORE_U8(ctx.r1.u32 + -188, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-256(r1)
	PPC_STORE_U8(ctx.r1.u32 + -256, ctx.r11.u8);
	// stb r11,-255(r1)
	PPC_STORE_U8(ctx.r1.u32 + -255, ctx.r11.u8);
	// stb r11,-254(r1)
	PPC_STORE_U8(ctx.r1.u32 + -254, ctx.r11.u8);
	// stb r11,-253(r1)
	PPC_STORE_U8(ctx.r1.u32 + -253, ctx.r11.u8);
	// stb r11,-252(r1)
	PPC_STORE_U8(ctx.r1.u32 + -252, ctx.r11.u8);
	// stb r11,-251(r1)
	PPC_STORE_U8(ctx.r1.u32 + -251, ctx.r11.u8);
	// stb r11,-250(r1)
	PPC_STORE_U8(ctx.r1.u32 + -250, ctx.r11.u8);
	// stb r11,-249(r1)
	PPC_STORE_U8(ctx.r1.u32 + -249, ctx.r11.u8);
	// stb r11,-248(r1)
	PPC_STORE_U8(ctx.r1.u32 + -248, ctx.r11.u8);
	// stb r11,-247(r1)
	PPC_STORE_U8(ctx.r1.u32 + -247, ctx.r11.u8);
	// stb r11,-246(r1)
	PPC_STORE_U8(ctx.r1.u32 + -246, ctx.r11.u8);
	// stb r11,-245(r1)
	PPC_STORE_U8(ctx.r1.u32 + -245, ctx.r11.u8);
	// stb r11,-244(r1)
	PPC_STORE_U8(ctx.r1.u32 + -244, ctx.r11.u8);
	// stb r11,-243(r1)
	PPC_STORE_U8(ctx.r1.u32 + -243, ctx.r11.u8);
	// stb r11,-242(r1)
	PPC_STORE_U8(ctx.r1.u32 + -242, ctx.r11.u8);
	// stb r11,-241(r1)
	PPC_STORE_U8(ctx.r1.u32 + -241, ctx.r11.u8);
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// stb r11,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r11.u8);
	// stb r11,-238(r1)
	PPC_STORE_U8(ctx.r1.u32 + -238, ctx.r11.u8);
	// stb r11,-237(r1)
	PPC_STORE_U8(ctx.r1.u32 + -237, ctx.r11.u8);
	// stb r11,-236(r1)
	PPC_STORE_U8(ctx.r1.u32 + -236, ctx.r11.u8);
	// stb r11,-235(r1)
	PPC_STORE_U8(ctx.r1.u32 + -235, ctx.r11.u8);
	// stb r11,-234(r1)
	PPC_STORE_U8(ctx.r1.u32 + -234, ctx.r11.u8);
	// stb r11,-233(r1)
	PPC_STORE_U8(ctx.r1.u32 + -233, ctx.r11.u8);
	// stb r11,-232(r1)
	PPC_STORE_U8(ctx.r1.u32 + -232, ctx.r11.u8);
	// stb r11,-231(r1)
	PPC_STORE_U8(ctx.r1.u32 + -231, ctx.r11.u8);
	// stb r11,-230(r1)
	PPC_STORE_U8(ctx.r1.u32 + -230, ctx.r11.u8);
	// stb r11,-229(r1)
	PPC_STORE_U8(ctx.r1.u32 + -229, ctx.r11.u8);
	// stb r11,-228(r1)
	PPC_STORE_U8(ctx.r1.u32 + -228, ctx.r11.u8);
	// stb r11,-227(r1)
	PPC_STORE_U8(ctx.r1.u32 + -227, ctx.r11.u8);
	// stb r11,-226(r1)
	PPC_STORE_U8(ctx.r1.u32 + -226, ctx.r11.u8);
	// stb r11,-225(r1)
	PPC_STORE_U8(ctx.r1.u32 + -225, ctx.r11.u8);
	// stb r11,-224(r1)
	PPC_STORE_U8(ctx.r1.u32 + -224, ctx.r11.u8);
	// stb r11,-223(r1)
	PPC_STORE_U8(ctx.r1.u32 + -223, ctx.r11.u8);
	// stb r11,-222(r1)
	PPC_STORE_U8(ctx.r1.u32 + -222, ctx.r11.u8);
	// stb r11,-221(r1)
	PPC_STORE_U8(ctx.r1.u32 + -221, ctx.r11.u8);
	// stb r11,-220(r1)
	PPC_STORE_U8(ctx.r1.u32 + -220, ctx.r11.u8);
	// stb r11,-219(r1)
	PPC_STORE_U8(ctx.r1.u32 + -219, ctx.r11.u8);
	// stb r11,-218(r1)
	PPC_STORE_U8(ctx.r1.u32 + -218, ctx.r11.u8);
	// stb r11,-217(r1)
	PPC_STORE_U8(ctx.r1.u32 + -217, ctx.r11.u8);
	// stb r11,-216(r1)
	PPC_STORE_U8(ctx.r1.u32 + -216, ctx.r11.u8);
	// stb r11,-215(r1)
	PPC_STORE_U8(ctx.r1.u32 + -215, ctx.r11.u8);
	// stb r11,-214(r1)
	PPC_STORE_U8(ctx.r1.u32 + -214, ctx.r11.u8);
	// stb r11,-213(r1)
	PPC_STORE_U8(ctx.r1.u32 + -213, ctx.r11.u8);
	// stb r11,-212(r1)
	PPC_STORE_U8(ctx.r1.u32 + -212, ctx.r11.u8);
	// stb r11,-211(r1)
	PPC_STORE_U8(ctx.r1.u32 + -211, ctx.r11.u8);
	// stb r11,-210(r1)
	PPC_STORE_U8(ctx.r1.u32 + -210, ctx.r11.u8);
	// stb r11,-209(r1)
	PPC_STORE_U8(ctx.r1.u32 + -209, ctx.r11.u8);
	// stb r11,-208(r1)
	PPC_STORE_U8(ctx.r1.u32 + -208, ctx.r11.u8);
	// stb r11,-207(r1)
	PPC_STORE_U8(ctx.r1.u32 + -207, ctx.r11.u8);
	// stb r11,-206(r1)
	PPC_STORE_U8(ctx.r1.u32 + -206, ctx.r11.u8);
	// stb r11,-205(r1)
	PPC_STORE_U8(ctx.r1.u32 + -205, ctx.r11.u8);
	// stb r11,-204(r1)
	PPC_STORE_U8(ctx.r1.u32 + -204, ctx.r11.u8);
	// stb r11,-203(r1)
	PPC_STORE_U8(ctx.r1.u32 + -203, ctx.r11.u8);
	// stb r11,-202(r1)
	PPC_STORE_U8(ctx.r1.u32 + -202, ctx.r11.u8);
	// stb r11,-201(r1)
	PPC_STORE_U8(ctx.r1.u32 + -201, ctx.r11.u8);
	// stb r11,-200(r1)
	PPC_STORE_U8(ctx.r1.u32 + -200, ctx.r11.u8);
	// stb r11,-199(r1)
	PPC_STORE_U8(ctx.r1.u32 + -199, ctx.r11.u8);
	// stb r11,-198(r1)
	PPC_STORE_U8(ctx.r1.u32 + -198, ctx.r11.u8);
	// stb r11,-197(r1)
	PPC_STORE_U8(ctx.r1.u32 + -197, ctx.r11.u8);
	// stb r11,-196(r1)
	PPC_STORE_U8(ctx.r1.u32 + -196, ctx.r11.u8);
	// stb r11,-195(r1)
	PPC_STORE_U8(ctx.r1.u32 + -195, ctx.r11.u8);
	// stb r11,-194(r1)
	PPC_STORE_U8(ctx.r1.u32 + -194, ctx.r11.u8);
	// stb r11,-193(r1)
	PPC_STORE_U8(ctx.r1.u32 + -193, ctx.r11.u8);
	// stb r11,-192(r1)
	PPC_STORE_U8(ctx.r1.u32 + -192, ctx.r11.u8);
	// stb r11,-191(r1)
	PPC_STORE_U8(ctx.r1.u32 + -191, ctx.r11.u8);
	// stb r8,-190(r1)
	PPC_STORE_U8(ctx.r1.u32 + -190, ctx.r8.u8);
	// stb r11,-189(r1)
	PPC_STORE_U8(ctx.r1.u32 + -189, ctx.r11.u8);
	// stb r11,-187(r1)
	PPC_STORE_U8(ctx.r1.u32 + -187, ctx.r11.u8);
	// stb r6,-186(r1)
	PPC_STORE_U8(ctx.r1.u32 + -186, ctx.r6.u8);
	// stb r10,-185(r1)
	PPC_STORE_U8(ctx.r1.u32 + -185, ctx.r10.u8);
	// stb r11,-184(r1)
	PPC_STORE_U8(ctx.r1.u32 + -184, ctx.r11.u8);
	// stb r10,-183(r1)
	PPC_STORE_U8(ctx.r1.u32 + -183, ctx.r10.u8);
	// stb r11,-182(r1)
	PPC_STORE_U8(ctx.r1.u32 + -182, ctx.r11.u8);
	// stb r11,-181(r1)
	PPC_STORE_U8(ctx.r1.u32 + -181, ctx.r11.u8);
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r6,-156(r1)
	PPC_STORE_U8(ctx.r1.u32 + -156, ctx.r6.u8);
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r10,-172(r1)
	PPC_STORE_U8(ctx.r1.u32 + -172, ctx.r10.u8);
	// li r6,35
	ctx.r6.s64 = 35;
	// stb r10,-169(r1)
	PPC_STORE_U8(ctx.r1.u32 + -169, ctx.r10.u8);
	// li r7,30
	ctx.r7.s64 = 30;
	// stb r10,-161(r1)
	PPC_STORE_U8(ctx.r1.u32 + -161, ctx.r10.u8);
	// stb r10,-155(r1)
	PPC_STORE_U8(ctx.r1.u32 + -155, ctx.r10.u8);
	// stb r5,-153(r1)
	PPC_STORE_U8(ctx.r1.u32 + -153, ctx.r5.u8);
	// li r5,45
	ctx.r5.s64 = 45;
	// stb r9,-179(r1)
	PPC_STORE_U8(ctx.r1.u32 + -179, ctx.r9.u8);
	// stb r9,-176(r1)
	PPC_STORE_U8(ctx.r1.u32 + -176, ctx.r9.u8);
	// stb r7,-173(r1)
	PPC_STORE_U8(ctx.r1.u32 + -173, ctx.r7.u8);
	// li r7,10
	ctx.r7.s64 = 10;
	// stb r9,-159(r1)
	PPC_STORE_U8(ctx.r1.u32 + -159, ctx.r9.u8);
	// stb r5,-152(r1)
	PPC_STORE_U8(ctx.r1.u32 + -152, ctx.r5.u8);
	// li r5,65
	ctx.r5.s64 = 65;
	// stb r6,-154(r1)
	PPC_STORE_U8(ctx.r1.u32 + -154, ctx.r6.u8);
	// stb r6,-148(r1)
	PPC_STORE_U8(ctx.r1.u32 + -148, ctx.r6.u8);
	// li r6,40
	ctx.r6.s64 = 40;
	// stb r9,-147(r1)
	PPC_STORE_U8(ctx.r1.u32 + -147, ctx.r9.u8);
	// stb r10,-146(r1)
	PPC_STORE_U8(ctx.r1.u32 + -146, ctx.r10.u8);
	// stb r5,-151(r1)
	PPC_STORE_U8(ctx.r1.u32 + -151, ctx.r5.u8);
	// li r5,95
	ctx.r5.s64 = 95;
	// stb r10,-142(r1)
	PPC_STORE_U8(ctx.r1.u32 + -142, ctx.r10.u8);
	// stb r10,-141(r1)
	PPC_STORE_U8(ctx.r1.u32 + -141, ctx.r10.u8);
	// stb r9,-139(r1)
	PPC_STORE_U8(ctx.r1.u32 + -139, ctx.r9.u8);
	// li r9,70
	ctx.r9.s64 = 70;
	// stb r10,-138(r1)
	PPC_STORE_U8(ctx.r1.u32 + -138, ctx.r10.u8);
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r8,-180(r1)
	PPC_STORE_U8(ctx.r1.u32 + -180, ctx.r8.u8);
	// stb r11,-178(r1)
	PPC_STORE_U8(ctx.r1.u32 + -178, ctx.r11.u8);
	// stb r11,-177(r1)
	PPC_STORE_U8(ctx.r1.u32 + -177, ctx.r11.u8);
	// stb r11,-175(r1)
	PPC_STORE_U8(ctx.r1.u32 + -175, ctx.r11.u8);
	// stb r11,-174(r1)
	PPC_STORE_U8(ctx.r1.u32 + -174, ctx.r11.u8);
	// stb r8,-171(r1)
	PPC_STORE_U8(ctx.r1.u32 + -171, ctx.r8.u8);
	// stb r11,-170(r1)
	PPC_STORE_U8(ctx.r1.u32 + -170, ctx.r11.u8);
	// stb r11,-168(r1)
	PPC_STORE_U8(ctx.r1.u32 + -168, ctx.r11.u8);
	// stb r11,-167(r1)
	PPC_STORE_U8(ctx.r1.u32 + -167, ctx.r11.u8);
	// stb r11,-166(r1)
	PPC_STORE_U8(ctx.r1.u32 + -166, ctx.r11.u8);
	// stb r11,-165(r1)
	PPC_STORE_U8(ctx.r1.u32 + -165, ctx.r11.u8);
	// stb r11,-164(r1)
	PPC_STORE_U8(ctx.r1.u32 + -164, ctx.r11.u8);
	// stb r11,-163(r1)
	PPC_STORE_U8(ctx.r1.u32 + -163, ctx.r11.u8);
	// stb r11,-162(r1)
	PPC_STORE_U8(ctx.r1.u32 + -162, ctx.r11.u8);
	// stb r11,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// stb r7,-158(r1)
	PPC_STORE_U8(ctx.r1.u32 + -158, ctx.r7.u8);
	// stb r7,-157(r1)
	PPC_STORE_U8(ctx.r1.u32 + -157, ctx.r7.u8);
	// stb r11,-150(r1)
	PPC_STORE_U8(ctx.r1.u32 + -150, ctx.r11.u8);
	// stb r11,-149(r1)
	PPC_STORE_U8(ctx.r1.u32 + -149, ctx.r11.u8);
	// stb r6,-145(r1)
	PPC_STORE_U8(ctx.r1.u32 + -145, ctx.r6.u8);
	// stb r8,-144(r1)
	PPC_STORE_U8(ctx.r1.u32 + -144, ctx.r8.u8);
	// stb r8,-143(r1)
	PPC_STORE_U8(ctx.r1.u32 + -143, ctx.r8.u8);
	// stb r5,-140(r1)
	PPC_STORE_U8(ctx.r1.u32 + -140, ctx.r5.u8);
	// stb r7,-137(r1)
	PPC_STORE_U8(ctx.r1.u32 + -137, ctx.r7.u8);
	// stb r10,-136(r1)
	PPC_STORE_U8(ctx.r1.u32 + -136, ctx.r10.u8);
	// stb r9,-135(r1)
	PPC_STORE_U8(ctx.r1.u32 + -135, ctx.r9.u8);
	// stb r11,-134(r1)
	PPC_STORE_U8(ctx.r1.u32 + -134, ctx.r11.u8);
	// stb r11,-133(r1)
	PPC_STORE_U8(ctx.r1.u32 + -133, ctx.r11.u8);
	// stb r11,-132(r1)
	PPC_STORE_U8(ctx.r1.u32 + -132, ctx.r11.u8);
	// stb r11,-131(r1)
	PPC_STORE_U8(ctx.r1.u32 + -131, ctx.r11.u8);
	// stb r11,-130(r1)
	PPC_STORE_U8(ctx.r1.u32 + -130, ctx.r11.u8);
	// stb r11,-129(r1)
	PPC_STORE_U8(ctx.r1.u32 + -129, ctx.r11.u8);
	// stb r11,-128(r1)
	PPC_STORE_U8(ctx.r1.u32 + -128, ctx.r11.u8);
	// stb r11,-127(r1)
	PPC_STORE_U8(ctx.r1.u32 + -127, ctx.r11.u8);
	// stb r11,-126(r1)
	PPC_STORE_U8(ctx.r1.u32 + -126, ctx.r11.u8);
	// stb r11,-125(r1)
	PPC_STORE_U8(ctx.r1.u32 + -125, ctx.r11.u8);
	// stb r11,-124(r1)
	PPC_STORE_U8(ctx.r1.u32 + -124, ctx.r11.u8);
	// stb r11,-123(r1)
	PPC_STORE_U8(ctx.r1.u32 + -123, ctx.r11.u8);
	// stb r11,-122(r1)
	PPC_STORE_U8(ctx.r1.u32 + -122, ctx.r11.u8);
	// stb r11,-121(r1)
	PPC_STORE_U8(ctx.r1.u32 + -121, ctx.r11.u8);
	// stb r11,-120(r1)
	PPC_STORE_U8(ctx.r1.u32 + -120, ctx.r11.u8);
	// stb r11,-119(r1)
	PPC_STORE_U8(ctx.r1.u32 + -119, ctx.r11.u8);
	// stb r11,-118(r1)
	PPC_STORE_U8(ctx.r1.u32 + -118, ctx.r11.u8);
	// stb r11,-117(r1)
	PPC_STORE_U8(ctx.r1.u32 + -117, ctx.r11.u8);
	// stb r11,-116(r1)
	PPC_STORE_U8(ctx.r1.u32 + -116, ctx.r11.u8);
	// stb r11,-115(r1)
	PPC_STORE_U8(ctx.r1.u32 + -115, ctx.r11.u8);
	// stb r11,-114(r1)
	PPC_STORE_U8(ctx.r1.u32 + -114, ctx.r11.u8);
	// stb r11,-113(r1)
	PPC_STORE_U8(ctx.r1.u32 + -113, ctx.r11.u8);
	// stb r11,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r11.u8);
	// stb r11,-111(r1)
	PPC_STORE_U8(ctx.r1.u32 + -111, ctx.r11.u8);
	// stb r11,-110(r1)
	PPC_STORE_U8(ctx.r1.u32 + -110, ctx.r11.u8);
	// stb r11,-109(r1)
	PPC_STORE_U8(ctx.r1.u32 + -109, ctx.r11.u8);
	// stb r11,-108(r1)
	PPC_STORE_U8(ctx.r1.u32 + -108, ctx.r11.u8);
	// stb r11,-107(r1)
	PPC_STORE_U8(ctx.r1.u32 + -107, ctx.r11.u8);
	// stb r11,-106(r1)
	PPC_STORE_U8(ctx.r1.u32 + -106, ctx.r11.u8);
	// stb r11,-105(r1)
	PPC_STORE_U8(ctx.r1.u32 + -105, ctx.r11.u8);
	// stb r11,-104(r1)
	PPC_STORE_U8(ctx.r1.u32 + -104, ctx.r11.u8);
	// stb r11,-103(r1)
	PPC_STORE_U8(ctx.r1.u32 + -103, ctx.r11.u8);
	// stb r11,-102(r1)
	PPC_STORE_U8(ctx.r1.u32 + -102, ctx.r11.u8);
	// stb r11,-101(r1)
	PPC_STORE_U8(ctx.r1.u32 + -101, ctx.r11.u8);
	// stb r11,-100(r1)
	PPC_STORE_U8(ctx.r1.u32 + -100, ctx.r11.u8);
	// stb r11,-99(r1)
	PPC_STORE_U8(ctx.r1.u32 + -99, ctx.r11.u8);
	// stb r11,-98(r1)
	PPC_STORE_U8(ctx.r1.u32 + -98, ctx.r11.u8);
	// stb r11,-97(r1)
	PPC_STORE_U8(ctx.r1.u32 + -97, ctx.r11.u8);
	// stb r11,-96(r1)
	PPC_STORE_U8(ctx.r1.u32 + -96, ctx.r11.u8);
	// stb r11,-95(r1)
	PPC_STORE_U8(ctx.r1.u32 + -95, ctx.r11.u8);
	// stb r11,-94(r1)
	PPC_STORE_U8(ctx.r1.u32 + -94, ctx.r11.u8);
	// stb r11,-93(r1)
	PPC_STORE_U8(ctx.r1.u32 + -93, ctx.r11.u8);
	// stb r11,-92(r1)
	PPC_STORE_U8(ctx.r1.u32 + -92, ctx.r11.u8);
	// stb r11,-91(r1)
	PPC_STORE_U8(ctx.r1.u32 + -91, ctx.r11.u8);
	// stb r11,-90(r1)
	PPC_STORE_U8(ctx.r1.u32 + -90, ctx.r11.u8);
	// stb r11,-89(r1)
	PPC_STORE_U8(ctx.r1.u32 + -89, ctx.r11.u8);
	// stb r11,-88(r1)
	PPC_STORE_U8(ctx.r1.u32 + -88, ctx.r11.u8);
	// stb r11,-87(r1)
	PPC_STORE_U8(ctx.r1.u32 + -87, ctx.r11.u8);
	// stb r11,-86(r1)
	PPC_STORE_U8(ctx.r1.u32 + -86, ctx.r11.u8);
	// stb r11,-85(r1)
	PPC_STORE_U8(ctx.r1.u32 + -85, ctx.r11.u8);
	// stb r11,-84(r1)
	PPC_STORE_U8(ctx.r1.u32 + -84, ctx.r11.u8);
	// stb r11,-83(r1)
	PPC_STORE_U8(ctx.r1.u32 + -83, ctx.r11.u8);
	// stb r11,-82(r1)
	PPC_STORE_U8(ctx.r1.u32 + -82, ctx.r11.u8);
	// stb r11,-81(r1)
	PPC_STORE_U8(ctx.r1.u32 + -81, ctx.r11.u8);
	// stb r11,-80(r1)
	PPC_STORE_U8(ctx.r1.u32 + -80, ctx.r11.u8);
	// stb r11,-79(r1)
	PPC_STORE_U8(ctx.r1.u32 + -79, ctx.r11.u8);
	// stb r11,-78(r1)
	PPC_STORE_U8(ctx.r1.u32 + -78, ctx.r11.u8);
	// stb r11,-77(r1)
	PPC_STORE_U8(ctx.r1.u32 + -77, ctx.r11.u8);
	// stb r11,-76(r1)
	PPC_STORE_U8(ctx.r1.u32 + -76, ctx.r11.u8);
	// stb r11,-75(r1)
	PPC_STORE_U8(ctx.r1.u32 + -75, ctx.r11.u8);
	// stb r11,-74(r1)
	PPC_STORE_U8(ctx.r1.u32 + -74, ctx.r11.u8);
	// stb r11,-73(r1)
	PPC_STORE_U8(ctx.r1.u32 + -73, ctx.r11.u8);
	// stb r11,-72(r1)
	PPC_STORE_U8(ctx.r1.u32 + -72, ctx.r11.u8);
	// stb r11,-71(r1)
	PPC_STORE_U8(ctx.r1.u32 + -71, ctx.r11.u8);
	// stb r11,-70(r1)
	PPC_STORE_U8(ctx.r1.u32 + -70, ctx.r11.u8);
	// stb r11,-69(r1)
	PPC_STORE_U8(ctx.r1.u32 + -69, ctx.r11.u8);
	// stb r11,-68(r1)
	PPC_STORE_U8(ctx.r1.u32 + -68, ctx.r11.u8);
	// stb r11,-67(r1)
	PPC_STORE_U8(ctx.r1.u32 + -67, ctx.r11.u8);
	// stb r11,-66(r1)
	PPC_STORE_U8(ctx.r1.u32 + -66, ctx.r11.u8);
	// stb r11,-65(r1)
	PPC_STORE_U8(ctx.r1.u32 + -65, ctx.r11.u8);
	// stb r11,-64(r1)
	PPC_STORE_U8(ctx.r1.u32 + -64, ctx.r11.u8);
	// stb r11,-63(r1)
	PPC_STORE_U8(ctx.r1.u32 + -63, ctx.r11.u8);
	// stb r11,-62(r1)
	PPC_STORE_U8(ctx.r1.u32 + -62, ctx.r11.u8);
	// stb r11,-61(r1)
	PPC_STORE_U8(ctx.r1.u32 + -61, ctx.r11.u8);
	// stb r11,-60(r1)
	PPC_STORE_U8(ctx.r1.u32 + -60, ctx.r11.u8);
	// stb r11,-59(r1)
	PPC_STORE_U8(ctx.r1.u32 + -59, ctx.r11.u8);
	// stb r11,-58(r1)
	PPC_STORE_U8(ctx.r1.u32 + -58, ctx.r11.u8);
	// stb r11,-57(r1)
	PPC_STORE_U8(ctx.r1.u32 + -57, ctx.r11.u8);
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, ctx.r11.u8);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, ctx.r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, ctx.r11.u8);
	// stb r11,-53(r1)
	PPC_STORE_U8(ctx.r1.u32 + -53, ctx.r11.u8);
	// stb r11,-52(r1)
	PPC_STORE_U8(ctx.r1.u32 + -52, ctx.r11.u8);
	// stb r11,-51(r1)
	PPC_STORE_U8(ctx.r1.u32 + -51, ctx.r11.u8);
	// stb r11,-50(r1)
	PPC_STORE_U8(ctx.r1.u32 + -50, ctx.r11.u8);
	// stb r11,-49(r1)
	PPC_STORE_U8(ctx.r1.u32 + -49, ctx.r11.u8);
	// stb r11,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r11.u8);
	// stb r11,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r11.u8);
	// stb r11,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r11.u8);
	// stb r11,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r11.u8);
	// stb r11,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r11.u8);
	// stb r11,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r11.u8);
	// stb r11,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r11.u8);
	// stb r11,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r11.u8);
	// stb r11,-40(r1)
	PPC_STORE_U8(ctx.r1.u32 + -40, ctx.r11.u8);
	// stb r11,-39(r1)
	PPC_STORE_U8(ctx.r1.u32 + -39, ctx.r11.u8);
	// stb r11,-38(r1)
	PPC_STORE_U8(ctx.r1.u32 + -38, ctx.r11.u8);
	// stb r11,-37(r1)
	PPC_STORE_U8(ctx.r1.u32 + -37, ctx.r11.u8);
	// stb r11,-36(r1)
	PPC_STORE_U8(ctx.r1.u32 + -36, ctx.r11.u8);
	// stb r11,-35(r1)
	PPC_STORE_U8(ctx.r1.u32 + -35, ctx.r11.u8);
	// stb r11,-34(r1)
	PPC_STORE_U8(ctx.r1.u32 + -34, ctx.r11.u8);
	// stb r11,-33(r1)
	PPC_STORE_U8(ctx.r1.u32 + -33, ctx.r11.u8);
	// stb r11,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r11.u8);
	// stb r11,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r11.u8);
	// stb r11,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r11.u8);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stb r11,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r11.u8);
	// stb r11,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r11.u8);
	// stb r11,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r11.u8);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// stb r11,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r11.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// stb r11,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r11.u8);
	// stb r11,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r11.u8);
	// stb r11,-22(r1)
	PPC_STORE_U8(ctx.r1.u32 + -22, ctx.r11.u8);
	// stb r11,-21(r1)
	PPC_STORE_U8(ctx.r1.u32 + -21, ctx.r11.u8);
	// stb r11,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r11.u8);
	// stb r11,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r11.u8);
	// stb r11,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r11.u8);
	// stb r11,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r11.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// stb r11,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r11.u8);
	// stb r11,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r11.u8);
	// stb r11,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r11.u8);
	// stb r11,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r11.u8);
	// stb r11,-8(r1)
	PPC_STORE_U8(ctx.r1.u32 + -8, ctx.r11.u8);
	// stb r11,-7(r1)
	PPC_STORE_U8(ctx.r1.u32 + -7, ctx.r11.u8);
	// stb r11,-6(r1)
	PPC_STORE_U8(ctx.r1.u32 + -6, ctx.r11.u8);
	// stb r11,-5(r1)
	PPC_STORE_U8(ctx.r1.u32 + -5, ctx.r11.u8);
	// stb r11,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r11.u8);
	// stb r11,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r11.u8);
	// stb r11,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r11.u8);
	// stb r11,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r11.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bgt cr6,0x8247fb4c
	if (ctx.cr6.gt) {
		// ERROR 8247FB4C
		return;
	}
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,-1232
	ctx.r12.s64 = ctx.r12.s64 + -1232;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8247FB7C
		return;
	case 1:
		// ERROR: 0x8247FB6C
		return;
	case 2:
		// ERROR: 0x8247FB6C
		return;
	case 3:
		// ERROR: 0x8247FB6C
		return;
	case 4:
		// ERROR: 0x8247FB6C
		return;
	case 5:
		// ERROR: 0x8247FB5C
		return;
	case 6:
		// ERROR: 0x8247FB5C
		return;
	default:
		__builtin_unreachable();
	}
}
PPC_FUNC_IMPL(__imp__sub_8247FB30) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-1156(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1156);
	// lwz r18,-1172(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1172);
	// lwz r18,-1172(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1172);
	// lwz r18,-1172(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1172);
	// lwz r18,-1172(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1172);
	// lwz r18,-1188(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1188);
	// lwz r18,-1188(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1188);
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// addi r7,r1,-256
	ctx.r7.s64 = ctx.r1.s64 + -256;
	// lbzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r6,5(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r5,r1,-256
	ctx.r5.s64 = ctx.r1.s64 + -256;
	// lbzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,1(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
	// lbzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// lbzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_8247FB90) {
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
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x8247fc14
	if (ctx.cr6.gt) goto loc_8247FC14;
	// bl 0x8247f6c8
	ctx.lr = 0x8247FBB4;
	sub_8247F6C8(ctx, base);
	// cmplwi cr6,r3,211
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 211, ctx.xer);
	// bgt cr6,0x8247fc14
	if (ctx.cr6.gt) goto loc_8247FC14;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,10704
	ctx.r11.s64 = ctx.r11.s64 + 10704;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247fc14
	if (!ctx.cr6.eq) goto loc_8247FC14;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_8247FBE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8247fc0c
	if (ctx.cr6.eq) goto loc_8247FC0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8247fbe8
	if (ctx.cr6.eq) goto loc_8247FBE8;
loc_8247FC0C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8247fc18
	if (ctx.cr6.eq) goto loc_8247FC18;
loc_8247FC14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247FC18:
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

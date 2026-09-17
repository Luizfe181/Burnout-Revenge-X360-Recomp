#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8222A18C"))) PPC_WEAK_FUNC(sub_8222A18C);
PPC_FUNC_IMPL(__imp__sub_8222A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A190"))) PPC_WEAK_FUNC(sub_8222A190);
PPC_FUNC_IMPL(__imp__sub_8222A190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222A198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,31008
	ctx.r29.s64 = ctx.r29.s64 + 31008;
loc_8222A1AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82364968
	ctx.lr = 0x8222A1B4;
	sub_82364968(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,23152
	ctx.r29.s64 = ctx.r29.s64 + 23152;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8222a1ac
	if (!ctx.cr6.eq) goto loc_8222A1AC;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x8212bb98
	ctx.lr = 0x8222A1CC;
	sub_8212BB98(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365268
	ctx.lr = 0x8222A1D4;
	sub_82365268(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,26472
	ctx.r3.s64 = ctx.r3.s64 + 26472;
	// stb r11,2472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2472, ctx.r11.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222A1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222A20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x8210d230
	ctx.lr = 0x8222A220;
	sub_8210D230(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8222A234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A23C"))) PPC_WEAK_FUNC(sub_8222A23C);
PPC_FUNC_IMPL(__imp__sub_8222A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A240"))) PPC_WEAK_FUNC(sub_8222A240);
PPC_FUNC_IMPL(__imp__sub_8222A240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222A248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221c328
	ctx.lr = 0x8222A254;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r30,r10,51808
	ctx.r30.u64 = ctx.r10.u64 | 51808;
	// ori r29,r9,51904
	ctx.r29.u64 = ctx.r9.u64 | 51904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a27c
	if (ctx.cr6.eq) goto loc_8222A27C;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x82366308
	ctx.lr = 0x8222A278;
	sub_82366308(ctx, base);
	// b 0x8222a284
	goto loc_8222A284;
loc_8222A27C:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82365fd0
	ctx.lr = 0x8222A284;
	sub_82365FD0(ctx, base);
loc_8222A284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x8222A28C;
	sub_8221C328(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222a2a4
	if (ctx.cr6.eq) goto loc_8222A2A4;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x823662a0
	ctx.lr = 0x8222A2A0;
	sub_823662A0(ctx, base);
	// b 0x8222a2ac
	goto loc_8222A2AC;
loc_8222A2A4:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82365f48
	ctx.lr = 0x8222A2AC;
	sub_82365F48(ctx, base);
loc_8222A2AC:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r6,r7,51952
	ctx.r6.u64 = ctx.r7.u64 | 51952;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r5,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A2C8"))) PPC_WEAK_FUNC(sub_8222A2C8);
PPC_FUNC_IMPL(__imp__sub_8222A2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8222A2D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// ori r24,r10,51916
	ctx.r24.u64 = ctx.r10.u64 | 51916;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a3dc
	if (ctx.cr6.eq) goto loc_8222A3DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c408
	ctx.lr = 0x8222A308;
	sub_8221C408(ctx, base);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// lwzx r4,r31,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823656d8
	ctx.lr = 0x8222A318;
	sub_823656D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823656f0
	ctx.lr = 0x8222A324;
	sub_823656F0(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,26404
	ctx.r10.s64 = ctx.r10.s64 + 26404;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_8222A334:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8222a334
	if (!ctx.cr6.eq) goto loc_8222A334;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r5,26400
	ctx.r5.s64 = ctx.r5.s64 + 26400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224e78
	ctx.lr = 0x8222A360;
	sub_82224E78(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,120(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222A374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8222a384
	if (!ctx.cr6.eq) goto loc_8222A384;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222A384:
	// clrldi r4,r11,56
	ctx.r4.u64 = ctx.r11.u64 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823652c8
	ctx.lr = 0x8222A390;
	sub_823652C8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x8222A3A4;
	sub_82104600(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwz r3,7584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7584);
	// bl 0x82587570
	ctx.lr = 0x8222A3B8;
	sub_82587570(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// extsb r9,r27
	ctx.r9.s64 = ctx.r27.s8;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x82229c40
	ctx.lr = 0x8222A3D8;
	sub_82229C40(ctx, base);
	// b 0x8222a464
	goto loc_8222A464;
loc_8222A3DC:
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823728f0
	ctx.lr = 0x8222A3F8;
	sub_823728F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823656f8
	ctx.lr = 0x8222A404;
	sub_823656F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r27,1588
	ctx.r10.s64 = ctx.r27.s64 + 1588;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_8222A414:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8222a414
	if (!ctx.cr6.eq) goto loc_8222A414;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r27,1584
	ctx.r5.s64 = ctx.r27.s64 + 1584;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224e78
	ctx.lr = 0x8222A43C;
	sub_82224E78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8672
	ctx.r3.s64 = ctx.r31.s64 + 8672;
	// bl 0x8221ce48
	ctx.lr = 0x8222A448;
	sub_8221CE48(ctx, base);
	// lbz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8222a460
	if (!ctx.cr6.eq) goto loc_8222A460;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222A460:
	// stb r11,1651(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1651, ctx.r11.u8);
loc_8222A464:
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// clrlwi r9,r23,24
	ctx.r9.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8222a4f8
	if (ctx.cr6.eq) goto loc_8222A4F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82365d38
	ctx.lr = 0x8222A488;
	sub_82365D38(ctx, base);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r6,r7,51969
	ctx.r6.u64 = ctx.r7.u64 | 51969;
	// lbzx r5,r31,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222a4a8
	if (ctx.cr6.eq) goto loc_8222A4A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82365d58
	ctx.lr = 0x8222A4A4;
	sub_82365D58(ctx, base);
	// b 0x8222a4bc
	goto loc_8222A4BC;
loc_8222A4A8:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A4BC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82365d50
	ctx.lr = 0x8222A4C8;
	sub_82365D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x8222A4D0;
	sub_8221C328(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222a4fc
	if (ctx.cr6.eq) goto loc_8222A4FC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r9,26469
	ctx.r8.u64 = ctx.r9.u64 | 26469;
	// stbx r7,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8222A4F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8222A4FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A504"))) PPC_WEAK_FUNC(sub_8222A504);
PPC_FUNC_IMPL(__imp__sub_8222A504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A508"))) PPC_WEAK_FUNC(sub_8222A508);
PPC_FUNC_IMPL(__imp__sub_8222A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222A510;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823656f8
	ctx.lr = 0x8222A530;
	sub_823656F8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a5e4
	if (ctx.cr6.eq) goto loc_8222A5E4;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8222a584
	if (ctx.cr6.eq) goto loc_8222A584;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8222a584
	if (ctx.cr6.eq) goto loc_8222A584;
	// srawi r9,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 16;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// srawi r8,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// addi r5,r10,-22792
	ctx.r5.s64 = ctx.r10.s64 + -22792;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// rlwinm r6,r31,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFF;
	// bl 0x8259da78
	ctx.lr = 0x8222A584;
	sub_8259DA78(ctx, base);
loc_8222A584:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8222a590
	if (ctx.cr6.eq) goto loc_8222A590;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
loc_8222A590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823475c0
	ctx.lr = 0x8222A598;
	sub_823475C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7584(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7584);
	// bl 0x82587570
	ctx.lr = 0x8222A5A4;
	sub_82587570(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222A5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r28,2472
	ctx.r3.s64 = ctx.r28.s64 + 2472;
	// bl 0x82229c40
	ctx.lr = 0x8222A5DC;
	sub_82229C40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8222A5E4:
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,1204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1204, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A5F4"))) PPC_WEAK_FUNC(sub_8222A5F4);
PPC_FUNC_IMPL(__imp__sub_8222A5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A5F8"))) PPC_WEAK_FUNC(sub_8222A5F8);
PPC_FUNC_IMPL(__imp__sub_8222A5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222A600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222a65c
	if (!ctx.cr6.gt) goto loc_8222A65C;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
loc_8222A620:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82365758
	ctx.lr = 0x8222A62C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a64c
	if (ctx.cr6.eq) goto loc_8222A64C;
	// stb r29,1649(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1649, ctx.r29.u8);
	// stw r29,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r29.u32);
	// bl 0x823475c0
	ctx.lr = 0x8222A640;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x82229e78
	ctx.lr = 0x8222A64C;
	sub_82229E78(ctx, base);
loc_8222A64C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a620
	if (ctx.cr6.lt) goto loc_8222A620;
loc_8222A65C:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8236c270
	ctx.lr = 0x8222A664;
	sub_8236C270(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,26464
	ctx.r10.u64 = ctx.r11.u64 | 26464;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A678"))) PPC_WEAK_FUNC(sub_8222A678);
PPC_FUNC_IMPL(__imp__sub_8222A678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8222A680;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// ori r8,r9,51948
	ctx.r8.u64 = ctx.r9.u64 | 51948;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r10,r11,51912
	ctx.r10.u64 = ctx.r11.u64 | 51912;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r5,r6,51950
	ctx.r5.u64 = ctx.r6.u64 | 51950;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r27,r7,65535
	ctx.r27.u64 = ctx.r7.u64 | 65535;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r4,51952
	ctx.r11.u64 = ctx.r4.u64 | 51952;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r7,r9,51959
	ctx.r7.u64 = ctx.r9.u64 | 51959;
	// sthx r27,r31,r8
	PPC_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u16);
	// sthx r30,r31,r5
	PPC_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u16);
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8222A6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// li r29,5
	ctx.r29.s64 = 5;
	// addi r28,r28,15696
	ctx.r28.s64 = ctx.r28.s64 + 15696;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8222A700:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r31,1940
	ctx.r3.s64 = ctx.r31.s64 + 1940;
	// bl 0x823646e0
	ctx.lr = 0x8222A70C;
	sub_823646E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,1608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1608, ctx.r30.u64);
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// stw r26,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r26.u32);
	// stb r30,1640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1640, ctx.r30.u8);
	// stb r30,1641(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1641, ctx.r30.u8);
	// stb r30,1642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1642, ctx.r30.u8);
	// stb r30,1643(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1643, ctx.r30.u8);
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// stb r30,1644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1644, ctx.r30.u8);
	// stb r30,23124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23124, ctx.r30.u8);
	// bl 0x82225088
	ctx.lr = 0x8222A73C;
	sub_82225088(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// sth r27,1352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1352, ctx.r27.u16);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8222a700
	if (!ctx.cr6.eq) goto loc_8222A700;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A758"))) PPC_WEAK_FUNC(sub_8222A758);
PPC_FUNC_IMPL(__imp__sub_8222A758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222A760;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r8,r9,51980
	ctx.r8.u64 = ctx.r9.u64 | 51980;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r10,r11,51540
	ctx.r10.u64 = ctx.r11.u64 | 51540;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ori r8,r9,51976
	ctx.r8.u64 = ctx.r9.u64 | 51976;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stbx r29,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
	// ori r10,r11,51972
	ctx.r10.u64 = ctx.r11.u64 | 51972;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r6,r7,51984
	ctx.r6.u64 = ctx.r7.u64 | 51984;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ori r3,r4,51988
	ctx.r3.u64 = ctx.r4.u64 | 51988;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// stbx r29,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222a804
	if (!ctx.cr6.gt) goto loc_8222A804;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
loc_8222A7DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82365758
	ctx.lr = 0x8222A7E8;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a7f4
	if (ctx.cr6.eq) goto loc_8222A7F4;
	// stb r29,1648(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1648, ctx.r29.u8);
loc_8222A7F4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a7dc
	if (ctx.cr6.lt) goto loc_8222A7DC;
loc_8222A804:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r6,r7,51968
	ctx.r6.u64 = ctx.r7.u64 | 51968;
	// ori r4,r5,51964
	ctx.r4.u64 = ctx.r5.u64 | 51964;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r29,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u8);
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// ble cr6,0x8222a858
	if (!ctx.cr6.gt) goto loc_8222A858;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
loc_8222A830:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365758
	ctx.lr = 0x8222A83C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a848
	if (ctx.cr6.eq) goto loc_8222A848;
	// bl 0x82225088
	ctx.lr = 0x8222A848;
	sub_82225088(ctx, base);
loc_8222A848:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a830
	if (ctx.cr6.lt) goto loc_8222A830;
loc_8222A858:
	// clrlwi r3,r27,24
	ctx.r3.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a86c
	if (ctx.cr6.eq) goto loc_8222A86C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365d68
	ctx.lr = 0x8222A86C;
	sub_82365D68(ctx, base);
loc_8222A86C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A874"))) PPC_WEAK_FUNC(sub_8222A874);
PPC_FUNC_IMPL(__imp__sub_8222A874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A878"))) PPC_WEAK_FUNC(sub_8222A878);
PPC_FUNC_IMPL(__imp__sub_8222A878) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82229fa8
	sub_82229FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A880"))) PPC_WEAK_FUNC(sub_8222A880);
PPC_FUNC_IMPL(__imp__sub_8222A880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222A888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8222a8b4
	if (ctx.cr6.eq) goto loc_8222A8B4;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addi r5,r5,26400
	ctx.r5.s64 = ctx.r5.s64 + 26400;
	// b 0x8222a8cc
	goto loc_8222A8CC;
loc_8222A8B4:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8222A8BC;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a8d8
	if (ctx.cr6.eq) goto loc_8222A8D8;
	// addi r5,r3,1584
	ctx.r5.s64 = ctx.r3.s64 + 1584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8222A8CC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224e78
	ctx.lr = 0x8222A8D8;
	sub_82224E78(ctx, base);
loc_8222A8D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A8E4"))) PPC_WEAK_FUNC(sub_8222A8E4);
PPC_FUNC_IMPL(__imp__sub_8222A8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A8E8"))) PPC_WEAK_FUNC(sub_8222A8E8);
PPC_FUNC_IMPL(__imp__sub_8222A8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222A8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8222a91c
	if (ctx.cr6.eq) goto loc_8222A91C;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addi r5,r5,26400
	ctx.r5.s64 = ctx.r5.s64 + 26400;
	// b 0x8222a934
	goto loc_8222A934;
loc_8222A91C:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8222A924;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a940
	if (ctx.cr6.eq) goto loc_8222A940;
	// addi r5,r3,1584
	ctx.r5.s64 = ctx.r3.s64 + 1584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8222A934:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224e78
	ctx.lr = 0x8222A940;
	sub_82224E78(ctx, base);
loc_8222A940:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A94C"))) PPC_WEAK_FUNC(sub_8222A94C);
PPC_FUNC_IMPL(__imp__sub_8222A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A950"))) PPC_WEAK_FUNC(sub_8222A950);
PPC_FUNC_IMPL(__imp__sub_8222A950) {
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
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51970
	ctx.r10.u64 = ctx.r11.u64 | 51970;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222a988
	if (ctx.cr6.eq) goto loc_8222A988;
	// bl 0x8222a5f8
	ctx.lr = 0x8222A974;
	sub_8222A5F8(ctx, base);
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
loc_8222A988:
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

__attribute__((alias("__imp__sub_8222A99C"))) PPC_WEAK_FUNC(sub_8222A99C);
PPC_FUNC_IMPL(__imp__sub_8222A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A9A0"))) PPC_WEAK_FUNC(sub_8222A9A0);
PPC_FUNC_IMPL(__imp__sub_8222A9A0) {
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
	// addi r3,r30,2472
	ctx.r3.s64 = ctx.r30.s64 + 2472;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82229e78
	ctx.lr = 0x8222A9CC;
	sub_82229E78(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82372d08
	ctx.lr = 0x8222A9D8;
	sub_82372D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c0f0
	ctx.lr = 0x8222A9E0;
	sub_8236C0F0(ctx, base);
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

__attribute__((alias("__imp__sub_8222A9F8"))) PPC_WEAK_FUNC(sub_8222A9F8);
PPC_FUNC_IMPL(__imp__sub_8222A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222AA00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,23108
	ctx.r4.s64 = ctx.r30.s64 + 23108;
	// addi r3,r31,12840
	ctx.r3.s64 = ctx.r31.s64 + 12840;
	// bl 0x8212e9b8
	ctx.lr = 0x8222AA28;
	sub_8212E9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222aa80
	if (ctx.cr6.eq) goto loc_8222AA80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12848);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222aa80
	if (ctx.cr6.eq) goto loc_8222AA80;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r3,r30,3544
	ctx.r3.s64 = ctx.r30.s64 + 3544;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8221a130
	ctx.lr = 0x8222AA78;
	sub_8221A130(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8222AA80:
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222aaa8
	if (ctx.cr6.eq) goto loc_8222AAA8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,3544
	ctx.r3.s64 = ctx.r30.s64 + 3544;
	// bl 0x8221a130
	ctx.lr = 0x8222AAA8;
	sub_8221A130(ctx, base);
loc_8222AAA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AAB0"))) PPC_WEAK_FUNC(sub_8222AAB0);
PPC_FUNC_IMPL(__imp__sub_8222AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222AAB8;
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
	ctx.lr = 0x8222AAEC;
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
loc_8222AB64:
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x8222ab64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222AB64;
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
	ctx.lr = 0x8222AB8C;
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
	// beq cr6,0x8222abd4
	if (ctx.cr6.eq) goto loc_8222ABD4;
	// lbz r5,2668(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2668);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222abd4
	if (ctx.cr6.eq) goto loc_8222ABD4;
	// bl 0x82589630
	ctx.lr = 0x8222ABC0;
	sub_82589630(ctx, base);
	// rlwinm r4,r3,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8222abd0
	if (ctx.cr6.eq) goto loc_8222ABD0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8222ABD0:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
loc_8222ABD4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r10,r11,26460
	ctx.r10.u64 = ctx.r11.u64 | 26460;
	// ori r6,r7,26457
	ctx.r6.u64 = ctx.r7.u64 | 26457;
	// lbzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// rlwimi r3,r11,1,29,30
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x6) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF9);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lbzx r11,r29,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// rlwimi r8,r11,0,31,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFE);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r4,22(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// rlwimi r5,r4,3,28,28
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AC30"))) PPC_WEAK_FUNC(sub_8222AC30);
PPC_FUNC_IMPL(__imp__sub_8222AC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222AC38;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,7
	ctx.r5.s64 = ctx.r31.s64 + 7;
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x8221a918
	ctx.lr = 0x8222AC68;
	sub_8221A918(ctx, base);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addis r8,r10,38
	ctx.r8.s64 = ctx.r10.s64 + 2490368;
	// ori r29,r6,65535
	ctx.r29.u64 = ctx.r6.u64 | 65535;
	// addi r7,r8,-16320
	ctx.r7.s64 = ctx.r8.s64 + -16320;
	// lfs f8,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// addis r8,r10,38
	ctx.r8.s64 = ctx.r10.s64 + 2490368;
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r8,-16304
	ctx.r7.s64 = ctx.r8.s64 + -16304;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// addi r11,r11,-30544
	ctx.r11.s64 = ctx.r11.s64 + -30544;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fsubs f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f31,f12,f6
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsel f8,f2,f0,f8
	ctx.f8.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsel f7,f1,f13,f7
	ctx.f7.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fsel f6,f31,f12,f6
	ctx.f6.f64 = ctx.f31.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fsubs f2,f11,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f1,f10,f7
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f31,f9,f6
	ctx.f31.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsel f11,f2,f8,f11
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// fsel f10,f1,f7,f10
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f7.f64 : ctx.f10.f64;
	// fsel f9,f31,f6,f9
	ctx.f9.f64 = ctx.f31.f64 >= 0.0 ? ctx.f6.f64 : ctx.f9.f64;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f31,f0,f5
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fsubs f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fdivs f30,f0,f4
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fdivs f29,f0,f3
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// bl 0x8234a388
	ctx.lr = 0x8222AD6C;
	sub_8234A388(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsel f31,f0,f1,f31
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f31.f64;
	// bl 0x8234a388
	ctx.lr = 0x8222AD84;
	sub_8234A388(ctx, base);
	// fsubs f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsel f30,f13,f1,f30
	ctx.f30.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f30.f64;
	// bl 0x8234a388
	ctx.lr = 0x8222AD9C;
	sub_8234A388(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fsubs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsel f31,f12,f0,f29
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// bl 0x8234a2a8
	ctx.lr = 0x8222ADB8;
	sub_8234A2A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8222ADCC;
	sub_8234A2A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8222ADE0;
	sub_8234A2A8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f0,-18408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// lbz r6,34(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222ae1c
	if (ctx.cr6.eq) goto loc_8222AE1C;
	// rlwimi r11,r29,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
loc_8222AE1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r28,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r28.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227a10
	ctx.lr = 0x8222AE2C;
	sub_82227A10(ctx, base);
	// lbz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,25
	ctx.r11.s64 = 25;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222ae48
	if (ctx.cr6.eq) goto loc_8222AE48;
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// b 0x8222ae4c
	goto loc_8222AE4C;
loc_8222AE48:
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
loc_8222AE4C:
	// lbz r4,31(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222ae68
	if (ctx.cr6.eq) goto loc_8222AE68;
	// lbz r3,13(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// ori r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 | 32;
	// stb r9,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r9.u8);
	// b 0x8222ae9c
	goto loc_8222AE9C;
loc_8222AE68:
	// lbz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222ae84
	if (ctx.cr6.eq) goto loc_8222AE84;
	// lbz r7,13(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stb r6,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r6.u8);
	// b 0x8222ae9c
	goto loc_8222AE9C;
loc_8222AE84:
	// lbz r5,33(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222ae9c
	if (ctx.cr6.eq) goto loc_8222AE9C;
	// lbz r4,13(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// ori r3,r4,96
	ctx.r3.u64 = ctx.r4.u64 | 96;
	// stb r3,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r3.u8);
loc_8222AE9C:
	// lbz r9,30(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222aeb4
	if (ctx.cr6.eq) goto loc_8222AEB4;
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// stb r7,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r7.u8);
loc_8222AEB4:
	// lbz r6,37(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222aec8
	if (ctx.cr6.eq) goto loc_8222AEC8;
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// b 0x8222aecc
	goto loc_8222AECC;
loc_8222AEC8:
	// stb r10,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r10.u8);
loc_8222AECC:
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8222aef8
	if (ctx.cr6.eq) goto loc_8222AEF8;
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// ori r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 | 32;
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8222aef8
	if (!ctx.cr6.eq) goto loc_8222AEF8;
	// rlwimi r11,r29,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
loc_8222AEF8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// rotlwi r7,r8,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// stb r6,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r6.u8);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222af34
	if (ctx.cr6.eq) goto loc_8222AF34;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8222afa4
	if (!ctx.cr6.eq) goto loc_8222AFA4;
loc_8222AF34:
	// lbz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// beq cr6,0x8222af50
	if (ctx.cr6.eq) goto loc_8222AF50;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// stb r10,204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 204, ctx.r10.u8);
loc_8222AF50:
	// lbz r3,77(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af6c
	if (ctx.cr6.eq) goto loc_8222AF6C;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// stb r10,208(r11)
	PPC_STORE_U8(ctx.r11.u32 + 208, ctx.r10.u8);
loc_8222AF6C:
	// lbz r7,78(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 78);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222af88
	if (ctx.cr6.eq) goto loc_8222AF88;
	// lbz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 32;
	// stb r5,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r5.u8);
	// stb r10,209(r11)
	PPC_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
loc_8222AF88:
	// lbz r4,79(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 79);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222afa4
	if (ctx.cr6.eq) goto loc_8222AFA4;
	// lbz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r9,r3,64
	ctx.r9.u64 = ctx.r3.u64 | 64;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// stb r10,210(r11)
	PPC_STORE_U8(ctx.r11.u32 + 210, ctx.r10.u8);
loc_8222AFA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AFB8"))) PPC_WEAK_FUNC(sub_8222AFB8);
PPC_FUNC_IMPL(__imp__sub_8222AFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222AFC0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bb98
	ctx.lr = 0x8222AFC8;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lbz r5,7(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x8221ab50
	ctx.lr = 0x8222AFEC;
	sub_8221AB50(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r10,r11,38
	ctx.r10.s64 = ctx.r11.s64 + 2490368;
	// addis r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 2490368;
	// addi r10,r10,-16304
	ctx.r10.s64 = ctx.r10.s64 + -16304;
	// addi r9,r11,-16320
	ctx.r9.s64 = ctx.r11.s64 + -16320;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r11,r11,-30544
	ctx.r11.s64 = ctx.r11.s64 + -30544;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f11,f12
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fadds f28,f0,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f26,f8,f12
	ctx.f26.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bl 0x8234a388
	ctx.lr = 0x8222B088;
	sub_8234A388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// bl 0x8234a388
	ctx.lr = 0x8222B09C;
	sub_8234A388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// bl 0x8234a388
	ctx.lr = 0x8222B0B0;
	sub_8234A388(ctx, base);
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f26,f29
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// fadds f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fadds f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f5,f0,f29
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// lfs f8,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f2,f12,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fsqrts f9,f2
	ctx.f9.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f7,f12,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f9,f7
	ctx.f9.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f2,f0,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fsqrts f10,f1
	ctx.f10.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// ble cr6,0x8222ba04
	if (!ctx.cr6.gt) goto loc_8222BA04;
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x8222b8a8
	if (!ctx.cr6.gt) goto loc_8222B8A8;
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ble cr6,0x8222b758
	if (!ctx.cr6.gt) goto loc_8222B758;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// fmr f11,f6
	ctx.f11.f64 = ctx.f6.f64;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f7,f4,f0,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f8,f6,f5,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f6,f9,f0,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f10,f12,f1,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f11,f3,f2,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f9,f31,f12,f6
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8222b4a8
	if (!ctx.cr6.lt) goto loc_8222B4A8;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// fmr f9,f3
	ctx.f9.f64 = ctx.f3.f64;
	// bge cr6,0x8222b358
	if (!ctx.cr6.lt) goto loc_8222B358;
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f0,f9
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f2,f13,f0,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f5.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f1,f10,f12,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f4.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f0,f11,f9,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f3.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f6,f0,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f9,f10,f10,f6
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// frsqrte f0,f9
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f9.f64)));
	// fmul f5,f9,f0
	ctx.f5.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f4,f0,f13
	ctx.f4.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f3,f5,f0,f12
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f3,f4,f0
	ctx.f0.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// fmul f2,f9,f0
	ctx.f2.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f9,f2,f0,f12
	ctx.f9.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f7,f9,f1,f0
	ctx.f7.f64 = ctx.f9.f64 * ctx.f1.f64 + ctx.f0.f64;
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f1,f8,f0,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f4,f9,f11,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f2,f7,f10,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// b 0x8222bb00
	goto loc_8222BB00;
loc_8222B358:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f2,f8,f0,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f10,f11,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8222bb58
	goto loc_8222BB58;
loc_8222B4A8:
	// fcmpu cr6,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x8222b604
	if (!ctx.cr6.lt) goto loc_8222B604;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmsubs f3,f0,f9,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f13,f11,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f4,f12,f10,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f2,f8,f0,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f10,f11,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x8222bb58
	goto loc_8222BB58;
loc_8222B604:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f2,f8,f0,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f10,f11,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8222bb58
	goto loc_8222BB58;
loc_8222B758:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f2,f7,f10,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f8,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f11,f0,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8222bb58
	goto loc_8222BB58;
loc_8222B8A8:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmsubs f3,f13,f9,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f0,f11,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f4,f12,f10,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f2,f8,f10,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f11,f0,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x8222bb58
	goto loc_8222BB58;
loc_8222BA04:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f4,f10,f12,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f0,f13,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f3,f11,f9,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfd f13,-4832(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4832);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f9,f10,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// frsqrte f0,f9
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f9.f64)));
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f7,f0,f13
	ctx.f7.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f6,f8,f0,f12
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f9,f0
	ctx.f5.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f4,f0,f13
	ctx.f4.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f3,f5,f0,f12
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f3,f4,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,8(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f1,f8,f0,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f9,f11,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f2,f7,f10,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
loc_8222BB00:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8222BB58:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r28,34(r30)
	PPC_STORE_U8(ctx.r30.u32 + 34, ctx.r28.u8);
	// lbz r3,9(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r11,r3,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8222bb84
	if (!ctx.cr6.eq) goto loc_8222BB84;
	// stb r29,34(r30)
	PPC_STORE_U8(ctx.r30.u32 + 34, ctx.r29.u8);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
loc_8222BB84:
	// lbz r7,9(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-18404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18404);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// bl 0x82220c20
	ctx.lr = 0x8222BBC4;
	sub_82220C20(ctx, base);
	// stb r28,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r28.u8);
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bne cr6,0x8222bbe8
	if (!ctx.cr6.eq) goto loc_8222BBE8;
	// stb r29,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r29.u8);
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stb r7,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r7.u8);
loc_8222BBE8:
	// stb r28,33(r30)
	PPC_STORE_U8(ctx.r30.u32 + 33, ctx.r28.u8);
	// stb r28,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r28.u8);
	// stb r28,31(r30)
	PPC_STORE_U8(ctx.r30.u32 + 31, ctx.r28.u8);
	// lbz r6,13(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// rlwinm r11,r6,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bne cr6,0x8222bc18
	if (!ctx.cr6.eq) goto loc_8222BC18;
	// stb r29,33(r30)
	PPC_STORE_U8(ctx.r30.u32 + 33, ctx.r29.u8);
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// andi. r4,r5,159
	ctx.r4.u64 = ctx.r5.u64 & 159;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r4,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r4.u8);
	// b 0x8222bc4c
	goto loc_8222BC4C;
loc_8222BC18:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x8222bc34
	if (!ctx.cr6.eq) goto loc_8222BC34;
	// stb r29,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r29.u8);
	// lbz r3,13(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// andi. r11,r3,191
	ctx.r11.u64 = ctx.r3.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// b 0x8222bc4c
	goto loc_8222BC4C;
loc_8222BC34:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8222bc4c
	if (!ctx.cr6.eq) goto loc_8222BC4C;
	// stb r29,31(r30)
	PPC_STORE_U8(ctx.r30.u32 + 31, ctx.r29.u8);
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// andi. r9,r10,223
	ctx.r9.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r9,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r9.u8);
loc_8222BC4C:
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lbz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// bne cr6,0x8222bc94
	if (!ctx.cr6.eq) goto loc_8222BC94;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// andi. r11,r4,223
	ctx.r11.u64 = ctx.r4.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r3,r11,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// bne cr6,0x8222bc94
	if (!ctx.cr6.eq) goto loc_8222BC94;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// stb r10,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r10.u8);
loc_8222BC94:
	// lbz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lbz r7,15(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stb r28,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r28.u8);
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stb r6,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8222bcd0
	if (!ctx.cr6.eq) goto loc_8222BCD0;
	// stb r29,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r29.u8);
	// lbz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_8222BCD0:
	// stb r28,77(r30)
	PPC_STORE_U8(ctx.r30.u32 + 77, ctx.r28.u8);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8222bcf4
	if (!ctx.cr6.eq) goto loc_8222BCF4;
	// stb r29,77(r30)
	PPC_STORE_U8(ctx.r30.u32 + 77, ctx.r29.u8);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// andi. r7,r8,239
	ctx.r7.u64 = ctx.r8.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
loc_8222BCF4:
	// stb r28,79(r30)
	PPC_STORE_U8(ctx.r30.u32 + 79, ctx.r28.u8);
	// lbz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// bne cr6,0x8222bd18
	if (!ctx.cr6.eq) goto loc_8222BD18;
	// stb r29,79(r30)
	PPC_STORE_U8(ctx.r30.u32 + 79, ctx.r29.u8);
	// lbz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// andi. r3,r4,191
	ctx.r3.u64 = ctx.r4.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
loc_8222BD18:
	// stb r28,78(r30)
	PPC_STORE_U8(ctx.r30.u32 + 78, ctx.r28.u8);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8222bd3c
	if (!ctx.cr6.eq) goto loc_8222BD3C;
	// stb r29,78(r30)
	PPC_STORE_U8(ctx.r30.u32 + 78, ctx.r29.u8);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// andi. r8,r9,223
	ctx.r8.u64 = ctx.r9.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
loc_8222BD3C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbe4
	ctx.lr = 0x8222BD48;
	__restfpr_24(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BD4C"))) PPC_WEAK_FUNC(sub_8222BD4C);
PPC_FUNC_IMPL(__imp__sub_8222BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BD50"))) PPC_WEAK_FUNC(sub_8222BD50);
PPC_FUNC_IMPL(__imp__sub_8222BD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222BD58;
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
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8222bd80
	if (ctx.cr6.eq) goto loc_8222BD80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222BD80:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222bdac
	if (ctx.cr6.eq) goto loc_8222BDAC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lbz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 148);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8222bdb8
	if (ctx.cr6.eq) goto loc_8222BDB8;
	// rlwinm r5,r10,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
loc_8222BDAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8222BDB8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x8222afb8
	ctx.lr = 0x8222BDC8;
	sub_8222AFB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82220aa0
	ctx.lr = 0x8222BDD8;
	sub_82220AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BDE4"))) PPC_WEAK_FUNC(sub_8222BDE4);
PPC_FUNC_IMPL(__imp__sub_8222BDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BDE8"))) PPC_WEAK_FUNC(sub_8222BDE8);
PPC_FUNC_IMPL(__imp__sub_8222BDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222BDF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r10,r10,16876
	ctx.r10.s64 = ctx.r10.s64 + 16876;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222BE24:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222be24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222BE24;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// bl 0x82369ec8
	ctx.lr = 0x8222BE54;
	sub_82369EC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222aab0
	ctx.lr = 0x8222BE5C;
	sub_8222AAB0(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// li r10,16
	ctx.r10.s64 = 16;
	// lbz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// rlwimi r8,r7,3,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 3) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r5,r8,0,24,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF8;
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222BE8C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222be8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222BE8C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x8222bec0
	if (ctx.cr6.eq) goto loc_8222BEC0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// b 0x8222bec4
	goto loc_8222BEC4;
loc_8222BEC0:
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_8222BEC4:
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r7,32778
	ctx.r6.u64 = ctx.r7.u64 | 32778;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// ori r9,r10,32779
	ctx.r9.u64 = ctx.r10.u64 | 32779;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// bl 0x8236dc40
	ctx.lr = 0x8222BF00;
	sub_8236DC40(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r8.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BF14"))) PPC_WEAK_FUNC(sub_8222BF14);
PPC_FUNC_IMPL(__imp__sub_8222BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BF18"))) PPC_WEAK_FUNC(sub_8222BF18);
PPC_FUNC_IMPL(__imp__sub_8222BF18) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r10,r11,16876
	ctx.r10.s64 = ctx.r11.s64 + 16876;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r9,26080
	ctx.r9.s64 = ctx.r9.s64 + 26080;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stb r8,72(r9)
	PPC_STORE_U8(ctx.r9.u32 + 72, ctx.r8.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222BF64:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222bf64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222BF64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82369ec8
	ctx.lr = 0x8222BF94;
	sub_82369EC8(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r3,r11,-13980
	ctx.r3.s64 = ctx.r11.s64 + -13980;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r8,r9,26452
	ctx.r8.u64 = ctx.r9.u64 | 26452;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,32664
	ctx.r4.s64 = ctx.r10.s64 + 32664;
	// stwx r11,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x82228188
	ctx.lr = 0x8222BFBC;
	sub_82228188(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8222BFD4"))) PPC_WEAK_FUNC(sub_8222BFD4);
PPC_FUNC_IMPL(__imp__sub_8222BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BFD8"))) PPC_WEAK_FUNC(sub_8222BFD8);
PPC_FUNC_IMPL(__imp__sub_8222BFD8) {
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
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82361330
	ctx.lr = 0x8222C004;
	sub_82361330(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,4800
	ctx.r5.s64 = ctx.r10.s64 + 4800;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x8211f448
	ctx.lr = 0x8222C024;
	sub_8211F448(ctx, base);
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

__attribute__((alias("__imp__sub_8222C038"))) PPC_WEAK_FUNC(sub_8222C038);
PPC_FUNC_IMPL(__imp__sub_8222C038) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r10,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r10.u8);
	// bl 0x82368408
	ctx.lr = 0x8222C078;
	sub_82368408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r10,5968
	ctx.r6.s64 = ctx.r10.s64 + 5968;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82367888
	ctx.lr = 0x8222C09C;
	sub_82367888(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8222c0c0
	if (ctx.cr6.lt) goto loc_8222C0C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C0C0:
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

__attribute__((alias("__imp__sub_8222C0D8"))) PPC_WEAK_FUNC(sub_8222C0D8);
PPC_FUNC_IMPL(__imp__sub_8222C0D8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r10,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r10.u8);
	// bl 0x82368408
	ctx.lr = 0x8222C118;
	sub_82368408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r10,5968
	ctx.r6.s64 = ctx.r10.s64 + 5968;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82367888
	ctx.lr = 0x8222C13C;
	sub_82367888(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c164
	if (ctx.cr6.eq) goto loc_8222C164;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8222c168
	if (!ctx.cr6.eq) goto loc_8222C168;
loc_8222C164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C168:
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

__attribute__((alias("__imp__sub_8222C180"))) PPC_WEAK_FUNC(sub_8222C180);
PPC_FUNC_IMPL(__imp__sub_8222C180) {
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
	// addi r31,r3,4000
	ctx.r31.s64 = ctx.r3.s64 + 4000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x8222C1A0;
	sub_8212E9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c1cc
	if (ctx.cr6.eq) goto loc_8222C1CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c1e4
	if (!ctx.cr6.eq) goto loc_8222C1E4;
loc_8222C1CC:
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
loc_8222C1E4:
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
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

__attribute__((alias("__imp__sub_8222C200"))) PPC_WEAK_FUNC(sub_8222C200);
PPC_FUNC_IMPL(__imp__sub_8222C200) {
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
	// addi r31,r3,4000
	ctx.r31.s64 = ctx.r3.s64 + 4000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x8222C220;
	sub_8212E9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c24c
	if (ctx.cr6.eq) goto loc_8222C24C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c264
	if (!ctx.cr6.eq) goto loc_8222C264;
loc_8222C24C:
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
loc_8222C264:
	// lhz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
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

__attribute__((alias("__imp__sub_8222C27C"))) PPC_WEAK_FUNC(sub_8222C27C);
PPC_FUNC_IMPL(__imp__sub_8222C27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C280"))) PPC_WEAK_FUNC(sub_8222C280);
PPC_FUNC_IMPL(__imp__sub_8222C280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222C288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addi r10,r10,17008
	ctx.r10.s64 = ctx.r10.s64 + 17008;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// addi r9,r9,17004
	ctx.r9.s64 = ctx.r9.s64 + 17004;
	// addi r7,r7,16996
	ctx.r7.s64 = ctx.r7.s64 + 16996;
	// addi r6,r6,17000
	ctx.r6.s64 = ctx.r6.s64 + 17000;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne cr6,0x8222c304
	if (!ctx.cr6.eq) goto loc_8222C304;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8222c398
	if (ctx.cr6.eq) goto loc_8222C398;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8222C304:
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r31,r31,12992
	ctx.r31.s64 = ctx.r31.s64 + 12992;
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,4004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4004);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4008(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4008);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8259d3a0
	ctx.lr = 0x8222C33C;
	sub_8259D3A0(ctx, base);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r29,r10,26752
	ctx.r29.s64 = ctx.r10.s64 + 26752;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bl 0x82361330
	ctx.lr = 0x8222C360;
	sub_82361330(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-22800
	ctx.r9.s64 = ctx.r11.s64 + -22800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r11,-22812
	ctx.r4.s64 = ctx.r11.s64 + -22812;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r10,r10,10984
	ctx.r10.s64 = ctx.r10.s64 + 10984;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x82229890
	ctx.lr = 0x8222C398;
	sub_82229890(ctx, base);
loc_8222C398:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C3A0"))) PPC_WEAK_FUNC(sub_8222C3A0);
PPC_FUNC_IMPL(__imp__sub_8222C3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222C3A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8222c3c8
	if (!ctx.cr6.eq) goto loc_8222C3C8;
	// bl 0x8222c200
	ctx.lr = 0x8222C3C4;
	sub_8222C200(ctx, base);
	// b 0x8222c3cc
	goto loc_8222C3CC;
loc_8222C3C8:
	// bl 0x8222c180
	ctx.lr = 0x8222C3CC;
	sub_8222C180(ctx, base);
loc_8222C3CC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822294e0
	ctx.lr = 0x8222C3E4;
	sub_822294E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// neg r5,r31
	ctx.r5.s64 = -ctx.r31.s64;
	// blt cr6,0x8222c3f8
	if (ctx.cr6.lt) goto loc_8222C3F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8222C3F8:
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,12432
	ctx.r3.s64 = ctx.r3.s64 + 12432;
	// bl 0x821208f8
	ctx.lr = 0x8222C404;
	sub_821208F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C40C"))) PPC_WEAK_FUNC(sub_8222C40C);
PPC_FUNC_IMPL(__imp__sub_8222C40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C410"))) PPC_WEAK_FUNC(sub_8222C410);
PPC_FUNC_IMPL(__imp__sub_8222C410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222C418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8222c438
	if (!ctx.cr6.eq) goto loc_8222C438;
	// bl 0x8222c200
	ctx.lr = 0x8222C434;
	sub_8222C200(ctx, base);
	// b 0x8222c43c
	goto loc_8222C43C;
loc_8222C438:
	// bl 0x8222c180
	ctx.lr = 0x8222C43C;
	sub_8222C180(ctx, base);
loc_8222C43C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822294e0
	ctx.lr = 0x8222C454;
	sub_822294E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// neg r5,r31
	ctx.r5.s64 = -ctx.r31.s64;
	// blt cr6,0x8222c468
	if (ctx.cr6.lt) goto loc_8222C468;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8222C468:
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,12432
	ctx.r3.s64 = ctx.r3.s64 + 12432;
	// bl 0x8221a888
	ctx.lr = 0x8222C474;
	sub_8221A888(ctx, base);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C480"))) PPC_WEAK_FUNC(sub_8222C480);
PPC_FUNC_IMPL(__imp__sub_8222C480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8222C488;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x8232da90
	ctx.lr = 0x8222C4AC;
	sub_8232DA90(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222c578
	if (ctx.cr6.eq) goto loc_8222C578;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8222c578
	if (ctx.cr6.eq) goto loc_8222C578;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8222c584
	if (ctx.cr6.gt) goto loc_8222C584;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-15124
	ctx.r12.s64 = ctx.r12.s64 + -15124;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222C500;
	case 1:
		goto loc_8222C53C;
	case 2:
		goto loc_8222C54C;
	case 3:
		goto loc_8222C55C;
	case 4:
		goto loc_8222C56C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-15104(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15104);
	// lwz r17,-15044(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15044);
	// lwz r17,-15028(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15028);
	// lwz r17,-15012(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15012);
	// lwz r17,-14996(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14996);
loc_8222C500:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8222c51c
	if (!ctx.cr6.eq) goto loc_8222C51C;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C51C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// blt cr6,0x8222c534
	if (ctx.cr6.lt) goto loc_8222C534;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C534:
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C53C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C54C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C55C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C56C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r4,r11,-31584
	ctx.r4.s64 = ctx.r11.s64 + -31584;
	// b 0x8222c584
	goto loc_8222C584;
loc_8222C578:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-31584
	ctx.r11.s64 = ctx.r11.s64 + -31584;
	// addi r4,r11,-160
	ctx.r4.s64 = ctx.r11.s64 + -160;
loc_8222C584:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r5,r6,25856
	ctx.r5.u64 = ctx.r6.u64 | 25856;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r7,25860
	ctx.r6.u64 = ctx.r7.u64 | 25860;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,25856
	ctx.r8.u64 = ctx.r10.u64 | 25856;
	// lhzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r3,2113
	ctx.r10.s64 = ctx.r3.s64 * 2113;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// ori r3,r5,25856
	ctx.r3.u64 = ctx.r5.u64 | 25856;
	// addi r31,r10,4012
	ctx.r31.s64 = ctx.r10.s64 + 4012;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r7,r8,25860
	ctx.r7.u64 = ctx.r8.u64 | 25860;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divwu r11,r10,r5
	ctx.r11.u32 = ctx.r10.u32 / ctx.r5.u32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r28,r9,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x8210fcf8
	ctx.lr = 0x8222C624;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f50
	ctx.lr = 0x8222C630;
	sub_82361F50(ctx, base);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8210fcf8
	ctx.lr = 0x8222C644;
	sub_8210FCF8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8222c760
	if (ctx.cr6.gt) goto loc_8222C760;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
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
		goto loc_8222C688;
	case 1:
		goto loc_8222C6D0;
	case 2:
		goto loc_8222C70C;
	case 3:
		goto loc_8222C744;
	case 4:
		goto loc_8222C744;
	case 5:
		goto loc_8222C744;
	case 6:
		goto loc_8222C744;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-14712(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14712);
	// lwz r17,-14640(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14640);
	// lwz r17,-14580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14580);
	// lwz r17,-14524(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14524);
	// lwz r17,-14524(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14524);
	// lwz r17,-14524(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14524);
	// lwz r17,-14524(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14524);
loc_8222C688:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8222c180
	ctx.lr = 0x8222C694;
	sub_8222C180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// blt cr6,0x8222c6a4
	if (ctx.cr6.lt) goto loc_8222C6A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222C6A4:
	// addi r8,r25,15424
	ctx.r8.s64 = ctx.r25.s64 + 15424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82223ac8
	ctx.lr = 0x8222C6C8;
	sub_82223AC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8222C6D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8222c180
	ctx.lr = 0x8222C6DC;
	sub_8222C180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// blt cr6,0x8222c6ec
	if (ctx.cr6.lt) goto loc_8222C6EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222C6EC:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8210d9f8
	ctx.lr = 0x8222C704;
	sub_8210D9F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8222C70C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8222c200
	ctx.lr = 0x8222C718;
	sub_8222C200(ctx, base);
	// addi r11,r25,15424
	ctx.r11.s64 = ctx.r25.s64 + 15424;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82223b60
	ctx.lr = 0x8222C73C;
	sub_82223B60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8222C744:
	// addi r10,r25,15424
	ctx.r10.s64 = ctx.r25.s64 + 15424;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8212e6b8
	ctx.lr = 0x8222C760;
	sub_8212E6B8(ctx, base);
loc_8222C760:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C768"))) PPC_WEAK_FUNC(sub_8222C768);
PPC_FUNC_IMPL(__imp__sub_8222C768) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// sth r31,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r31.u16);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// sth r31,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r31.u16);
	// bl 0x82360f70
	ctx.lr = 0x8222C7AC;
	sub_82360F70(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x8222C7B8;
	sub_82364000(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4004);
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// blt cr6,0x8222c868
	if (ctx.cr6.lt) goto loc_8222C868;
	// lwz r8,4008(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// beq cr6,0x8222c814
	if (ctx.cr6.eq) goto loc_8222C814;
loc_8222C7DC:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8222c7f4
	if (ctx.cr6.lt) goto loc_8222C7F4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8222C7F4:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222c804
	if (ctx.cr6.eq) goto loc_8222C804;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8222C804:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c7dc
	if (!ctx.cr6.eq) goto loc_8222C7DC;
loc_8222C814:
	// addi r31,r30,4000
	ctx.r31.s64 = ctx.r30.s64 + 4000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x8222C824;
	sub_8212E9B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bge cr6,0x8222c868
	if (!ctx.cr6.lt) goto loc_8222C868;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// bl 0x8259dd00
	ctx.lr = 0x8222C868;
	sub_8259DD00(ctx, base);
loc_8222C868:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,4000
	ctx.r3.s64 = ctx.r30.s64 + 4000;
	// bl 0x82229ad8
	ctx.lr = 0x8222C874;
	sub_82229AD8(ctx, base);
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

__attribute__((alias("__imp__sub_8222C88C"))) PPC_WEAK_FUNC(sub_8222C88C);
PPC_FUNC_IMPL(__imp__sub_8222C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222C890"))) PPC_WEAK_FUNC(sub_8222C890);
PPC_FUNC_IMPL(__imp__sub_8222C890) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c8c8
	if (!ctx.cr6.eq) goto loc_8222C8C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240be58
	ctx.lr = 0x8222C8C4;
	sub_8240BE58(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8222C8C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8222C900"))) PPC_WEAK_FUNC(sub_8222C900);
PPC_FUNC_IMPL(__imp__sub_8222C900) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// beq cr6,0x8222c9a4
	if (ctx.cr6.eq) {
		sub_8222C9A4(ctx, base);
		return;
	}
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8222c9a4
	if (!ctx.cr6.eq) {
		sub_8222C9A4(ctx, base);
		return;
	}
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8222c9a4
	if (ctx.cr6.gt) {
		sub_8222C9A4(ctx, base);
		return;
	}
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-13992
	ctx.r12.s64 = ctx.r12.s64 + -13992;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8222C968
		return;
	case 1:
		sub_8222C98C(ctx, base);
		return;
	case 2:
		sub_8222C994(ctx, base);
		return;
	case 3:
		sub_8222C99C(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8222C958"))) PPC_WEAK_FUNC(sub_8222C958);
PPC_FUNC_IMPL(__imp__sub_8222C958) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-13976(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13976);
	// lwz r17,-13940(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13940);
	// lwz r17,-13932(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13932);
	// lwz r17,-13924(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13924);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// b 0x8240c250
	sub_8240C250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C98C"))) PPC_WEAK_FUNC(sub_8222C98C);
PPC_FUNC_IMPL(__imp__sub_8222C98C) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822297f0
	sub_822297F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C994"))) PPC_WEAK_FUNC(sub_8222C994);
PPC_FUNC_IMPL(__imp__sub_8222C994) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822233b0
	sub_822233B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C99C"))) PPC_WEAK_FUNC(sub_8222C99C);
PPC_FUNC_IMPL(__imp__sub_8222C99C) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82223680
	sub_82223680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C9A4"))) PPC_WEAK_FUNC(sub_8222C9A4);
PPC_FUNC_IMPL(__imp__sub_8222C9A4) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8222c9c4
	if (!ctx.cr6.eq) goto loc_8222C9C4;
	// lwz r7,528(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8222c9c4
	if (!ctx.cr6.gt) goto loc_8222C9C4;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
loc_8222C9C4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222C9F4"))) PPC_WEAK_FUNC(sub_8222C9F4);
PPC_FUNC_IMPL(__imp__sub_8222C9F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C9F8"))) PPC_WEAK_FUNC(sub_8222C9F8);
PPC_FUNC_IMPL(__imp__sub_8222C9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222CA00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x8222CA3C;
	sub_8259D2A0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8259d2a0
	ctx.lr = 0x8222CA4C;
	sub_8259D2A0(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259cce0
	ctx.lr = 0x8222CA5C;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222ca74
	if (!ctx.cr6.eq) goto loc_8222CA74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822297f0
	ctx.lr = 0x8222CA6C;
	sub_822297F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8222CA74:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8222CA84;
	sub_8259D2A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// bl 0x8240bfd8
	ctx.lr = 0x8222CA94;
	sub_8240BFD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CA9C"))) PPC_WEAK_FUNC(sub_8222CA9C);
PPC_FUNC_IMPL(__imp__sub_8222CA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222CAA0"))) PPC_WEAK_FUNC(sub_8222CAA0);
PPC_FUNC_IMPL(__imp__sub_8222CAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222CAA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8222cbbc
	if (ctx.cr6.eq) goto loc_8222CBBC;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222cbd4
	if (!ctx.cr6.eq) goto loc_8222CBD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82420308
	ctx.lr = 0x8222CAE0;
	sub_82420308(ctx, base);
	// lis r8,17729
	ctx.r8.s64 = 1161887744;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ori r28,r8,2012
	ctx.r28.u64 = ctx.r8.u64 | 2012;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8222cbd4
	if (!ctx.cr6.eq) goto loc_8222CBD4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8222CAF8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aece0
	ctx.lr = 0x8222CB04;
	sub_825AECE0(ctx, base);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r6,r5
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x8222cb24
	if (ctx.cr6.eq) goto loc_8222CB24;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8222caf8
	if (ctx.cr6.lt) goto loc_8222CAF8;
	// b 0x8222cb60
	goto loc_8222CB60;
loc_8222CB24:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r11,-22852
	ctx.r5.s64 = ctx.r11.s64 + -22852;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
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
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x8222CB60;
	sub_821E6928(ctx, base);
loc_8222CB60:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8222cbd4
	if (!ctx.cr6.eq) goto loc_8222CBD4;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222cbd4
	if (!ctx.cr6.eq) goto loc_8222CBD4;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8240d288
	ctx.lr = 0x8222CB88;
	sub_8240D288(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222cb9c
	if (!ctx.cr6.eq) goto loc_8222CB9C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8222CB9C:
	// addis r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 65536;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r3,30604
	ctx.r3.s64 = ctx.r3.s64 + 30604;
	// bl 0x82228d70
	ctx.lr = 0x8222CBB0;
	sub_82228D70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8222CBBC:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222cbd0
	if (!ctx.cr6.eq) goto loc_8222CBD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222CBD0:
	// stb r11,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r11.u8);
loc_8222CBD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CBE0"))) PPC_WEAK_FUNC(sub_8222CBE0);
PPC_FUNC_IMPL(__imp__sub_8222CBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8222CBE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8222cdc4
	if (!ctx.cr6.eq) goto loc_8222CDC4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222cdc4
	if (ctx.cr6.eq) goto loc_8222CDC4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8222cdc4
	if (!ctx.cr6.gt) goto loc_8222CDC4;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8222CC20:
	// lbz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222cd0c
	if (ctx.cr6.eq) goto loc_8222CD0C;
	// bl 0x82589630
	ctx.lr = 0x8222CC34;
	sub_82589630(ctx, base);
	// rlwinm r7,r3,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8222cc80
	if (ctx.cr6.eq) goto loc_8222CC80;
	// rlwinm r6,r3,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8222cc54
	if (!ctx.cr6.eq) goto loc_8222CC54;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8222CC54:
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8222ccbc
	if (!ctx.cr6.eq) goto loc_8222CCBC;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8222ccbc
	if (ctx.cr6.eq) goto loc_8222CCBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3298
	ctx.lr = 0x8222CC7C;
	sub_821F3298(ctx, base);
	// b 0x8222ccbc
	goto loc_8222CCBC;
loc_8222CC80:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222ccbc
	if (!ctx.cr6.eq) goto loc_8222CCBC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8222ccbc
	if (!ctx.cr6.eq) goto loc_8222CCBC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ccbc
	if (ctx.cr6.eq) goto loc_8222CCBC;
	// lis r4,29552
	ctx.r4.s64 = 1936719872;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,27506
	ctx.r4.u64 = ctx.r4.u64 | 27506;
	// bl 0x82589708
	ctx.lr = 0x8222CCB8;
	sub_82589708(ctx, base);
	// stw r27,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
loc_8222CCBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223a60
	ctx.lr = 0x8222CCC4;
	sub_82223A60(ctx, base);
	// lbz r9,197(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8222cd84
	if (ctx.cr6.eq) goto loc_8222CD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223a60
	ctx.lr = 0x8222CCDC;
	sub_82223A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r30.u8);
	// bl 0x821ee528
	ctx.lr = 0x8222CCEC;
	sub_821EE528(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8222cd04
	if (!ctx.cr6.eq) goto loc_8222CD04;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222CD04:
	// bl 0x823ee808
	ctx.lr = 0x8222CD08;
	sub_823EE808(ctx, base);
	// b 0x8222cd84
	goto loc_8222CD84;
loc_8222CD0C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825895b8
	ctx.lr = 0x8222CD14;
	sub_825895B8(ctx, base);
	// rlwinm r7,r3,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8222cd28
	if (ctx.cr6.eq) goto loc_8222CD28;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x8222cd3c
	goto loc_8222CD3C;
loc_8222CD28:
	// lbz r6,22(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8222cd3c
	if (!ctx.cr6.eq) goto loc_8222CD3C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8222CD3C:
	// lis r4,28009
	ctx.r4.s64 = 1835597824;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25458
	ctx.r4.u64 = ctx.r4.u64 | 25458;
	// bl 0x82589658
	ctx.lr = 0x8222CD50;
	sub_82589658(ctx, base);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r9,21(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// slw r4,r27,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r5.u8 & 0x3F));
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222cd78
	if (ctx.cr6.eq) goto loc_8222CD78;
	// stb r11,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r11.u8);
loc_8222CD78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222cd84
	if (ctx.cr6.eq) goto loc_8222CD84;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8222CD84:
	// lbz r8,23(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8222cdb0
	if (ctx.cr6.eq) goto loc_8222CDB0;
	// stb r29,23(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cdb0
	if (ctx.cr6.eq) goto loc_8222CDB0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222CDB0:
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8222cc20
	if (ctx.cr6.lt) goto loc_8222CC20;
loc_8222CDC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CDCC"))) PPC_WEAK_FUNC(sub_8222CDCC);
PPC_FUNC_IMPL(__imp__sub_8222CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222CDD0"))) PPC_WEAK_FUNC(sub_8222CDD0);
PPC_FUNC_IMPL(__imp__sub_8222CDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222CDD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r10,r10,-20484
	ctx.r10.s64 = ctx.r10.s64 + -20484;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r9,r9,-20092
	ctx.r9.s64 = ctx.r9.s64 + -20092;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r8,r8,-20456
	ctx.r8.s64 = ctx.r8.s64 + -20456;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r7,r7,-18936
	ctx.r7.s64 = ctx.r7.s64 + -18936;
	// stw r9,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r9.u32);
	// addi r6,r6,-20376
	ctx.r6.s64 = ctx.r6.s64 + -20376;
	// addi r11,r11,26472
	ctx.r11.s64 = ctx.r11.s64 + 26472;
	// addi r5,r5,-20116
	ctx.r5.s64 = ctx.r5.s64 + -20116;
	// stw r8,2672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2672, ctx.r8.u32);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// stw r7,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r7.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r6,8424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8424, ctx.r6.u32);
	// addi r30,r30,31008
	ctx.r30.s64 = ctx.r30.s64 + 31008;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-18460
	ctx.r28.s64 = ctx.r11.s64 + -18460;
loc_8222CE44:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r6,r11,-17512
	ctx.r6.s64 = ctx.r11.s64 + -17512;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r30,13792
	ctx.r3.s64 = ctx.r30.s64 + 13792;
	// bl 0x82097220
	ctx.lr = 0x8222CE60;
	sub_82097220(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r6,r11,-17512
	ctx.r6.s64 = ctx.r11.s64 + -17512;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r30,18416
	ctx.r3.s64 = ctx.r30.s64 + 18416;
	// bl 0x82097220
	ctx.lr = 0x8222CE78;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,23152
	ctx.r30.s64 = ctx.r30.s64 + 23152;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8222ce44
	if (!ctx.cr6.lt) goto loc_8222CE44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CE94"))) PPC_WEAK_FUNC(sub_8222CE94);
PPC_FUNC_IMPL(__imp__sub_8222CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222CE98"))) PPC_WEAK_FUNC(sub_8222CE98);
PPC_FUNC_IMPL(__imp__sub_8222CE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222CEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r11,7497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cec4
	if (ctx.cr6.eq) goto loc_8222CEC4;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,51958
	ctx.r9.u64 = ctx.r10.u64 | 51958;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
loc_8222CEC4:
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// ori r5,r6,51957
	ctx.r5.u64 = ctx.r6.u64 | 51957;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// stbx r29,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222cf30
	if (ctx.cr6.eq) goto loc_8222CF30;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222CEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222CF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-53
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -53, ctx.xer);
	// bne cr6,0x8222d0ec
	if (!ctx.cr6.eq) goto loc_8222D0EC;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r6,r7,51959
	ctx.r6.u64 = ctx.r7.u64 | 51959;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8222CF30:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r4,r5,51970
	ctx.r4.u64 = ctx.r5.u64 | 51970;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// beq cr6,0x8222d09c
	if (ctx.cr6.eq) goto loc_8222D09C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222CF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365460
	ctx.lr = 0x8222CF60;
	sub_82365460(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d024
	if (ctx.cr6.eq) goto loc_8222D024;
	// lis r9,-31359
	ctx.r9.s64 = -2055143424;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,-27095
	ctx.r7.s64 = -1775697920;
	// ori r8,r9,22562
	ctx.r8.u64 = ctx.r9.u64 | 22562;
	// ori r6,r7,44691
	ctx.r6.u64 = ctx.r7.u64 | 44691;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8222cfe0
	if (!ctx.cr6.eq) goto loc_8222CFE0;
	// addi r10,r3,10280
	ctx.r10.s64 = ctx.r3.s64 + 10280;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lis r4,-16498
	ctx.r4.s64 = -1081212928;
	// ori r8,r9,15984
	ctx.r8.u64 = ctx.r9.u64 | 15984;
	// ori r4,r4,29871
	ctx.r4.u64 = ctx.r4.u64 | 29871;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// ld r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// bl 0x820a38e8
	ctx.lr = 0x8222CFD4;
	sub_820A38E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8222CFE0:
	// lis r7,-20286
	ctx.r7.s64 = -1329463296;
	// lis r6,-20173
	ctx.r6.s64 = -1322057728;
	// ori r11,r7,12382
	ctx.r11.u64 = ctx.r7.u64 | 12382;
	// ori r5,r6,27975
	ctx.r5.u64 = ctx.r6.u64 | 27975;
	// rldimi r11,r5,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8222d050
	if (ctx.cr6.eq) goto loc_8222D050;
	// lis r4,-6216
	ctx.r4.s64 = -407371776;
	// lis r8,-27105
	ctx.r8.s64 = -1776353280;
	// ori r9,r4,63999
	ctx.r9.u64 = ctx.r4.u64 | 63999;
	// ori r7,r8,28614
	ctx.r7.u64 = ctx.r8.u64 | 28614;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x8222d024
	if (!ctx.cr6.eq) goto loc_8222D024;
	// ld r10,8408(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8408);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8222d050
	if (ctx.cr6.eq) goto loc_8222D050;
loc_8222D024:
	// lis r11,-27583
	ctx.r11.s64 = -1807679488;
	// lis r4,-16498
	ctx.r4.s64 = -1081212928;
	// ori r10,r11,15984
	ctx.r10.u64 = ctx.r11.u64 | 15984;
	// ori r4,r4,29871
	ctx.r4.u64 = ctx.r4.u64 | 29871;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x8222D044;
	sub_820A38E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8222D050:
	// lis r9,-16498
	ctx.r9.s64 = -1081212928;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// ori r4,r9,29871
	ctx.r4.u64 = ctx.r9.u64 | 29871;
	// ori r7,r8,15984
	ctx.r7.u64 = ctx.r8.u64 | 15984;
	// lis r10,-28144
	ctx.r10.s64 = -1844445184;
	// lis r8,-27105
	ctx.r8.s64 = -1776353280;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// ori r9,r10,51327
	ctx.r9.u64 = ctx.r10.u64 | 51327;
	// ori r7,r8,22369
	ctx.r7.u64 = ctx.r8.u64 | 22369;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bl 0x820a38e8
	ctx.lr = 0x8222D090;
	sub_820A38E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8222D09C:
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8222D0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365460
	ctx.lr = 0x8222D0B4;
	sub_82365460(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x82229fa8
	ctx.lr = 0x8222D0C4;
	sub_82229FA8(ctx, base);
	// addi r30,r31,2472
	ctx.r30.s64 = ctx.r31.s64 + 2472;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x825892e0
	ctx.lr = 0x8222D0D4;
	sub_825892E0(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222D0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222D0EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222D0F8"))) PPC_WEAK_FUNC(sub_8222D0F8);
PPC_FUNC_IMPL(__imp__sub_8222D0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222D100;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,-26360
	ctx.r27.s64 = ctx.r11.s64 + -26360;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-18448
	ctx.r28.s64 = ctx.r11.s64 + -18448;
	// lwz r3,2484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2484);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// bne cr6,0x8222d138
	if (!ctx.cr6.eq) goto loc_8222D138;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222d160
	goto loc_8222D160;
loc_8222D138:
	// lbz r11,2668(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d160
	if (ctx.cr6.eq) goto loc_8222D160;
	// bl 0x82589630
	ctx.lr = 0x8222D148;
	sub_82589630(ctx, base);
	// rlwinm r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222d15c
	if (!ctx.cr6.eq) goto loc_8222D15C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222D15C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222D160:
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,-13565
	ctx.r10.s64 = ctx.r10.s64 + -13565;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8222d180
	if (ctx.cr6.eq) goto loc_8222D180;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_8222D180:
	// addi r31,r30,2896
	ctx.r31.s64 = ctx.r30.s64 + 2896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,252(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 252);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222D198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222d230
	if (ctx.cr6.eq) goto loc_8222D230;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222D1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,-22400
	ctx.r6.s64 = ctx.r10.s64 + -22400;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222d280
	if (ctx.cr6.eq) goto loc_8222D280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x8222aab0
	ctx.lr = 0x8222D200;
	sub_8222AAB0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,224(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222D21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// bl 0x821e9150
	ctx.lr = 0x8222D228;
	sub_821E9150(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8222D230:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-22296
	ctx.r4.s64 = ctx.r11.s64 + -22296;
	// lwz r9,412(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222D250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222d280
	if (ctx.cr6.eq) goto loc_8222D280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// bl 0x82227838
	ctx.lr = 0x8222D268;
	sub_82227838(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,372(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 372);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222D280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222D280:
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// bl 0x821e9150
	ctx.lr = 0x8222D28C;
	sub_821E9150(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222D294"))) PPC_WEAK_FUNC(sub_8222D294);
PPC_FUNC_IMPL(__imp__sub_8222D294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D298"))) PPC_WEAK_FUNC(sub_8222D298);
PPC_FUNC_IMPL(__imp__sub_8222D298) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r31,r30,2896
	ctx.r31.s64 = ctx.r30.s64 + 2896;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-18448
	ctx.r10.s64 = ctx.r10.s64 + -18448;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222D2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222d310
	if (ctx.cr6.eq) goto loc_8222D310;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222aab0
	ctx.lr = 0x8222D2F4;
	sub_8222AAB0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,224(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222D310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222D310:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82227838
	ctx.lr = 0x8222D318;
	sub_82227838(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,372(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 372);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8222D330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// bl 0x821e9150
	ctx.lr = 0x8222D33C;
	sub_821E9150(ctx, base);
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

__attribute__((alias("__imp__sub_8222D354"))) PPC_WEAK_FUNC(sub_8222D354);
PPC_FUNC_IMPL(__imp__sub_8222D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222D358"))) PPC_WEAK_FUNC(sub_8222D358);
PPC_FUNC_IMPL(__imp__sub_8222D358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222D360;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8222D37C;
	sub_82365698(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222d400
	if (ctx.cr6.eq) goto loc_8222D400;
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
	// addi r10,r10,24760
	ctx.r10.s64 = ctx.r10.s64 + 24760;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222d3b0
	if (!ctx.cr6.eq) goto loc_8222D3B0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x8222d3bc
	goto loc_8222D3BC;
loc_8222D3B0:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsb r28,r6
	ctx.r28.s64 = ctx.r6.s8;
loc_8222D3BC:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222d400
	if (!ctx.cr6.gt) goto loc_8222D400;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_8222D3D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365758
	ctx.lr = 0x8222D3DC;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222d3f0
	if (ctx.cr6.eq) goto loc_8222D3F0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222a9f8
	ctx.lr = 0x8222D3F0;
	sub_8222A9F8(ctx, base);
loc_8222D3F0:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222d3d0
	if (ctx.cr6.lt) goto loc_8222D3D0;
loc_8222D400:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222D408"))) PPC_WEAK_FUNC(sub_8222D408);
PPC_FUNC_IMPL(__imp__sub_8222D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222D410;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r29,15587(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15587, ctx.r29.u8);
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r29,15717(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15717, ctx.r29.u8);
	// lwz r9,1932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r30,15716(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15716, ctx.r30.u8);
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// addi r8,r11,15488
	ctx.r8.s64 = ctx.r11.s64 + 15488;
	// addi r7,r11,15552
	ctx.r7.s64 = ctx.r11.s64 + 15552;
	// addi r6,r11,15568
	ctx.r6.s64 = ctx.r11.s64 + 15568;
	// addi r11,r11,15584
	ctx.r11.s64 = ctx.r11.s64 + 15584;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x8222bd50
	ctx.lr = 0x8222D46C;
	sub_8222BD50(ctx, base);
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lbz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r8,125(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stb r9,15596(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15596, ctx.r9.u8);
	// lwz r5,1932(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r8,15597(r5)
	PPC_STORE_U8(ctx.r5.u32 + 15597, ctx.r8.u8);
	// lwz r4,1932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stw r7,15592(r4)
	PPC_STORE_U32(ctx.r4.u32 + 15592, ctx.r7.u32);
	// lwz r3,1932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stw r6,15600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15600, ctx.r6.u32);
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r30,13467(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13467, ctx.r30.u8);
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lbz r9,15586(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15586);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x8222d4bc
	if (!ctx.cr6.eq) goto loc_8222D4BC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8222D4BC:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222d4d0
	if (ctx.cr6.eq) goto loc_8222D4D0;
	// lwz r5,1932(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r29,13467(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13467, ctx.r29.u8);
loc_8222D4D0:
	// lwz r4,1936(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222d4e8
	if (ctx.cr6.eq) goto loc_8222D4E8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221eef8
	ctx.lr = 0x8222D4E8;
	sub_8221EEF8(ctx, base);
loc_8222D4E8:
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r10,r3,16216
	ctx.r10.u64 = ctx.r3.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222D510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,70(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222d530
	if (ctx.cr6.eq) goto loc_8222D530;
	// lwz r6,1932(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,14776(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 14776, temp.u32);
	// lwz r3,1932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// bl 0x820bda30
	ctx.lr = 0x8222D530;
	sub_820BDA30(ctx, base);
loc_8222D530:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222D538"))) PPC_WEAK_FUNC(sub_8222D538);
PPC_FUNC_IMPL(__imp__sub_8222D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222D540;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// stb r29,15716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15716, ctx.r29.u8);
	// lwz r9,1932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r28,15587(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15587, ctx.r28.u8);
	// lwz r8,1932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r29,15717(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15717, ctx.r29.u8);
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// addi r7,r11,15488
	ctx.r7.s64 = ctx.r11.s64 + 15488;
	// addi r6,r11,15552
	ctx.r6.s64 = ctx.r11.s64 + 15552;
	// addi r10,r11,15568
	ctx.r10.s64 = ctx.r11.s64 + 15568;
	// addi r9,r11,15584
	ctx.r9.s64 = ctx.r11.s64 + 15584;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x8222bd50
	ctx.lr = 0x8222D5A8;
	sub_8222BD50(ctx, base);
	// lwz r8,1932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r9,r11,32769
	ctx.r9.u64 = ctx.r11.u64 | 32769;
	// lbz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r4,125(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stb r7,15588(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15588, ctx.r7.u8);
	// lwz r8,1932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stw r6,15592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15592, ctx.r6.u32);
	// lwz r7,1932(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r5,15596(r7)
	PPC_STORE_U8(ctx.r7.u32 + 15596, ctx.r5.u8);
	// lwz r6,1932(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r4,15597(r6)
	PPC_STORE_U8(ctx.r6.u32 + 15597, ctx.r4.u8);
	// lwz r5,1932(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stw r3,15600(r5)
	PPC_STORE_U32(ctx.r5.u32 + 15600, ctx.r3.u32);
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// mulhwu r4,r11,r9
	ctx.r4.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// rlwinm r3,r4,17,15,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r8,r9,51976
	ctx.r8.u64 = ctx.r9.u64 | 51976;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subf r5,r9,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r9.s64;
	// bne cr6,0x8222d624
	if (!ctx.cr6.eq) goto loc_8222D624;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8222D624:
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r4,r6,51972
	ctx.r4.u64 = ctx.r6.u64 | 51972;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222d644
	if (!ctx.cr6.lt) goto loc_8222D644;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_8222D644:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lbz r7,1651(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1651);
	// li r8,21845
	ctx.r8.s64 = 21845;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// bl 0x82364558
	ctx.lr = 0x8222D664;
	sub_82364558(ctx, base);
	// lwz r9,1932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// stfs f1,15720(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 15720, temp.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x8222D678;
	sub_8210B3C8(ctx, base);
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lfs f0,15720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15720);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,15720(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15720, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,1932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f0,15720(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15720);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// bge cr6,0x8222d6d0
	if (!ctx.cr6.lt) goto loc_8222D6D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,-18400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18400);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8222d6c8
	if (!ctx.cr6.lt) goto loc_8222D6C8;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ori r6,r7,15952
	ctx.r6.u64 = ctx.r7.u64 | 15952;
	// stwx r11,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
loc_8222D6C8:
	// lwz r5,1932(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stfs f13,15720(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 15720, temp.u32);
loc_8222D6D0:
	// lwz r4,1932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stb r28,13467(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13467, ctx.r28.u8);
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lbz r3,15586(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15586);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8222d6f4
	if (ctx.cr6.eq) goto loc_8222D6F4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8222D6F4:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222d704
	if (ctx.cr6.eq) goto loc_8222D704;
	// stb r29,13467(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13467, ctx.r29.u8);
loc_8222D704:
	// lwz r7,1936(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222d71c
	if (ctx.cr6.eq) goto loc_8222D71C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221eef8
	ctx.lr = 0x8222D71C;
	sub_8221EEF8(ctx, base);
loc_8222D71C:
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222D73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,70(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222d75c
	if (ctx.cr6.eq) goto loc_8222D75C;
	// lwz r9,1932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,14776(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 14776, temp.u32);
	// lwz r3,1932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// bl 0x820bda30
	ctx.lr = 0x8222D75C;
	sub_820BDA30(ctx, base);
loc_8222D75C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222d778
	if (ctx.cr6.eq) goto loc_8222D778;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8222d820
	if (!ctx.cr6.eq) goto loc_8222D820;
loc_8222D778:
	// lwz r8,1932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lbz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r31,15724(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15724);
	// beq cr6,0x8222d7a8
	if (ctx.cr6.eq) goto loc_8222D7A8;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82137850
	ctx.lr = 0x8222D7A8;
	sub_82137850(ctx, base);
loc_8222D7A8:
	// lbz r9,174(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 174);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222d7d0
	if (ctx.cr6.eq) goto loc_8222D7D0;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82137850
	ctx.lr = 0x8222D7D0;
	sub_82137850(ctx, base);
loc_8222D7D0:
	// lbz r5,175(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 175);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222d7f8
	if (ctx.cr6.eq) goto loc_8222D7F8;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82137850
	ctx.lr = 0x8222D7F8;
	sub_82137850(ctx, base);
loc_8222D7F8:
	// lbz r9,173(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 173);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222d820
	if (ctx.cr6.eq) goto loc_8222D820;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82137850
	ctx.lr = 0x8222D820;
	sub_82137850(ctx, base);
loc_8222D820:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222D828"))) PPC_WEAK_FUNC(sub_8222D828);
PPC_FUNC_IMPL(__imp__sub_8222D828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8222D830;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r11,1932(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1932);
	// stw r10,1652(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1652, ctx.r10.u32);
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// stw r9,1656(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1656, ctx.r9.u32);
	// lbz r8,15588(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15588);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222d8ac
	if (ctx.cr6.eq) goto loc_8222D8AC;
	// lbz r7,51(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// beq cr6,0x8222d878
	if (ctx.cr6.eq) goto loc_8222D878;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222D878:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222d8ac
	if (ctx.cr6.eq) goto loc_8222D8AC;
	// lwz r11,1936(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1936);
	// lbz r4,599(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 599);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222d8ac
	if (ctx.cr6.eq) goto loc_8222D8AC;
	// lhz r3,1926(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1926);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,516(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222d408
	ctx.lr = 0x8222D8AC;
	sub_8222D408(ctx, base);
loc_8222D8AC:
	// stw r24,23024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 23024, ctx.r24.u32);
	// stb r24,23032(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23032, ctx.r24.u8);
	// stb r24,23033(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23033, ctx.r24.u8);
	// stw r24,18400(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18400, ctx.r24.u32);
	// lbz r11,19(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x8222d8d4
	if (!ctx.cr6.eq) goto loc_8222D8D4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222D8D4:
	// stb r11,23034(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23034, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r7,25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 25, ctx.xer);
	// bne cr6,0x8222d8f0
	if (!ctx.cr6.eq) goto loc_8222D8F0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222D8F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,23035(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23035, ctx.r11.u8);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x8221aca0
	ctx.lr = 0x8222D900;
	sub_8221ACA0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222d934
	if (ctx.cr6.eq) goto loc_8222D934;
loc_8222D90C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822254d8
	ctx.lr = 0x8222D91C;
	sub_822254D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8221aca0
	ctx.lr = 0x8222D928;
	sub_8221ACA0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8222d90c
	if (ctx.cr6.lt) goto loc_8222D90C;
loc_8222D934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x8221acb8
	ctx.lr = 0x8222D940;
	sub_8221ACB8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222d974
	if (ctx.cr6.eq) goto loc_8222D974;
loc_8222D94C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225778
	ctx.lr = 0x8222D95C;
	sub_82225778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8221acb8
	ctx.lr = 0x8222D968;
	sub_8221ACB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222d94c
	if (ctx.cr6.lt) goto loc_8222D94C;
loc_8222D974:
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x8222d988
	if (!ctx.cr6.eq) goto loc_8222D988;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222D988:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8222d998
	if (!ctx.cr6.eq) goto loc_8222D998;
	// stw r24,18404(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18404, ctx.r24.u32);
loc_8222D998:
	// lbz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x8222d9ac
	if (!ctx.cr6.eq) goto loc_8222D9AC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222D9AC:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8222d9bc
	if (!ctx.cr6.eq) goto loc_8222D9BC;
	// stw r24,23028(r28)
	PPC_STORE_U32(ctx.r28.u32 + 23028, ctx.r24.u32);
loc_8222D9BC:
	// lwz r4,18400(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
	// ble cr6,0x8222db48
	if (!ctx.cr6.gt) goto loc_8222DB48;
	// addi r25,r28,13969
	ctx.r25.s64 = ctx.r28.s64 + 13969;
loc_8222D9D8:
	// lbz r31,-1(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + -1);
	// addi r3,r27,20464
	ctx.r3.s64 = ctx.r27.s64 + 20464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8232afd8
	ctx.lr = 0x8222D9E8;
	sub_8232AFD8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222db34
	if (ctx.cr6.eq) goto loc_8222DB34;
	// addis r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 131072;
	// rlwinm r11,r31,9,15,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FE00;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8222da18
	if (!ctx.cr6.eq) goto loc_8222DA18;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222DA18:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222db34
	if (ctx.cr6.eq) goto loc_8222DB34;
	// bl 0x8232cc00
	ctx.lr = 0x8222DA28;
	sub_8232CC00(ctx, base);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x8222db34
	if (!ctx.cr6.eq) goto loc_8222DB34;
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8222db34
	if (ctx.cr6.eq) goto loc_8222DB34;
	// lwz r7,19636(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19636);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222db34
	if (ctx.cr6.eq) goto loc_8222DB34;
	// lwz r6,18400(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8222dae8
	if (!ctx.cr6.gt) goto loc_8222DAE8;
	// addi r29,r28,13968
	ctx.r29.s64 = ctx.r28.s64 + 13968;
loc_8222DA60:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r3,r27,20464
	ctx.r3.s64 = ctx.r27.s64 + 20464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8232afd8
	ctx.lr = 0x8222DA70;
	sub_8232AFD8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222dac4
	if (ctx.cr6.eq) goto loc_8222DAC4;
	// addis r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 131072;
	// rlwinm r11,r31,9,15,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FE00;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,496(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222daa0
	if (!ctx.cr6.eq) goto loc_8222DAA0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222DAA0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222dac4
	if (ctx.cr6.eq) goto loc_8222DAC4;
	// bl 0x8232cc00
	ctx.lr = 0x8222DAB0;
	sub_8232CC00(ctx, base);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8222dac4
	if (!ctx.cr6.eq) goto loc_8222DAC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8222dac8
	goto loc_8222DAC8;
loc_8222DAC4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8222DAC8:
	// lwz r8,19636(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19636);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222dae8
	if (ctx.cr6.eq) goto loc_8222DAE8;
	// lwz r7,18400(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8222da60
	if (ctx.cr6.lt) goto loc_8222DA60;
loc_8222DAE8:
	// lwz r6,18400(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8222db34
	if (!ctx.cr6.lt) goto loc_8222DB34;
	// lbz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222db1c
	if (ctx.cr6.eq) goto loc_8222DB1C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,13969(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13969);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222db34
	if (!ctx.cr6.eq) goto loc_8222DB34;
loc_8222DB1C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r24,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r24.u8);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r24,13969(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13969, ctx.r24.u8);
loc_8222DB34:
	// lwz r8,18400(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18400);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,192
	ctx.r25.s64 = ctx.r25.s64 + 192;
	// cmpw cr6,r23,r8
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8222d9d8
	if (ctx.cr6.lt) goto loc_8222D9D8;
loc_8222DB48:
	// lbz r3,23077(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23077);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// beq cr6,0x8222dbbc
	if (ctx.cr6.eq) goto loc_8222DBBC;
	// bl 0x8221d0c8
	ctx.lr = 0x8222DB58;
	sub_8221D0C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222dbbc
	if (ctx.cr6.eq) goto loc_8222DBBC;
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x8222dbbc
	if (!ctx.cr6.eq) goto loc_8222DBBC;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-16723
	ctx.r11.s64 = -1095958528;
	// lis r5,8610
	ctx.r5.s64 = 564264960;
	// ori r10,r11,55631
	ctx.r10.u64 = ctx.r11.u64 | 55631;
	// addis r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 262144;
	// ori r3,r5,46616
	ctx.r3.u64 = ctx.r5.u64 | 46616;
	// lbz r8,19642(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19642);
	// addi r9,r11,7296
	ctx.r9.s64 = ctx.r11.s64 + 7296;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// ldx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// cmpld cr6,r6,r3
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x8222dbbc
	if (!ctx.cr6.eq) goto loc_8222DBBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addis r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 262144;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x82295c50
	ctx.lr = 0x8222DBBC;
	sub_82295C50(ctx, base);
loc_8222DBBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222DBC4"))) PPC_WEAK_FUNC(sub_8222DBC4);
PPC_FUNC_IMPL(__imp__sub_8222DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DBC8"))) PPC_WEAK_FUNC(sub_8222DBC8);
PPC_FUNC_IMPL(__imp__sub_8222DBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r3,23108
	ctx.r4.s64 = ctx.r3.s64 + 23108;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,8840
	ctx.r3.s64 = ctx.r11.s64 + 8840;
	// b 0x8222c180
	sub_8222C180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222DBDC"))) PPC_WEAK_FUNC(sub_8222DBDC);
PPC_FUNC_IMPL(__imp__sub_8222DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DBE0"))) PPC_WEAK_FUNC(sub_8222DBE0);
PPC_FUNC_IMPL(__imp__sub_8222DBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r3,23108
	ctx.r4.s64 = ctx.r3.s64 + 23108;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,8840
	ctx.r3.s64 = ctx.r11.s64 + 8840;
	// b 0x8222c200
	sub_8222C200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222DBF4"))) PPC_WEAK_FUNC(sub_8222DBF4);
PPC_FUNC_IMPL(__imp__sub_8222DBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DBF8"))) PPC_WEAK_FUNC(sub_8222DBF8);
PPC_FUNC_IMPL(__imp__sub_8222DBF8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
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
	// addi r10,r10,24760
	ctx.r10.s64 = ctx.r10.s64 + 24760;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222dc34
	if (!ctx.cr6.eq) goto loc_8222DC34;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8222dc44
	goto loc_8222DC44;
loc_8222DC34:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
loc_8222DC44:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8222a9f8
	sub_8222A9F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222DC4C"))) PPC_WEAK_FUNC(sub_8222DC4C);
PPC_FUNC_IMPL(__imp__sub_8222DC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222DC50"))) PPC_WEAK_FUNC(sub_8222DC50);
PPC_FUNC_IMPL(__imp__sub_8222DC50) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r11,54
	ctx.r4.s64 = ctx.r11.s64 + 54;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222dcb4
	if (!ctx.cr6.eq) goto loc_8222DCB4;
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r9,r9,26752
	ctx.r9.s64 = ctx.r9.s64 + 26752;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// addi r6,r7,13280
	ctx.r6.s64 = ctx.r7.s64 + 13280;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r8,-8192
	ctx.r8.s64 = ctx.r8.s64 + -8192;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,11088
	ctx.r4.s64 = ctx.r10.s64 + 11088;
	// addi r3,r3,25864
	ctx.r3.s64 = ctx.r3.s64 + 25864;
	// bl 0x822299a0
	ctx.lr = 0x8222DCB0;
	sub_822299A0(ctx, base);
	// b 0x8222dcfc
	goto loc_8222DCFC;
loc_8222DCB4:
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// lwz r6,11056(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11056);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r9,8912
	ctx.r9.s64 = ctx.r9.s64 + 8912;
	// addi r5,r11,13280
	ctx.r5.s64 = ctx.r11.s64 + 13280;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// li r7,12544
	ctx.r7.s64 = 12544;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x8222c9f8
	ctx.lr = 0x8222DCE8;
	sub_8222C9F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-23068
	ctx.r5.s64 = ctx.r11.s64 + -23068;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236ed80
	ctx.lr = 0x8222DCFC;
	sub_8236ED80(ctx, base);
loc_8222DCFC:
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

__attribute__((alias("__imp__sub_8222DD14"))) PPC_WEAK_FUNC(sub_8222DD14);
PPC_FUNC_IMPL(__imp__sub_8222DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DD18"))) PPC_WEAK_FUNC(sub_8222DD18);
PPC_FUNC_IMPL(__imp__sub_8222DD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222DD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r10,7372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7372);
	// mulli r11,r10,184
	ctx.r11.s64 = ctx.r10.s64 * 184;
	// stb r29,11080(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11080, ctx.r29.u8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,7376
	ctx.r30.s64 = ctx.r11.s64 + 7376;
	// beq cr6,0x8222dd7c
	if (ctx.cr6.eq) goto loc_8222DD7C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r9,53(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x823694b0
	ctx.lr = 0x8222DD70;
	sub_823694B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x8222DD78;
	sub_8259DBD0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8222DD7C:
	// lwz r11,7372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7372);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,7368(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// stw r11,7372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7372, ctx.r11.u32);
	// bge cr6,0x8222dd9c
	if (!ctx.cr6.lt) goto loc_8222DD9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8222DD9C:
	// lwz r6,11084(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11084);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r9,11064(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11064);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r11,11060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11060);
	// addi r6,r30,54
	ctx.r6.s64 = ctx.r30.s64 + 54;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r5,11056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222DDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7372);
	// lwz r10,7368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7368);
	// stw r3,11056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11056, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222de00
	if (!ctx.cr6.lt) goto loc_8222DE00;
	// lbz r9,11081(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11081);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222de00
	if (!ctx.cr6.eq) goto loc_8222DE00;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7376
	ctx.r4.s64 = ctx.r11.s64 + 7376;
	// bl 0x8222dc50
	ctx.lr = 0x8222DDF8;
	sub_8222DC50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8222DE00:
	// stw r29,11060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11060, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222DE0C"))) PPC_WEAK_FUNC(sub_8222DE0C);
PPC_FUNC_IMPL(__imp__sub_8222DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222DE10"))) PPC_WEAK_FUNC(sub_8222DE10);
PPC_FUNC_IMPL(__imp__sub_8222DE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8222DE18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,7376
	ctx.r30.s64 = ctx.r31.s64 + 7376;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r9,11068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11068, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,7372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7372, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,11060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11060, ctx.r11.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r11,11064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11064, ctx.r11.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r11,11076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11076, ctx.r11.u32);
	// stb r11,11080(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11080, ctx.r11.u8);
	// stb r11,11081(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11081, ctx.r11.u8);
	// stw r11,11472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11472, ctx.r11.u32);
	// stb r11,11082(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11082, ctx.r11.u8);
	// stw r10,11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11072, ctx.r10.u32);
	// stw r11,7368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7368, ctx.r11.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x8222DE74;
	sub_8259D2A0(ctx, base);
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r11.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222DE88:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8222de88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222DE88;
	// addi r29,r30,54
	ctx.r29.s64 = ctx.r30.s64 + 54;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82108e58
	ctx.lr = 0x8222DEB4;
	sub_82108E58(ctx, base);
	// lwz r10,7368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7368);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r10,13264
	ctx.r5.s64 = ctx.r10.s64 + 13264;
	// stw r7,7368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7368, ctx.r7.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r9,-29520
	ctx.r9.s64 = ctx.r9.s64 + -29520;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x8222c9f8
	ctx.lr = 0x8222DEF8;
	sub_8222C9F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222DF00"))) PPC_WEAK_FUNC(sub_8222DF00);
PPC_FUNC_IMPL(__imp__sub_8222DF00) {
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
	// lwz r11,11076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11076);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8222df88
	if (ctx.cr6.lt) goto loc_8222DF88;
	// bne cr6,0x8222dfe8
	if (!ctx.cr6.eq) goto loc_8222DFE8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x8222DF38;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8222df4c
	if (ctx.cr6.eq) goto loc_8222DF4C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8222df54
	if (ctx.cr6.eq) goto loc_8222DF54;
	// b 0x8222dfe8
	goto loc_8222DFE8;
loc_8222DF4C:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8222DF54;
	sub_82367A40(ctx, base);
loc_8222DF54:
	// lwz r6,11072(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11068);
	// lbz r5,11082(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11082);
	// lwz r4,11472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222DF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11076, ctx.r11.u32);
	// stw r11,11068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11068, ctx.r11.u32);
	// stw r11,11472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11472, ctx.r11.u32);
	// stb r11,11082(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11082, ctx.r11.u8);
	// b 0x8222dfe8
	goto loc_8222DFE8;
loc_8222DF88:
	// lbz r10,11080(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11080);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222dfe8
	if (ctx.cr6.eq) goto loc_8222DFE8;
	// lbz r9,11081(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11081);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222dfe8
	if (!ctx.cr6.eq) goto loc_8222DFE8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x8222DFB0;
	sub_82366C90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8222dfe8
	if (ctx.cr6.lt) goto loc_8222DFE8;
	// beq cr6,0x8222dfcc
	if (ctx.cr6.eq) goto loc_8222DFCC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8222dfdc
	if (!ctx.cr6.lt) goto loc_8222DFDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8222dfe0
	goto loc_8222DFE0;
loc_8222DFCC:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8222DFD4;
	sub_82367A40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8222dfe0
	goto loc_8222DFE0;
loc_8222DFDC:
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8222DFE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222dd18
	ctx.lr = 0x8222DFE8;
	sub_8222DD18(ctx, base);
loc_8222DFE8:
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

__attribute__((alias("__imp__sub_8222E000"))) PPC_WEAK_FUNC(sub_8222E000);
PPC_FUNC_IMPL(__imp__sub_8222E000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222E008;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,7372(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7372);
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r28,r11,7376
	ctx.r28.s64 = ctx.r11.s64 + 7376;
	// bne cr6,0x8222e07c
	if (!ctx.cr6.eq) goto loc_8222E07C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,26384
	ctx.r9.u64 = ctx.r10.u64 | 26384;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8222e078
	if (!ctx.cr6.gt) goto loc_8222E078;
	// addi r30,r27,11088
	ctx.r30.s64 = ctx.r27.s64 + 11088;
loc_8222E04C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82108de0
	ctx.lr = 0x8222E058;
	sub_82108DE0(ctx, base);
	// lbz r8,53(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8222e0a0
	if (ctx.cr6.eq) goto loc_8222E0A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8222e04c
	if (ctx.cr6.lt) goto loc_8222E04C;
loc_8222E078:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8222E07C:
	// lbz r4,11081(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11081);
	// stw r3,11084(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11084, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222e098
	if (!ctx.cr6.eq) goto loc_8222E098;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222dd18
	ctx.lr = 0x8222E098;
	sub_8222DD18(ctx, base);
loc_8222E098:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8222E0A0:
	// rlwinm r11,r31,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r28,54
	ctx.r10.s64 = ctx.r28.s64 + 54;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,11088
	ctx.r11.s64 = ctx.r11.s64 + 11088;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8222E0B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8222e0b4
	if (!ctx.cr6.eq) goto loc_8222E0B4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222E0D8:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8222e0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222E0D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222dc50
	ctx.lr = 0x8222E0F8;
	sub_8222DC50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E100"))) PPC_WEAK_FUNC(sub_8222E100);
PPC_FUNC_IMPL(__imp__sub_8222E100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222E108;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r31,r30,4000
	ctx.r31.s64 = ctx.r30.s64 + 4000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x8222E12C;
	sub_8212E9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e150
	if (ctx.cr6.eq) goto loc_8222E150;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8222E150:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e168
	if (!ctx.cr6.eq) goto loc_8222E168;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222c768
	ctx.lr = 0x8222E168;
	sub_8222C768(ctx, base);
loc_8222E168:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r8,17008
	ctx.r7.u64 = ctx.r8.u64 | 17008;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stbx r6,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u8);
	// bl 0x822292c0
	ctx.lr = 0x8222E184;
	sub_822292C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E18C"))) PPC_WEAK_FUNC(sub_8222E18C);
PPC_FUNC_IMPL(__imp__sub_8222E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E190"))) PPC_WEAK_FUNC(sub_8222E190);
PPC_FUNC_IMPL(__imp__sub_8222E190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8222E198;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8222e240
	if (!ctx.cr6.eq) goto loc_8222E240;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x8222E1C0;
	sub_82361330(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-22800
	ctx.r30.s64 = ctx.r11.s64 + -22800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r11,-22812
	ctx.r29.s64 = ctx.r11.s64 + -22812;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x822232a8
	ctx.lr = 0x8222E1E4;
	sub_822232A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8222e1f4
	if (!ctx.cr6.eq) goto loc_8222E1F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222E1F4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222e240
	if (ctx.cr6.eq) goto loc_8222E240;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x8222E208;
	sub_82361330(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addis r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 65536;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r9,-27600
	ctx.r9.s64 = ctx.r9.s64 + -27600;
	// li r7,4004
	ctx.r7.s64 = 4004;
	// addi r6,r6,12992
	ctx.r6.s64 = ctx.r6.s64 + 12992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x8222c9f8
	ctx.lr = 0x8222E238;
	sub_8222C9F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8222E240:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229430
	ctx.lr = 0x8222E250;
	sub_82229430(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E258"))) PPC_WEAK_FUNC(sub_8222E258);
PPC_FUNC_IMPL(__imp__sub_8222E258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8222E260;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r31,r30,4000
	ctx.r31.s64 = ctx.r30.s64 + 4000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x8222E288;
	sub_8212E9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e29c
	if (!ctx.cr6.eq) goto loc_8222E29C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222e2b4
	goto loc_8222E2B4;
loc_8222E29C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8222E2B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222e2c8
	if (!ctx.cr6.eq) goto loc_8222E2C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222c768
	ctx.lr = 0x8222E2C8;
	sub_8222C768(ctx, base);
loc_8222E2C8:
	// sth r28,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r28.u16);
	// sth r27,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r27.u16);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E2DC"))) PPC_WEAK_FUNC(sub_8222E2DC);
PPC_FUNC_IMPL(__imp__sub_8222E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E2E0"))) PPC_WEAK_FUNC(sub_8222E2E0);
PPC_FUNC_IMPL(__imp__sub_8222E2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8222E2E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,51955
	ctx.r10.u64 = ctx.r11.u64 | 51955;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r8,r9,51956
	ctx.r8.u64 = ctx.r9.u64 | 51956;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// bl 0x8221bce8
	ctx.lr = 0x8222E314;
	sub_8221BCE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8221bce8
	ctx.lr = 0x8222E320;
	sub_8221BCE8(ctx, base);
	// addi r29,r31,2672
	ctx.r29.s64 = ctx.r31.s64 + 2672;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ab48
	ctx.lr = 0x8222E330;
	sub_8236AB48(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6184
	ctx.r4.s64 = ctx.r11.s64 + -6184;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236bff8
	ctx.lr = 0x8222E34C;
	sub_8236BFF8(ctx, base);
	// addis r25,r31,3
	ctx.r25.s64 = ctx.r31.s64 + 196608;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r25,r25,15696
	ctx.r25.s64 = ctx.r25.s64 + 15696;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r28,r28,31008
	ctx.r28.s64 = ctx.r28.s64 + 31008;
	// li r27,5
	ctx.r27.s64 = 5;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8222E368:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224fb8
	ctx.lr = 0x8222E374;
	sub_82224FB8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,23152
	ctx.r28.s64 = ctx.r28.s64 + 23152;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne cr6,0x8222e368
	if (!ctx.cr6.eq) goto loc_8222E368;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r6,r11,-14184
	ctx.r6.s64 = ctx.r11.s64 + -14184;
	// li r7,8000
	ctx.r7.s64 = 8000;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82364e48
	ctx.lr = 0x8222E3B0;
	sub_82364E48(ctx, base);
	// addi r28,r31,2896
	ctx.r28.s64 = ctx.r31.s64 + 2896;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8222E3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r27,r11,-21272
	ctx.r27.s64 = ctx.r11.s64 + -21272;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8222E3E4;
	sub_8210CF48(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8222E3F4;
	sub_8210D3F0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222E414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-13728
	ctx.r3.s64 = ctx.r3.s64 + -13728;
	// bl 0x82365ee8
	ctx.lr = 0x8222E424;
	sub_82365EE8(ctx, base);
	// addis r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 262144;
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r4,-13968
	ctx.r4.s64 = ctx.r4.s64 + -13968;
	// addi r3,r3,-13632
	ctx.r3.s64 = ctx.r3.s64 + -13632;
	// bl 0x823660b8
	ctx.lr = 0x8222E440;
	sub_823660B8(ctx, base);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222E454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// bl 0x821e90a0
	ctx.lr = 0x8222E460;
	sub_821E90A0(ctx, base);
	// addi r29,r31,8840
	ctx.r29.s64 = ctx.r31.s64 + 8840;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r3,r29,4012
	ctx.r3.s64 = ctx.r29.s64 + 4012;
	// stw r30,4004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4004, ctx.r30.u32);
	// stw r7,4000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4000, ctx.r7.u32);
	// stw r29,4008(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4008, ctx.r29.u32);
	// bl 0x82222d40
	ctx.lr = 0x8222E47C;
	sub_82222D40(ctx, base);
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,12432
	ctx.r3.s64 = ctx.r3.s64 + 12432;
	// bl 0x82222ef8
	ctx.lr = 0x8222E488;
	sub_82222EF8(ctx, base);
	// lis r4,-698
	ctx.r4.s64 = -45744128;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,17016
	ctx.r10.s64 = ctx.r10.s64 + 17016;
	// ori r3,r4,10503
	ctx.r3.u64 = ctx.r4.u64 | 10503;
	// lis r6,697
	ctx.r6.s64 = 45678592;
	// ori r9,r11,25864
	ctx.r9.u64 = ctx.r11.u64 | 25864;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r5,r6,55032
	ctx.r5.u64 = ctx.r6.u64 | 55032;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r11,r11,30604
	ctx.r11.s64 = ctx.r11.s64 + 30604;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,16992
	ctx.r3.s64 = ctx.r3.s64 + 16992;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stw r30,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r30.u32);
	// stb r30,400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 400, ctx.r30.u8);
	// stb r30,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r30.u8);
	// bl 0x821e7720
	ctx.lr = 0x8222E4D4;
	sub_821E7720(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r4,r5,51954
	ctx.r4.u64 = ctx.r5.u64 | 51954;
	// ori r10,r3,15716
	ctx.r10.u64 = ctx.r3.u64 | 15716;
	// ori r6,r7,51953
	ctx.r6.u64 = ctx.r7.u64 | 51953;
	// lwz r8,164(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-12648
	ctx.r4.s64 = ctx.r11.s64 + -12648;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222E51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r6,r7,51957
	ctx.r6.u64 = ctx.r7.u64 | 51957;
	// ori r10,r3,51969
	ctx.r10.u64 = ctx.r3.u64 | 51969;
	// ori r4,r5,51970
	ctx.r4.u64 = ctx.r5.u64 | 51970;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// bl 0x823647c0
	ctx.lr = 0x8222E54C;
	sub_823647C0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,26472
	ctx.r3.s64 = ctx.r3.s64 + 26472;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222E564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r6,26468
	ctx.r5.u64 = ctx.r6.u64 | 26468;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8222E584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E58C"))) PPC_WEAK_FUNC(sub_8222E58C);
PPC_FUNC_IMPL(__imp__sub_8222E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E590"))) PPC_WEAK_FUNC(sub_8222E590);
PPC_FUNC_IMPL(__imp__sub_8222E590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8222E598;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addis r25,r30,3
	ctx.r25.s64 = ctx.r30.s64 + 196608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r25,r25,15716
	ctx.r25.s64 = ctx.r25.s64 + 15716;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r10,51953
	ctx.r26.u64 = ctx.r10.u64 | 51953;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8222e7f8
	if (ctx.cr6.eq) goto loc_8222E7F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8222e808
	if (ctx.cr6.eq) goto loc_8222E808;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8222e86c
	if (ctx.cr6.eq) goto loc_8222E86C;
loc_8222E5D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222a678
	ctx.lr = 0x8222E5DC;
	sub_8222A678(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r10,r30,8672
	ctx.r10.s64 = ctx.r30.s64 + 8672;
	// ori r6,r7,26469
	ctx.r6.u64 = ctx.r7.u64 | 26469;
	// li r11,10
	ctx.r11.s64 = 10;
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// stb r31,160(r10)
	PPC_STORE_U8(ctx.r10.u32 + 160, ctx.r31.u8);
loc_8222E5F4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e5f4
	if (!ctx.cr6.eq) goto loc_8222E5F4;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r28,r30,2896
	ctx.r28.s64 = ctx.r30.s64 + 2896;
	// addi r3,r3,26472
	ctx.r3.s64 = ctx.r3.s64 + 26472;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222E628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r10,52000
	ctx.r7.u64 = ctx.r10.u64 | 52000;
	// addis r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 196608;
	// ori r5,r6,52004
	ctx.r5.u64 = ctx.r6.u64 | 52004;
	// addi r10,r10,15720
	ctx.r10.s64 = ctx.r10.s64 + 15720;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r9,24
	ctx.r9.s64 = 24;
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stwx r31,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222E65C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222e65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222E65C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r31,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r31.u8);
	// addis r9,r30,3
	ctx.r9.s64 = ctx.r30.s64 + 196608;
	// stb r31,120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 120, ctx.r31.u8);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r9,15844
	ctx.r9.s64 = ctx.r9.s64 + 15844;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r31,121(r10)
	PPC_STORE_U8(ctx.r10.u32 + 121, ctx.r31.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lfs f13,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,26708
	ctx.r11.s64 = ctx.r11.s64 + 26708;
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stb r31,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r31.u8);
	// addi r8,r11,3480
	ctx.r8.s64 = ctx.r11.s64 + 3480;
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222E6DC:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222e6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222E6DC;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-14020
	ctx.r11.s64 = ctx.r11.s64 + -14020;
	// addi r3,r3,30220
	ctx.r3.s64 = ctx.r3.s64 + 30220;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// bl 0x8221f518
	ctx.lr = 0x8222E704;
	sub_8221F518(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r10,r10,31160
	ctx.r10.s64 = ctx.r10.s64 + 31160;
	// ori r9,r4,15876
	ctx.r9.u64 = ctx.r4.u64 | 15876;
	// addi r3,r3,30412
	ctx.r3.s64 = ctx.r3.s64 + 30412;
	// ori r7,r8,15892
	ctx.r7.u64 = ctx.r8.u64 | 15892;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r3,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u32);
	// bl 0x8221f518
	ctx.lr = 0x8222E738;
	sub_8221F518(ctx, base);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// ori r5,r6,51992
	ctx.r5.u64 = ctx.r6.u64 | 51992;
	// addi r11,r11,-13992
	ctx.r11.s64 = ctx.r11.s64 + -13992;
	// addi r10,r10,-13980
	ctx.r10.s64 = ctx.r10.s64 + -13980;
	// addi r3,r30,8840
	ctx.r3.s64 = ctx.r30.s64 + 8840;
	// stfsx f13,r30,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822293d8
	ctx.lr = 0x8222E774;
	sub_822293D8(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,25864
	ctx.r3.s64 = ctx.r3.s64 + 25864;
	// bl 0x8222c890
	ctx.lr = 0x8222E780;
	sub_8222C890(ctx, base);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r3,r3,16992
	ctx.r3.s64 = ctx.r3.s64 + 16992;
	// bl 0x821e6e10
	ctx.lr = 0x8222E78C;
	sub_821E6E10(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-11624
	ctx.r4.s64 = ctx.r11.s64 + -11624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,424(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222E7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// bl 0x8222a5f8
	ctx.lr = 0x8222E7BC;
	sub_8222A5F8(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r11,r3,51944
	ctx.r11.u64 = ctx.r3.u64 | 51944;
	// ori r6,r7,51968
	ctx.r6.u64 = ctx.r7.u64 | 51968;
	// ori r4,r5,51958
	ctx.r4.u64 = ctx.r5.u64 | 51958;
	// ori r9,r10,51959
	ctx.r9.u64 = ctx.r10.u64 | 51959;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// stbx r31,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u8);
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8222E7F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822239d8
	ctx.lr = 0x8222E800;
	sub_822239D8(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_8222E808:
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222e8e0
	if (ctx.cr6.eq) goto loc_8222E8E0;
	// addi r29,r30,2672
	ctx.r29.s64 = ctx.r30.s64 + 2672;
	// li r27,1
	ctx.r27.s64 = 1;
	// add r28,r30,r26
	ctx.r28.u64 = ctx.r30.u64 + ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222E83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8222e8e8
	if (ctx.cr6.eq) goto loc_8222E8E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8222e8c8
	if (!ctx.cr6.eq) goto loc_8222E8C8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222E864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_8222E86C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8222E87C;
	sub_8210B3C8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8222e894
	if (!ctx.cr6.eq) goto loc_8222E894;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8222E894:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r3,r30,2672
	ctx.r3.s64 = ctx.r30.s64 + 2672;
	// bl 0x82370928
	ctx.lr = 0x8222E8A0;
	sub_82370928(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8222e8e8
	if (ctx.cr6.eq) goto loc_8222E8E8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// stbx r31,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r31.u8);
	// bne cr6,0x8222e5d4
	if (!ctx.cr6.eq) goto loc_8222E5D4;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8222E8C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8222E8E0:
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
loc_8222E8E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222E8F4"))) PPC_WEAK_FUNC(sub_8222E8F4);
PPC_FUNC_IMPL(__imp__sub_8222E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222E8F8"))) PPC_WEAK_FUNC(sub_8222E8F8);
PPC_FUNC_IMPL(__imp__sub_8222E8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222E900;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,51916
	ctx.r10.u64 = ctx.r11.u64 | 51916;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r27,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82365cc8
	ctx.lr = 0x8222E934;
	sub_82365CC8(ctx, base);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222e9f4
	if (ctx.cr6.eq) goto loc_8222E9F4;
	// addi r31,r29,2896
	ctx.r31.s64 = ctx.r29.s64 + 2896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222E958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,-15632
	ctx.r6.s64 = ctx.r10.s64 + -15632;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,112(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222E988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823655a0
	ctx.lr = 0x8222E990;
	sub_823655A0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222E9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,-23864
	ctx.r6.s64 = ctx.r10.s64 + -23864;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,112(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222E9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8222fbc0
	ctx.lr = 0x8222E9DC;
	sub_8222FBC0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823682a0
	ctx.lr = 0x8222E9F0;
	sub_823682A0(ctx, base);
	// b 0x8222ea18
	goto loc_8222EA18;
loc_8222E9F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823655a0
	ctx.lr = 0x8222E9FC;
	sub_823655A0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656d8
	ctx.lr = 0x8222EA10;
	sub_823656D8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365d38
	ctx.lr = 0x8222EA18;
	sub_82365D38(ctx, base);
loc_8222EA18:
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8222eab0
	if (!ctx.cr6.gt) goto loc_8222EAB0;
loc_8222EA28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8222EA34;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ea8c
	if (ctx.cr6.eq) goto loc_8222EA8C;
	// addi r4,r3,23108
	ctx.r4.s64 = ctx.r3.s64 + 23108;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12840
	ctx.r3.s64 = ctx.r31.s64 + 12840;
	// bl 0x8212e9b8
	ctx.lr = 0x8222EA4C;
	sub_8212E9B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222ea8c
	if (ctx.cr6.eq) goto loc_8222EA8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12848);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ea8c
	if (ctx.cr6.eq) goto loc_8222EA8C;
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222ea8c
	if (!ctx.cr6.gt) goto loc_8222EA8C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8222EA8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8222ea28
	if (ctx.cr6.lt) goto loc_8222EA28;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// bne cr6,0x8222eab0
	if (!ctx.cr6.eq) goto loc_8222EAB0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fe130
	ctx.lr = 0x8222EAB0;
	sub_820FE130(ctx, base);
loc_8222EAB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222d358
	ctx.lr = 0x8222EABC;
	sub_8222D358(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222EAC4"))) PPC_WEAK_FUNC(sub_8222EAC4);
PPC_FUNC_IMPL(__imp__sub_8222EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222EAC8"))) PPC_WEAK_FUNC(sub_8222EAC8);
PPC_FUNC_IMPL(__imp__sub_8222EAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222EAD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r3.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// bne cr6,0x8222eb10
	if (!ctx.cr6.eq) goto loc_8222EB10;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x8222EB00;
	sub_82368400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222ebe0
	if (!ctx.cr6.eq) goto loc_8222EBE0;
	// lbz r3,151(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
loc_8222EB10:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8222eb2c
	if (!ctx.cr6.eq) goto loc_8222EB2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222d0f8
	ctx.lr = 0x8222EB20;
	sub_8222D0F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8222EB2C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e8f8
	ctx.lr = 0x8222EB38;
	sub_8222E8F8(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,52000
	ctx.r8.u64 = ctx.r9.u64 | 52000;
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222eb6c
	if (ctx.cr6.eq) goto loc_8222EB6C;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lbz r3,151(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r4,r7,52004
	ctx.r4.u64 = ctx.r7.u64 | 52004;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r30,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222EB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222EB6C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,151
	ctx.r5.s64 = ctx.r1.s64 + 151;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82203858
	ctx.lr = 0x8222EB80;
	sub_82203858(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x8222EB88;
	sub_82368400(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ebc0
	if (ctx.cr6.eq) goto loc_8222EBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x8222EB9C;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ebc0
	if (ctx.cr6.eq) goto loc_8222EBC0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x8221f710
	ctx.lr = 0x8222EBB4;
	sub_8221F710(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x82227970
	ctx.lr = 0x8222EBC0;
	sub_82227970(ctx, base);
loc_8222EBC0:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369aa8
	ctx.lr = 0x8222EBC8;
	sub_82369AA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ebe0
	if (ctx.cr6.eq) goto loc_8222EBE0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,30220
	ctx.r3.s64 = ctx.r11.s64 + 30220;
	// bl 0x8221f710
	ctx.lr = 0x8222EBE0;
	sub_8221F710(ctx, base);
loc_8222EBE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222EBEC"))) PPC_WEAK_FUNC(sub_8222EBEC);
PPC_FUNC_IMPL(__imp__sub_8222EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222EBF0"))) PPC_WEAK_FUNC(sub_8222EBF0);
PPC_FUNC_IMPL(__imp__sub_8222EBF0) {
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
	// lbz r11,7497(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222ec70
	if (!ctx.cr6.eq) goto loc_8222EC70;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x82223a60
	ctx.lr = 0x8222EC20;
	sub_82223A60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ec44
	if (ctx.cr6.eq) goto loc_8222EC44;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x8222ec54
	goto loc_8222EC54;
loc_8222EC44:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,196(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 196);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8222EC54:
	// bctrl 
	ctx.lr = 0x8222EC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r4,r5,48126
	ctx.r4.u64 = ctx.r5.u64 | 48126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// bl 0x8222d0f8
	ctx.lr = 0x8222EC70;
	sub_8222D0F8(ctx, base);
loc_8222EC70:
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

__attribute__((alias("__imp__sub_8222EC84"))) PPC_WEAK_FUNC(sub_8222EC84);
PPC_FUNC_IMPL(__imp__sub_8222EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222EC88"))) PPC_WEAK_FUNC(sub_8222EC88);
PPC_FUNC_IMPL(__imp__sub_8222EC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222EC90;
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
	ctx.lr = 0x8222ECA0;
	sub_82220CA8(ctx, base);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// bl 0x82220ca8
	ctx.lr = 0x8222ECA8;
	sub_82220CA8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// addi r30,r31,23108
	ctx.r30.s64 = ctx.r31.s64 + 23108;
	// addi r3,r29,8840
	ctx.r3.s64 = ctx.r29.s64 + 8840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,23096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23096, ctx.r28.u32);
	// bl 0x8222c200
	ctx.lr = 0x8222ECC8;
	sub_8222C200(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,8840
	ctx.r3.s64 = ctx.r29.s64 + 8840;
	// stw r11,23104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23104, ctx.r11.u32);
	// bl 0x8222c180
	ctx.lr = 0x8222ECDC;
	sub_8222C180(ctx, base);
	// stw r28,23120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23120, ctx.r28.u32);
	// stw r3,23100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23100, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222ECEC"))) PPC_WEAK_FUNC(sub_8222ECEC);
PPC_FUNC_IMPL(__imp__sub_8222ECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ECF0"))) PPC_WEAK_FUNC(sub_8222ECF0);
PPC_FUNC_IMPL(__imp__sub_8222ECF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8222ECF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r3,r4,32769
	ctx.r3.u64 = ctx.r4.u64 | 32769;
	// lwz r7,26592(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// mulhwu r10,r7,r3
	ctx.r10.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// lwz r5,1660(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// rlwinm r8,r10,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r3,r4,51976
	ctx.r3.u64 = ctx.r4.u64 | 51976;
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r6,r10,26752
	ctx.r6.s64 = ctx.r10.s64 + 26752;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// lwzx r10,r6,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lwz r10,-30856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30856);
	// subf r3,r10,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r10.s64;
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// bne cr6,0x8222ed60
	if (!ctx.cr6.eq) goto loc_8222ED60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222ED60:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r5,r10,51972
	ctx.r5.u64 = ctx.r10.u64 | 51972;
	// lwzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8222ed80
	if (!ctx.cr6.lt) goto loc_8222ED80;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8222ED80:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// ori r11,r10,65534
	ctx.r11.u64 = ctx.r10.u64 | 65534;
	// cmplwi cr6,r9,21845
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 21845, ctx.xer);
	// bge cr6,0x8222eda8
	if (!ctx.cr6.lt) goto loc_8222EDA8;
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r4,21845
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21845, ctx.xer);
	// bge cr6,0x8222eda8
	if (!ctx.cr6.lt) goto loc_8222EDA8;
	// addi r29,r8,-1
	ctx.r29.s64 = ctx.r8.s64 + -1;
loc_8222EDA8:
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8222edc4
	if (!ctx.cr6.lt) goto loc_8222EDC4;
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r3,21845
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21845, ctx.xer);
	// bge cr6,0x8222edc4
	if (!ctx.cr6.lt) goto loc_8222EDC4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8222EDC4:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8222edd0
	if (!ctx.cr6.eq) goto loc_8222EDD0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8222EDD0:
	// addi r28,r31,2576
	ctx.r28.s64 = ctx.r31.s64 + 2576;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8222edec
	if (ctx.cr6.eq) goto loc_8222EDEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EDEC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222f0b0
	if (ctx.cr6.eq) goto loc_8222F0B0;
	// lbz r6,148(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 148);
	// lbz r5,1(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8222ee1c
	if (ctx.cr6.eq) goto loc_8222EE1C;
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm r3,r4,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8222EE1C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lbz r6,2597(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2597);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8222ee5c
	if (ctx.cr6.eq) goto loc_8222EE5C;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8222EE5C:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8222ee6c
	if (!ctx.cr6.eq) goto loc_8222EE6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EE6C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r4,2592(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2592);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,1352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1352, ctx.r11.u16);
	// bl 0x8221e220
	ctx.lr = 0x8222EE80;
	sub_8221E220(ctx, base);
	// lbz r9,2596(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2596);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// beq cr6,0x8222ee98
	if (ctx.cr6.eq) goto loc_8222EE98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EE98:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222eeb8
	if (ctx.cr6.eq) goto loc_8222EEB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82220ea0
	ctx.lr = 0x8222EEB0;
	sub_82220EA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823475c0
	ctx.lr = 0x8222EEB8;
	sub_823475C0(ctx, base);
loc_8222EEB8:
	// lwz r10,1652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8222ef18
	if (ctx.cr6.eq) goto loc_8222EF18;
	// lhz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2592);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8222eee8
	if (!ctx.cr6.lt) goto loc_8222EEE8;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r5,43690
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 43690, ctx.xer);
	// ble cr6,0x8222eee8
	if (!ctx.cr6.gt) goto loc_8222EEE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222ef0c
	goto loc_8222EF0C;
loc_8222EEE8:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8222eefc
	if (!ctx.cr6.lt) goto loc_8222EEFC;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x8222ef08
	if (ctx.cr6.gt) goto loc_8222EF08;
loc_8222EEFC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8222ef0c
	if (ctx.cr6.gt) goto loc_8222EF0C;
loc_8222EF08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EF0C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222f0a4
	if (ctx.cr6.eq) goto loc_8222F0A4;
loc_8222EF18:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lhz r4,2592(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2592);
	// li r8,21845
	ctx.r8.s64 = 21845;
	// lbz r7,1651(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1651);
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// bl 0x82364558
	ctx.lr = 0x8222EF3C;
	sub_82364558(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8222ef54
	if (ctx.cr6.gt) goto loc_8222EF54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EF54:
	// lwz r3,1936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbz r11,599(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 599);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ef90
	if (ctx.cr6.eq) goto loc_8222EF90;
	// lbz r10,2627(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2627);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r10,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// beq cr6,0x8222ef80
	if (ctx.cr6.eq) goto loc_8222EF80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EF80:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222ef94
	if (!ctx.cr6.eq) goto loc_8222EF94;
loc_8222EF90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EF94:
	// lbz r6,2596(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2596);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x8222efac
	if (!ctx.cr6.eq) goto loc_8222EFAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EFAC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222efd8
	if (!ctx.cr6.eq) goto loc_8222EFD8;
	// lbz r3,2595(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2595);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x8222efcc
	if (!ctx.cr6.eq) goto loc_8222EFCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222EFCC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222efdc
	if (ctx.cr6.eq) goto loc_8222EFDC;
loc_8222EFD8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8222EFDC:
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8222f000
	if (!ctx.cr6.eq) goto loc_8222F000;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222f000
	if (ctx.cr6.eq) goto loc_8222F000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e3e0
	ctx.lr = 0x8222F000;
	sub_8221E3E0(ctx, base);
loc_8222F000:
	// lwz r10,1656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8222f060
	if (ctx.cr6.eq) goto loc_8222F060;
	// lhz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2592);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8222f030
	if (!ctx.cr6.lt) goto loc_8222F030;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r4,43690
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 43690, ctx.xer);
	// ble cr6,0x8222f030
	if (!ctx.cr6.gt) goto loc_8222F030;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222f054
	goto loc_8222F054;
loc_8222F030:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8222f044
	if (!ctx.cr6.lt) goto loc_8222F044;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x8222f050
	if (ctx.cr6.gt) goto loc_8222F050;
loc_8222F044:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8222f054
	if (ctx.cr6.gt) goto loc_8222F054;
loc_8222F050:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F054:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f0a4
	if (ctx.cr6.eq) goto loc_8222F0A4;
loc_8222F060:
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// lbz r10,599(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 599);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f094
	if (ctx.cr6.eq) goto loc_8222F094;
	// lbz r9,2627(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2627);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// beq cr6,0x8222f088
	if (ctx.cr6.eq) goto loc_8222F088;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F088:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222f0a4
	if (!ctx.cr6.eq) goto loc_8222F0A4;
loc_8222F094:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d538
	ctx.lr = 0x8222F0A4;
	sub_8222D538(ctx, base);
loc_8222F0A4:
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r5.u8);
loc_8222F0B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222F0B8"))) PPC_WEAK_FUNC(sub_8222F0B8);
PPC_FUNC_IMPL(__imp__sub_8222F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222F0C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32090
	ctx.r28.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,26592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8222f0e0
	if (!ctx.cr6.eq) goto loc_8222F0E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F0E0:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ad428
	ctx.lr = 0x8222F0EC;
	sub_822AD428(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223d38
	ctx.lr = 0x8222F0F4;
	sub_82223D38(ctx, base);
	// lwz r11,1652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1652);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8222f180
	if (ctx.cr6.eq) goto loc_8222F180;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8222f114
	if (!ctx.cr6.eq) goto loc_8222F114;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222F114:
	// lwz r9,1656(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8222f138
	if (!ctx.cr6.lt) goto loc_8222F138;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r7,43690
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 43690, ctx.xer);
	// ble cr6,0x8222f138
	if (!ctx.cr6.gt) goto loc_8222F138;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222f15c
	goto loc_8222F15C;
loc_8222F138:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8222f14c
	if (!ctx.cr6.lt) goto loc_8222F14C;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x8222f158
	if (ctx.cr6.gt) goto loc_8222F158;
loc_8222F14C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8222f15c
	if (ctx.cr6.gt) goto loc_8222F15C;
loc_8222F158:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F15C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222f180
	if (ctx.cr6.eq) goto loc_8222F180;
	// addi r11,r9,-60
	ctx.r11.s64 = ctx.r9.s64 + -60;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// stw r11,1652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1652, ctx.r11.u32);
	// bne cr6,0x8222f180
	if (!ctx.cr6.eq) goto loc_8222F180;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,1652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1652, ctx.r5.u32);
loc_8222F180:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x8222f1d8
	if (ctx.cr6.eq) goto loc_8222F1D8;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,432(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 432);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222F1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r6,71(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8222f1d8
	if (ctx.cr6.eq) goto loc_8222F1D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221eac8
	ctx.lr = 0x8222F1D8;
	sub_8221EAC8(ctx, base);
loc_8222F1D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221f180
	ctx.lr = 0x8222F1E0;
	sub_8221F180(ctx, base);
	// lbz r5,1649(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1649);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222f330
	if (ctx.cr6.eq) goto loc_8222F330;
	// lbz r4,1650(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1650);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222f330
	if (!ctx.cr6.eq) goto loc_8222F330;
	// lwz r3,1936(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1936);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f330
	if (ctx.cr6.eq) goto loc_8222F330;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51972
	ctx.r10.u64 = ctx.r11.u64 | 51972;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8222f330
	if (ctx.cr6.eq) goto loc_8222F330;
	// lwz r11,26592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8222f22c
	if (!ctx.cr6.eq) goto loc_8222F22C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F22C:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x8222f244
	if (!ctx.cr6.eq) goto loc_8222F244;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222F244:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r5,1660(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lwz r11,-30856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30856);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// bne cr6,0x8222f26c
	if (!ctx.cr6.eq) goto loc_8222F26C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222F26C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ecf0
	ctx.lr = 0x8222F274;
	sub_8222ECF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225248
	ctx.lr = 0x8222F280;
	sub_82225248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222f328
	if (ctx.cr6.eq) goto loc_8222F328;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lbz r4,21(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// rlwinm r3,r4,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222f31c
	if (!ctx.cr6.eq) goto loc_8222F31C;
	// lwz r10,1652(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1652);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8222f310
	if (ctx.cr6.eq) goto loc_8222F310;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8222f2e0
	if (!ctx.cr6.lt) goto loc_8222F2E0;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,43690
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 43690, ctx.xer);
	// ble cr6,0x8222f2e0
	if (!ctx.cr6.gt) goto loc_8222F2E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222f304
	goto loc_8222F304;
loc_8222F2E0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8222f2f4
	if (!ctx.cr6.lt) goto loc_8222F2F4;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x8222f300
	if (ctx.cr6.gt) goto loc_8222F300;
loc_8222F2F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8222f304
	if (ctx.cr6.gt) goto loc_8222F304;
loc_8222F300:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F304:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222f31c
	if (ctx.cr6.eq) goto loc_8222F31C;
loc_8222F310:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222d828
	ctx.lr = 0x8222F31C;
	sub_8222D828(ctx, base);
loc_8222F31C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e4a0
	ctx.lr = 0x8222F328;
	sub_8221E4A0(ctx, base);
loc_8222F328:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822259c0
	ctx.lr = 0x8222F330;
	sub_822259C0(ctx, base);
loc_8222F330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222F338"))) PPC_WEAK_FUNC(sub_8222F338);
PPC_FUNC_IMPL(__imp__sub_8222F338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8222F340;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,1649(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f680
	if (ctx.cr6.eq) goto loc_8222F680;
	// lbz r10,1650(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1650);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222f680
	if (!ctx.cr6.eq) goto loc_8222F680;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r8,r9,51972
	ctx.r8.u64 = ctx.r9.u64 | 51972;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8222f680
	if (ctx.cr6.eq) goto loc_8222F680;
	// lbz r7,23048(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23048);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222f680
	if (ctx.cr6.eq) goto loc_8222F680;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r5,r6,52520
	ctx.r5.u64 = ctx.r6.u64 | 52520;
	// lbzx r11,r29,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x8222F3AC;
	sub_8223D0B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222f680
	if (ctx.cr6.eq) goto loc_8222F680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822273b0
	ctx.lr = 0x8222F3C4;
	sub_822273B0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222f680
	if (ctx.cr6.eq) goto loc_8222F680;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f12,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r30,208
	ctx.r8.s64 = ctx.r30.s64 + 208;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r26,65535
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 65535, ctx.xer);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// bne cr6,0x8222f430
	if (!ctx.cr6.eq) goto loc_8222F430;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8222F430:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e838
	ctx.lr = 0x8222F438;
	sub_8221E838(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222F468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r7,70(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f0,13360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x8222f490
	if (ctx.cr6.eq) goto loc_8222F490;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r5,r6,51816
	ctx.r5.u64 = ctx.r6.u64 | 51816;
	// lfsx f0,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8222F490:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lwz r9,1932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lwz r5,6916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6916);
	// ori r11,r4,16216
	ctx.r11.u64 = ctx.r4.u64 | 16216;
	// lbz r4,23076(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23076);
	// ori r7,r8,52496
	ctx.r7.u64 = ctx.r8.u64 | 52496;
	// lwz r8,6820(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6820);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lbz r8,6614(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6614);
	// stb r4,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r4.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lbz r6,15480(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15480);
	// lbz r9,6824(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6824);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lbz r4,599(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 599);
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// stb r8,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,23072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23072);
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r5,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r5.u8);
	// addi r5,r11,-28480
	ctx.r5.s64 = ctx.r11.s64 + -28480;
	// lbz r8,23069(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23069);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stb r4,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r4.u8);
	// lbz r4,23068(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23068);
	// stb r9,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
	// addi r9,r31,23062
	ctx.r9.s64 = ctx.r31.s64 + 23062;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r8,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r8.u8);
	// addi r10,r10,-10204
	ctx.r10.s64 = ctx.r10.s64 + -10204;
	// lbz r8,23070(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23070);
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// stb r4,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r4.u8);
	// lbz r4,23071(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23071);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// cntlzw r9,r27
	ctx.r9.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r4,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r4.u8);
	// addi r7,r31,23056
	ctx.r7.s64 = ctx.r31.s64 + 23056;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// beq cr6,0x8222f5ac
	if (ctx.cr6.eq) goto loc_8222F5AC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8222f5ac
	if (ctx.cr6.eq) goto loc_8222F5AC;
	// stb r25,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r25.u8);
	// stb r25,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r25.u8);
	// stb r25,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r25.u8);
	// b 0x8222f5d4
	goto loc_8222F5D4;
loc_8222F5AC:
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// lbz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 204);
	// stb r10,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r10.u8);
	// lbz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// stb r10,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r10.u8);
	// lbz r10,210(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 210);
	// lbz r11,209(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 209);
	// stb r10,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r10.u8);
	// stb r11,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
loc_8222F5D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8222f5e4
	if (!ctx.cr6.eq) goto loc_8222F5E4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x8222f5f8
	goto loc_8222F5F8;
loc_8222F5E4:
	// lbz r7,73(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// li r29,24
	ctx.r29.s64 = 24;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222f5f8
	if (!ctx.cr6.eq) goto loc_8222F5F8;
	// li r29,8
	ctx.r29.s64 = 8;
loc_8222F5F8:
	// addi r30,r31,1940
	ctx.r30.s64 = ctx.r31.s64 + 1940;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// bl 0x8222ac30
	ctx.lr = 0x8222F60C;
	sub_8222AC30(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82220860
	ctx.lr = 0x8222F61C;
	sub_82220860(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8222f638
	if (ctx.cr6.eq) goto loc_8222F638;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227550
	ctx.lr = 0x8222F630;
	sub_82227550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222f63c
	goto loc_8222F63C;
loc_8222F638:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8222F63C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8222f650
	if (ctx.cr6.eq) goto loc_8222F650;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822276e0
	ctx.lr = 0x8222F650;
	sub_822276E0(ctx, base);
loc_8222F650:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219a28
	ctx.lr = 0x8222F660;
	sub_82219A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82220e30
	ctx.lr = 0x8222F668;
	sub_82220E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ec78
	ctx.lr = 0x8222F674;
	sub_8221EC78(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82364df8
	ctx.lr = 0x8222F680;
	sub_82364DF8(ctx, base);
loc_8222F680:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222F688"))) PPC_WEAK_FUNC(sub_8222F688);
PPC_FUNC_IMPL(__imp__sub_8222F688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8222F690;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r27,23108
	ctx.r31.s64 = ctx.r27.s64 + 23108;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,12840
	ctx.r3.s64 = ctx.r29.s64 + 12840;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8212e9b8
	ctx.lr = 0x8222F6C0;
	sub_8212E9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f7b0
	if (ctx.cr6.eq) goto loc_8222F7B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12848);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222f7b0
	if (ctx.cr6.eq) goto loc_8222F7B0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8222f704
	if (ctx.cr6.gt) goto loc_8222F704;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222F704:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222f714
	if (ctx.cr6.eq) goto loc_8222F714;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8222F714:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8222f724
	if (ctx.cr6.eq) goto loc_8222F724;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F724:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222f77c
	if (ctx.cr6.eq) goto loc_8222F77C;
	// lhz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222f754
	if (!ctx.cr6.eq) goto loc_8222F754;
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// clrlwi r8,r25,16
	ctx.r8.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222f77c
	if (ctx.cr6.eq) goto loc_8222F77C;
loc_8222F754:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823475c0
	ctx.lr = 0x8222F75C;
	sub_823475C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x8222F768;
	sub_823656E8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8222f778
	if (ctx.cr6.gt) goto loc_8222F778;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F778:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_8222F77C:
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222f7dc
	if (ctx.cr6.eq) goto loc_8222F7DC;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// sth r25,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r25.u16);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// neg r5,r6
	ctx.r5.s64 = -ctx.r6.s64;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// sth r5,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r5.u16);
	// bl 0x821e9150
	ctx.lr = 0x8222F7A8;
	sub_821E9150(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8222F7B0:
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,8840
	ctx.r3.s64 = ctx.r29.s64 + 8840;
	// bl 0x8222e258
	ctx.lr = 0x8222F7D0;
	sub_8222E258(ctx, base);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821e9150
	ctx.lr = 0x8222F7DC;
	sub_821E9150(ctx, base);
loc_8222F7DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222F7E4"))) PPC_WEAK_FUNC(sub_8222F7E4);
PPC_FUNC_IMPL(__imp__sub_8222F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222F7E8"))) PPC_WEAK_FUNC(sub_8222F7E8);
PPC_FUNC_IMPL(__imp__sub_8222F7E8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r10.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8222aab0
	ctx.lr = 0x8222F818;
	sub_8222AAB0(ctx, base);
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,12656
	ctx.r10.s64 = ctx.r10.s64 + 12656;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r8,22(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// rlwimi r9,r8,3,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r6,r9,0,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF8;
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// beq cr6,0x8222f864
	if (ctx.cr6.eq) goto loc_8222F864;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lbz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// stb r3,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r3.u8);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x8222f884
	goto loc_8222F884;
loc_8222F864:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stb r9,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_8222F884:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,3672
	ctx.r11.s64 = ctx.r11.s64 + 3672;
	// addi r10,r10,18392
	ctx.r10.s64 = ctx.r10.s64 + 18392;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r11,r9,-5432
	ctx.r11.s64 = ctx.r9.s64 + -5432;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8236d920
	ctx.lr = 0x8222F8CC;
	sub_8236D920(ctx, base);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x8212bb98
	ctx.lr = 0x8222F8D4;
	sub_8212BB98(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823658e0
	ctx.lr = 0x8222F8DC;
	sub_823658E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8222F8F4"))) PPC_WEAK_FUNC(sub_8222F8F4);
PPC_FUNC_IMPL(__imp__sub_8222F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222F8F8"))) PPC_WEAK_FUNC(sub_8222F8F8);
PPC_FUNC_IMPL(__imp__sub_8222F8F8) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,26752
	ctx.r31.s64 = ctx.r10.s64 + 26752;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,-26360
	ctx.r10.s64 = ctx.r10.s64 + -26360;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stb r9,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r9.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82368150
	ctx.lr = 0x8222F938;
	sub_82368150(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222aab0
	ctx.lr = 0x8222F940;
	sub_8222AAB0(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lbz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// rlwimi r8,r7,3,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 3) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// addi r7,r10,-5432
	ctx.r7.s64 = ctx.r10.s64 + -5432;
	// rlwinm r9,r8,0,24,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF8;
	// addi r6,r11,18392
	ctx.r6.s64 = ctx.r11.s64 + 18392;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// bl 0x8236e578
	ctx.lr = 0x8222F990;
	sub_8236E578(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8222F9A8"))) PPC_WEAK_FUNC(sub_8222F9A8);
PPC_FUNC_IMPL(__imp__sub_8222F9A8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// bne cr6,0x8222f9dc
	if (!ctx.cr6.eq) goto loc_8222F9DC;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8222F9DC;
	sub_82367A40(ctx, base);
loc_8222F9DC:
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222fa28
	if (ctx.cr6.eq) goto loc_8222FA28;
	// bl 0x82368400
	ctx.lr = 0x8222F9F0;
	sub_82368400(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222fa10
	if (ctx.cr6.eq) goto loc_8222FA10;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x8236efa0
	ctx.lr = 0x8222FA04;
	sub_8236EFA0(ctx, base);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// b 0x8222fa40
	goto loc_8222FA40;
loc_8222FA10:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e8f8
	ctx.lr = 0x8222FA1C;
	sub_8222E8F8(ctx, base);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// b 0x8222fa40
	goto loc_8222FA40;
loc_8222FA28:
	// bl 0x82368400
	ctx.lr = 0x8222FA2C;
	sub_82368400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e8f8
	ctx.lr = 0x8222FA38;
	sub_8222E8F8(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_8222FA40:
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

__attribute__((alias("__imp__sub_8222FA58"))) PPC_WEAK_FUNC(sub_8222FA58);
PPC_FUNC_IMPL(__imp__sub_8222FA58) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// ori r9,r10,30212
	ctx.r9.u64 = ctx.r10.u64 | 30212;
	// addi r11,r11,-1624
	ctx.r11.s64 = ctx.r11.s64 + -1624;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r7,r8,30216
	ctx.r7.u64 = ctx.r8.u64 | 30216;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,26708
	ctx.r3.s64 = ctx.r11.s64 + 26708;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x82221ad0
	ctx.lr = 0x8222FAA4;
	sub_82221AD0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r4,r5,26708
	ctx.r4.u64 = ctx.r5.u64 | 26708;
	// li r6,5
	ctx.r6.s64 = 5;
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8222FAD4"))) PPC_WEAK_FUNC(sub_8222FAD4);
PPC_FUNC_IMPL(__imp__sub_8222FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FAD8"))) PPC_WEAK_FUNC(sub_8222FAD8);
PPC_FUNC_IMPL(__imp__sub_8222FAD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,11060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11060, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,11064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11064, ctx.r6.u32);
	// addi r4,r3,7376
	ctx.r4.s64 = ctx.r3.s64 + 7376;
	// stw r11,11056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11056, ctx.r11.u32);
	// stw r10,7372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7372, ctx.r10.u32);
	// stb r10,11081(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11081, ctx.r10.u8);
	// b 0x8222dc50
	sub_8222DC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FAFC"))) PPC_WEAK_FUNC(sub_8222FAFC);
PPC_FUNC_IMPL(__imp__sub_8222FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FB00"))) PPC_WEAK_FUNC(sub_8222FB00);
PPC_FUNC_IMPL(__imp__sub_8222FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222FB08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r10,r11,17004
	ctx.r10.u64 = ctx.r11.u64 | 17004;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r7,r8,16996
	ctx.r7.u64 = ctx.r8.u64 | 16996;
	// ori r11,r6,17000
	ctx.r11.u64 = ctx.r6.u64 | 17000;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stwx r9,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// stwx r4,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r5,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x82361330
	ctx.lr = 0x8222FB48;
	sub_82361330(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// ori r8,r9,25868
	ctx.r8.u64 = ctx.r9.u64 | 25868;
	// addi r11,r11,-7792
	ctx.r11.s64 = ctx.r11.s64 + -7792;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r3,r10,25896
	ctx.r3.s64 = ctx.r10.s64 + 25896;
	// ori r6,r7,25872
	ctx.r6.u64 = ctx.r7.u64 | 25872;
	// ori r10,r4,25916
	ctx.r10.u64 = ctx.r4.u64 | 25916;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x8222FB90;
	sub_8259D2A0(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r9,25864
	ctx.r8.u64 = ctx.r9.u64 | 25864;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r6,r7,25912
	ctx.r6.u64 = ctx.r7.u64 | 25912;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x8240bfd8
	ctx.lr = 0x8222FBB4;
	sub_8240BFD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FBBC"))) PPC_WEAK_FUNC(sub_8222FBBC);
PPC_FUNC_IMPL(__imp__sub_8222FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FBC0"))) PPC_WEAK_FUNC(sub_8222FBC0);
PPC_FUNC_IMPL(__imp__sub_8222FBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8222FBC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x8259d300
	ctx.lr = 0x8222FBE8;
	sub_8259D300(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x823699b0
	ctx.lr = 0x8222FC00;
	sub_823699B0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,24,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x8221b680
	ctx.lr = 0x8222FC24;
	sub_8221B680(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r7,r8,0,21,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF87FF;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bl 0x8221b818
	ctx.lr = 0x8222FC34;
	sub_8221B818(ctx, base);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r4,r6,0,29,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,23500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8222fc68
	if (!ctx.cr6.eq) goto loc_8222FC68;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r3,0,17,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFF87FFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x8222fc74
	goto loc_8222FC74;
loc_8222FC68:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r3,15,13,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x78000) | (ctx.r10.u64 & 0xFFFFFFFFFFF87FFF);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_8222FC74:
	// bl 0x8221b898
	ctx.lr = 0x8222FC78;
	sub_8221B898(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,193
	ctx.r8.s64 = 193;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,18392
	ctx.r3.s64 = ctx.r11.s64 + 18392;
	// rlwinm r11,r7,0,30,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// rlwimi r9,r8,2,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// rlwimi r9,r8,2,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r4,r10,-5432
	ctx.r4.s64 = ctx.r10.s64 + -5432;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// ori r9,r10,12424
	ctx.r9.u64 = ctx.r10.u64 | 12424;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r8,12424
	ctx.r7.u64 = ctx.r8.u64 | 12424;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// ori r5,r6,12428
	ctx.r5.u64 = ctx.r6.u64 | 12428;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r3,r4,12424
	ctx.r3.u64 = ctx.r4.u64 | 12424;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ori r7,r8,12428
	ctx.r7.u64 = ctx.r8.u64 | 12428;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r6,14715
	ctx.r5.u64 = ctx.r6.u64 | 14715;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FD44"))) PPC_WEAK_FUNC(sub_8222FD44);
PPC_FUNC_IMPL(__imp__sub_8222FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FD48"))) PPC_WEAK_FUNC(sub_8222FD48);
PPC_FUNC_IMPL(__imp__sub_8222FD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222FD50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,15716
	ctx.r10.u64 = ctx.r11.u64 | 15716;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 28, ctx.xer);
	// bne cr6,0x8222fdd0
	if (!ctx.cr6.eq) goto loc_8222FDD0;
	// bl 0x8221be50
	ctx.lr = 0x8222FD70;
	sub_8221BE50(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222fdac
	if (!ctx.cr6.gt) goto loc_8222FDAC;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_8222FD84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365758
	ctx.lr = 0x8222FD90;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222fd9c
	if (ctx.cr6.eq) goto loc_8222FD9C;
	// bl 0x8222f338
	ctx.lr = 0x8222FD9C;
	sub_8222F338(ctx, base);
loc_8222FD9C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222fd84
	if (ctx.cr6.lt) goto loc_8222FD84;
loc_8222FDAC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8222fdc4
	if (!ctx.cr6.eq) goto loc_8222FDC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222FDC4:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82373448
	ctx.lr = 0x8222FDD0;
	sub_82373448(ctx, base);
loc_8222FDD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FDD8"))) PPC_WEAK_FUNC(sub_8222FDD8);
PPC_FUNC_IMPL(__imp__sub_8222FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8222FDE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222ff54
	if (ctx.cr6.eq) goto loc_8222FF54;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8222FE10;
	sub_823656F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8222ff54
	if (ctx.cr6.eq) goto loc_8222FF54;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222ff54
	if (ctx.cr6.eq) goto loc_8222FF54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x8222FE48;
	sub_82365B88(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222ff54
	if (ctx.cr6.eq) goto loc_8222FF54;
	// mulli r29,r3,5956
	ctx.r29.s64 = ctx.r3.s64 * 5956;
	// lbz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// addi r30,r11,10528
	ctx.r30.s64 = ctx.r11.s64 + 10528;
	// bne cr6,0x8222ff54
	if (!ctx.cr6.eq) goto loc_8222FF54;
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8222FE80;
	sub_820FA560(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82219cb0
	ctx.lr = 0x8222FE9C;
	sub_82219CB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fedc
	if (ctx.cr6.eq) goto loc_8222FEDC;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r6,r11,1344
	ctx.r6.s64 = ctx.r11.s64 + 1344;
	// lwzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8222fedc
	if (ctx.cr6.eq) goto loc_8222FEDC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x8222f688
	ctx.lr = 0x8222FEDC;
	sub_8222F688(ctx, base);
loc_8222FEDC:
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16244
	ctx.r4.u64 = ctx.r5.u64 | 16244;
	// lbzx r3,r28,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ff54
	if (ctx.cr6.eq) goto loc_8222FF54;
	// lwz r4,1932(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1932);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222ff30
	if (ctx.cr6.eq) goto loc_8222FF30;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// mulli r11,r8,328
	ctx.r11.s64 = ctx.r8.s64 * 328;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,10580(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 10580);
	// lwz r11,184(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222FF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222FF30:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,284(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 284);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8222FF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222FF54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FF5C"))) PPC_WEAK_FUNC(sub_8222FF5C);
PPC_FUNC_IMPL(__imp__sub_8222FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FF60"))) PPC_WEAK_FUNC(sub_8222FF60);
PPC_FUNC_IMPL(__imp__sub_8222FF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8222FF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addis r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 262144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r30,-13579
	ctx.r30.s64 = ctx.r30.s64 + -13579;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// bl 0x82104600
	ctx.lr = 0x8222FF94;
	sub_82104600(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x820fc018
	ctx.lr = 0x8222FFA0;
	sub_820FC018(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-5136
	ctx.r5.s64 = ctx.r11.s64 + -5136;
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x82229b80
	ctx.lr = 0x8222FFBC;
	sub_82229B80(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// bl 0x821e9150
	ctx.lr = 0x8222FFC8;
	sub_821E9150(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8222FFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e8f8
	ctx.lr = 0x8222FFE8;
	sub_8222E8F8(ctx, base);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222FFF4"))) PPC_WEAK_FUNC(sub_8222FFF4);
PPC_FUNC_IMPL(__imp__sub_8222FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222FFF8"))) PPC_WEAK_FUNC(sub_8222FFF8);
PPC_FUNC_IMPL(__imp__sub_8222FFF8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8221a760
	ctx.lr = 0x82230028;
	sub_8221A760(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r10,r11,24760
	ctx.r10.s64 = ctx.r11.s64 + 24760;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82230054
	if (!ctx.cr6.eq) goto loc_82230054;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82230060
	goto loc_82230060;
loc_82230054:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
loc_82230060:
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822300e4
	if (!ctx.cr6.eq) goto loc_822300E4;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822300a0
	if (ctx.cr6.eq) goto loc_822300A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x8222f688
	ctx.lr = 0x82230094;
	sub_8222F688(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
loc_822300A0:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822300e4
	if (ctx.cr6.eq) goto loc_822300E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823475c0
	ctx.lr = 0x822300B4;
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
	ctx.lr = 0x822300C8;
	sub_82365B88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82123f30
	ctx.lr = 0x822300E4;
	sub_82123F30(ctx, base);
loc_822300E4:
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

__attribute__((alias("__imp__sub_822300FC"))) PPC_WEAK_FUNC(sub_822300FC);
PPC_FUNC_IMPL(__imp__sub_822300FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230100"))) PPC_WEAK_FUNC(sub_82230100);
PPC_FUNC_IMPL(__imp__sub_82230100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82230108;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// addi r10,r10,16876
	ctx.r10.s64 = ctx.r10.s64 + 16876;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,6
	ctx.r28.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r28,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r28.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82230144:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82230144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230144;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// bl 0x82369ec8
	ctx.lr = 0x82230174;
	sub_82369EC8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222fbc0
	ctx.lr = 0x8223017C;
	sub_8222FBC0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lbz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwimi r9,r7,7,24,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 7) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r3,8,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bl 0x8221b680
	ctx.lr = 0x822301B8;
	sub_8221B680(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwimi r11,r6,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r11,r9,11,17,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0x7800) | (ctx.r11.u64 & 0xFFFFFFFFFFFF87FF);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r11,r8,3,25,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x78) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF87);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwimi r10,r3,11,17,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 11) & 0x7800) | (ctx.r10.u64 & 0xFFFFFFFFFFFF87FF);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x8221b818
	ctx.lr = 0x822301FC;
	sub_8221B818(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// rlwimi r7,r6,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stb r5,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r5.u8);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lbz r3,33(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// stb r3,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r3.u8);
	// bl 0x8221b918
	ctx.lr = 0x82230228;
	sub_8221B918(ctx, base);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwimi r4,r11,2,24,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// bl 0x8222aab0
	ctx.lr = 0x82230240;
	sub_8222AAB0(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// rlwimi r10,r9,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r7,r10,0,24,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// bl 0x8236d590
	ctx.lr = 0x82230270;
	sub_8236D590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223027C"))) PPC_WEAK_FUNC(sub_8223027C);
PPC_FUNC_IMPL(__imp__sub_8223027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82230280"))) PPC_WEAK_FUNC(sub_82230280);
PPC_FUNC_IMPL(__imp__sub_82230280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82230288;
	__savegprlr_29(ctx, base);
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
	// bl 0x823683a8
	ctx.lr = 0x822302A0;
	sub_823683A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x822302AC;
	sub_82361330(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r10,r11,25864
	ctx.r10.u64 = ctx.r11.u64 | 25864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8240bf88
	ctx.lr = 0x822302C4;
	sub_8240BF88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-16424
	ctx.r4.s64 = ctx.r11.s64 + -16424;
	// addi r3,r31,8840
	ctx.r3.s64 = ctx.r31.s64 + 8840;
	// bl 0x8222fb00
	ctx.lr = 0x822302D8;
	sub_8222FB00(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822302E8"))) PPC_WEAK_FUNC(sub_822302E8);
PPC_FUNC_IMPL(__imp__sub_822302E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822302F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368410
	ctx.lr = 0x8223030C;
	sub_82368410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82230324
	if (!ctx.cr6.eq) goto loc_82230324;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230324:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82230388
	if (ctx.cr6.gt) goto loc_82230388;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,844
	ctx.r12.s64 = ctx.r12.s64 + 844;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822303A4;
	case 1:
		goto loc_822303AC;
	case 2:
		goto loc_82230394;
	case 3:
		goto loc_822303BC;
	case 4:
		goto loc_822303AC;
	case 5:
		goto loc_822303AC;
	case 6:
		goto loc_822303AC;
	case 7:
		goto loc_8223050C;
	case 8:
		goto loc_82230428;
	case 9:
		goto loc_822303AC;
	case 10:
		goto loc_822303AC;
	case 11:
		goto loc_82230488;
	case 12:
		goto loc_82230580;
	case 13:
		goto loc_82230384;
	default:
		__builtin_unreachable();
	}
	// lwz r17,932(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r17,940(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r17,916(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	// lwz r17,956(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// lwz r17,940(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r17,940(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r17,940(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r17,1292(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1292);
	// lwz r17,1064(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// lwz r17,940(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r17,940(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r17,1160(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// lwz r17,1408(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r17,900(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
loc_82230384:
	// li r30,3
	ctx.r30.s64 = 3;
loc_82230388:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230394:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822282f0
	ctx.lr = 0x8223039C;
	sub_822282F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_822303A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822282a0
	ctx.lr = 0x822303AC;
	sub_822282A0(ctx, base);
loc_822303AC:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822303BC:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x822303C4;
	sub_82366C90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8223041c
	if (ctx.cr6.lt) goto loc_8223041C;
	// beq cr6,0x822303e8
	if (ctx.cr6.eq) goto loc_822303E8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x822303f0
	if (ctx.cr6.lt) goto loc_822303F0;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822303E8:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x822303F0;
	sub_82367A40(ctx, base);
loc_822303F0:
	// li r9,7
	ctx.r9.s64 = 7;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1448
	ctx.r4.s64 = ctx.r11.s64 + -1448;
	// addi r3,r31,8840
	ctx.r3.s64 = ctx.r31.s64 + 8840;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// bl 0x8222c280
	ctx.lr = 0x8223040C;
	sub_8222C280(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8223041C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230428:
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223043C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223041c
	if (ctx.cr6.eq) goto loc_8223041C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82230464
	if (ctx.cr6.eq) goto loc_82230464;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230464:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e8f8
	ctx.lr = 0x82230470;
	sub_8222E8F8(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230488:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x82230490;
	sub_82368400(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822304b0
	if (ctx.cr6.eq) goto loc_822304B0;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a90
	ctx.lr = 0x822304A4;
	sub_82367A90(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8223041c
	if (!ctx.cr6.eq) goto loc_8223041C;
loc_822304B0:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x822304B8;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223041c
	if (ctx.cr6.eq) goto loc_8223041C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x822304C8;
	sub_8221C328(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230504
	if (ctx.cr6.eq) goto loc_82230504;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x822304DC;
	sub_82368400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230504
	if (ctx.cr6.eq) goto loc_82230504;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x822304F0;
	sub_8236F488(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230504:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_8223050C:
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82230520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8223041c
	if (ctx.cr6.lt) goto loc_8223041C;
	// bne cr6,0x82230534
	if (!ctx.cr6.eq) goto loc_82230534;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x82230534;
	sub_82367A40(ctx, base);
loc_82230534:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r6,r7,15856
	ctx.r6.u64 = ctx.r7.u64 | 15856;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r4,r5,15844
	ctx.r4.u64 = ctx.r5.u64 | 15844;
	// stbx r11,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r10,r3,15857
	ctx.r10.u64 = ctx.r3.u64 | 15857;
	// ori r8,r9,15852
	ctx.r8.u64 = ctx.r9.u64 | 15852;
	// ori r6,r7,15859
	ctx.r6.u64 = ctx.r7.u64 | 15859;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stbx r11,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_82230580:
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82230590"))) PPC_WEAK_FUNC(sub_82230590);
PPC_FUNC_IMPL(__imp__sub_82230590) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// bl 0x823683b0
	ctx.lr = 0x822305B8;
	sub_823683B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230618
	if (ctx.cr6.eq) goto loc_82230618;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222fbc0
	ctx.lr = 0x822305CC;
	sub_8222FBC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823682a0
	ctx.lr = 0x822305D8;
	sub_823682A0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r10,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bne cr6,0x82230610
	if (!ctx.cr6.eq) goto loc_82230610;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222c0d8
	ctx.lr = 0x822305F0;
	sub_8222C0D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82230610
	if (!ctx.cr6.eq) goto loc_82230610;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x82230604;
	sub_8236F488(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// stb r7,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r7.u8);
	// b 0x82230620
	goto loc_82230620;
loc_82230610:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367a60
	ctx.lr = 0x82230618;
	sub_82367A60(ctx, base);
loc_82230618:
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r6,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r6.u8);
loc_82230620:
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

__attribute__((alias("__imp__sub_82230638"))) PPC_WEAK_FUNC(sub_82230638);
PPC_FUNC_IMPL(__imp__sub_82230638) {
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
	// bl 0x82223ec0
	ctx.lr = 0x82230654;
	sub_82223EC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,2576
	ctx.r7.s64 = ctx.r31.s64 + 2576;
	// addi r6,r31,1940
	ctx.r6.s64 = ctx.r31.s64 + 1940;
	// li r5,636
	ctx.r5.s64 = 636;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82230678;
	sub_82364AC0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r11,18528
	ctx.r8.s64 = ctx.r11.s64 + 18528;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,3420
	ctx.r6.s64 = ctx.r31.s64 + 3420;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x822306A8;
	sub_82364AC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-14864
	ctx.r8.s64 = ctx.r11.s64 + -14864;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,3372
	ctx.r6.s64 = ctx.r31.s64 + 3372;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x822306D0;
	sub_82364AC0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r9,-14808
	ctx.r9.s64 = ctx.r9.s64 + -14808;
	// addi r8,r11,-552
	ctx.r8.s64 = ctx.r11.s64 + -552;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x822306FC;
	sub_82364AC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,3404
	ctx.r7.s64 = ctx.r31.s64 + 3404;
	// addi r6,r31,3388
	ctx.r6.s64 = ctx.r31.s64 + 3388;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82230720;
	sub_82364AC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,3476
	ctx.r7.s64 = ctx.r31.s64 + 3476;
	// addi r6,r31,3468
	ctx.r6.s64 = ctx.r31.s64 + 3468;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82230744;
	sub_82364AC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-3496
	ctx.r8.s64 = ctx.r11.s64 + -3496;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,3516
	ctx.r6.s64 = ctx.r31.s64 + 3516;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x8223076C;
	sub_82364AC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,3500
	ctx.r7.s64 = ctx.r31.s64 + 3500;
	// addi r6,r31,3484
	ctx.r6.s64 = ctx.r31.s64 + 3484;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x82230790;
	sub_82364AC0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r9,-9224
	ctx.r9.s64 = ctx.r9.s64 + -9224;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,3544
	ctx.r6.s64 = ctx.r31.s64 + 3544;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x822307BC;
	sub_82364AC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r9,-3320
	ctx.r9.s64 = ctx.r9.s64 + -3320;
	// addi r8,r11,-3392
	ctx.r8.s64 = ctx.r11.s64 + -3392;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,3572
	ctx.r6.s64 = ctx.r31.s64 + 3572;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364ac0
	ctx.lr = 0x822307E8;
	sub_82364AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82230800"))) PPC_WEAK_FUNC(sub_82230800);
PPC_FUNC_IMPL(__imp__sub_82230800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82230808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82230aa4
	if (ctx.cr6.gt) goto loc_82230AA4;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,2108
	ctx.r12.s64 = ctx.r12.s64 + 2108;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82230864;
	case 1:
		goto loc_8223087C;
	case 2:
		goto loc_8223087C;
	case 3:
		goto loc_8223088C;
	case 4:
		goto loc_82230A00;
	case 5:
		goto loc_822308FC;
	case 6:
		goto loc_82230960;
	case 7:
		goto loc_822309C0;
	case 8:
		goto loc_82230A44;
	case 9:
		goto loc_82230AA0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,2148(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	// lwz r17,2172(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2172);
	// lwz r17,2172(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2172);
	// lwz r17,2188(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2188);
	// lwz r17,2560(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2560);
	// lwz r17,2300(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2300);
	// lwz r17,2400(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// lwz r17,2496(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2496);
	// lwz r17,2628(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2628);
	// lwz r17,2720(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2720);
loc_82230864:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8223087C:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8223088C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82227bc8
	ctx.lr = 0x82230898;
	sub_82227BC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82230aa4
	if (ctx.cr6.eq) goto loc_82230AA4;
	// lbz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82230aa4
	if (ctx.cr6.eq) goto loc_82230AA4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,4088
	ctx.r4.s64 = ctx.r10.s64 + 4088;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82367468
	ctx.lr = 0x822308CC;
	sub_82367468(ctx, base);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x822308ec
	if (!ctx.cr6.eq) goto loc_822308EC;
	// bl 0x82230100
	ctx.lr = 0x822308E0;
	sub_82230100(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822308EC:
	// bl 0x8222f7e8
	ctx.lr = 0x822308F0;
	sub_8222F7E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822308FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82227bc8
	ctx.lr = 0x82230908;
	sub_82227BC8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82230aa4
	if (ctx.cr6.eq) goto loc_82230AA4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lbz r6,6239(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6239);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82230aa4
	if (ctx.cr6.eq) goto loc_82230AA4;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365d60
	ctx.lr = 0x82230930;
	sub_82365D60(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82230aa4
	if (ctx.cr6.eq) goto loc_82230AA4;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x82230944;
	sub_82365698(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x82230aa4
	if (!ctx.cr6.gt) goto loc_82230AA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c60
	ctx.lr = 0x82230954;
	sub_82227C60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227bc8
	ctx.lr = 0x82230968;
	sub_82227BC8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223087c
	if (ctx.cr6.eq) goto loc_8223087C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lbz r3,6239(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6239);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223087c
	if (ctx.cr6.eq) goto loc_8223087C;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365d60
	ctx.lr = 0x82230990;
	sub_82365D60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223087c
	if (ctx.cr6.eq) goto loc_8223087C;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x822309A4;
	sub_82365698(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x8223087c
	if (!ctx.cr6.gt) goto loc_8223087C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227c60
	ctx.lr = 0x822309B4;
	sub_82227C60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822309C0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x822309D0;
	sub_82368400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82230aa4
	if (ctx.cr6.eq) goto loc_82230AA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f8f8
	ctx.lr = 0x822309E4;
	sub_8222F8F8(ctx, base);
	// addi r3,r30,2672
	ctx.r3.s64 = ctx.r30.s64 + 2672;
	// bl 0x8212bb98
	ctx.lr = 0x822309EC;
	sub_8212BB98(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x823658e0
	ctx.lr = 0x822309F4;
	sub_823658E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230A00:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x82230A14;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82230a38
	if (ctx.cr6.eq) goto loc_82230A38;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82230aa4
	if (!ctx.cr6.eq) goto loc_82230AA4;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230A38:
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r8,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r8.u8);
	// b 0x82230a84
	goto loc_82230A84;
loc_82230A44:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x82230A58;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82230a7c
	if (ctx.cr6.eq) goto loc_82230A7C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82230aa4
	if (!ctx.cr6.eq) goto loc_82230AA4;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r7,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82230A7C:
	// li r6,10
	ctx.r6.s64 = 10;
	// stb r6,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r6.u8);
loc_82230A84:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230aa0
	if (ctx.cr6.eq) goto loc_82230AA0;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82230AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82230AA0:
	// li r29,3
	ctx.r29.s64 = 3;
loc_82230AA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82230AB0"))) PPC_WEAK_FUNC(sub_82230AB0);
PPC_FUNC_IMPL(__imp__sub_82230AB0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230ae8
	if (ctx.cr6.eq) goto loc_82230AE8;
	// bl 0x82230100
	ctx.lr = 0x82230AD4;
	sub_82230100(ctx, base);
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
loc_82230AE8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82230b0c
	if (ctx.cr6.eq) goto loc_82230B0C;
	// bl 0x8222f7e8
	ctx.lr = 0x82230AF8;
	sub_8222F7E8(ctx, base);
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
loc_82230B0C:
	// bl 0x8222bde8
	ctx.lr = 0x82230B10;
	sub_8222BDE8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82230b58
	if (!ctx.cr6.eq) goto loc_82230B58;
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r8,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r8.u8);
	// beq cr6,0x82230b40
	if (ctx.cr6.eq) goto loc_82230B40;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82230B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82230B40:
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
loc_82230B58:
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

__attribute__((alias("__imp__sub_82230B70"))) PPC_WEAK_FUNC(sub_82230B70);
PPC_FUNC_IMPL(__imp__sub_82230B70) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82230bc4
	if (ctx.cr6.eq) goto loc_82230BC4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82230bf8
	if (!ctx.cr6.eq) goto loc_82230BF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82230BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82230bf8
	goto loc_82230BF8;
loc_82230BC4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x82230BD4;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82230be8
	if (!ctx.cr6.eq) goto loc_82230BE8;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x82230BE4;
	sub_82367A40(ctx, base);
	// b 0x82230bf0
	goto loc_82230BF0;
loc_82230BE8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82230bf8
	if (ctx.cr6.eq) goto loc_82230BF8;
loc_82230BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230280
	ctx.lr = 0x82230BF8;
	sub_82230280(ctx, base);
loc_82230BF8:
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

__attribute__((alias("__imp__sub_82230C10"))) PPC_WEAK_FUNC(sub_82230C10);
PPC_FUNC_IMPL(__imp__sub_82230C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82230C18;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82231128
	if (ctx.cr6.gt) goto loc_82231128;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,3156
	ctx.r12.s64 = ctx.r12.s64 + 3156;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82230C70;
	case 1:
		goto loc_82230E14;
	case 2:
		goto loc_82231088;
	case 3:
		goto loc_822310F8;
	case 4:
		goto loc_82230FBC;
	case 5:
		goto loc_82230FCC;
	case 6:
		goto loc_82231124;
	default:
		__builtin_unreachable();
	}
	// lwz r17,3184(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3184);
	// lwz r17,3604(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3604);
	// lwz r17,4232(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4232);
	// lwz r17,4344(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4344);
	// lwz r17,4028(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4028);
	// lwz r17,4044(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4044);
	// lwz r17,4388(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
loc_82230C70:
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x822216c8
	ctx.lr = 0x82230C80;
	sub_822216C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228418
	ctx.lr = 0x82230C94;
	sub_82228418(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x82230CA4;
	sub_82368400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82230d3c
	if (ctx.cr6.eq) goto loc_82230D3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82368150
	ctx.lr = 0x82230CD8;
	sub_82368150(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82230d3c
	if (ctx.cr6.eq) goto loc_82230D3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r27.u8);
	// bl 0x8222c038
	ctx.lr = 0x82230CF0;
	sub_8222C038(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82230d3c
	if (ctx.cr6.eq) goto loc_82230D3C;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82230d14
	if (!ctx.cr6.eq) goto loc_82230D14;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82230D14:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82230d3c
	if (!ctx.cr6.eq) goto loc_82230D3C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// bl 0x8236e578
	ctx.lr = 0x82230D3C;
	sub_8236E578(ctx, base);
loc_82230D3C:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82230d60
	if (!ctx.cr6.eq) goto loc_82230D60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230D60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82230D68;
	sub_8221C328(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r26,4
	ctx.r26.s64 = 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82230dcc
	if (ctx.cr6.eq) goto loc_82230DCC;
	// lbz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82230d9c
	if (!ctx.cr6.eq) goto loc_82230D9C;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x82230D8C;
	sub_8236F488(ctx, base);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230D9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,5
	ctx.r26.s64 = 5;
	// bl 0x822216c8
	ctx.lr = 0x82230DA8;
	sub_822216C8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// bl 0x8236f540
	ctx.lr = 0x82230DC0;
	sub_8236F540(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230DCC:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a88
	ctx.lr = 0x82230DD4;
	sub_82367A88(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e8f8
	ctx.lr = 0x82230DEC;
	sub_8222E8F8(ctx, base);
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367da0
	ctx.lr = 0x82230DF4;
	sub_82367DA0(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r11,r4,51944
	ctx.r11.u64 = ctx.r4.u64 | 51944;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x82228418
	ctx.lr = 0x82230E20;
	sub_82228418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822216c8
	ctx.lr = 0x82230E28;
	sub_822216C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82230E44;
	sub_8221C328(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82230e78
	if (ctx.cr6.eq) goto loc_82230E78;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82230e78
	if (ctx.cr6.gt) goto loc_82230E78;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x82230E64;
	sub_8236F488(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r8,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r8.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230E78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82230E80;
	sub_8221C328(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82230eb4
	if (ctx.cr6.eq) goto loc_82230EB4;
	// lbz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82230eb4
	if (!ctx.cr6.eq) goto loc_82230EB4;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x82230EA0;
	sub_8236F488(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r5,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r5.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230EB4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222fbc0
	ctx.lr = 0x82230EBC;
	sub_8222FBC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x823682a0
	ctx.lr = 0x82230EC8;
	sub_823682A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82230ED0;
	sub_8221C328(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82230f1c
	if (ctx.cr6.eq) goto loc_82230F1C;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r3,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82230f1c
	if (!ctx.cr6.eq) goto loc_82230F1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222c0d8
	ctx.lr = 0x82230EF4;
	sub_8222C0D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82230f1c
	if (!ctx.cr6.eq) goto loc_82230F1C;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x82230F08;
	sub_8236F488(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r9,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r9.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230F1C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// rlwinm r11,r8,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82230f74
	if (!ctx.cr6.gt) goto loc_82230F74;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
loc_82230F54:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82230f64
	if (ctx.cr6.eq) goto loc_82230F64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82230F64:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82230f54
	if (!ctx.cr6.eq) goto loc_82230F54;
loc_82230F74:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,637(r3)
	PPC_STORE_U8(ctx.r3.u32 + 637, ctx.r11.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r11,644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 644, ctx.r11.u8);
	// bl 0x82201220
	ctx.lr = 0x82230F90;
	sub_82201220(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,1424
	ctx.r4.s64 = ctx.r10.s64 + 1424;
	// addi r3,r11,26708
	ctx.r3.s64 = ctx.r11.s64 + 26708;
	// bl 0x82228648
	ctx.lr = 0x82230FA8;
	sub_82228648(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r6,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r6.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230FBC:
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82230FCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,5
	ctx.r26.s64 = 5;
	// bl 0x82228418
	ctx.lr = 0x82230FD8;
	sub_82228418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822216c8
	ctx.lr = 0x82230FE0;
	sub_822216C8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// beq cr6,0x82231038
	if (ctx.cr6.eq) goto loc_82231038;
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82231038
	if (ctx.cr6.eq) goto loc_82231038;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365d60
	ctx.lr = 0x82231008;
	sub_82365D60(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82231038
	if (ctx.cr6.eq) goto loc_82231038;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a88
	ctx.lr = 0x8223101C;
	sub_82367A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231038
	if (ctx.cr6.eq) goto loc_82231038;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82231030;
	sub_8221C328(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
loc_82231038:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c328
	ctx.lr = 0x82231040;
	sub_8221C328(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// lbz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// beq cr6,0x82231064
	if (ctx.cr6.eq) goto loc_82231064;
	// lbz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82231128
	if (!ctx.cr6.eq) goto loc_82231128;
loc_82231064:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8223106C;
	sub_82367A40(ctx, base);
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x8236f488
	ctx.lr = 0x82231074;
	sub_8236F488(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r6,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r6.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82231088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,5
	ctx.r26.s64 = 5;
	// bl 0x822216c8
	ctx.lr = 0x82231094;
	sub_822216C8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821e90b0
	ctx.lr = 0x822310B4;
	sub_821E90B0(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r3,r11,-13980
	ctx.r3.s64 = ctx.r11.s64 + -13980;
	// bl 0x82228208
	ctx.lr = 0x822310C0;
	sub_82228208(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// ori r10,r3,51958
	ctx.r10.u64 = ctx.r3.u64 | 51958;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x82103ed8
	ctx.lr = 0x822310DC;
	sub_82103ED8(ctx, base);
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x8212bb98
	ctx.lr = 0x822310E4;
	sub_8212BB98(ctx, base);
	// li r26,6
	ctx.r26.s64 = 6;
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822310F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x822216c8
	ctx.lr = 0x82231104;
	sub_822216C8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82231128
	if (ctx.cr6.eq) goto loc_82231128;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r8,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r8.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82231124:
	// li r26,7
	ctx.r26.s64 = 7;
loc_82231128:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231134"))) PPC_WEAK_FUNC(sub_82231134);
PPC_FUNC_IMPL(__imp__sub_82231134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231138"))) PPC_WEAK_FUNC(sub_82231138);
PPC_FUNC_IMPL(__imp__sub_82231138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82231140;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,15716
	ctx.r10.u64 = ctx.r11.u64 | 15716;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 28, ctx.xer);
	// bne cr6,0x82231490
	if (!ctx.cr6.eq) goto loc_82231490;
	// bl 0x82361ab8
	ctx.lr = 0x82231160;
	sub_82361AB8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r27,r11,26080
	ctx.r27.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// lfs f0,-1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-14192
	ctx.r11.s64 = ctx.r11.s64 + -14192;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x82231188;
	sub_8210B3C8(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,-13624
	ctx.r11.s64 = ctx.r11.s64 + -13624;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lbzx r6,r26,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822311c0
	if (ctx.cr6.eq) goto loc_822311C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82224200
	ctx.lr = 0x822311C0;
	sub_82224200(ctx, base);
loc_822311C0:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r28,-32090
	ctx.r28.s64 = -2103050240;
	// ori r4,r5,51968
	ctx.r4.u64 = ctx.r5.u64 | 51968;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822312a4
	if (ctx.cr6.eq) goto loc_822312A4;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// lwz r11,26592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26592);
	// lis r8,-21846
	ctx.r8.s64 = -1431699456;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// ori r7,r8,43690
	ctx.r7.u64 = ctx.r8.u64 | 43690;
	// addi r10,r10,12656
	ctx.r10.s64 = ctx.r10.s64 + 12656;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,3328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3328);
	// bge cr6,0x82231210
	if (!ctx.cr6.lt) goto loc_82231210;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82231210
	if (!ctx.cr6.gt) goto loc_82231210;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82231230
	goto loc_82231230;
loc_82231210:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82231220
	if (!ctx.cr6.lt) goto loc_82231220;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8223122c
	if (ctx.cr6.gt) goto loc_8223122C;
loc_82231220:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bgt cr6,0x82231230
	if (ctx.cr6.gt) goto loc_82231230;
loc_8223122C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82231230:
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82231260
	if (ctx.cr6.eq) goto loc_82231260;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82231258
	if (!ctx.cr6.lt) goto loc_82231258;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82231258
	if (!ctx.cr6.gt) goto loc_82231258;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82231284
	goto loc_82231284;
loc_82231258:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82231284
	goto loc_82231284;
loc_82231260:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8223127c
	if (!ctx.cr6.lt) goto loc_8223127C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8223127c
	if (!ctx.cr6.gt) goto loc_8223127C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82231280
	goto loc_82231280;
loc_8223127C:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82231280:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82231284:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r4,r5,51960
	ctx.r4.u64 = ctx.r5.u64 | 51960;
	// ori r10,r3,51964
	ctx.r10.u64 = ctx.r3.u64 | 51964;
	// lwzx r9,r31,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x822312b4
	goto loc_822312B4;
loc_822312A4:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r7,51964
	ctx.r6.u64 = ctx.r7.u64 | 51964;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
loc_822312B4:
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822312BC;
	sub_8210B3C8(ctx, base);
	// lwz r11,26592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26592);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,128(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822312d8
	if (!ctx.cr6.eq) goto loc_822312D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822312D8:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823733e0
	ctx.lr = 0x822312E8;
	sub_823733E0(ctx, base);
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822312F0;
	sub_8210B3C8(ctx, base);
	// lwz r11,26592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82231304
	if (!ctx.cr6.eq) goto loc_82231304;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231304:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82370928
	ctx.lr = 0x82231310;
	sub_82370928(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82231348
	if (!ctx.cr6.gt) goto loc_82231348;
loc_82231320:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365758
	ctx.lr = 0x8223132C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82231338
	if (ctx.cr6.eq) goto loc_82231338;
	// bl 0x8222f0b8
	ctx.lr = 0x82231338;
	sub_8222F0B8(ctx, base);
loc_82231338:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82231320
	if (ctx.cr6.lt) goto loc_82231320;
loc_82231348:
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x82231350;
	sub_8210B3C8(ctx, base);
	// lwz r11,26592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26592);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x82231364
	if (!ctx.cr6.eq) goto loc_82231364;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82231364:
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x8222cbe0
	ctx.lr = 0x8223136C;
	sub_8222CBE0(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82231380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82231394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,15864
	ctx.r3.s64 = ctx.r3.s64 + 15864;
	// bl 0x82220ef8
	ctx.lr = 0x822313A0;
	sub_82220EF8(ctx, base);
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// addi r3,r11,15720
	ctx.r3.s64 = ctx.r11.s64 + 15720;
	// bl 0x82230800
	ctx.lr = 0x822313AC;
	sub_82230800(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,30604
	ctx.r30.s64 = ctx.r30.s64 + 30604;
	// lwz r6,256(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x822313f0
	if (!ctx.cr6.eq) goto loc_822313F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82222400
	ctx.lr = 0x822313C8;
	sub_82222400(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822313f0
	if (ctx.cr6.eq) goto loc_822313F0;
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// lbz r5,396(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// addi r4,r30,268
	ctx.r4.s64 = ctx.r30.s64 + 268;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821f39f0
	ctx.lr = 0x822313E8;
	sub_821F39F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r4.u32);
loc_822313F0:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,26708
	ctx.r3.s64 = ctx.r3.s64 + 26708;
	// bl 0x82228700
	ctx.lr = 0x822313FC;
	sub_82228700(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,25864
	ctx.r3.s64 = ctx.r3.s64 + 25864;
	// bl 0x8222c900
	ctx.lr = 0x82231408;
	sub_8222C900(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,16992
	ctx.r3.s64 = ctx.r3.s64 + 16992;
	// bl 0x821f3d48
	ctx.lr = 0x82231414;
	sub_821F3D48(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-13992
	ctx.r3.s64 = ctx.r3.s64 + -13992;
	// bl 0x82230b70
	ctx.lr = 0x82231420;
	sub_82230B70(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-13980
	ctx.r3.s64 = ctx.r3.s64 + -13980;
	// bl 0x82228038
	ctx.lr = 0x8223142C;
	sub_82228038(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// bl 0x820ffc68
	ctx.lr = 0x8223143C;
	sub_820FFC68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221cf18
	ctx.lr = 0x82231444;
	sub_8221CF18(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82231490
	if (!ctx.cr6.eq) goto loc_82231490;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lfs f0,128(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-13544
	ctx.r11.s64 = ctx.r11.s64 + -13544;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8223147c
	if (ctx.cr6.gt) goto loc_8223147C;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,-24652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24652);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82231490
	if (!ctx.cr6.gt) goto loc_82231490;
loc_8223147C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_82231490:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231498"))) PPC_WEAK_FUNC(sub_82231498);
PPC_FUNC_IMPL(__imp__sub_82231498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822314A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,23108
	ctx.r30.s64 = ctx.r31.s64 + 23108;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82223750
	ctx.lr = 0x822314C8;
	sub_82223750(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,8840
	ctx.r3.s64 = ctx.r11.s64 + 8840;
	// bl 0x8222c180
	ctx.lr = 0x822314DC;
	sub_8222C180(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,23100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23100, ctx.r11.u32);
	// stw r30,23120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23120, ctx.r30.u32);
	// bl 0x82230638
	ctx.lr = 0x822314F4;
	sub_82230638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,1588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1588, ctx.r30.u8);
	// bl 0x822251d8
	ctx.lr = 0x82231500;
	sub_822251D8(ctx, base);
	// addi r3,r31,3544
	ctx.r3.s64 = ctx.r31.s64 + 3544;
	// stw r30,23096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23096, ctx.r30.u32);
	// bl 0x82219928
	ctx.lr = 0x8223150C;
	sub_82219928(ctx, base);
	// addi r3,r31,3572
	ctx.r3.s64 = ctx.r31.s64 + 3572;
	// bl 0x82219928
	ctx.lr = 0x82231514;
	sub_82219928(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,1932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221aed0
	ctx.lr = 0x82231530;
	sub_8221AED0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231538"))) PPC_WEAK_FUNC(sub_82231538);
PPC_FUNC_IMPL(__imp__sub_82231538) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r3,24
	ctx.r3.s64 = 24;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82231560:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82231560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r10,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r10.u8);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// bne cr6,0x822315a4
	if (!ctx.cr6.eq) goto loc_822315A4;
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r6,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r6.u8);
	// b 0x822315fc
	goto loc_822315FC;
loc_822315A4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822315c4
	if (ctx.cr6.eq) goto loc_822315C4;
	// lbz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 52);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822315c4
	if (!ctx.cr6.eq) goto loc_822315C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f7e8
	ctx.lr = 0x822315C0;
	sub_8222F7E8(ctx, base);
	// b 0x822315fc
	goto loc_822315FC;
loc_822315C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230ab0
	ctx.lr = 0x822315CC;
	sub_82230AB0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822315fc
	if (!ctx.cr6.eq) goto loc_822315FC;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r3,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
	// beq cr6,0x822315fc
	if (ctx.cr6.eq) goto loc_822315FC;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822315FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822315FC:
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

__attribute__((alias("__imp__sub_82231614"))) PPC_WEAK_FUNC(sub_82231614);
PPC_FUNC_IMPL(__imp__sub_82231614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231618"))) PPC_WEAK_FUNC(sub_82231618);
PPC_FUNC_IMPL(__imp__sub_82231618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f7,-8(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f3,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f11,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f10,f3,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f7,-28(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f8,-32(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f6,-24(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// std r3,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822316D8"))) PPC_WEAK_FUNC(sub_822316D8);
PPC_FUNC_IMPL(__imp__sub_822316D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,516(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lfs f11,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f6,f13,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f2,f13,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f1,f5,f12,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f13,f0,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82231740
	if (ctx.cr6.lt) goto loc_82231740;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231740:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82231768
	if (ctx.cr6.eq) goto loc_82231768;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f12,-28316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28316);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82231778
	if (!ctx.cr6.lt) goto loc_82231778;
	// lfs f13,19668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 19668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x82231770
	goto loc_82231770;
loc_82231768:
	// lfs f12,19668(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 19668);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
loc_82231770:
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8223177c
	if (ctx.cr6.gt) goto loc_8223177C;
loc_82231778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223177C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231784"))) PPC_WEAK_FUNC(sub_82231784);
PPC_FUNC_IMPL(__imp__sub_82231784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231788"))) PPC_WEAK_FUNC(sub_82231788);
PPC_FUNC_IMPL(__imp__sub_82231788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f8
	ctx.cr6.compare(ctx.f5.f64, ctx.f8.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// bsolr cr6
	if (ctx.cr6.so) return;
	// b 0x8234bc38
	sub_8234BC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822317F0"))) PPC_WEAK_FUNC(sub_822317F0);
PPC_FUNC_IMPL(__imp__sub_822317F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822317F4"))) PPC_WEAK_FUNC(sub_822317F4);
PPC_FUNC_IMPL(__imp__sub_822317F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822317F8"))) PPC_WEAK_FUNC(sub_822317F8);
PPC_FUNC_IMPL(__imp__sub_822317F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6820);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82231810
	if (ctx.cr6.eq) goto loc_82231810;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82231810:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231818"))) PPC_WEAK_FUNC(sub_82231818);
PPC_FUNC_IMPL(__imp__sub_82231818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,6336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6336);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x82231830
	if (ctx.cr6.eq) goto loc_82231830;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231830:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82231854
	if (!ctx.cr6.eq) goto loc_82231854;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6880(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6880);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82231858
	if (ctx.cr6.lt) goto loc_82231858;
loc_82231854:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231858:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231860"))) PPC_WEAK_FUNC(sub_82231860);
PPC_FUNC_IMPL(__imp__sub_82231860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fcmpu cr6,f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bge cr6,0x82231874
	if (!ctx.cr6.lt) goto loc_82231874;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82231874:
	// fcmpu cr6,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// blt cr6,0x8223188c
	if (ctx.cr6.lt) goto loc_8223188C;
	// bso cr6,0x8223188c
	if (ctx.cr6.so) goto loc_8223188C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8223188C:
	// fsubs f12,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f13,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f12,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822318B8"))) PPC_WEAK_FUNC(sub_822318B8);
PPC_FUNC_IMPL(__imp__sub_822318B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bne cr6,0x822319b0
	if (!ctx.cr6.eq) goto loc_822319B0;
	// lbz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82231954
	if (!ctx.cr6.eq) goto loc_82231954;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
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
loc_82231954:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82231964
	if (!ctx.cr6.eq) goto loc_82231964;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231964:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822319b0
	if (ctx.cr6.eq) goto loc_822319B0;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x822319b0
	if (ctx.cr6.eq) goto loc_822319B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x820a5ce0
	ctx.lr = 0x82231984;
	sub_820A5CE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
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
loc_822319B0:
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

__attribute__((alias("__imp__sub_822319C8"))) PPC_WEAK_FUNC(sub_822319C8);
PPC_FUNC_IMPL(__imp__sub_822319C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bgt cr6,0x82231a34
	if (ctx.cr6.gt) {
		sub_82231A34(ctx, base);
		return;
	}
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,6640
	ctx.r12.s64 = ctx.r12.s64 + 6640;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		// ERROR: 0x82231A14
		return;
	case 1:
		sub_82231A1C(ctx, base);
		return;
	case 2:
		// ERROR: 0x82231A14
		return;
	case 3:
		sub_82231A24(ctx, base);
		return;
	case 4:
		sub_82231A34(ctx, base);
		return;
	case 5:
		sub_82231A34(ctx, base);
		return;
	case 6:
		sub_82231A2C(ctx, base);
		return;
	case 7:
		sub_82231A2C(ctx, base);
		return;
	case 8:
		sub_82231A2C(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_822319F0"))) PPC_WEAK_FUNC(sub_822319F0);
PPC_FUNC_IMPL(__imp__sub_822319F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,6676(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6676);
	// lwz r17,6684(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6684);
	// lwz r17,6676(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6676);
	// lwz r17,6692(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6692);
	// lwz r17,6708(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6708);
	// lwz r17,6708(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6708);
	// lwz r17,6700(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6700);
	// lwz r17,6700(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6700);
	// lwz r17,6700(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6700);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231A1C"))) PPC_WEAK_FUNC(sub_82231A1C);
PPC_FUNC_IMPL(__imp__sub_82231A1C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231A24"))) PPC_WEAK_FUNC(sub_82231A24);
PPC_FUNC_IMPL(__imp__sub_82231A24) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231A2C"))) PPC_WEAK_FUNC(sub_82231A2C);
PPC_FUNC_IMPL(__imp__sub_82231A2C) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231A34"))) PPC_WEAK_FUNC(sub_82231A34);
PPC_FUNC_IMPL(__imp__sub_82231A34) {
	PPC_FUNC_PROLOGUE();
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,52520
	ctx.r9.u64 = ctx.r10.u64 | 52520;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,37004
	ctx.r6.u64 = ctx.r7.u64 | 37004;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82231a74
	if (ctx.cr6.lt) goto loc_82231A74;
	// lis r5,35
	ctx.r5.s64 = 2293760;
	// ori r4,r5,6184
	ctx.r4.u64 = ctx.r5.u64 | 6184;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// b 0x82231a78
	goto loc_82231A78;
loc_82231A74:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82231A78:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82231ab4
	if (ctx.cr6.eq) goto loc_82231AB4;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x82231a2c
	if (!ctx.cr6.eq) {
		sub_82231A2C(ctx, base);
		return;
	}
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r11,20362(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20362);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82231aac
	if (ctx.cr6.eq) goto loc_82231AAC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82231aac
	if (ctx.cr6.eq) goto loc_82231AAC;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82231AAC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82231AB4:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,19643(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 19643);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82231ad4
	if (ctx.cr6.eq) goto loc_82231AD4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82231AD4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231ADC"))) PPC_WEAK_FUNC(sub_82231ADC);
PPC_FUNC_IMPL(__imp__sub_82231ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231AE0"))) PPC_WEAK_FUNC(sub_82231AE0);
PPC_FUNC_IMPL(__imp__sub_82231AE0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822319c8
	ctx.lr = 0x82231AFC;
	sub_822319C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822319c8
	ctx.lr = 0x82231B08;
	sub_822319C8(ctx, base);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82231b2c
	if (ctx.cr6.eq) goto loc_82231B2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82231b2c
	if (ctx.cr6.eq) goto loc_82231B2C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82231b30
	if (!ctx.cr6.eq) goto loc_82231B30;
loc_82231B2C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82231B30:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82231b50
	if (!ctx.cr6.eq) goto loc_82231B50;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82231b50
	if (ctx.cr6.eq) goto loc_82231B50;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82231b54
	if (!ctx.cr6.eq) goto loc_82231B54;
loc_82231B50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82231B54:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r9,r11,-16608
	ctx.r9.s64 = ctx.r11.s64 + -16608;
	// beq cr6,0x82231b94
	if (ctx.cr6.eq) goto loc_82231B94;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4504(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4504);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82231b84
	if (ctx.cr6.gt) goto loc_82231B84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231B84:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82231b98
	if (!ctx.cr6.eq) goto loc_82231B98;
loc_82231B94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231B98:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82231bb8
	if (ctx.cr6.eq) goto loc_82231BB8;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x82231bb8
	if (ctx.cr6.eq) goto loc_82231BB8;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82231bbc
	if (!ctx.cr6.eq) goto loc_82231BBC;
loc_82231BB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231BBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82231bdc
	if (ctx.cr6.eq) goto loc_82231BDC;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82231bdc
	if (ctx.cr6.eq) goto loc_82231BDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82231bf4
	goto loc_82231BF4;
loc_82231BDC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,112
	ctx.r6.s64 = ctx.r9.s64 + 112;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
loc_82231BF4:
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

__attribute__((alias("__imp__sub_82231C0C"))) PPC_WEAK_FUNC(sub_82231C0C);
PPC_FUNC_IMPL(__imp__sub_82231C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231C10"))) PPC_WEAK_FUNC(sub_82231C10);
PPC_FUNC_IMPL(__imp__sub_82231C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82231C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822319c8
	ctx.lr = 0x82231C28;
	sub_822319C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822319c8
	ctx.lr = 0x82231C34;
	sub_822319C8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82231c68
	if (!ctx.cr6.eq) goto loc_82231C68;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82231c68
	if (!ctx.cr6.eq) goto loc_82231C68;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,6912(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	// lbz r8,19643(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19643);
	// lbz r7,15480(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15480);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82231d00
	if (!ctx.cr6.eq) goto loc_82231D00;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82231d00
	goto loc_82231D00;
loc_82231C68:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82231c9c
	if (!ctx.cr6.eq) goto loc_82231C9C;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x82231c9c
	if (!ctx.cr6.eq) goto loc_82231C9C;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,6912(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6912);
	// lbz r11,19643(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 19643);
	// lbz r10,15480(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15480);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82231d00
	if (!ctx.cr6.eq) goto loc_82231D00;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82231d00
	goto loc_82231D00;
loc_82231C9C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82231cd0
	if (!ctx.cr6.eq) goto loc_82231CD0;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82231cd0
	if (!ctx.cr6.eq) goto loc_82231CD0;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r7,6912(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	// lbz r6,20362(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20362);
	// lbz r5,15480(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 15480);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82231d00
	if (!ctx.cr6.eq) goto loc_82231D00;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82231d00
	goto loc_82231D00;
loc_82231CD0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82231d00
	if (!ctx.cr6.eq) goto loc_82231D00;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bne cr6,0x82231d00
	if (!ctx.cr6.eq) goto loc_82231D00;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,6912(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	// lbz r9,20362(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20362);
	// lbz r8,15480(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15480);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82231d00
	if (!ctx.cr6.eq) goto loc_82231D00;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82231D00:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,-16392
	ctx.r11.s64 = ctx.r11.s64 + -16392;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82231D28"))) PPC_WEAK_FUNC(sub_82231D28);
PPC_FUNC_IMPL(__imp__sub_82231D28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82231d44
	if (!ctx.cr6.eq) goto loc_82231D44;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// blr 
	return;
loc_82231D44:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82231d68
	if (ctx.cr6.eq) goto loc_82231D68;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82231d68
	if (ctx.cr6.eq) goto loc_82231D68;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82231d68
	if (ctx.cr6.eq) goto loc_82231D68;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,2660(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2660);
	// blr 
	return;
loc_82231D68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82231D70"))) PPC_WEAK_FUNC(sub_82231D70);
PPC_FUNC_IMPL(__imp__sub_82231D70) {
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
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,58420
	ctx.r10.u64 = ctx.r11.u64 | 58420;
	// ori r8,r9,58424
	ctx.r8.u64 = ctx.r9.u64 | 58424;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r4,r5,58404
	ctx.r4.u64 = ctx.r5.u64 | 58404;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r6,r7,58400
	ctx.r6.u64 = ctx.r7.u64 | 58400;
	// ori r11,r3,58416
	ctx.r11.u64 = ctx.r3.u64 | 58416;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// ori r9,r10,58412
	ctx.r9.u64 = ctx.r10.u64 | 58412;
	// ori r7,r8,58408
	ctx.r7.u64 = ctx.r8.u64 | 58408;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r5,6992
	ctx.r5.s64 = 6992;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r3,r3,-5424
	ctx.r3.s64 = ctx.r3.s64 + -5424;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x82231DF4;
	sub_8259D300(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,29264
	ctx.r5.s64 = 29264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,30848
	ctx.r3.s64 = ctx.r3.s64 + 30848;
	// bl 0x8259d300
	ctx.lr = 0x82231E08;
	sub_8259D300(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// li r5,6992
	ctx.r5.s64 = 6992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-14128
	ctx.r3.s64 = ctx.r3.s64 + -14128;
	// bl 0x8259d300
	ctx.lr = 0x82231E1C;
	sub_8259D300(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-14384
	ctx.r11.s64 = ctx.r11.s64 + -14384;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82231E2C:
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82231e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231E2C;
	// li r5,32128
	ctx.r5.s64 = 32128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x82231E48;
	sub_8259D300(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,64256
	ctx.r5.u64 = ctx.r5.u64 | 64256;
	// addi r3,r31,32128
	ctx.r3.s64 = ctx.r31.s64 + 32128;
	// bl 0x8259d300
	ctx.lr = 0x82231E5C;
	sub_8259D300(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,6096
	ctx.r3.s64 = ctx.r3.s64 + 6096;
	// bl 0x8259d300
	ctx.lr = 0x82231E74;
	sub_8259D300(ctx, base);
	// addi r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 + 14;
	// li r11,2008
	ctx.r11.s64 = 2008;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82231E80:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231e80
	if (!ctx.cr6.eq) goto loc_82231E80;
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

__attribute__((alias("__imp__sub_82231EAC"))) PPC_WEAK_FUNC(sub_82231EAC);
PPC_FUNC_IMPL(__imp__sub_82231EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82231EB0"))) PPC_WEAK_FUNC(sub_82231EB0);
PPC_FUNC_IMPL(__imp__sub_82231EB0) {
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
	// bl 0x82231d70
	ctx.lr = 0x82231EC8;
	sub_82231D70(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-30148
	ctx.r11.s64 = ctx.r11.s64 + -30148;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231ee4
	if (!ctx.cr6.eq) goto loc_82231EE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
loc_82231EE4:
	// lwz r10,-36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231ef8
	if (!ctx.cr6.eq) goto loc_82231EF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r10.u32);
loc_82231EF8:
	// lwz r10,-28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f0c
	if (!ctx.cr6.eq) goto loc_82231F0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
loc_82231F0C:
	// lwz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f20
	if (!ctx.cr6.eq) goto loc_82231F20;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
loc_82231F20:
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f34
	if (!ctx.cr6.eq) goto loc_82231F34;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
loc_82231F34:
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f48
	if (!ctx.cr6.eq) goto loc_82231F48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
loc_82231F48:
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f5c
	if (!ctx.cr6.eq) goto loc_82231F5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
loc_82231F5C:
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f70
	if (!ctx.cr6.eq) goto loc_82231F70;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
loc_82231F70:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f84
	if (!ctx.cr6.eq) goto loc_82231F84;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
loc_82231F84:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82231f98
	if (!ctx.cr6.eq) goto loc_82231F98;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82231F98:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r9,50
	ctx.r9.s64 = 50;
	// ori r10,r11,58440
	ctx.r10.u64 = ctx.r11.u64 | 58440;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82231FC0"))) PPC_WEAK_FUNC(sub_82231FC0);
PPC_FUNC_IMPL(__imp__sub_82231FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r5,-7132
	ctx.r5.s64 = ctx.r5.s64 + -7132;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// addis r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 131072;
	// ori r8,r9,5546
	ctx.r8.u64 = ctx.r9.u64 | 5546;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r7,r7,-5424
	ctx.r7.s64 = ctx.r7.s64 + -5424;
	// addi r11,r11,-5418
	ctx.r11.s64 = ctx.r11.s64 + -5418;
	// subf r6,r3,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r3.s64;
loc_82231FF4:
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// dcbt r4,r7
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r9,1004
	ctx.r4.s64 = ctx.r9.s64 + 1004;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-6(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -6, temp.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82231ff4
	if (ctx.cr6.lt) goto loc_82231FF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223203C"))) PPC_WEAK_FUNC(sub_8223203C);
PPC_FUNC_IMPL(__imp__sub_8223203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232040"))) PPC_WEAK_FUNC(sub_82232040);
PPC_FUNC_IMPL(__imp__sub_82232040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82232048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82232210
	if (ctx.cr6.eq) goto loc_82232210;
	// lbz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82232210
	if (ctx.cr6.eq) goto loc_82232210;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// lbz r8,15(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 15);
	// addi r10,r11,-15992
	ctx.r10.s64 = ctx.r11.s64 + -15992;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82232210
	if (ctx.cr6.eq) goto loc_82232210;
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// extsb r30,r3
	ctx.r30.s64 = ctx.r3.s8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x822320c0
	if (ctx.cr6.eq) goto loc_822320C0;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822320c4
	if (!ctx.cr6.eq) goto loc_822320C4;
loc_822320C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822320C4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223211c
	if (ctx.cr6.eq) goto loc_8223211C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r8,597(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 597);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8223211c
	if (!ctx.cr6.eq) goto loc_8223211C;
	// lbz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822320fc
	if (ctx.cr6.eq) goto loc_822320FC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82232100
	if (!ctx.cr6.eq) goto loc_82232100;
loc_822320FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82232100:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223211c
	if (ctx.cr6.eq) goto loc_8223211C;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r3,597(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 597);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82232210
	if (ctx.cr6.eq) goto loc_82232210;
loc_8223211C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5ea8
	ctx.lr = 0x82232124;
	sub_820A5EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232158
	if (ctx.cr6.eq) goto loc_82232158;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,6336(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6336);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x8223214c
	if (ctx.cr6.eq) goto loc_8223214C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223214C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82232210
	if (!ctx.cr6.eq) goto loc_82232210;
loc_82232158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a5ea8
	ctx.lr = 0x82232160;
	sub_820A5EA8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82232194
	if (ctx.cr6.eq) goto loc_82232194;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r3,6336(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6336);
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82232188
	if (ctx.cr6.eq) goto loc_82232188;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82232188:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82232210
	if (!ctx.cr6.eq) goto loc_82232210;
loc_82232194:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x822321a8
	if (ctx.cr6.eq) goto loc_822321A8;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822321ac
	if (!ctx.cr6.eq) goto loc_822321AC;
loc_822321A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822321AC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822321c8
	if (ctx.cr6.eq) goto loc_822321C8;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r5,625(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 625);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// beq cr6,0x82232210
	if (ctx.cr6.eq) goto loc_82232210;
loc_822321C8:
	// lbz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822321e4
	if (ctx.cr6.eq) goto loc_822321E4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822321e8
	if (!ctx.cr6.eq) goto loc_822321E8;
loc_822321E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822321E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232204
	if (ctx.cr6.eq) goto loc_82232204;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r9,625(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 625);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x82232210
	if (ctx.cr6.eq) goto loc_82232210;
loc_82232204:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82232210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223221C"))) PPC_WEAK_FUNC(sub_8223221C);
PPC_FUNC_IMPL(__imp__sub_8223221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232220"))) PPC_WEAK_FUNC(sub_82232220);
PPC_FUNC_IMPL(__imp__sub_82232220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x82232228;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bba4
	ctx.lr = 0x82232230;
	__savefpr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// ori r8,r9,58428
	ctx.r8.u64 = ctx.r9.u64 | 58428;
	// lfs f0,-1548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1548);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r9,436
	ctx.r9.s64 = 436;
	// addi r11,r11,-7136
	ctx.r11.s64 = ctx.r11.s64 + -7136;
	// addi r3,r3,5224
	ctx.r3.s64 = ctx.r3.s64 + 5224;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// addis r14,r31,4
	ctx.r14.s64 = ctx.r31.s64 + 262144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ori r6,r7,58432
	ctx.r6.u64 = ctx.r7.u64 | 58432;
	// addi r3,r9,12048
	ctx.r3.s64 = ctx.r9.s64 + 12048;
	// stwx r22,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r22.u32);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// sth r22,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r22.u16);
	// addi r5,r5,1568
	ctx.r5.s64 = ctx.r5.s64 + 1568;
	// sth r22,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r22.u16);
	// addi r14,r14,-7112
	ctx.r14.s64 = ctx.r14.s64 + -7112;
	// sth r22,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r22.u16);
	// li r4,1828
	ctx.r4.s64 = 1828;
	// stwx r22,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r22.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r10,r10,-7132
	ctx.r10.s64 = ctx.r10.s64 + -7132;
	// stw r22,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r22.u32);
	// sth r4,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r7,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r7.u16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// addis r17,r31,1
	ctx.r17.s64 = ctx.r31.s64 + 65536;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addis r18,r31,2
	ctx.r18.s64 = ctx.r31.s64 + 131072;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addis r25,r31,2
	ctx.r25.s64 = ctx.r31.s64 + 131072;
	// addi r8,r9,15706
	ctx.r8.s64 = ctx.r9.s64 + 15706;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r20,r31,32128
	ctx.r20.s64 = ctx.r31.s64 + 32128;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r17,r17,30848
	ctx.r17.s64 = ctx.r17.s64 + 30848;
	// addi r18,r18,-5424
	ctx.r18.s64 = ctx.r18.s64 + -5424;
	// addi r25,r25,6096
	ctx.r25.s64 = ctx.r25.s64 + 6096;
	// stfsx f0,r7,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// lwz r19,0(r14)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r6,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82232348
	if (!ctx.cr6.eq) goto loc_82232348;
	// stw r22,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r22.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbf0
	ctx.lr = 0x82232344;
	__restfpr_27(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_82232348:
	// neg r16,r10
	ctx.r16.s64 = -ctx.r10.s64;
	// neg r15,r11
	ctx.r15.s64 = -ctx.r11.s64;
loc_82232350:
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r17
	// li r3,128
	ctx.r3.s64 = 128;
	// dcbt r3,r18
	// lfs f0,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82232378
	if (ctx.cr6.lt) goto loc_82232378;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82232378:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223239c
	if (ctx.cr6.eq) goto loc_8223239C;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r17,r17,8
	ctx.r17.s64 = ctx.r17.s64 + 8;
	// b 0x822323b0
	goto loc_822323B0;
loc_8223239C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r18,r18,8
	ctx.r18.s64 = ctx.r18.s64 + 8;
loc_822323B0:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82232648
	if (ctx.cr6.eq) goto loc_82232648;
	// lhz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lhz r3,94(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// extsh r29,r23
	ctx.r29.s64 = ctx.r23.s16;
	// extsh r26,r3
	ctx.r26.s64 = ctx.r3.s16;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f27.f64 = double(temp.f32);
	// ble cr6,0x8223250c
	if (!ctx.cr6.gt) goto loc_8223250C;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82232420:
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r5,r27
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f28,f12
	ctx.cr6.compare(ctx.f28.f64, ctx.f12.f64);
	// ble cr6,0x82232500
	if (!ctx.cr6.gt) goto loc_82232500;
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bge cr6,0x82232500
	if (!ctx.cr6.lt) goto loc_82232500;
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f27,f10
	ctx.cr6.compare(ctx.f27.f64, ctx.f10.f64);
	// ble cr6,0x82232500
	if (!ctx.cr6.gt) goto loc_82232500;
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f30,f9
	ctx.cr6.compare(ctx.f30.f64, ctx.f9.f64);
	// bge cr6,0x82232500
	if (!ctx.cr6.lt) goto loc_82232500;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232040
	ctx.lr = 0x8223249C;
	sub_82232040(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82232500
	if (ctx.cr6.eq) goto loc_82232500;
	// lfs f8,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f29,f8
	ctx.cr6.compare(ctx.f29.f64, ctx.f8.f64);
	// beq cr6,0x82232500
	if (ctx.cr6.eq) goto loc_82232500;
	// cmpwi cr6,r19,2048
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2048, ctx.xer);
	// bge cr6,0x82232500
	if (!ctx.cr6.lt) goto loc_82232500;
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r25
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x822324d4
	if (ctx.cr6.gt) goto loc_822324D4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822324D4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r8.u32);
	// bge cr6,0x822324ec
	if (!ctx.cr6.lt) goto loc_822324EC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822324EC:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r7.u32);
	// addi r25,r25,48
	ctx.r25.s64 = ctx.r25.s64 + 48;
loc_82232500:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82232420
	if (ctx.cr6.lt) goto loc_82232420;
loc_8223250C:
	// rlwinm r6,r24,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82232618
	if (!ctx.cr6.gt) goto loc_82232618;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82232530:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r3
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f28,f7
	ctx.cr6.compare(ctx.f28.f64, ctx.f7.f64);
	// ble cr6,0x8223260c
	if (!ctx.cr6.gt) goto loc_8223260C;
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f31,f6
	ctx.cr6.compare(ctx.f31.f64, ctx.f6.f64);
	// bge cr6,0x8223260c
	if (!ctx.cr6.lt) goto loc_8223260C;
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f27,f5
	ctx.cr6.compare(ctx.f27.f64, ctx.f5.f64);
	// ble cr6,0x8223260c
	if (!ctx.cr6.gt) goto loc_8223260C;
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f30,f4
	ctx.cr6.compare(ctx.f30.f64, ctx.f4.f64);
	// bge cr6,0x8223260c
	if (!ctx.cr6.lt) goto loc_8223260C;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232040
	ctx.lr = 0x822325A8;
	sub_82232040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223260c
	if (ctx.cr6.eq) goto loc_8223260C;
	// lfs f3,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f29,f3
	ctx.cr6.compare(ctx.f29.f64, ctx.f3.f64);
	// beq cr6,0x8223260c
	if (ctx.cr6.eq) goto loc_8223260C;
	// cmpwi cr6,r19,2048
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2048, ctx.xer);
	// bge cr6,0x8223260c
	if (!ctx.cr6.lt) goto loc_8223260C;
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r25
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x822325e0
	if (ctx.cr6.gt) goto loc_822325E0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822325E0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r7.u32);
	// bge cr6,0x822325f8
	if (!ctx.cr6.lt) goto loc_822325F8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822325F8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r6.u32);
	// addi r25,r25,48
	ctx.r25.s64 = ctx.r25.s64 + 48;
loc_8223260C:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82232530
	if (!ctx.cr6.eq) goto loc_82232530;
loc_82232618:
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r23.u16);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// b 0x822326d0
	goto loc_822326D0;
loc_82232648:
	// rlwinm r4,r21,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822326d0
	if (!ctx.cr6.gt) goto loc_822326D0;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82232678:
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822326ac
	if (ctx.cr6.eq) goto loc_822326AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82232678
	if (ctx.cr6.lt) goto loc_82232678;
	// b 0x822326d0
	goto loc_822326D0;
loc_822326AC:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sthx r7,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
loc_822326D0:
	// or r3,r15,r16
	ctx.r3.u64 = ctx.r15.u64 | ctx.r16.u64;
	// rlwinm r11,r3,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82232350
	if (!ctx.cr6.eq) goto loc_82232350;
	// stw r19,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r19.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbf0
	ctx.lr = 0x822326F0;
	__restfpr_27(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822326F4"))) PPC_WEAK_FUNC(sub_822326F4);
PPC_FUNC_IMPL(__imp__sub_822326F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822326F8"))) PPC_WEAK_FUNC(sub_822326F8);
PPC_FUNC_IMPL(__imp__sub_822326F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8223279c
	if (!ctx.cr6.gt) goto loc_8223279C;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82232714:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// clrldi r31,r11,58
	ctx.r31.u64 = ctx.r11.u64 & 0x3F;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// addi r10,r10,30970
	ctx.r10.s64 = ctx.r10.s64 + 30970;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// sld r6,r7,r31
	ctx.r6.u64 = ctx.r31.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r31.u8 & 0x7F));
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// bne cr6,0x8223274c
	if (!ctx.cr6.eq) goto loc_8223274C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8223274C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223278c
	if (ctx.cr6.eq) goto loc_8223278C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223278c
	if (ctx.cr6.eq) goto loc_8223278C;
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x8223278c
	if (!ctx.cr6.eq) goto loc_8223278C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_8223278C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82232714
	if (!ctx.cr6.eq) goto loc_82232714;
loc_8223279C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822327A4"))) PPC_WEAK_FUNC(sub_822327A4);
PPC_FUNC_IMPL(__imp__sub_822327A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822327A8"))) PPC_WEAK_FUNC(sub_822327A8);
PPC_FUNC_IMPL(__imp__sub_822327A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,58424
	ctx.r10.u64 = ctx.r11.u64 | 58424;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822327B8"))) PPC_WEAK_FUNC(sub_822327B8);
PPC_FUNC_IMPL(__imp__sub_822327B8) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-14384
	ctx.r11.s64 = ctx.r11.s64 + -14384;
loc_822327C4:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpdi cr6,r10,-1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, -1, ctx.xer);
	// bne cr6,0x822327e8
	if (!ctx.cr6.eq) goto loc_822327E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x822327c4
	if (ctx.cr6.lt) goto loc_822327C4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822327E8:
	// addi r8,r9,30970
	ctx.r8.s64 = ctx.r9.s64 + 30970;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// ldx r8,r7,r3
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r3.u32);
loc_822327FC:
	// and r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// beq cr6,0x82232820
	if (ctx.cr6.eq) goto loc_82232820;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x822327fc
	if (ctx.cr6.lt) goto loc_822327FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82232820:
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223282C"))) PPC_WEAK_FUNC(sub_8223282C);
PPC_FUNC_IMPL(__imp__sub_8223282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232830"))) PPC_WEAK_FUNC(sub_82232830);
PPC_FUNC_IMPL(__imp__sub_82232830) {
	PPC_FUNC_PROLOGUE();
	// addis r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 262144;
	// li r9,1984
	ctx.r9.s64 = 1984;
	// addi r7,r7,-14136
	ctx.r7.s64 = ctx.r7.s64 + -14136;
loc_8223283C:
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// cmpdi cr6,r8,-1
	ctx.cr6.compare<int64_t>(ctx.r8.s64, -1, ctx.xer);
	// beq cr6,0x82232884
	if (ctx.cr6.eq) goto loc_82232884;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,63
	ctx.r11.s64 = 63;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82232854:
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x8223286c
	if (!ctx.cr6.eq) goto loc_8223286C;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,2008
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2008, ctx.xer);
	// blt cr6,0x8223289c
	if (ctx.cr6.lt) goto loc_8223289C;
loc_8223286C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82232854
	if (!ctx.cr6.lt) goto loc_82232854;
	// cmpwi cr6,r9,1984
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1984, ctx.xer);
	// bne cr6,0x82232894
	if (!ctx.cr6.eq) goto loc_82232894;
loc_82232884:
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8223283c
	if (!ctx.cr6.lt) goto loc_8223283C;
loc_82232894:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8223289C:
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822328A4"))) PPC_WEAK_FUNC(sub_822328A4);
PPC_FUNC_IMPL(__imp__sub_822328A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822328A8"))) PPC_WEAK_FUNC(sub_822328A8);
PPC_FUNC_IMPL(__imp__sub_822328A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822328e8
	if (!ctx.cr6.gt) goto loc_822328E8;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_822328C8:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x822328e8
	if (ctx.cr6.eq) goto loc_822328E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822328c8
	if (ctx.cr6.lt) goto loc_822328C8;
loc_822328E8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82232908
	if (!ctx.cr6.eq) goto loc_82232908;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
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
loc_82232908:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82232950
	if (ctx.cr6.eq) goto loc_82232950;
loc_82232920:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82232920
	if (!ctx.cr6.eq) goto loc_82232920;
loc_82232950:
	// addi r31,r5,-2
	ctx.r31.s64 = ctx.r5.s64 + -2;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8223297c
	if (!ctx.cr6.lt) goto loc_8223297C;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8259d7c0
	ctx.lr = 0x8223297C;
	sub_8259D7C0(ctx, base);
loc_8223297C:
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

__attribute__((alias("__imp__sub_82232994"))) PPC_WEAK_FUNC(sub_82232994);
PPC_FUNC_IMPL(__imp__sub_82232994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232998"))) PPC_WEAK_FUNC(sub_82232998);
PPC_FUNC_IMPL(__imp__sub_82232998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x822329cc
	if (!ctx.cr6.gt) goto loc_822329CC;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_822329A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x822329c8
	if (ctx.cr6.gt) goto loc_822329C8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822329a8
	if (ctx.cr6.lt) goto loc_822329A8;
	// b 0x822329cc
	goto loc_822329CC;
loc_822329C8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_822329CC:
	// subf r10,r9,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82232a2c
	if (ctx.cr6.lt) goto loc_82232A2C;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_822329E8:
	// lfs f13,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// bgt cr6,0x82232aa0
	if (ctx.cr6.gt) goto loc_82232AA0;
	// lfs f12,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// bgt cr6,0x82232a6c
	if (ctx.cr6.gt) goto loc_82232A6C;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f2
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// bgt cr6,0x82232a84
	if (ctx.cr6.gt) goto loc_82232A84;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// bgt cr6,0x82232a9c
	if (ctx.cr6.gt) goto loc_82232A9C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822329e8
	if (ctx.cr6.lt) goto loc_822329E8;
loc_82232A2C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82232aa0
	if (!ctx.cr6.lt) goto loc_82232AA0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82232A3C:
	// lfs f9,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f2
	ctx.cr6.compare(ctx.f9.f64, ctx.f2.f64);
	// bgt cr6,0x82232aa0
	if (ctx.cr6.gt) goto loc_82232AA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82232a3c
	if (ctx.cr6.lt) goto loc_82232A3C;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82232A6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82232A84:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82232A9C:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82232AA0:
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232AB4"))) PPC_WEAK_FUNC(sub_82232AB4);
PPC_FUNC_IMPL(__imp__sub_82232AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232AB8"))) PPC_WEAK_FUNC(sub_82232AB8);
PPC_FUNC_IMPL(__imp__sub_82232AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82232AC4:
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// dcbt r0,r10
	// srawi r5,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 6;
	// clrldi r6,r9,58
	ctx.r6.u64 = ctx.r9.u64 & 0x3F;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// addi r10,r10,30970
	ctx.r10.s64 = ctx.r10.s64 + 30970;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r3.u32);
	// sld r10,r8,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r6.u8 & 0x7F));
	// and r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 & ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82232afc
	if (!ctx.cr6.eq) goto loc_82232AFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82232AFC:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82232b28
	if (ctx.cr6.eq) goto loc_82232B28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232b28
	if (ctx.cr6.eq) goto loc_82232B28;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82232b28
	if (!ctx.cr6.eq) goto loc_82232B28;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82232b40
	if (ctx.cr6.eq) goto loc_82232B40;
loc_82232B28:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,2008
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2008, ctx.xer);
	// blt cr6,0x82232ac4
	if (ctx.cr6.lt) goto loc_82232AC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82232B40:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232B48"))) PPC_WEAK_FUNC(sub_82232B48);
PPC_FUNC_IMPL(__imp__sub_82232B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82232B54:
	// srawi r6,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 6;
	// clrldi r7,r10,58
	ctx.r7.u64 = ctx.r10.u64 & 0x3F;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// addi r5,r11,30970
	ctx.r5.s64 = ctx.r11.s64 + 30970;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// sld r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x82232b84
	if (!ctx.cr6.eq) goto loc_82232B84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82232B84:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82232bcc
	if (ctx.cr6.eq) goto loc_82232BCC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82232bcc
	if (ctx.cr6.eq) goto loc_82232BCC;
	// lbz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82232bb8
	if (!ctx.cr6.eq) goto loc_82232BB8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,640(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// b 0x82232bc8
	goto loc_82232BC8;
loc_82232BB8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82232bcc
	if (!ctx.cr6.eq) goto loc_82232BCC;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
loc_82232BC8:
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82232BCC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r10,2008
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2008, ctx.xer);
	// blt cr6,0x82232b54
	if (ctx.cr6.lt) goto loc_82232B54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232BE4"))) PPC_WEAK_FUNC(sub_82232BE4);
PPC_FUNC_IMPL(__imp__sub_82232BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232BE8"))) PPC_WEAK_FUNC(sub_82232BE8);
PPC_FUNC_IMPL(__imp__sub_82232BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82232c38
	if (!ctx.cr6.eq) goto loc_82232C38;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82232c2c
	if (!ctx.cr6.gt) goto loc_82232C2C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r9,r4,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r4.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82232C08:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82232c08
	if (!ctx.cr6.eq) goto loc_82232C08;
loc_82232C2C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82232C38:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82232c4c
	if (!ctx.cr6.eq) goto loc_82232C4C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82232C4C:
	// add r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// addi r7,r3,-1
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82232d38
	if (ctx.cr6.lt) goto loc_82232D38;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82232C7C:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82232c94
	if (ctx.cr6.gt) goto loc_82232C94;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82232C94:
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82232cc4
	if (ctx.cr6.eq) goto loc_82232CC4;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// blt cr6,0x82232d38
	if (ctx.cr6.lt) goto loc_82232D38;
	// b 0x82232ce4
	goto loc_82232CE4;
loc_82232CC4:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// blt cr6,0x82232cfc
	if (ctx.cr6.lt) goto loc_82232CFC;
loc_82232CE4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82232c7c
	if (!ctx.cr6.lt) goto loc_82232C7C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82232CFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82232d38
	if (ctx.cr6.lt) goto loc_82232D38;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82232D14:
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bge cr6,0x82232d14
	if (!ctx.cr6.lt) goto loc_82232D14;
loc_82232D38:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232D40"))) PPC_WEAK_FUNC(sub_82232D40);
PPC_FUNC_IMPL(__imp__sub_82232D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rldicr r11,r10,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpd cr6,r4,r3
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r3.s64, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232D7C"))) PPC_WEAK_FUNC(sub_82232D7C);
PPC_FUNC_IMPL(__imp__sub_82232D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82232D80"))) PPC_WEAK_FUNC(sub_82232D80);
PPC_FUNC_IMPL(__imp__sub_82232D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82232DA0:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82232da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82232DA0;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// lvx128 v12,r0,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v11,v12,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// lvx128 v9,r0,r10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v8,v12,v13
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v10,v9,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v12,r0,r9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v7,v9,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// vmrghw v9,v11,v10
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// vmrglw v11,v11,v10
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// vmrghw v10,v8,v7
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// addi r9,r3,32128
	ctx.r9.s64 = ctx.r3.s64 + 32128;
	// vmulfp128 v8,v9,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v9,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v7,v11,v12
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v11,v11,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// vminfp v10,v8,v9
	_mm_store_ps(ctx.v10.f32, _mm_min_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaxfp v9,v8,v9
	_mm_store_ps(ctx.v9.f32, _mm_max_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vminfp v8,v7,v11
	_mm_store_ps(ctx.v8.f32, _mm_min_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaxfp v7,v7,v11
	_mm_store_ps(ctx.v7.f32, _mm_max_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)));
	// vminfp v6,v12,v13
	_mm_store_ps(ctx.v6.f32, _mm_min_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaxfp v5,v12,v13
	_mm_store_ps(ctx.v5.f32, _mm_max_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v9,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v8,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v7,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-136(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f11,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,-144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lfs f5,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f9,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,-140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fadds f8,f6,f9
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f8,-136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stvx v5,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f3,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f6,-112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fadds f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,-108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// lfs f3,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lvx128 v4,r0,r7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v13,v4,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f0,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// addi r6,r1,-112
	ctx.r6.s64 = ctx.r1.s64 + -112;
	// lvx128 v3,r0,r6
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx v13,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// vaddfp v0,v3,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r5,28(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r4,32128
	ctx.r3.s64 = ctx.r4.s64 + 32128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx v0,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82232F30"))) PPC_WEAK_FUNC(sub_82232F30);
PPC_FUNC_IMPL(__imp__sub_82232F30) {
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
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// ble cr6,0x82232f7c
	if (!ctx.cr6.gt) goto loc_82232F7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x82232F70;
	sub_8210B3C8(ctx, base);
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82232F7C:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232ff0
	if (ctx.cr6.eq) goto loc_82232FF0;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82232fd4
	if (!ctx.cr6.gt) goto loc_82232FD4;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f2,f10
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// bl 0x82231860
	ctx.lr = 0x82232FB0;
	sub_82231860(ctx, base);
	// lfs f9,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x82232FC4;
	sub_8210B3C8(ctx, base);
	// lfs f7,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82233034
	goto loc_82233034;
loc_82232FD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f5,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// b 0x82233034
	goto loc_82233034;
loc_82232FF0:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82233034
	if (!ctx.cr6.gt) goto loc_82233034;
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f12,f1,f13,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x82233028;
	sub_8210B3C8(ctx, base);
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82233034:
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
}

__attribute__((alias("__imp__sub_82233050"))) PPC_WEAK_FUNC(sub_82233050);
PPC_FUNC_IMPL(__imp__sub_82233050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,14692(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14692);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82233080
	if (ctx.cr6.eq) goto loc_82233080;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82233080
	if (ctx.cr6.lt) goto loc_82233080;
	// bso cr6,0x82233080
	if (ctx.cr6.so) goto loc_82233080;
	// stfs f13,14692(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 14692, temp.u32);
loc_82233080:
	// lwz r11,6732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6732);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822330a4
	if (!ctx.cr6.eq) goto loc_822330A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,6544(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6544, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6548, temp.u32);
	// stfs f0,6564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6564, temp.u32);
	// blr 
	return;
loc_822330A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,6548(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6548, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6544, temp.u32);
	// stfs f0,6564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6564, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822330C4"))) PPC_WEAK_FUNC(sub_822330C4);
PPC_FUNC_IMPL(__imp__sub_822330C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822330C8"))) PPC_WEAK_FUNC(sub_822330C8);
PPC_FUNC_IMPL(__imp__sub_822330C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822330D0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r3,r10,28544
	ctx.r3.s64 = ctx.r10.s64 + 28544;
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,14684(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14684);
	// stfs f30,6552(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 6552, temp.u32);
	// lfs f31,-1680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1680);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,13524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82233154
	if (ctx.cr6.lt) goto loc_82233154;
	// bso cr6,0x82233154
	if (ctx.cr6.so) goto loc_82233154;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// blt cr6,0x82233154
	if (ctx.cr6.lt) goto loc_82233154;
	// bso cr6,0x82233154
	if (ctx.cr6.so) goto loc_82233154;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82233154
	if (!ctx.cr6.lt) goto loc_82233154;
	// lbz r11,18190(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18190);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233424
	if (ctx.cr6.eq) goto loc_82233424;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r27,6614(r26)
	PPC_STORE_U8(ctx.r26.u32 + 6614, ctx.r27.u8);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,6824(r26)
	PPC_STORE_U8(ctx.r26.u32 + 6824, ctx.r27.u8);
	// b 0x82233418
	goto loc_82233418;
loc_82233154:
	// lbz r10,15480(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15480);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82233424
	if (ctx.cr6.eq) goto loc_82233424;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,21056
	ctx.r31.s64 = ctx.r11.s64 + 21056;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// addi r10,r31,-192
	ctx.r10.s64 = ctx.r31.s64 + -192;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bgt cr6,0x822331a0
	if (ctx.cr6.gt) goto loc_822331A0;
	// bso cr6,0x822331a0
	if (ctx.cr6.so) goto loc_822331A0;
	// lbz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822331a4
	if (ctx.cr6.eq) goto loc_822331A4;
loc_822331A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822331A4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822333e4
	if (ctx.cr6.eq) goto loc_822333E4;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r31,-220
	ctx.r28.s64 = ctx.r31.s64 + -220;
	// lfsx f12,r29,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// ble cr6,0x822331d4
	if (!ctx.cr6.gt) goto loc_822331D4;
	// bl 0x8210b3c8
	ctx.lr = 0x822331C8;
	sub_8210B3C8(ctx, base);
	// lfsx f11,r29,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfsx f10,r29,r28
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, temp.u32);
loc_822331D4:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r5,r31,504
	ctx.r5.s64 = ctx.r31.s64 + 504;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 424);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lhz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 424);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r29,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lfs f0,-16796(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16796);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,-1616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f1,r29,r28
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bgt cr6,0x82233350
	if (ctx.cr6.gt) goto loc_82233350;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,12940
	ctx.r12.s64 = ctx.r12.s64 + 12940;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_822332A0;
	case 1:
		goto loc_822332BC;
	case 2:
		goto loc_822332D8;
	case 3:
		goto loc_822332F4;
	case 4:
		goto loc_82233320;
	default:
		__builtin_unreachable();
	}
	// lwz r17,12960(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12960);
	// lwz r17,12988(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12988);
	// lwz r17,13016(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13016);
	// lwz r17,13044(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13044);
	// lwz r17,13088(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
loc_822332A0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,17976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17976);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,-1576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1576);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82233338
	goto loc_82233338;
loc_822332BC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,17976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17976);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,-12440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12440);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,-712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -712);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82233338
	goto loc_82233338;
loc_822332D8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f12,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,17976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17976);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f11,-12444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12444);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82233338
	goto loc_82233338;
loc_822332F4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stb r27,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r27.u8);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,-12448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12448);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// b 0x82233350
	goto loc_82233350;
loc_82233320:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,17976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17976);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-1528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1528);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f11,-12452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12452);
	ctx.f11.f64 = double(temp.f32);
loc_82233338:
	// stfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stb r27,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r27.u8);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82233350:
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822333dc
	if (!ctx.cr6.eq) goto loc_822333DC;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 424);
	// lis r8,-21846
	ctx.r8.s64 = -1431699456;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// ori r7,r8,43691
	ctx.r7.u64 = ctx.r8.u64 | 43691;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r4,-13108
	ctx.r4.s64 = -859045888;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r3,r4,52429
	ctx.r3.u64 = ctx.r4.u64 | 52429;
	// mulhwu r6,r11,r7
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lhz r8,424(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 424);
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r6,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u32);
	// mulhwu r4,r11,r3
	ctx.r4.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stwx r11,r29,r5
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u32);
	// b 0x822333e4
	goto loc_822333E4;
loc_822333DC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
loc_822333E4:
	// lwz r9,14684(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14684);
	// addi r10,r31,-192
	ctx.r10.s64 = ctx.r31.s64 + -192;
	// lbz r8,15480(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15480);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82232f30
	ctx.lr = 0x82233400;
	sub_82232F30(ctx, base);
	// lwz r6,14684(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14684);
	// addi r5,r31,-192
	ctx.r5.s64 = ctx.r31.s64 + -192;
	// lbz r4,15480(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 15480);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// lfsx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82233418:
	// stfs f0,6564(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 6564, temp.u32);
	// stfs f0,6544(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 6544, temp.u32);
	// stfs f30,6548(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 6548, temp.u32);
loc_82233424:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82233434"))) PPC_WEAK_FUNC(sub_82233434);
PPC_FUNC_IMPL(__imp__sub_82233434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233438"))) PPC_WEAK_FUNC(sub_82233438);
PPC_FUNC_IMPL(__imp__sub_82233438) {
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
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lwz r9,14684(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14684);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r10,-1816
	ctx.r10.s64 = ctx.r10.s64 + -1816;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,18112(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18112);
	ctx.f11.f64 = double(temp.f32);
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfd f12,-4816(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4816);
	// lwz r11,6820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6820);
	// lfs f0,-12432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12432);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f1,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f0,f8,f0,f12
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfs f0,6552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6552, temp.u32);
	// beq cr6,0x822334b8
	if (ctx.cr6.eq) goto loc_822334B8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822334bc
	if (!ctx.cr6.eq) goto loc_822334BC;
loc_822334B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822334BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822334d0
	if (!ctx.cr6.eq) goto loc_822334D0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,6820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6820, ctx.r10.u32);
loc_822334D0:
	// lfs f7,18116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x822334f8
	if (!ctx.cr6.gt) goto loc_822334F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,6564(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6564, temp.u32);
	// stfs f1,6544(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6544, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82233558
	goto loc_82233558;
loc_822334F8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-28260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28260);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x82233538
	if (!ctx.cr6.lt) goto loc_82233538;
	// bl 0x82233050
	ctx.lr = 0x82233510;
	sub_82233050(ctx, base);
	// lwz r9,14684(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14684);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f4,18116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,-12436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x8223355c
	if (!ctx.cr6.lt) goto loc_8223355C;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,14659(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14659, ctx.r7.u8);
	// b 0x8223355c
	goto loc_8223355C;
loc_82233538:
	// lwz r6,6912(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6912);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,13520(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13520);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82233558
	if (ctx.cr6.eq) goto loc_82233558;
	// stfs f0,6544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6544, temp.u32);
	// stfs f0,6564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6564, temp.u32);
loc_82233558:
	// stfs f0,6548(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6548, temp.u32);
loc_8223355C:
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822335f8
	if (!ctx.cr6.eq) goto loc_822335F8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f0,14696(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14696);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82233594
	if (!ctx.cr6.gt) goto loc_82233594;
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f3,f0,f1
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// b 0x82233598
	goto loc_82233598;
loc_82233594:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_82233598:
	// lfs f11,6544(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6544);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,14688(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14688);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f11,f2
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// beq cr6,0x822335e0
	if (ctx.cr6.eq) goto loc_822335E0;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bne cr6,0x822335cc
	if (!ctx.cr6.eq) goto loc_822335CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,3628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x822335cc
	if (!ctx.cr6.lt) goto loc_822335CC;
	// stfs f10,14696(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 14696, temp.u32);
	// b 0x822335dc
	goto loc_822335DC;
loc_822335CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-27244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f13,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,14696(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 14696, temp.u32);
loc_822335DC:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_822335E0:
	// stfs f11,14688(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 14688, temp.u32);
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// beq cr6,0x822335f0
	if (ctx.cr6.eq) goto loc_822335F0;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_822335F0:
	// stfs f0,6564(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6564, temp.u32);
	// stfs f0,6544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6544, temp.u32);
loc_822335F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233608"))) PPC_WEAK_FUNC(sub_82233608);
PPC_FUNC_IMPL(__imp__sub_82233608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,14692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 14692, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233620"))) PPC_WEAK_FUNC(sub_82233620);
PPC_FUNC_IMPL(__imp__sub_82233620) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822337b0
	if (ctx.cr6.eq) goto loc_822337B0;
	// lbz r11,625(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 625);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822337b0
	if (ctx.cr6.eq) goto loc_822337B0;
	// lwz r11,14684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// addi r4,r4,13488
	ctx.r4.s64 = ctx.r4.s64 + 13488;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// bl 0x820b7bc0
	ctx.lr = 0x82233668;
	sub_820B7BC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r11,-15544
	ctx.r9.s64 = ctx.r11.s64 + -15544;
	// beq cr6,0x82233698
	if (ctx.cr6.eq) goto loc_82233698;
	// lbz r8,14657(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14657);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82233690
	if (ctx.cr6.eq) goto loc_82233690;
	// lfs f0,-32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822336b8
	goto loc_822336B8;
loc_82233690:
	// lfs f0,-28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822336b8
	goto loc_822336B8;
loc_82233698:
	// lbz r7,14657(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14657);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822336b0
	if (ctx.cr6.eq) goto loc_822336B0;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28252);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822336b8
	goto loc_822336B8;
loc_822336B0:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28248);
	ctx.f0.f64 = double(temp.f32);
loc_822336B8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x822337b0
	if (ctx.cr6.gt) goto loc_822337B0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r7,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r7.u8);
loc_822336D4:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r4,r9,20
	ctx.r4.s64 = ctx.r9.s64 + 20;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsx f13,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f11,r11,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bgt cr6,0x82233708
	if (ctx.cr6.gt) goto loc_82233708;
	// bso cr6,0x82233708
	if (ctx.cr6.so) goto loc_82233708;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82233708:
	// cmpwi cr6,r11,-20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -20, ctx.xer);
	// bne cr6,0x822336d4
	if (!ctx.cr6.eq) goto loc_822336D4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// lfd f11,-1600(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -1600);
	// lfd f12,-4840(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x82233758
	if (ctx.cr6.gt) goto loc_82233758;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fdivs f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f13,f7,f12,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f13,f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82233758:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x82233764
	if (ctx.cr6.gt) goto loc_82233764;
	// stb r7,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r7.u8);
loc_82233764:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bgt cr6,0x822337b0
	if (ctx.cr6.gt) goto loc_822337B0;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f31,f13
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fdivs f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 / ctx.f3.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f13,f2,f12,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f13,f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822337ac
	if (ctx.cr6.gt) goto loc_822337AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822337AC:
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
loc_822337B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_822337CC"))) PPC_WEAK_FUNC(sub_822337CC);
PPC_FUNC_IMPL(__imp__sub_822337CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822337D0"))) PPC_WEAK_FUNC(sub_822337D0);
PPC_FUNC_IMPL(__imp__sub_822337D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822337f4
	if (!ctx.cr6.eq) goto loc_822337F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822337F4:
	// lbz r8,14661(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14661);
	// addis r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 2293760;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// mulli r11,r7,19200
	ctx.r11.s64 = ctx.r7.s64 * 19200;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233810"))) PPC_WEAK_FUNC(sub_82233810);
PPC_FUNC_IMPL(__imp__sub_82233810) {
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
	// lwz r9,6912(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r11,15328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82233860
	if (!ctx.cr6.eq) goto loc_82233860;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,14672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14672, temp.u32);
	// stw r10,14668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14668, ctx.r10.u32);
	// lwz r7,19168(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19168);
	// stb r8,6902(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6902, ctx.r8.u8);
	// stb r7,14661(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14661, ctx.r7.u8);
	// b 0x82233978
	goto loc_82233978;
loc_82233860:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r4,r5,37004
	ctx.r4.u64 = ctx.r5.u64 | 37004;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82233888
	if (!ctx.cr6.eq) goto loc_82233888;
	// stb r30,14661(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14661, ctx.r30.u8);
	// b 0x822338a4
	goto loc_822338A4;
loc_82233888:
	// lbz r3,15480(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15480);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stb r6,14661(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14661, ctx.r6.u8);
loc_822338A4:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822338c0
	if (!ctx.cr6.eq) goto loc_822338C0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822338d8
	goto loc_822338D8;
loc_822338C0:
	// lbz r10,14661(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14661);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addis r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r9,19200
	ctx.r11.s64 = ctx.r9.s64 * 19200;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822338D8:
	// lwz r10,14684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// addi r4,r11,13488
	ctx.r4.s64 = ctx.r11.s64 + 13488;
	// addi r3,r10,13488
	ctx.r3.s64 = ctx.r10.s64 + 13488;
	// bl 0x820b7ab0
	ctx.lr = 0x822338E8;
	sub_820B7AB0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82233900
	if (ctx.cr6.eq) goto loc_82233900;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,14668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14668, ctx.r7.u32);
	// b 0x82233908
	goto loc_82233908;
loc_82233900:
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,14668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14668, ctx.r6.u32);
loc_82233908:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r5,14661(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14661);
	// lwz r4,14668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14668);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// lfd f13,-4840(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,-1600(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r3,r11,3669
	ctx.r3.s64 = ctx.r11.s64 + 3669;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-15568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,-12428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12428);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f8,f0,f0,f12
	ctx.f8.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfs f8,14672(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14672, temp.u32);
	// bne cr6,0x82233974
	if (!ctx.cr6.eq) goto loc_82233974;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6902(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6902, ctx.r10.u8);
	// b 0x82233978
	goto loc_82233978;
loc_82233974:
	// stb r30,6902(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6902, ctx.r30.u8);
loc_82233978:
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

__attribute__((alias("__imp__sub_82233990"))) PPC_WEAK_FUNC(sub_82233990);
PPC_FUNC_IMPL(__imp__sub_82233990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822339d4
	if (ctx.cr6.eq) goto loc_822339D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822339d4
	if (ctx.cr6.eq) goto loc_822339D4;
	// lbz r10,810(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 810);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822339d4
	if (!ctx.cr6.eq) goto loc_822339D4;
	// lhz r9,808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// lwz r8,2660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2660);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r7,r11,1548
	ctx.r7.s64 = ctx.r11.s64 + 1548;
	// lwz r6,128(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// blr 
	return;
loc_822339D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822339DC"))) PPC_WEAK_FUNC(sub_822339DC);
PPC_FUNC_IMPL(__imp__sub_822339DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822339E0"))) PPC_WEAK_FUNC(sub_822339E0);
PPC_FUNC_IMPL(__imp__sub_822339E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// bsolr cr6
	if (ctx.cr6.so) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,3112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233A28"))) PPC_WEAK_FUNC(sub_82233A28);
PPC_FUNC_IMPL(__imp__sub_82233A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,36944
	ctx.r9.u64 = ctx.r10.u64 | 36944;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r7,r8,36944
	ctx.r7.u64 = ctx.r8.u64 | 36944;
	// ori r5,r6,36948
	ctx.r5.u64 = ctx.r6.u64 | 36948;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r8,r4,36944
	ctx.r8.u64 = ctx.r4.u64 | 36944;
	// lfs f0,-16796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16796);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r6,36948
	ctx.r5.u64 = ctx.r6.u64 | 36948;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1240(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233AC8"))) PPC_WEAK_FUNC(sub_82233AC8);
PPC_FUNC_IMPL(__imp__sub_82233AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bba4
	ctx.lr = 0x82233AD8;
	__savefpr_27(ctx, base);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f6,f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f2,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f5,f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f27,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f1,f11,f29,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmadds f13,f0,f4,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f12,f3,f0,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f12,-76(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fmadds f10,f2,f0,f5
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f10,-72(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// fmadds f11,f27,f0,f1
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fabs f12,f10
	ctx.f12.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// stfs f12,-56(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f4,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f3,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f31,f4
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fmuls f12,f30,f3
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// fadds f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fsubs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f1,0(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbf0
	ctx.lr = 0x82233BC4;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233BD0"))) PPC_WEAK_FUNC(sub_82233BD0);
PPC_FUNC_IMPL(__imp__sub_82233BD0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82233ac8
	ctx.lr = 0x82233C04;
	sub_82233AC8(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82233ac8
	ctx.lr = 0x82233C14;
	sub_82233AC8(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82233c54
	if (ctx.cr6.gt) goto loc_82233C54;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82233c54
	if (ctx.cr6.gt) goto loc_82233C54;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f13,f10,f11,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f0,f9,f12,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82233c58
	goto loc_82233C58;
loc_82233C54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82233C58:
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

__attribute__((alias("__imp__sub_82233C70"))) PPC_WEAK_FUNC(sub_82233C70);
PPC_FUNC_IMPL(__imp__sub_82233C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82233C78;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bba4
	ctx.lr = 0x82233C80;
	__savefpr_27(ctx, base);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r1,-96
	ctx.r6.s64 = ctx.r1.s64 + -96;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r5,r4,80
	ctx.r5.s64 = ctx.r4.s64 + 80;
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f11,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f10,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfs f9,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f9.f64 = double(temp.f32);
	// std r30,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r30.u64);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f7,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r29.u64);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// lfs f2,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f2.f64 = double(temp.f32);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// fmuls f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f8,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f1,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f11,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f6.f64));
	// lfs f6,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f8,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f5.f64));
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// fmadds f13,f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f4,f12,f6,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f5.f64));
	// lfs f5,4600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4600);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f30,f12,f1,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f31,-580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -580);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x82233d80
	if (!ctx.cr6.lt) goto loc_82233D80;
	// lfs f0,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f29,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f28,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f27,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fadds f11,f29,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f10,f28,f12
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f9,f27,f0
	ctx.f9.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82233dbc
	goto loc_82233DBC;
loc_82233D80:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82233dbc
	if (!ctx.cr6.gt) goto loc_82233DBC;
	// lfs f0,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f29,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f28,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f27,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f11,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82233DBC:
	// fcmpu cr6,f4,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bge cr6,0x82233df0
	if (!ctx.cr6.lt) goto loc_82233DF0;
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// b 0x82233e20
	goto loc_82233E20;
loc_82233DF0:
	// fcmpu cr6,f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// ble cr6,0x82233e2c
	if (!ctx.cr6.gt) goto loc_82233E2C;
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
loc_82233E20:
	// stfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82233E2C:
	// fcmpu cr6,f30,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f5.f64);
	// bge cr6,0x82233e74
	if (!ctx.cr6.lt) goto loc_82233E74;
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf0
	ctx.lr = 0x82233E70;
	__restfpr_27(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82233E74:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82233eb0
	if (!ctx.cr6.gt) goto loc_82233EB0;
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f4,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82233EB0:
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf0
	ctx.lr = 0x82233EB8;
	__restfpr_27(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82233EBC"))) PPC_WEAK_FUNC(sub_82233EBC);
PPC_FUNC_IMPL(__imp__sub_82233EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233EC0"))) PPC_WEAK_FUNC(sub_82233EC0);
PPC_FUNC_IMPL(__imp__sub_82233EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82233EC8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bb9c
	ctx.lr = 0x82233ED0;
	__savefpr_25(ctx, base);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r31,r4,80
	ctx.r31.s64 = ctx.r4.s64 + 80;
	// ld r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f10,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f10.f64 = double(temp.f32);
	// std r28,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r28.u64);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f1,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f1.f64 = double(temp.f32);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// fmuls f3,f0,f1
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f9.f64 = double(temp.f32);
	// std r29,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r29.u64);
	// lfs f2,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f2.f64 = double(temp.f32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// lfs f6,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f6.f64 = double(temp.f32);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f7,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f13,f11,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f8.f64));
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f5,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmadds f3,f13,f2,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f3.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmadds f8,f13,f7,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f4.f64));
	// lfs f30,-580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -580);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f12,f9,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f0,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f29,f12,f31,f3
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f3.f64));
	// lfs f3,4600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4600);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f4,f12,f5,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f8.f64));
	// lfs f8,-27244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,-716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bge cr6,0x82233ff8
	if (!ctx.cr6.lt) goto loc_82233FF8;
	// lfs f13,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f28,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f26,f13,f12
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f27,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f25,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f26,0(r6)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f11,f28,f9
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f9.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f10,f27,f10
	ctx.f10.f64 = double(float(ctx.f27.f64 + ctx.f10.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f9,f25,f13
	ctx.f9.f64 = double(float(ctx.f25.f64 + ctx.f13.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82234064
	goto loc_82234064;
loc_82233FF8:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// lfs f13,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8223404c
	if (!ctx.cr6.gt) goto loc_8223404C;
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f28,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f27,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f27,f8
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// lfs f25,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// stfs f27,4(r6)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fsubs f11,f28,f9
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f10,f26,f10
	ctx.f10.f64 = double(float(ctx.f26.f64 - ctx.f10.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f9,f25,f13
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82234064
	goto loc_82234064;
loc_8223404C:
	// fneg f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f9,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_82234064:
	// fcmpu cr6,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bge cr6,0x822340b4
	if (!ctx.cr6.lt) goto loc_822340B4;
	// lfs f13,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f28,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// fadds f7,f4,f11
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f5,f28,f13
	ctx.f5.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82234124
	goto loc_82234124;
loc_822340B4:
	// fcmpu cr6,f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f30.f64);
	// ble cr6,0x82234108
	if (!ctx.cr6.gt) goto loc_82234108;
	// lfs f13,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f11,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f11,16(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// fsubs f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f7,f4,f11
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f5,f28,f13
	ctx.f5.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82234124
	goto loc_82234124;
loc_82234108:
	// lfs f4,100(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fneg f13,f4
	ctx.f13.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f11,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f10,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
loc_82234124:
	// fcmpu cr6,f29,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f3.f64);
	// bge cr6,0x8223417c
	if (!ctx.cr6.lt) goto loc_8223417C;
	// lfs f13,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,28(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,24(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbe8
	ctx.lr = 0x82234178;
	__restfpr_25(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8223417C:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x822341d8
	if (!ctx.cr6.gt) goto loc_822341D8;
	// lfs f13,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f10,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// fmuls f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,28(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbe8
	ctx.lr = 0x822341D4;
	__restfpr_25(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822341D8:
	// lfs f3,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f2,24(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lfs f1,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,28(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbe8
	ctx.lr = 0x822341FC;
	__restfpr_25(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82234200"))) PPC_WEAK_FUNC(sub_82234200);
PPC_FUNC_IMPL(__imp__sub_82234200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// addi r8,r5,64
	ctx.r8.s64 = ctx.r5.s64 + 64;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r4,96
	ctx.r3.s64 = ctx.r4.s64 + 96;
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v8,r0,r7
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v8,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r0,r9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v10,v10,v0
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v9,v9,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v6,r0,r3
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r5,48
	ctx.r6.s64 = ctx.r5.s64 + 48;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lvx128 v7,r0,r6
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r5,80
	ctx.r6.s64 = ctx.r5.s64 + 80;
	// vmsum3fp128 v7,v7,v0
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v4,r0,r10
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v3,v4,v0
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v5,r0,r11
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r6
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v30,v31,v0
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrglw v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v11,v10,v9
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v12,v12,v8
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vsubfp v10,v13,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmrglw v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stvx v3,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaxfp v12,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_max_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaxfp v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_max_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v2,v12,v6
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vmsum3fp128 v1,v13,v5
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// stvx v2,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-48(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stvx v30,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x822342f4
	if (ctx.cr6.gt) goto loc_822342F4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x822342f8
	if (!ctx.cr6.gt) goto loc_822342F8;
loc_822342F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822342F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234300"))) PPC_WEAK_FUNC(sub_82234300);
PPC_FUNC_IMPL(__imp__sub_82234300) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1902(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1902, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223430C"))) PPC_WEAK_FUNC(sub_8223430C);
PPC_FUNC_IMPL(__imp__sub_8223430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234310"))) PPC_WEAK_FUNC(sub_82234310);
PPC_FUNC_IMPL(__imp__sub_82234310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82234318;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bb88
	ctx.lr = 0x82234320;
	__savefpr_20(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r30,20192
	ctx.r31.s64 = ctx.r30.s64 + 20192;
	// addi r8,r30,6912
	ctx.r8.s64 = ctx.r30.s64 + 6912;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,7040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7040);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f30,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f20,7480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7480);
	ctx.f20.f64 = double(temp.f32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82234364:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82234364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234364;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20348);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r11,-16864
	ctx.r29.s64 = ctx.r11.s64 + -16864;
	// fdivs f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f12.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,-12420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12420);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fsubs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// lfs f13,-12424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12424);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f25,f10,f9
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// bl 0x8259c328
	ctx.lr = 0x822343B8;
	sub_8259C328(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64));
	// lfs f8,20352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20352);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f5,f8,f24
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// lfd f12,-4832(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// fnmsub f6,f0,f0,f13
	ctx.f6.f64 = -(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64);
	// fmul f7,f0,f12
	ctx.f7.f64 = ctx.f0.f64 * ctx.f12.f64;
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// fmuls f4,f5,f25
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f25.f64));
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmuls f26,f4,f11
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmul f3,f0,f12
	ctx.f3.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fnmsub f2,f0,f0,f13
	ctx.f2.f64 = -(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8259c328
	ctx.lr = 0x82234434;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// frsp f26,f0
	ctx.f26.f64 = double(float(ctx.f0.f64));
	// bl 0x8259c400
	ctx.lr = 0x82234444;
	sub_8259C400(ctx, base);
	// fmuls f13,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f12,f27,f27
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f29,f29
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f13,f28,f27
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f27.f64));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f12,f27,f29
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// fmuls f11,f28,f29
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// fadds f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// addi r11,r30,20240
	ctx.r11.s64 = ctx.r30.s64 + 20240;
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f30,f9
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fadds f9,f8,f30
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fadds f8,f7,f30
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmuls f5,f28,f26
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f26.f64));
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f27,f26
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// fsubs f11,f30,f10
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fsubs f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// fsubs f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// fsubs f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fadds f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f0,f29,f26
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f20
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f20.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f30,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f29,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f30,f29,f9
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// lfs f27,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f29,f28,f9
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// fmuls f9,f27,f9
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// lfs f28,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f28,f7
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f7.f64));
	// lfs f22,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f27,f27,f7
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// lfs f26,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f7,f22,f7
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f7.f64));
	// lfs f23,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f26,f26,f6
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f23,f6
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f6.f64));
	// lfs f21,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f22,f11,f0
	ctx.f22.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f21,f6
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f6.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f21,f11,f13
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fadds f2,f22,f2
	ctx.f2.f64 = double(float(ctx.f22.f64 + ctx.f2.f64));
	// fadds f1,f21,f1
	ctx.f1.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f10,f2,f30
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fadds f2,f1,f29
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// fadds f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// fadds f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// fadds f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f30,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f29,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f10,f23
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f23.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f27,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// ld r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f4,f2,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r29.u64);
	// fmuls f8,f1,f31
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmuls f7,f28,f31
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// fmuls f6,f27,f31
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f30,f31
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f5,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// fadds f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f10,f29,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// lfs f4,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f9,f2,f31
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// ld r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// std r28,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r28.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82234744:
	// ld r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bdnz 0x82234744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234744;
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f20,f12
	ctx.f10.f64 = double(float(ctx.f20.f64 + ctx.f12.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,20356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20356);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f24
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// fmuls f31,f8,f25
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x82234788;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f7,f0
	ctx.f7.f64 = double(float(ctx.f0.f64));
	// stfs f7,7044(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 7044, temp.u32);
	// bl 0x8259c400
	ctx.lr = 0x8223479C;
	sub_8259C400(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,7048(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 7048, temp.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbd4
	ctx.lr = 0x822347B0;
	__restfpr_20(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822347B4"))) PPC_WEAK_FUNC(sub_822347B4);
PPC_FUNC_IMPL(__imp__sub_822347B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822347B8"))) PPC_WEAK_FUNC(sub_822347B8);
PPC_FUNC_IMPL(__imp__sub_822347B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20256
	ctx.r3.s64 = ctx.r3.s64 + 20256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822347C0"))) PPC_WEAK_FUNC(sub_822347C0);
PPC_FUNC_IMPL(__imp__sub_822347C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r10,20361(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20361);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r8,r11,7296
	ctx.r8.s64 = ctx.r11.s64 + 7296;
	// ldx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822347E0"))) PPC_WEAK_FUNC(sub_822347E0);
PPC_FUNC_IMPL(__imp__sub_822347E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223481C"))) PPC_WEAK_FUNC(sub_8223481C);
PPC_FUNC_IMPL(__imp__sub_8223481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234820"))) PPC_WEAK_FUNC(sub_82234820);
PPC_FUNC_IMPL(__imp__sub_82234820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lfs f13,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f10,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82234880:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82234880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234880;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// ld r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfs f12,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// lfs f3,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f2.f64 = double(temp.f32);
	// std r3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// fmuls f11,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmr f4,f2
	ctx.f4.f64 = ctx.f2.f64;
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f1,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f9,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f1,24(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f2,32(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r5.u64);
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234994"))) PPC_WEAK_FUNC(sub_82234994);
PPC_FUNC_IMPL(__imp__sub_82234994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234998"))) PPC_WEAK_FUNC(sub_82234998);
PPC_FUNC_IMPL(__imp__sub_82234998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822349A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// addi r30,r31,625
	ctx.r30.s64 = ctx.r31.s64 + 625;
	// addis r11,r29,34
	ctx.r11.s64 = ctx.r29.s64 + 2228224;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r10,r11,32160
	ctx.r10.s64 = ctx.r11.s64 + 32160;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lbz r11,626(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 626);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mulli r11,r9,704
	ctx.r11.s64 = ctx.r9.s64 * 704;
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r8,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r8.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r7,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r7.u64);
	// bl 0x82327078
	ctx.lr = 0x822349EC;
	sub_82327078(ctx, base);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r3,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r3.u8);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x82234a6c
	if (!ctx.cr6.eq) goto loc_82234A6C;
	// lbz r5,624(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x82234a6c
	if (ctx.cr6.eq) goto loc_82234A6C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82234A14;
	sub_821041A8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82234a6c
	if (ctx.cr6.eq) goto loc_82234A6C;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r3,626(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 626);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// subfic r10,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addis r10,r29,34
	ctx.r10.s64 = ctx.r29.s64 + 2228224;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r10,32160
	ctx.r9.s64 = ctx.r10.s64 + 32160;
	// mulli r10,r8,704
	ctx.r10.s64 = ctx.r8.s64 * 704;
	// stb r11,626(r31)
	PPC_STORE_U8(ctx.r31.u32 + 626, ctx.r11.u8);
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r7,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r7.u64);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r6,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r6.u64);
	// bl 0x82327078
	ctx.lr = 0x82234A68;
	sub_82327078(ctx, base);
	// stb r3,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r3.u8);
loc_82234A6C:
	// lbz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 628);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82234A78"))) PPC_WEAK_FUNC(sub_82234A78);
PPC_FUNC_IMPL(__imp__sub_82234A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82234A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32086
	ctx.r29.s64 = -2102788096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,21044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82234b04
	if (!ctx.cr6.gt) goto loc_82234B04;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r31,r10,-20432
	ctx.r31.s64 = ctx.r10.s64 + -20432;
	// lwz r10,512(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82234ae0
	if (ctx.cr6.eq) goto loc_82234AE0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8259d3a0
	ctx.lr = 0x82234AC4;
	sub_8259D3A0(ctx, base);
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r8,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x8259d3a0
	ctx.lr = 0x82234ADC;
	sub_8259D3A0(ctx, base);
	// lwz r11,21044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21044);
loc_82234AE0:
	// lwz r7,512(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21044(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21044, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82234B04:
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82234B10"))) PPC_WEAK_FUNC(sub_82234B10);
PPC_FUNC_IMPL(__imp__sub_82234B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82234b4c
	if (ctx.cr6.lt) goto loc_82234B4C;
	// bso cr6,0x82234b4c
	if (ctx.cr6.so) goto loc_82234B4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82234B4C:
	// lis r7,-32085
	ctx.r7.s64 = -2102722560;
	// lbz r6,626(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 626);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// addi r7,r7,28544
	ctx.r7.s64 = ctx.r7.s64 + 28544;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// addis r7,r7,34
	ctx.r7.s64 = ctx.r7.s64 + 2228224;
	// mulli r6,r5,704
	ctx.r6.s64 = ctx.r5.s64 * 704;
	// addi r7,r7,32160
	ctx.r7.s64 = ctx.r7.s64 + 32160;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f0,-15404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15404);
	ctx.f0.f64 = double(temp.f32);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82331990
	ctx.lr = 0x82234BBC;
	sub_82331990(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234BD8"))) PPC_WEAK_FUNC(sub_82234BD8);
PPC_FUNC_IMPL(__imp__sub_82234BD8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,599(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 599);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,627(r3)
	PPC_STORE_U8(ctx.r3.u32 + 627, ctx.r4.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,599(r3)
	PPC_STORE_U8(ctx.r3.u32 + 599, ctx.r10.u8);
	// stb r9,597(r3)
	PPC_STORE_U8(ctx.r3.u32 + 597, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234BFC"))) PPC_WEAK_FUNC(sub_82234BFC);
PPC_FUNC_IMPL(__imp__sub_82234BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234C00"))) PPC_WEAK_FUNC(sub_82234C00);
PPC_FUNC_IMPL(__imp__sub_82234C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,352
	ctx.r11.s64 = ctx.r3.s64 + 352;
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r10,627(r3)
	PPC_STORE_U8(ctx.r3.u32 + 627, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r9,599(r3)
	PPC_STORE_U8(ctx.r3.u32 + 599, ctx.r9.u8);
	// stb r9,597(r3)
	PPC_STORE_U8(ctx.r3.u32 + 597, ctx.r9.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82234C24:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82234c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234C24;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// stfs f0,376(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// sth r9,400(r3)
	PPC_STORE_U16(ctx.r3.u32 + 400, ctx.r9.u16);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stw r9,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r9.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234C6C"))) PPC_WEAK_FUNC(sub_82234C6C);
PPC_FUNC_IMPL(__imp__sub_82234C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234C70"))) PPC_WEAK_FUNC(sub_82234C70);
PPC_FUNC_IMPL(__imp__sub_82234C70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820a5ce0
	ctx.lr = 0x82234CA0;
	sub_820A5CE0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// beq cr6,0x82234cf0
	if (ctx.cr6.eq) goto loc_82234CF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820a5ce0
	ctx.lr = 0x82234CCC;
	sub_820A5CE0(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82234d00
	goto loc_82234D00;
loc_82234CF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82234D00:
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmadds f7,f0,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82234D54"))) PPC_WEAK_FUNC(sub_82234D54);
PPC_FUNC_IMPL(__imp__sub_82234D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234D58"))) PPC_WEAK_FUNC(sub_82234D58);
PPC_FUNC_IMPL(__imp__sub_82234D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82234D6C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82234d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234D6C;
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82234D90:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82234d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234D90;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// ld r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfs f12,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// std r3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f7,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f8,32(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fneg f4,f12
	ctx.f4.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f4,-32(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fneg f3,f11
	ctx.f3.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f3,-28(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f2,-24(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r5.u64);
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234EA4"))) PPC_WEAK_FUNC(sub_82234EA4);
PPC_FUNC_IMPL(__imp__sub_82234EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234EA8"))) PPC_WEAK_FUNC(sub_82234EA8);
PPC_FUNC_IMPL(__imp__sub_82234EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82234EB0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bb70
	ctx.lr = 0x82234EB8;
	__savefpr_14(ctx, base);
	// lfs f13,484(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lfs f0,480(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,488(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	ctx.f10.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f11,464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,468(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// lfs f8,472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	ctx.f8.f64 = double(temp.f32);
	// ld r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// ld r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r29,r10,32
	ctx.r29.s64 = ctx.r10.s64 + 32;
	// lfs f13,476(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-240
	ctx.r8.s64 = ctx.r1.s64 + -240;
	// ld r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// ld r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// fsubs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// ld r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r26.u64);
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsel f12,f6,f9,f12
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// lfs f9,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f9.f64 = double(temp.f32);
	// fsel f0,f7,f11,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// lfs f11,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f11.f64 = double(temp.f32);
	// fsel f8,f5,f8,f10
	ctx.f8.f64 = ctx.f5.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// lfs f10,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f26,f8,f0
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fadds f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fdivs f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fdivs f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// fdivs f29,f12,f3
	ctx.f29.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fmuls f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fadds f31,f7,f13
	ctx.f31.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f13,f11,f29
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f6,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f5,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f24,f6,f0
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f28,f7,f4
	ctx.f28.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// lfs f7,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f7.f64 = double(temp.f32);
	// fadds f27,f13,f4
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f7,f0
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f19,f8,f2
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f4,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f18,f2,f3
	ctx.f18.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f16,f10,f28
	ctx.f16.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// fmuls f2,f11,f27
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// addi r8,r1,-288
	ctx.r8.s64 = ctx.r1.s64 + -288;
	// fmuls f17,f27,f7
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// fmuls f15,f6,f28
	ctx.f15.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fmuls f28,f4,f28
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// fmuls f27,f5,f27
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmuls f14,f9,f31
	ctx.f14.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f14,-272(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmuls f14,f8,f31
	ctx.f14.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f23,f5,f0
	ctx.f23.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f22,f4,f0
	ctx.f22.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f21,f3,f0
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f2,f16,f2
	ctx.f2.f64 = double(float(ctx.f16.f64 + ctx.f2.f64));
	// fmuls f20,f6,f30
	ctx.f20.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f31,f31,f3
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// fmuls f0,f29,f7
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fadds f28,f28,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// lfs f27,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f30,f4,f30
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f29,f5,f29
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fadds f17,f15,f17
	ctx.f17.f64 = double(float(ctx.f15.f64 + ctx.f17.f64));
	// fadds f27,f2,f27
	ctx.f27.f64 = double(float(ctx.f2.f64 + ctx.f27.f64));
	// fadds f2,f20,f25
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f25.f64));
	// fadds f16,f28,f31
	ctx.f16.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f31,f24,f0
	ctx.f31.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// fadds f30,f30,f23
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f23.f64));
	// fadds f29,f22,f29
	ctx.f29.f64 = double(float(ctx.f22.f64 + ctx.f29.f64));
	// fadds f28,f22,f23
	ctx.f28.f64 = double(float(ctx.f22.f64 + ctx.f23.f64));
	// fadds f17,f17,f14
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f14.f64));
	// fadds f0,f2,f26
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f26.f64));
	// fadds f2,f31,f26
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// fadds f31,f30,f21
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f21.f64));
	// fadds f30,f29,f21
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f21.f64));
	// fadds f29,f24,f25
	ctx.f29.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fadds f28,f28,f18
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f18.f64));
	// fmuls f24,f10,f0
	ctx.f24.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f23,f6,f0
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f26,f11,f2
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f25,f2,f7
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fadds f29,f29,f19
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f19.f64));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fadds f26,f24,f26
	ctx.f26.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// fadds f25,f23,f25
	ctx.f25.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// fmuls f31,f9,f29
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f30,f8,f29
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fmuls f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fadds f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f29,f29,f3
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// fmuls f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f3,f28,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// fadds f7,f4,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f28,f26,f31
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// lfs f31,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fadds f26,f25,f30
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f30.f64));
	// fadds f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f2,-304(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,-300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fadds f11,f7,f3
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,-296(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// addi r5,r1,-272
	ctx.r5.s64 = ctx.r1.s64 + -272;
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
	// lfs f11,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f10,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f25,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// lfs f25,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f25.f64 = double(temp.f32);
	// lfs f30,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f25,-320(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f24,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// lfs f22,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f22.f64 = double(temp.f32);
	// lfs f20,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f8,f8,f20
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f20.f64));
	// lfs f20,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f7,f7,f19
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f19.f64));
	// lfs f19,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f18.f64 = double(temp.f32);
	// lfs f15,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f21,f0,f13
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f14,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f14.f64 = double(temp.f32);
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// fmadds f2,f31,f5,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmuls f31,f4,f10
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f25,f30,f13,f2
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmsubs f3,f3,f10,f21
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f21.f64));
	// fmsubs f4,f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f2.f64));
	// fmuls f2,f24,f4
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f4.f64));
	// stfs f2,-288(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmuls f30,f23,f4
	ctx.f30.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// stfs f30,-284(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fmuls f4,f22,f4
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f4.f64));
	// stfs f4,-280(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmsubs f4,f13,f11,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f31.f64));
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fmuls f23,f14,f3
	ctx.f23.f64 = double(float(ctx.f14.f64 * ctx.f3.f64));
	// lfs f22,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f22,f22,f3
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f3.f64));
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// lfs f24,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f31,f20,f4
	ctx.f31.f64 = double(float(ctx.f20.f64 * ctx.f4.f64));
	// fmuls f30,f19,f4
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f4.f64));
	// fmuls f4,f18,f4
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f4.f64));
	// fadds f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// fmuls f31,f3,f15
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f15.f64));
	// fadds f30,f24,f30
	ctx.f30.f64 = double(float(ctx.f24.f64 + ctx.f30.f64));
	// lfs f24,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f24.f64 = double(temp.f32);
	// fadds f24,f24,f4
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f4.f64));
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fadds f4,f31,f2
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// fadds f31,f23,f30
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// fadds f30,f22,f24
	ctx.f30.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmuls f24,f11,f4
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f23,f31,f10
	ctx.f23.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fmuls f22,f30,f0
	ctx.f22.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmsubs f30,f30,f10,f24
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 - ctx.f24.f64));
	// fadds f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fmsubs f4,f0,f4,f23
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 - ctx.f23.f64));
	// fmsubs f1,f31,f11,f22
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f22.f64));
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f31,f9,f3
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f0,f10,f25
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmuls f10,f7,f2
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fneg f25,f0
	ctx.f25.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmsubs f0,f8,f3,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 - ctx.f10.f64));
	// fmuls f10,f0,f27
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f10,-288(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmuls f3,f17,f0
	ctx.f3.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f3,-284(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fmuls f0,f16,f0
	ctx.f0.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f0,-280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmsubs f0,f7,f13,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f31.f64));
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmsubs f11,f9,f2,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 - ctx.f11.f64));
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f31,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f3,f0,f28
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f2,f0,f26
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f29,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f11,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// lfs f3,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f3.f64 = double(temp.f32);
	// fadds f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f2,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f0,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f11,f31,f3
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f10,f29,f2
	ctx.f10.f64 = double(float(ctx.f29.f64 + ctx.f2.f64));
	// fmuls f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f31,f10,f8
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmsubs f0,f8,f0,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f2.f64));
	// lfs f8,496(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f10,f10,f9,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f3.f64));
	// fmsubs f11,f11,f7,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f31.f64));
	// lfs f7,476(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fdivs f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fadds f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f9,f0,f5,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f0,f11,f13,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fdivs f1,f25,f1
	ctx.f1.f64 = double(float(ctx.f25.f64 / ctx.f1.f64));
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,-288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmuls f12,f0,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f12,-284(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fmuls f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f11,-280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bbbc
	ctx.lr = 0x82235368;
	__restfpr_14(ctx, base);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223536C"))) PPC_WEAK_FUNC(sub_8223536C);
PPC_FUNC_IMPL(__imp__sub_8223536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82235370"))) PPC_WEAK_FUNC(sub_82235370);
PPC_FUNC_IMPL(__imp__sub_82235370) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82235378;
	__savegprlr_27(ctx, base);
	// lis r8,-32086
	ctx.r8.s64 = -2102788096;
	// lbz r11,20835(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20835);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223544c
	if (!ctx.cr6.eq) goto loc_8223544C;
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// lbz r9,636(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 636);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822353b4
	if (ctx.cr6.lt) goto loc_822353B4;
	// lis r10,-32086
	ctx.r10.s64 = -2102788096;
	// addi r10,r10,21044
	ctx.r10.s64 = ctx.r10.s64 + 21044;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,96
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 96, ctx.xer);
	// bge cr6,0x82235444
	if (!ctx.cr6.lt) goto loc_82235444;
loc_822353B4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// addi r6,r4,64
	ctx.r6.s64 = ctx.r4.s64 + 64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// lwz r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// sthx r6,r29,r7
	PPC_STORE_U16(ctx.r29.u32 + ctx.r7.u32, ctx.r6.u16);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82235444:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20835(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20835, ctx.r11.u8);
loc_8223544C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82235454"))) PPC_WEAK_FUNC(sub_82235454);
PPC_FUNC_IMPL(__imp__sub_82235454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82235458"))) PPC_WEAK_FUNC(sub_82235458);
PPC_FUNC_IMPL(__imp__sub_82235458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822354E4"))) PPC_WEAK_FUNC(sub_822354E4);
PPC_FUNC_IMPL(__imp__sub_822354E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822354E8"))) PPC_WEAK_FUNC(sub_822354E8);
PPC_FUNC_IMPL(__imp__sub_822354E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82235530"))) PPC_WEAK_FUNC(sub_82235530);
PPC_FUNC_IMPL(__imp__sub_82235530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82235538;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bb8c
	ctx.lr = 0x82235540;
	__savefpr_21(ctx, base);
	// lfs f4,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// fmr f7,f4
	ctx.f7.f64 = ctx.f4.f64;
	// lfs f5,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f5
	ctx.f6.f64 = ctx.f5.f64;
	// lfs f31,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r31,516(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// lfs f29,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r1,-160
	ctx.r30.s64 = ctx.r1.s64 + -160;
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// lfs f11,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r1,-144
	ctx.r29.s64 = ctx.r1.s64 + -144;
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lfs f11,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f28,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f27.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// lfs f26,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f27,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f26
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// fmadds f3,f31,f6,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f3.f64));
	// lfs f26,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f31,f5,f11
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f25,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f30,f0,f30,f3
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f3.f64));
	// fmuls f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmsubs f5,f5,f13,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmuls f3,f29,f5
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// stfs f3,-160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f2,-156(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f5,f28,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// stfs f5,-152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmsubs f5,f12,f0,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f31.f64));
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// std r7,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r7.u64);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// fmuls f2,f27,f5
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f5.f64));
	// lfs f27,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f31,f26,f5
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// lfs f26,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f29,f25,f5
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f5.f64));
	// fmsubs f5,f4,f11,f23
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f23.f64));
	// lfs f4,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f3,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f3.f64 = double(temp.f32);
	// fadds f31,f4,f31
	ctx.f31.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fadds f29,f3,f29
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// fmuls f28,f24,f5
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f5.f64));
	// fmuls f27,f27,f5
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f5.f64));
	// fmuls f26,f26,f5
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fadds f5,f28,f2
	ctx.f5.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// fadds f2,f27,f31
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// fadds f31,f26,f29
	ctx.f31.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// fmuls f28,f12,f5
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f29,f31,f13
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f27,f2,f11
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f26,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f2,f2,f12,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 - ctx.f29.f64));
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f4,f10
	ctx.f25.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f22,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f31,f31,f11,f28
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f28.f64));
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f28,f0,f9
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f24,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// lfs f21,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f21.f64 = double(temp.f32);
	// fmsubs f29,f5,f13,f27
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f27.f64));
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfs f27,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmsubs f13,f4,f9,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 - ctx.f13.f64));
	// fmuls f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f4,-160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f12,-156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f11,-152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmsubs f13,f0,f8,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f25.f64));
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fmsubs f12,f3,f10,f28
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f28.f64));
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// lfs f28,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f5,f26,f13
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f11,f27,f13
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f13,f22,f13
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fmuls f3,f24,f12
	ctx.f3.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fadds f5,f28,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 + ctx.f5.f64));
	// lfs f28,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f28.f64 = double(temp.f32);
	// fadds f28,f28,f11
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f11.f64));
	// fmuls f11,f23,f12
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmuls f12,f21,f12
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f5,f3,f28
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmsubs f13,f5,f8,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f3.f64));
	// lfs f3,496(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f8,496(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f11,f11,f10,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f4.f64));
	// fmsubs f12,f9,f12,f5
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fadds f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// lfs f13,2868(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fdivs f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// fdivs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fmadds f9,f6,f12,f4
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmuls f10,f2,f30
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fadds f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fmadds f13,f0,f11,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fneg f5,f10
	ctx.f5.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fadds f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fdivs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f3,-160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f2,-156(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbd8
	ctx.lr = 0x822357C8;
	__restfpr_21(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822357CC"))) PPC_WEAK_FUNC(sub_822357CC);
PPC_FUNC_IMPL(__imp__sub_822357CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822357D0"))) PPC_WEAK_FUNC(sub_822357D0);
PPC_FUNC_IMPL(__imp__sub_822357D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bb94
	ctx.lr = 0x822357E0;
	__savefpr_23(ctx, base);
	// lfs f7,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// lfs f11,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f2,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f24,f0,f13
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f5,f4,f9,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmsubs f7,f7,f11,f24
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f24.f64));
	// fmadds f5,f3,f0,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmuls f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmsubs f8,f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f4.f64));
	// fmuls f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f2,-108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fmuls f6,f31,f8
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// stfs f6,-112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fmuls f8,f30,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// stfs f8,-104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fmsubs f8,f0,f12,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 - ctx.f3.f64));
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmuls f31,f25,f7
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f7.f64));
	// fmuls f30,f23,f7
	ctx.f30.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lfs f2,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f4,f29,f8
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmuls f3,f28,f8
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// fmuls f8,f27,f8
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f2,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmuls f2,f26,f7
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f7.f64));
	// fadds f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// lfs f3,496(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f31,f8,f11
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmsubs f8,f8,f12,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f4.f64));
	// lfs f12,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fdivs f4,f12,f3
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fmsubs f12,f7,f11,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f13,f6,f13,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f31.f64));
	// fmuls f2,f1,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fneg f12,f2
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmadds f1,f9,f13,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f13,f0,f8,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fadds f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f8,-112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f7,-108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f6,-104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbe0
	ctx.lr = 0x8223595C;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82235968"))) PPC_WEAK_FUNC(sub_82235968);
PPC_FUNC_IMPL(__imp__sub_82235968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82235970;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bb90
	ctx.lr = 0x82235978;
	__savefpr_22(ctx, base);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r6,r1,-224
	ctx.r6.s64 = ctx.r1.s64 + -224;
	// ld r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// lfs f11,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r29.u64);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f31,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// std r30,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r30.u64);
	// lfs f29,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lfs f12,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f27,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f28,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f11
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// lfs f13,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f26,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f27,f11
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f28,f28,f11
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// lfs f30,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lfs f31,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f10,-224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// lfs f10,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// stfs f8,-216(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f8,f26,f10
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// lfs f29,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f9,-220(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// lfs f9,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f30,f10
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f28,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// fmuls f4,f29,f9
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f29,f28,f9
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// fadds f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fadds f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fadds f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f8,-220(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f4,f2,f29
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// lfs f8,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// stfs f4,-216(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// stfs f1,-224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f6,f7
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// lfs f6,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// lfs f30,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f28,f6
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// lfs f29,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f6,f30
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f29,f29,f6
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r8,r1,-224
	ctx.r8.s64 = ctx.r1.s64 + -224;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// fadds f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// li r5,6
	ctx.r5.s64 = 6;
	// fadds f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fadds f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f2,f5,f28
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// stfs f2,-216(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f3,f3,f29
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// stfs f3,-220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// stfs f4,-224(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// std r3,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r3.u64);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82235B6C:
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82235b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82235B6C;
	// lfs f5,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f27,f12,f5
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f25,f0,f4
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f24,f13,f4
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f2,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f26,f10,f5
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f1,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfs f30,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f29,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f23,f11,f3
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// lfs f31,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f22,f9,f3
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// lfs f28,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-224
	ctx.r7.s64 = ctx.r1.s64 + -224;
	// fadds f27,f25,f27
	ctx.f27.f64 = double(float(ctx.f25.f64 + ctx.f27.f64));
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// fmuls f25,f9,f31
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// fadds f26,f24,f26
	ctx.f26.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// li r3,6
	ctx.r3.s64 = 6;
	// fmuls f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f4,f27,f23
	ctx.f4.f64 = double(float(ctx.f27.f64 + ctx.f23.f64));
	// stfs f4,-224(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f27,f13,f1
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fadds f4,f26,f22
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f22.f64));
	// stfs f4,-220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f4,f10,f2
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fadds f3,f5,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f3,-216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f5,f12,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f3,f7,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f2,f0,f1
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// fmuls f26,f11,f31
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f8,f8,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f31,f6,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f4,f27,f4
	ctx.f4.f64 = double(float(ctx.f27.f64 + ctx.f4.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmuls f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f2,f5,f26
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f26.f64));
	// stfs f2,-224(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fadds f5,f3,f31
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// stfs f5,-216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f1,f4,f25
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f25.f64));
	// stfs f1,-220(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fadds f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// fadds f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// stfs f4,-224(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// stfs f3,-220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// stfs f2,-216(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82235CD0:
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82235cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82235CD0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbdc
	ctx.lr = 0x82235CEC;
	__restfpr_22(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82235CF0"))) PPC_WEAK_FUNC(sub_82235CF0);
PPC_FUNC_IMPL(__imp__sub_82235CF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,605(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 605);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82235d28
	if (ctx.cr6.eq) goto loc_82235D28;
	// addi r11,r3,528
	ctx.r11.s64 = ctx.r3.s64 + 528;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82235D0C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82235d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82235D0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82235D28:
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82235D30:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82235d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82235D30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82235D4C"))) PPC_WEAK_FUNC(sub_82235D4C);
PPC_FUNC_IMPL(__imp__sub_82235D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82235D50"))) PPC_WEAK_FUNC(sub_82235D50);
PPC_FUNC_IMPL(__imp__sub_82235D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82235D58;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bba0
	ctx.lr = 0x82235D60;
	__savefpr_26(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f11,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f31,f12,f9
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f30,f0,f8
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f29,f13,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f28,f12,f6
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsel f11,f2,f11,f0
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f11,-144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fsel f10,f1,f10,f13
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// stfs f10,-140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fsel f9,f31,f9,f12
	ctx.f9.f64 = ctx.f31.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// stfs f9,-136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsel f0,f30,f0,f8
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsel f13,f29,f13,f7
	ctx.f13.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsel f12,f28,f12,f6
	ctx.f12.f64 = ctx.f28.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fsubs f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fsubs f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// fsubs f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// fsel f11,f8,f5,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f5.f64 : ctx.f11.f64;
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsel f10,f7,f4,f10
	ctx.f10.f64 = ctx.f7.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsel f9,f6,f3,f9
	ctx.f9.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f9.f64;
	// stfs f9,-104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fmr f7,f4
	ctx.f7.f64 = ctx.f4.f64;
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// lfs f3,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// fsubs f30,f0,f8
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f29,f13,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f28,f12,f6
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsel f0,f30,f0,f8
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsel f13,f29,f13,f7
	ctx.f13.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fsel f12,f28,f12,f6
	ctx.f12.f64 = ctx.f28.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fsubs f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fsubs f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsubs f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsubs f30,f0,f2
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fsubs f29,f13,f1
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// fsel f11,f8,f5,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f5.f64 : ctx.f11.f64;
	// lfs f8,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f12,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsel f10,f7,f4,f10
	ctx.f10.f64 = ctx.f7.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// lfs f7,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fsel f9,f6,f3,f9
	ctx.f9.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f9.f64;
	// lfs f6,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// fsel f0,f30,f0,f2
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsel f13,f29,f13,f1
	ctx.f13.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// stfs f9,-104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// fsubs f30,f11,f8
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f2,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fsel f12,f5,f12,f31
	ctx.f12.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fsubs f29,f10,f7
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsubs f28,f9,f6
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// lfs f1,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// fsubs f26,f13,f4
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f31,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// fsel f11,f30,f8,f11
	ctx.f11.f64 = ctx.f30.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f27,f0,f5
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// fsel f10,f29,f7,f10
	ctx.f10.f64 = ctx.f29.f64 >= 0.0 ? ctx.f7.f64 : ctx.f10.f64;
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f9,f28,f6,f9
	ctx.f9.f64 = ctx.f28.f64 >= 0.0 ? ctx.f6.f64 : ctx.f9.f64;
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fsel f13,f26,f13,f4
	ctx.f13.f64 = ctx.f26.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsubs f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// fsel f12,f8,f12,f3
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fsel f0,f27,f0,f5
	ctx.f0.f64 = ctx.f27.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsubs f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fsubs f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// fsel f11,f7,f2,f11
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f2.f64 : ctx.f11.f64;
	// fsel f10,f6,f1,f10
	ctx.f10.f64 = ctx.f6.f64 >= 0.0 ? ctx.f1.f64 : ctx.f10.f64;
	// fsel f9,f5,f31,f9
	ctx.f9.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fmr f8,f2
	ctx.f8.f64 = ctx.f2.f64;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// ld r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f5,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f4,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// fsubs f30,f0,f8
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r29.u64);
	// fsubs f29,f13,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// fsubs f28,f12,f6
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// addi r30,r1,-112
	ctx.r30.s64 = ctx.r1.s64 + -112;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// fsel f0,f30,f0,f8
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsel f13,f29,f13,f7
	ctx.f13.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f12,f28,f12,f6
	ctx.f12.f64 = ctx.f28.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsubs f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fsubs f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fsubs f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// fsubs f30,f0,f2
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsubs f29,f13,f1
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsel f11,f8,f5,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f5.f64 : ctx.f11.f64;
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsel f10,f7,f4,f10
	ctx.f10.f64 = ctx.f7.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f9,f6,f3,f9
	ctx.f9.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f9.f64;
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fsel f8,f30,f0,f2
	ctx.f8.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// stfs f8,-112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsel f7,f29,f13,f1
	ctx.f7.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// fsel f6,f28,f12,f31
	ctx.f6.f64 = ctx.f28.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// stfs f7,-108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f6,-104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lfs f13,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// std r4,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r4.u64);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// fmr f3,f12
	ctx.f3.f64 = ctx.f12.f64;
	// fsubs f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f31,f9,f12
	ctx.f31.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f30,f8,f5
	ctx.f30.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f29,f7,f4
	ctx.f29.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fsubs f28,f6,f3
	ctx.f28.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// fsel f0,f2,f0,f11
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsel f13,f1,f13,f10
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f12,f31,f12,f9
	ctx.f12.f64 = ctx.f31.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsel f11,f30,f8,f5
	ctx.f11.f64 = ctx.f30.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsel f10,f29,f7,f4
	ctx.f10.f64 = ctx.f29.f64 >= 0.0 ? ctx.f7.f64 : ctx.f4.f64;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsel f9,f28,f6,f3
	ctx.f9.f64 = ctx.f28.f64 >= 0.0 ? ctx.f6.f64 : ctx.f3.f64;
	// stfs f9,-104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// bne cr6,0x822365f0
	if (!ctx.cr6.eq) goto loc_822365F0;
	// lfs f8,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lfs f7,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f30,f0,f8
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f29,f13,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f6,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f28,f12,f6
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f2,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// lfs f1,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// lfs f31,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// fsel f0,f30,f8,f0
	ctx.f0.f64 = ctx.f30.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsel f13,f29,f7,f13
	ctx.f13.f64 = ctx.f29.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f12,f28,f6,f12
	ctx.f12.f64 = ctx.f28.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsubs f8,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsubs f27,f11,f5
	ctx.f27.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f26,f10,f4
	ctx.f26.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fsubs f7,f0,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// fsubs f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsel f9,f8,f9,f3
	ctx.f9.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f3.f64;
	// stfs f9,-104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fsel f11,f27,f11,f5
	ctx.f11.f64 = ctx.f27.f64 >= 0.0 ? ctx.f11.f64 : ctx.f5.f64;
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsel f10,f26,f10,f4
	ctx.f10.f64 = ctx.f26.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fmr f8,f2
	ctx.f8.f64 = ctx.f2.f64;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fsubs f5,f12,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f4,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fsel f0,f7,f2,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsel f13,f6,f1,f13
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fsubs f30,f11,f8
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsel f12,f5,f31,f12
	ctx.f12.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfs f5,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// fsubs f29,f10,f7
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f28,f9,f6
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// std r6,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// fsel f11,f30,f11,f8
	ctx.f11.f64 = ctx.f30.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// fsubs f8,f0,f5
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsel f10,f29,f10,f7
	ctx.f10.f64 = ctx.f29.f64 >= 0.0 ? ctx.f10.f64 : ctx.f7.f64;
	// fsel f9,f28,f9,f6
	ctx.f9.f64 = ctx.f28.f64 >= 0.0 ? ctx.f9.f64 : ctx.f6.f64;
	// fsubs f7,f13,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f29,f10,f1
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f28,f9,f31
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f13,f7,f4,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsel f12,f6,f3,f12
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f12.f64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsubs f30,f11,f2
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f7,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// fsel f0,f8,f5,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f5.f64 : ctx.f0.f64;
	// lfs f6,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f8,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fsel f10,f29,f10,f1
	ctx.f10.f64 = ctx.f29.f64 >= 0.0 ? ctx.f10.f64 : ctx.f1.f64;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fsel f9,f28,f9,f31
	ctx.f9.f64 = ctx.f28.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f9,-104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fsubs f31,f12,f6
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsel f11,f30,f11,f2
	ctx.f11.f64 = ctx.f30.f64 >= 0.0 ? ctx.f11.f64 : ctx.f2.f64;
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsubs f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// fsubs f30,f9,f3
	ctx.f30.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fsel f13,f1,f7,f13
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// lfs f7,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// fsel f12,f31,f6,f12
	ctx.f12.f64 = ctx.f31.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// fsubs f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// fsubs f31,f10,f4
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsel f0,f2,f8,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f8,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsel f9,f30,f9,f3
	ctx.f9.f64 = ctx.f30.f64 >= 0.0 ? ctx.f9.f64 : ctx.f3.f64;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// fsubs f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// fsel f11,f1,f11,f5
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f5.f64;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fsel f10,f31,f10,f4
	ctx.f10.f64 = ctx.f31.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// fsubs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// fsel f12,f3,f6,f12
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// fsel f0,f5,f8,f0
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsel f13,f4,f7,f13
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// fsubs f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsel f11,f1,f11,f2
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f2.f64;
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f2,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// fsel f10,f6,f10,f8
	ctx.f10.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f8.f64;
	// lfs f8,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// fsel f9,f5,f9,f7
	ctx.f9.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f7.f64;
	// lfs f6,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f7,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsubs f30,f12,f6
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f31,f13,f7
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fsel f0,f1,f8,f0
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f27,f9,f3
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// lfs f8,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f11,f5
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fsubs f28,f10,f4
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsel f12,f30,f6,f12
	ctx.f12.f64 = ctx.f30.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsel f13,f31,f7,f13
	ctx.f13.f64 = ctx.f31.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsubs f6,f0,f2
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsel f9,f27,f9,f3
	ctx.f9.f64 = ctx.f27.f64 >= 0.0 ? ctx.f9.f64 : ctx.f3.f64;
	// stfs f9,-104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fsel f11,f29,f11,f5
	ctx.f11.f64 = ctx.f29.f64 >= 0.0 ? ctx.f11.f64 : ctx.f5.f64;
	// stfs f11,-112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsel f10,f28,f10,f4
	ctx.f10.f64 = ctx.f28.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// stfs f10,-108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fsubs f3,f13,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// fsel f0,f6,f2,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsubs f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f1,f11,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fsubs f31,f10,f5
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fsel f13,f3,f8,f13
	ctx.f13.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f12,f2,f7,f12
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f7.f64 : ctx.f12.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f8,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f7,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// fsubs f30,f9,f4
	ctx.f30.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// fsel f11,f1,f11,f6
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f6.f64;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fsel f10,f31,f10,f5
	ctx.f10.f64 = ctx.f31.f64 >= 0.0 ? ctx.f10.f64 : ctx.f5.f64;
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f9,f30,f9,f4
	ctx.f9.f64 = ctx.f30.f64 >= 0.0 ? ctx.f9.f64 : ctx.f4.f64;
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsubs f4,f12,f3
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsubs f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsel f0,f6,f8,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsel f13,f5,f7,f13
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// fsel f12,f4,f3,f12
	ctx.f12.f64 = ctx.f4.f64 >= 0.0 ? ctx.f3.f64 : ctx.f12.f64;
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fsel f11,f1,f11,f2
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f2.f64;
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f0,f12,f10,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsel f13,f11,f9,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
loc_822365F0:
	// lfs f10,-140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// fsubs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// addi r8,r3,256
	ctx.r8.s64 = ctx.r3.s64 + 256;
	// lfs f0,25556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,272
	ctx.r9.s64 = ctx.r3.s64 + 272;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,244(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fadds f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f9,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,248(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f10,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmadds f6,f11,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fsqrts f11,f5
	ctx.f11.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f11,252(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbec
	ctx.lr = 0x82236698;
	__restfpr_26(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223669C"))) PPC_WEAK_FUNC(sub_8223669C);
PPC_FUNC_IMPL(__imp__sub_8223669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822366A0"))) PPC_WEAK_FUNC(sub_822366A0);
PPC_FUNC_IMPL(__imp__sub_822366A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x822366A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r27,r11,29312
	ctx.r27.s64 = ctx.r11.s64 + 29312;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r28,r11,25184
	ctx.r28.s64 = ctx.r11.s64 + 25184;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r25,8
	ctx.r25.s64 = 8;
	// addi r29,r11,21728
	ctx.r29.s64 = ctx.r11.s64 + 21728;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r26,6
	ctx.r26.s64 = 6;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r24,12
	ctx.r24.s64 = 12;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r22,3
	ctx.r22.s64 = 3;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// li r20,4
	ctx.r20.s64 = 4;
	// li r19,5
	ctx.r19.s64 = 5;
	// li r18,7
	ctx.r18.s64 = 7;
	// b 0x82236708
	goto loc_82236708;
loc_82236704:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82236708:
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x822d5040
	ctx.lr = 0x82236718;
	sub_822D5040(ctx, base);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x822d5040
	ctx.lr = 0x82236728;
	sub_822D5040(ctx, base);
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x822d5040
	ctx.lr = 0x82236738;
	sub_822D5040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82236740;
	sub_822D5870(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82236748;
	sub_822D5870(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d5870
	ctx.lr = 0x82236750;
	sub_822D5870(ctx, base);
	// addi r10,r29,25
	ctx.r10.s64 = ctx.r29.s64 + 25;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r18,24
	ctx.r9.u64 = ctx.r18.u32 & 0xFF;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
	// stb r25,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r25.u8);
	// stb r24,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r24.u8);
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// stb r17,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r17.u8);
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r22,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r22.u8);
	// stb r21,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r21.u8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r20,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r20.u8);
	// stb r17,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r17.u8);
	// stb r21,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r21.u8);
	// stb r19,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r19.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r20,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r20.u8);
	// li r20,4
	ctx.r20.s64 = 4;
	// stb r26,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r26.u8);
	// stb r23,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r23.u8);
	// stb r17,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r17.u8);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r21,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r21.u8);
	// li r21,1
	ctx.r21.s64 = 1;
	// stb r22,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r22.u8);
	// stb r19,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r19.u8);
	// stb r18,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r18.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r23,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r23.u8);
	// li r23,2
	ctx.r23.s64 = 2;
	// stb r26,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r26.u8);
	// li r26,6
	ctx.r26.s64 = 6;
	// stb r22,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r22.u8);
	// li r22,3
	ctx.r22.s64 = 3;
	// stb r18,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r18.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// stb r19,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r19.u8);
	// li r19,5
	ctx.r19.s64 = 5;
	// stb r26,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r26.u8);
	// stb r20,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r20.u8);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r17,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r17.u8);
	// stb r21,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r21.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r19,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r19.u8);
	// stb r20,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r20.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r20,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r20.u8);
	// stb r17,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r17.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r19,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r19.u8);
	// stb r21,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r21.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r23,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r23.u8);
	// stb r22,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r22.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// li r18,7
	ctx.r18.s64 = 7;
	// rotlwi r31,r27,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// stb r18,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r18.u8);
	// stb r26,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r26.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r26,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r26.u8);
	// stb r23,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r23.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r18,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r18.u8);
	// stb r22,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r22.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r23,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r23.u8);
	// stb r17,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r17.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r22,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r22.u8);
	// stb r21,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r21.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r26,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r26.u8);
	// stb r20,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r20.u8);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r18,22(r8)
	PPC_STORE_U8(ctx.r8.u32 + 22, ctx.r18.u8);
	// stb r19,23(r8)
	PPC_STORE_U8(ctx.r8.u32 + 23, ctx.r19.u8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_822368B4:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r7,-4
	ctx.r4.s64 = ctx.r7.s64 + -4;
	// lbz r30,3(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r29,2(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r28,1(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r30,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r30.u8);
	// stb r29,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r29.u8);
	// stb r28,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r28.u8);
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r30,3(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r29,2(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r28,1(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r30,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r30.u8);
	// stb r29,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r29.u8);
	// stb r28,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r28.u8);
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r30,7(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r29,6(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r28,5(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// stb r30,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r30.u8);
	// stb r29,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r29.u8);
	// stb r28,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r28.u8);
	// stb r6,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r6.u8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r30,7(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r29,6(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r28,5(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// stb r30,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r30.u8);
	// stb r29,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r29.u8);
	// stb r28,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r28.u8);
	// stb r6,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r6.u8);
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbzx r28,r30,r4
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbz r30,11(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// lbz r29,10(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// lbz r5,9(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// stb r28,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r28.u8);
	// stb r30,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r30.u8);
	// stb r29,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r29.u8);
	// stb r5,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// lbz r30,11(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 11);
	// lbz r29,10(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 10);
	// lbz r28,9(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + 9);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stb r5,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r5.u8);
	// stb r29,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r29.u8);
	// stb r28,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r28.u8);
	// stb r30,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r30.u8);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r29,r4,r7
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r4,15(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15);
	// lbz r30,14(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 14);
	// lbz r5,13(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// stb r29,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r29.u8);
	// stb r4,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r4.u8);
	// stb r30,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r30.u8);
	// stb r5,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lbzx r30,r4,r7
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// lbz r7,15(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15);
	// lbz r4,14(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 14);
	// lbz r5,13(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// stb r30,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r30.u8);
	// stb r7,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r7.u8);
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// stb r5,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// blt cr6,0x822368b4
	if (ctx.cr6.lt) goto loc_822368B4;
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// addi r6,r27,12
	ctx.r6.s64 = ctx.r27.s64 + 12;
loc_82236A5C:
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lwzx r7,r10,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// lbz r31,1(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r31.u8);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r31,1(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r31.u8);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r31,3(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r31,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r31.u8);
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r31,3(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r31,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r31.u8);
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r31,r4,r11
	ctx.r31.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lbzx r30,r4,r7
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r31,r4,r11
	ctx.r31.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lbzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lbz r7,7(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r7,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r7.u8);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// stb r8,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// blt cr6,0x82236a5c
	if (ctx.cr6.lt) goto loc_82236A5C;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r24,12
	ctx.r24.s64 = 12;
	// addi r30,r10,832
	ctx.r30.s64 = ctx.r10.s64 + 832;
	// addi r6,r28,24
	ctx.r6.s64 = ctx.r28.s64 + 24;
	// addi r5,r28,25
	ctx.r5.s64 = ctx.r28.s64 + 25;
	// addi r4,r28,26
	ctx.r4.s64 = ctx.r28.s64 + 26;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// addi r11,r27,25
	ctx.r11.s64 = ctx.r27.s64 + 25;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r27,26
	ctx.r9.s64 = ctx.r27.s64 + 26;
	// stbx r25,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r25.u8);
	// stbx r26,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r26.u8);
	// cmpwi cr6,r30,1664
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1664, ctx.xer);
	// stbx r24,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r24.u8);
	// stbx r25,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r25.u8);
	// stbx r26,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u8);
	// stbx r24,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r24.u8);
	// blt cr6,0x82236704
	if (ctx.cr6.lt) goto loc_82236704;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82236BC4"))) PPC_WEAK_FUNC(sub_82236BC4);
PPC_FUNC_IMPL(__imp__sub_82236BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236BC8"))) PPC_WEAK_FUNC(sub_82236BC8);
PPC_FUNC_IMPL(__imp__sub_82236BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82236BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// mulli r31,r3,832
	ctx.r31.s64 = ctx.r3.s64 * 832;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,21728
	ctx.r11.s64 = ctx.r11.s64 + 21728;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r9,48
	ctx.r5.s64 = ctx.r9.s64 + 48;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x822d7778
	ctx.lr = 0x82236CC4;
	sub_822D7778(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,25184
	ctx.r11.s64 = ctx.r11.s64 + 25184;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r9,48
	ctx.r6.s64 = ctx.r9.s64 + 48;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r9,112
	ctx.r5.s64 = ctx.r9.s64 + 112;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x822d7778
	ctx.lr = 0x82236D90;
	sub_822D7778(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d7778
	ctx.lr = 0x82236D9C;
	sub_822D7778(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,29312
	ctx.r10.s64 = ctx.r11.s64 + 29312;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r11,96
	ctx.r6.s64 = ctx.r11.s64 + 96;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r9,160
	ctx.r8.s64 = ctx.r9.s64 + 160;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r9,176
	ctx.r5.s64 = ctx.r9.s64 + 176;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r9,192
	ctx.r6.s64 = ctx.r9.s64 + 192;
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,208
	ctx.r9.s64 = ctx.r10.s64 + 208;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// bl 0x822d7778
	ctx.lr = 0x82236E84;
	sub_822D7778(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82236E8C"))) PPC_WEAK_FUNC(sub_82236E8C);
PPC_FUNC_IMPL(__imp__sub_82236E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236E90"))) PPC_WEAK_FUNC(sub_82236E90);
PPC_FUNC_IMPL(__imp__sub_82236E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82236ef4
	if (ctx.cr6.eq) goto loc_82236EF4;
	// lwz r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_82236EB8:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r30,r1,-80
	ctx.r30.s64 = ctx.r1.s64 + -80;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f12,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfsx f6,r5,r30
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, temp.u32);
	// blt cr6,0x82236eb8
	if (ctx.cr6.lt) goto loc_82236EB8;
loc_82236EF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,26(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 26);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82236fd4
	if (ctx.cr6.eq) goto loc_82236FD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
loc_82236F14:
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lhzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r9,-96(r1)
	PPC_STORE_U16(ctx.r1.u32 + -96, ctx.r9.u16);
	// lbz r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -96);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f5,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// lbz r10,-95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -95);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bso cr6,0x82236f44
	if (ctx.cr6.so) goto loc_82236F44;
	// bge cr6,0x82236f5c
	if (!ctx.cr6.lt) goto loc_82236F5C;
loc_82236F44:
	// rlwinm r5,r10,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// lfsx f4,r5,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// blt cr6,0x82236fc0
	if (ctx.cr6.lt) goto loc_82236FC0;
	// bso cr6,0x82236fc0
	if (ctx.cr6.so) goto loc_82236FC0;
loc_82236F5C:
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82236FC0:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// lbz r5,26(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 26);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82236f14
	if (ctx.cr6.lt) goto loc_82236F14;
loc_82236FD4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236FE0"))) PPC_WEAK_FUNC(sub_82236FE0);
PPC_FUNC_IMPL(__imp__sub_82236FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ble cr6,0x822370c8
	if (!ctx.cr6.gt) goto loc_822370C8;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
loc_8223701C:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f11,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lfs f8,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f31,f6,f12
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsel f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f11,-48(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fsel f10,f4,f13,f10
	ctx.f10.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f10,-44(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fsel f9,f3,f12,f9
	ctx.f9.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f9,-40(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fsel f0,f2,f8,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fsel f13,f1,f7,f13
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fsel f12,f31,f6,f12
	ctx.f12.f64 = ctx.f31.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// bne cr6,0x8223701c
	if (!ctx.cr6.eq) goto loc_8223701C;
loc_822370C8:
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f7,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f9,-28(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f6,-24(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237140"))) PPC_WEAK_FUNC(sub_82237140);
PPC_FUNC_IMPL(__imp__sub_82237140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// ld r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// ble cr6,0x82237230
	if (!ctx.cr6.gt) goto loc_82237230;
	// addi r11,r6,24
	ctx.r11.s64 = ctx.r6.s64 + 24;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
loc_82237184:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f11,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// lfs f8,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f31,f6,f12
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsel f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f11,-64(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fsel f10,f4,f13,f10
	ctx.f10.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f10,-60(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fsel f9,f3,f12,f9
	ctx.f9.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fsel f0,f2,f8,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fsel f13,f1,f7,f13
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fsel f12,f31,f6,f12
	ctx.f12.f64 = ctx.f31.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r30,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r30.u64);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// bne cr6,0x82237184
	if (!ctx.cr6.eq) goto loc_82237184;
loc_82237230:
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// lfs f0,-96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfs f13,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f11,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f8,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f7,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f7.f64 = double(temp.f32);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f9,-44(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f6,-40(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// std r6,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r6.u64);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822372D8"))) PPC_WEAK_FUNC(sub_822372D8);
PPC_FUNC_IMPL(__imp__sub_822372D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,13360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,-60(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,-56(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lbz r4,25(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f4,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f3,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f12,f4
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f5,-80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f6,-76(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f7,-72(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ble cr6,0x82237460
	if (!ctx.cr6.gt) goto loc_82237460;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f3,-27164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27164);
	ctx.f3.f64 = double(temp.f32);
loc_8223736C:
	// lfs f9,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f0,f6,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f4,f8,f5,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f4,f10
	ctx.cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// blt cr6,0x82237450
	if (ctx.cr6.lt) goto loc_82237450;
	// bso cr6,0x82237450
	if (ctx.cr6.so) goto loc_82237450;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r31,1
	ctx.r31.s64 = 1;
	// fmadds f9,f11,f9,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f0,f13,f8,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bso cr6,0x822373b0
	if (ctx.cr6.so) goto loc_822373B0;
	// bge cr6,0x82237490
	if (!ctx.cr6.lt) goto loc_82237490;
loc_822373B0:
	// fsubs f9,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f3
	ctx.cr6.compare(ctx.f8.f64, ctx.f3.f64);
	// ble cr6,0x82237450
	if (!ctx.cr6.gt) goto loc_82237450;
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// fsubs f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f10,-48(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f5,-40(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,-44(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// fdivs f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// lfs f4,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fadds f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f10,-28(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-24(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f7,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f5.f64 = double(temp.f32);
loc_82237450:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8223736c
	if (ctx.cr6.lt) goto loc_8223736C;
loc_82237460:
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82237490
	if (ctx.cr6.eq) goto loc_82237490;
	// fsubs f12,f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsqrts f1,f6
	ctx.f1.f64 = double(float(sqrt(ctx.f6.f64)));
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82237490:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822374A0"))) PPC_WEAK_FUNC(sub_822374A0);
PPC_FUNC_IMPL(__imp__sub_822374A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822374A8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bb70
	ctx.lr = 0x822374B0;
	__savefpr_14(ctx, base);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f12,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f13,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f0,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fadds f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f2,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,-284(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x8223780c
	if (!ctx.cr6.lt) goto loc_8223780C;
	// fmuls f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fmadds f4,f0,f6,f1
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f1.f64));
	// lfs f1,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fmadds f8,f12,f5,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsubs f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fdivs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f3.f64));
	// fcmpu cr6,f8,f2
	ctx.cr6.compare(ctx.f8.f64, ctx.f2.f64);
	// blt cr6,0x8223780c
	if (ctx.cr6.lt) goto loc_8223780C;
	// bso cr6,0x8223780c
	if (ctx.cr6.so) goto loc_8223780C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// bgt cr6,0x8223780c
	if (ctx.cr6.gt) goto loc_8223780C;
	// bso cr6,0x8223780c
	if (ctx.cr6.so) goto loc_8223780C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// addi r8,r1,-224
	ctx.r8.s64 = ctx.r1.s64 + -224;
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// addi r7,r1,-208
	ctx.r7.s64 = ctx.r1.s64 + -208;
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r3,r4,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// lbz r29,2(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r4,r31,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r31.u32, 4);
	// lbz r31,3(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rotlwi r3,r29,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r29.u32, 4);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// rotlwi r31,r31,4
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 4);
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stfs f11,-256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f10,-252(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// stfs f9,-248(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// ld r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r29.u64);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r3,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r3.u64);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// lfs f7,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f31,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f30,f1,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f27,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f28,f29,f1
	ctx.f28.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// lfs f25,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f26,f27,f7
	ctx.f26.f64 = double(float(ctx.f27.f64 - ctx.f7.f64));
	// lfs f23,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f24,f25,f4
	ctx.f24.f64 = double(float(ctx.f25.f64 - ctx.f4.f64));
	// lfs f21,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f21.f64 = double(temp.f32);
	// fsubs f22,f23,f29
	ctx.f22.f64 = double(float(ctx.f23.f64 - ctx.f29.f64));
	// lfs f19,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f17,f31,f23
	ctx.f17.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// fsubs f16,f6,f21
	ctx.f16.f64 = double(float(ctx.f6.f64 - ctx.f21.f64));
	// fsubs f15,f3,f19
	ctx.f15.f64 = double(float(ctx.f3.f64 - ctx.f19.f64));
	// fmuls f14,f5,f0
	ctx.f14.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f20,f21,f27
	ctx.f20.f64 = double(float(ctx.f21.f64 - ctx.f27.f64));
	// fsubs f18,f19,f25
	ctx.f18.f64 = double(float(ctx.f19.f64 - ctx.f25.f64));
	// fsubs f31,f11,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsubs f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fsubs f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fsubs f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fsubs f23,f11,f23
	ctx.f23.f64 = double(float(ctx.f11.f64 - ctx.f23.f64));
	// fsubs f11,f10,f21
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f21.f64));
	// stfs f11,-268(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fsubs f27,f10,f27
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fsubs f10,f9,f19
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f19.f64));
	// stfs f10,-264(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fsubs f25,f9,f25
	ctx.f25.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmsubs f11,f2,f13,f14
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 - ctx.f14.f64));
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f14,f15,f12
	ctx.f14.f64 = double(float(ctx.f15.f64 * ctx.f12.f64));
	// fmuls f21,f26,f0
	ctx.f21.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f19,f16,f0
	ctx.f19.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// fmsubs f10,f5,f12,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmuls f5,f24,f12
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fmuls f9,f10,f3
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmsubs f10,f0,f30,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f2.f64));
	// fmuls f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f2,f20,f0
	ctx.f2.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// fmuls f30,f13,f22
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmadds f11,f11,f31,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmuls f9,f13,f17
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// stfs f9,-288(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmuls f31,f18,f12
	ctx.f31.f64 = double(float(ctx.f18.f64 * ctx.f12.f64));
	// fmsubs f9,f26,f12,f3
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 - ctx.f3.f64));
	// fmsubs f3,f20,f12,f30
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 - ctx.f30.f64));
	// fmadds f11,f10,f6,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f11,-280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmsubs f10,f0,f28,f5
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f5.f64));
	// fmsubs f5,f0,f22,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 - ctx.f31.f64));
	// fmsubs f6,f18,f13,f2
	ctx.f6.f64 = double(float(ctx.f18.f64 * ctx.f13.f64 - ctx.f2.f64));
	// fmsubs f2,f0,f17,f14
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f17.f64 - ctx.f14.f64));
	// lfs f0,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f24,f13,f21
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 - ctx.f21.f64));
	// fmsubs f13,f15,f13,f19
	ctx.f13.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 - ctx.f19.f64));
	// lfs f31,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f31.f64 = double(temp.f32);
	// fmsubs f12,f16,f12,f31
	ctx.f12.f64 = double(float(ctx.f16.f64 * ctx.f12.f64 - ctx.f31.f64));
	// lfs f31,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8223774c
	if (ctx.cr6.lt) goto loc_8223774C;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82237750
	if (!ctx.cr6.so) goto loc_82237750;
loc_8223774C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82237750:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82237778
	if (ctx.cr6.eq) goto loc_82237778;
	// fmuls f9,f9,f4
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f4,f11,f1,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f1,f10,f7,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82237778
	if (ctx.cr6.lt) goto loc_82237778;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x8223777c
	if (!ctx.cr6.so) goto loc_8223777C;
loc_82237778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223777C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822377a4
	if (ctx.cr6.eq) goto loc_822377A4;
	// fmuls f11,f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// fmadds f10,f6,f29,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fmadds f9,f5,f27,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f27.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x822377a4
	if (ctx.cr6.lt) goto loc_822377A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x822377a8
	if (!ctx.cr6.so) goto loc_822377A8;
loc_822377A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822377A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822377d8
	if (ctx.cr6.eq) goto loc_822377D8;
	// lfs f7,-268(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfs f5,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f12,f5,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f3,f13,f23,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f23.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x822377d8
	if (ctx.cr6.lt) goto loc_822377D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// bns cr6,0x822377dc
	if (!ctx.cr6.so) goto loc_822377DC;
loc_822377D8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822377DC:
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// stfs f8,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stb r5,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r5.u8);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbbc
	ctx.lr = 0x82237808;
	__restfpr_14(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8223780C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbbc
	ctx.lr = 0x82237818;
	__restfpr_14(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223781C"))) PPC_WEAK_FUNC(sub_8223781C);
PPC_FUNC_IMPL(__imp__sub_8223781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237820"))) PPC_WEAK_FUNC(sub_82237820);
PPC_FUNC_IMPL(__imp__sub_82237820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82237838
	if (!ctx.cr6.eq) goto loc_82237838;
	// blr 
	return;
loc_82237838:
	// lfs f5,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// beq cr6,0x8223799c
	if (ctx.cr6.eq) goto loc_8223799C;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
loc_8223785C:
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lfs f12,-60(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f12.f64 = double(temp.f32);
	// ld r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmuls f0,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f13,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f11.f64 = double(temp.f32);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f9,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f9,f5
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f8,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f13,f3,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f1,f8,f3,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f0,f11,f5,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f10,f6,f4,f1
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x822378c8
	if (ctx.cr6.gt) goto loc_822378C8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822378C8:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// li r7,0
	ctx.r7.s64 = 0;
	// bgt cr6,0x822378d8
	if (ctx.cr6.gt) goto loc_822378D8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_822378D8:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8223793c
	if (ctx.cr6.eq) goto loc_8223793C;
	// fsubs f1,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// fsubs f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// fsubs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// fsubs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fdivs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f10,-28(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,-24(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
loc_8223793C:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82237964
	if (!ctx.cr6.eq) goto loc_82237964;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
loc_82237964:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8223798c
	if (!ctx.cr6.eq) goto loc_8223798C;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
loc_8223798C:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8223785c
	if (!ctx.cr6.eq) goto loc_8223785C;
loc_8223799C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822379A4"))) PPC_WEAK_FUNC(sub_822379A4);
PPC_FUNC_IMPL(__imp__sub_822379A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822379A8"))) PPC_WEAK_FUNC(sub_822379A8);
PPC_FUNC_IMPL(__imp__sub_822379A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fdivs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fdivs f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82237a14
	if (!ctx.cr6.lt) goto loc_82237A14;
	// fsubs f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x82237a0c
	if (!ctx.cr6.lt) goto loc_82237A0C;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x82237a2c
	goto loc_82237A2C;
loc_82237A0C:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// b 0x82237a2c
	goto loc_82237A2C;
loc_82237A14:
	// fsubs f3,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bge cr6,0x82237a28
	if (!ctx.cr6.lt) goto loc_82237A28;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// b 0x82237a2c
	goto loc_82237A2C;
loc_82237A28:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_82237A2C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lfs f12,-15368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15368);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82237a68
	if (!ctx.cr6.lt) goto loc_82237A68;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82237a50
	if (!ctx.cr6.lt) goto loc_82237A50;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82237A50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,3260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82237A68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,3260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82237a8c
	if (!ctx.cr6.lt) goto loc_82237A8C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82237A8C:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

